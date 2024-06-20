// Copyright(c) 2020 to 2022 ZettaScale Technology and others
//
// This program and the accompanying materials are made available under the
// terms of the Eclipse Public License v. 2.0 which is available at
// http://www.eclipse.org/legal/epl-2.0, or the Eclipse Distribution License
// v. 1.0 which is available at
// http://www.eclipse.org/org/documents/edl-v10.php.
//
// SPDX-License-Identifier: EPL-2.0 OR BSD-3-Clause

#include "dds/ddsrt/static_assert.h"
#include "dds/ddsi/ddsi_protocol.h"
#include "dds/ddsi/ddsi_log.h"
#include "dds/ddsi/ddsi_domaingv.h"
#include "ddsi__radmin.h"
#include "ddsi__misc.h"
#include "ddsi__xmsg.h"
#include "ddsi__bitset.h"
#include "ddsi__acknack.h"
#include "ddsi__entity_index.h"
#include "ddsi__proxy_endpoint.h"
#include "ddsi__endpoint_match.h"
#include "ddsi__security_omg.h"
#include "ddsi__xqos.h"
#include "ddsi__xevent.h"

#define ACK_REASON_IN_FLAGS 0

static ddsi_seqno_t next_deliv_seq (const struct ddsi_proxy_writer *pwr, const ddsi_seqno_t next_seq)
{
  /* We want to determine next_deliv_seq, the next sequence number to
     be delivered to all in-sync readers, so that we can acknowledge
     what we have actually delivered.  This is different from next_seq
     tracks, which tracks the sequence number up to which all samples
     have been received.  The difference is the delivery queue.

     There is always but a single delivery queue, and hence delivery
     thread, associated with a single proxy writer; but the ACKs are
     always generated by another thread.  Therefore, updates to
     next_deliv_seq need only be atomic with respect to these reads.
     On all supported platforms we can atomically load and store 32
     bits without issue, and so we store just the low word of the
     sequence number.

     We know 1 <= next_deliv_seq AND next_seq - N <= next_deliv_seq <=
     next_seq for N << 2**32.  With n = next_seq, nd = next_deliv_seq,
     H the upper half and L the lower half:

       - H(nd) <= H(n) <= H(nd)+1         { n >= nd AND N << 2*32}
       - H(n) = H(nd)   => L(n) >= L(nd)  { n >= nd }
       - H(n) = H(nd)+1 => L(n) < L(nd)   { N << 2*32 }

     Therefore:

       L(n) < L(nd) <=> H(n) = H(nd+1)

     a.k.a.:

       nd = nd' - if nd' > nd then 2**32 else 0
         where nd' = 2**32 * H(n) + L(nd)

     By not locking next_deliv_seq, we may have nd a bit lower than it
     could be, but that only means we are acknowledging slightly less
     than we could; but that is perfectly acceptible.

     FIXME: next_seq - #dqueue could probably be used instead,
     provided #dqueue is decremented after delivery, rather than
     before delivery. */
  const uint32_t lw = ddsrt_atomic_ld32 (&pwr->next_deliv_seq_lowword);
  ddsi_seqno_t next_deliv_seq;
  next_deliv_seq = (next_seq & ~(uint64_t)UINT32_MAX) | lw;
  if (next_deliv_seq > next_seq)
    next_deliv_seq -= ((uint64_t) 1) << 32;
  assert (0 < next_deliv_seq && next_deliv_seq <= next_seq);
  return next_deliv_seq;
}

static void add_acknack_getsource (const struct ddsi_proxy_writer *pwr, const struct ddsi_pwr_rd_match *rwn, struct ddsi_reorder **reorder, ddsi_seqno_t *bitmap_base, int *notail)
{
  /* if in sync, look at proxy writer status, else look at proxy-writer--reader match status */
  if (rwn->in_sync == PRMSS_OUT_OF_SYNC || rwn->filtered)
  {
    *reorder = rwn->u.not_in_sync.reorder;
    *bitmap_base = ddsi_reorder_next_seq (*reorder);
    *notail = 0;
  }
  else
  {
    *reorder = pwr->reorder;
    if (!pwr->e.gv->config.late_ack_mode)
    {
      *bitmap_base = ddsi_reorder_next_seq (*reorder);
      *notail = 0;
    }
    else
    {
      *bitmap_base = next_deliv_seq (pwr, ddsi_reorder_next_seq (*reorder));
      *notail = ddsi_dqueue_is_full (pwr->dqueue);
    }
  }
}

static enum ddsi_reorder_nackmap_result add_acknack_makebitmaps (const struct ddsi_proxy_writer *pwr, const struct ddsi_pwr_rd_match *rwn, struct ddsi_add_acknack_info *info)
{
  struct ddsi_reorder *reorder;
  ddsi_seqno_t bitmap_base;
  int notail; /* notail = false: all known missing ones are nack'd */
  add_acknack_getsource (pwr, rwn, &reorder, &bitmap_base, &notail);

  /* Make bitmap; note that we've made sure to have room for the maximum bitmap size. */
  const ddsi_seqno_t last_seq = rwn->filtered ? rwn->last_seq : pwr->last_seq;
  const enum ddsi_reorder_nackmap_result nackmap_result = ddsi_reorder_nackmap (reorder, bitmap_base, last_seq, &info->acknack.set, info->acknack.bits, DDSI_SEQUENCE_NUMBER_SET_MAX_BITS, notail);
  if (nackmap_result != DDSI_REORDER_NACKMAP_NACK)
  {
    info->nackfrag.seq = 0;
    return nackmap_result;
  }

  /* Scan through bitmap, cutting it off at the first missing sample that the defragmenter
     knows about. Then note the sequence number & add a NACKFRAG for that sample */
  info->nackfrag.seq = 0;
  const ddsi_seqno_t base = ddsi_from_seqno (info->acknack.set.bitmap_base);
  const uint32_t numbits = info->acknack.set.numbits;
  for (uint32_t i = 0; i < numbits; i++)
  {
    if (!ddsi_bitset_isset (numbits, info->acknack.bits, i))
      continue;

    const ddsi_seqno_t seq = base + i;
    const uint32_t fragnum = (seq == pwr->last_seq) ? pwr->last_fragnum : UINT32_MAX;
    switch (ddsi_defrag_nackmap (pwr->defrag, seq, fragnum, &info->nackfrag.set, info->nackfrag.bits, DDSI_FRAGMENT_NUMBER_SET_MAX_BITS))
    {
      case DDSI_DEFRAG_NACKMAP_UNKNOWN_SAMPLE:
        break;
      case DDSI_DEFRAG_NACKMAP_ALL_ADVERTISED_FRAGMENTS_KNOWN:
        /* Cut the NACK short (or make it an ACK if this is the first sample), no NACKFRAG */
        info->nackfrag.seq = 0;
        info->acknack.set.numbits = i;
        return (i > 0) ? DDSI_REORDER_NACKMAP_NACK : DDSI_REORDER_NACKMAP_SUPPRESSED_NACK;
      case DDSI_DEFRAG_NACKMAP_FRAGMENTS_MISSING:
        /* Cut the NACK short, NACKFRAG */
        info->nackfrag.seq = seq;
        info->acknack.set.numbits = i;
        return DDSI_REORDER_NACKMAP_NACK;
    }
  }
  return DDSI_REORDER_NACKMAP_NACK;
}

static void add_NackFrag (struct ddsi_xmsg *msg, const struct ddsi_proxy_writer *pwr, const struct ddsi_pwr_rd_match *rwn, const struct ddsi_add_acknack_info *info)
{
  struct ddsi_xmsg_marker sm_marker;
  ddsi_rtps_nackfrag_t *nf;

  assert (info->nackfrag.set.numbits > 0 && info->nackfrag.set.numbits <= DDSI_FRAGMENT_NUMBER_SET_MAX_BITS);
  nf = ddsi_xmsg_append (msg, &sm_marker, DDSI_NACKFRAG_SIZE (info->nackfrag.set.numbits));

  ddsi_xmsg_submsg_init (msg, sm_marker, DDSI_RTPS_SMID_NACK_FRAG);
  nf->readerId = ddsi_hton_entityid (rwn->rd_guid.entityid);
  nf->writerId = ddsi_hton_entityid (pwr->e.guid.entityid);
  nf->writerSN = ddsi_to_seqno (info->nackfrag.seq);
#if ACK_REASON_IN_FLAGS
  nf->smhdr.flags |= info->flags;
#endif
  // We use 0-based fragment numbers, but externally have to provide 1-based fragment numbers */
  nf->fragmentNumberState.bitmap_base = info->nackfrag.set.bitmap_base + 1;
  nf->fragmentNumberState.numbits = info->nackfrag.set.numbits;
  memcpy (nf->bits, info->nackfrag.bits, DDSI_FRAGMENT_NUMBER_SET_BITS_SIZE (info->nackfrag.set.numbits));

  // Count field is at a variable offset ... silly DDSI spec
  ddsi_count_t * const countp =
    (ddsi_count_t *) ((char *) nf + offsetof (ddsi_rtps_nackfrag_t, bits) + DDSI_FRAGMENT_NUMBER_SET_BITS_SIZE (nf->fragmentNumberState.numbits));
  *countp = pwr->nackfragcount;

  ddsi_xmsg_submsg_setnext (msg, sm_marker);

  if (pwr->e.gv->logconfig.c.mask & DDS_LC_TRACE)
  {
    ETRACE (pwr, "nackfrag #%"PRIu32":%"PRIu64"/%"PRIu32"/%"PRIu32":",
            pwr->nackfragcount, ddsi_from_seqno (nf->writerSN),
            nf->fragmentNumberState.bitmap_base, nf->fragmentNumberState.numbits);
    for (uint32_t ui = 0; ui != nf->fragmentNumberState.numbits; ui++)
      ETRACE (pwr, "%c", ddsi_bitset_isset (nf->fragmentNumberState.numbits, nf->bits, ui) ? '1' : '0');
  }

  // Encode the sub-message when needed
  ddsi_security_encode_datareader_submsg (msg, sm_marker, pwr, &rwn->rd_guid);
}

static void add_acknack (struct ddsi_xmsg *msg, const struct ddsi_proxy_writer *pwr, const struct ddsi_pwr_rd_match *rwn, const struct ddsi_add_acknack_info *info)
{
  /* If pwr->have_seen_heartbeat == 0, no heartbeat has been received
     by this proxy writer yet, so we'll be sending a pre-emptive
     AckNack.  NACKing data now will most likely cause another NACK
     upon reception of the first heartbeat, and so cause the data to
     be resent twice. */
  ddsi_rtps_acknack_t *an;
  struct ddsi_xmsg_marker sm_marker;

  an = ddsi_xmsg_append (msg, &sm_marker, DDSI_ACKNACK_SIZE_MAX);
  ddsi_xmsg_submsg_init (msg, sm_marker, DDSI_RTPS_SMID_ACKNACK);
  an->readerId = ddsi_hton_entityid (rwn->rd_guid.entityid);
  an->writerId = ddsi_hton_entityid (pwr->e.guid.entityid);

  // set FINAL flag late, in case it is decided that the "response_required" flag
  // should be set depending on the exact AckNack/NackFrag generated
  an->smhdr.flags |= DDSI_ACKNACK_FLAG_FINAL;
#if ACK_REASON_IN_FLAGS
  an->smhdr.flags |= info->flags;
#endif
  an->readerSNState = info->acknack.set;
  memcpy (an->bits, info->acknack.bits, DDSI_SEQUENCE_NUMBER_SET_BITS_SIZE (an->readerSNState.numbits));

  // Count field is at a variable offset ... silly DDSI spec
  ddsi_count_t * const countp =
    (ddsi_count_t *) ((char *) an + offsetof (ddsi_rtps_acknack_t, bits) + DDSI_SEQUENCE_NUMBER_SET_BITS_SIZE (an->readerSNState.numbits));
  *countp = rwn->count;
  // Reset submessage size, now that we know the real size, and update the offset to the next submessage.
  ddsi_xmsg_shrink (msg, sm_marker, DDSI_ACKNACK_SIZE (an->readerSNState.numbits));
  ddsi_xmsg_submsg_setnext (msg, sm_marker);

  if (pwr->e.gv->logconfig.c.mask & DDS_LC_TRACE)
  {
    ETRACE (pwr, "acknack "PGUIDFMT" -> "PGUIDFMT": F#%"PRIu32":%"PRIu64"/%"PRIu32":",
            PGUID (rwn->rd_guid), PGUID (pwr->e.guid), rwn->count,
            ddsi_from_seqno (an->readerSNState.bitmap_base), an->readerSNState.numbits);
    for (uint32_t ui = 0; ui != an->readerSNState.numbits; ui++)
      ETRACE (pwr, "%c", ddsi_bitset_isset (an->readerSNState.numbits, an->bits, ui) ? '1' : '0');
  }

  // Encode the sub-message when needed
  ddsi_security_encode_datareader_submsg (msg, sm_marker, pwr, &rwn->rd_guid);
}

static enum ddsi_add_acknack_result get_acknack_info (const struct ddsi_proxy_writer *pwr, const struct ddsi_pwr_rd_match *rwn, struct ddsi_last_nack_summary *nack_summary, struct ddsi_add_acknack_info *info, bool ackdelay_passed, bool nackdelay_passed)
{
  /* If pwr->have_seen_heartbeat == 0, no heartbeat has been received
     by this proxy writer yet, so we'll be sending a pre-emptive
     AckNack.  NACKing data now will most likely cause another NACK
     upon reception of the first heartbeat, and so cause the data to
     be resent twice. */
  enum ddsi_add_acknack_result result = AANR_SILENT_ACK;

#if ACK_REASON_IN_FLAGS
  info->flags = 0;
#endif
  const enum ddsi_reorder_nackmap_result bitmap_result = add_acknack_makebitmaps (pwr, rwn, info);
  switch (bitmap_result)
  {
    case DDSI_REORDER_NACKMAP_ACK:
    case DDSI_REORDER_NACKMAP_SUPPRESSED_NACK: {
      info->nack_sent_on_nackdelay = rwn->nack_sent_on_nackdelay;
      nack_summary->seq_base = ddsi_from_seqno (info->acknack.set.bitmap_base);
      nack_summary->seq_end_p1 = 0;
      nack_summary->frag_base = 0;
      nack_summary->frag_end_p1 = 0;
      result = (bitmap_result == DDSI_REORDER_NACKMAP_ACK) ? AANR_ACK : AANR_SUPPRESSED_NACK;
      break;
    }

    case DDSI_REORDER_NACKMAP_NACK: {
      // [seq_base:0 .. seq_end_p1:0) + [seq_end_p1:frag_base .. seq_end_p1:frag_end_p1) if frag_end_p1 > 0
      const ddsi_seqno_t seq_base = ddsi_from_seqno (info->acknack.set.bitmap_base);
      assert (seq_base >= 1 && (info->acknack.set.numbits > 0 || info->nackfrag.seq > 0));
      assert (info->nackfrag.seq == 0 || info->nackfrag.set.numbits > 0);
      const ddsi_seqno_t seq_end_p1 = seq_base + info->acknack.set.numbits;
      const uint32_t frag_base = (info->nackfrag.seq > 0) ? info->nackfrag.set.bitmap_base : 0;
      const uint32_t frag_end_p1 = (info->nackfrag.seq > 0) ? info->nackfrag.set.bitmap_base + info->nackfrag.set.numbits : 0;

      /* Let caller know whether it is a nack, and, in steady state, set
         final to prevent a response if it isn't.  The initial
         (pre-emptive) acknack is different: it'd be nice to get a
         heartbeat in response.

         Who cares about an answer to an acknowledgment!? -- actually,
         that'd a very useful feature in combination with directed
         heartbeats, or somesuch, to get reliability guarantees. */
      nack_summary->seq_end_p1 = seq_end_p1;
      nack_summary->frag_end_p1 = frag_end_p1;
      nack_summary->seq_base = seq_base;
      nack_summary->frag_base = frag_base;

      // [seq_base:0 .. seq_end_p1:0) and [seq_end_p1:frag_base .. seq_end_p1:frag_end_p1) if frag_end_p1 > 0
      if (seq_base > rwn->last_nack.seq_end_p1 || (seq_base == rwn->last_nack.seq_end_p1 && frag_base >= rwn->last_nack.frag_end_p1))
      {
        // A NACK for something not previously NACK'd or NackDelay passed, update nack_{seq,frag} to reflect
        // the changed state
        info->nack_sent_on_nackdelay = false;
#if ACK_REASON_IN_FLAGS
        info->flags = 0x10;
#endif
        result = AANR_NACK;
      }
      else if (rwn->directed_heartbeat && (!rwn->nack_sent_on_nackdelay || nackdelay_passed))
      {
        info->nack_sent_on_nackdelay = false;
#if ACK_REASON_IN_FLAGS
        info->flags = 0x20;
#endif
        result = AANR_NACK;
      }
      else if (nackdelay_passed)
      {
        info->nack_sent_on_nackdelay = true;
#if ACK_REASON_IN_FLAGS
        info->flags = 0x30;
#endif
        result = AANR_NACK;
      }
      else
      {
        // Overlap between this NACK and the previous one and NackDelay has not yet passed: clear numbits and
        // nackfrag_numbits to turn the NACK into an ACK and pretend to the caller nothing scary is going on.
#if ACK_REASON_IN_FLAGS
        info->flags = 0x40;
#endif
        info->nack_sent_on_nackdelay = rwn->nack_sent_on_nackdelay;
        info->acknack.set.numbits = 0;
        info->nackfrag.seq = 0;
        result = AANR_SUPPRESSED_NACK;
      }
      break;
    }
  }

  // all cases of enum ddsi_reorder_nackmap_result are covered above, so:
  // result initialization is dead code (but needed because C and some compilers) and:
  assert (result == AANR_ACK || result == AANR_NACK || result == AANR_SUPPRESSED_NACK);

  if (result == AANR_ACK || result == AANR_SUPPRESSED_NACK)
  {
    // ACK and SUPPRESSED_NACK both end up being a pure ACK; send those only if we have to
    if (!(rwn->heartbeat_since_ack && rwn->ack_requested))
      result = (result == AANR_ACK ? AANR_SILENT_ACK : AANR_SILENT_NACK); // writer didn't ask for it
    else if (!(nack_summary->seq_base > rwn->last_nack.seq_base || ackdelay_passed))
      result = (result == AANR_ACK ? AANR_SILENT_ACK : AANR_SILENT_NACK); // no progress since last, not enough time passed
  }
  else if (info->acknack.set.numbits == 0 && info->nackfrag.seq > 0 && !rwn->ack_requested)
  {
    // if we are not NACK'ing full samples and we are NACK'ing fragments, skip the ACKNACK submessage if we
    // have no interest in a HEARTBEAT and the writer hasn't asked for an ACKNACK since the last one we sent.
    result = AANR_NACKFRAG_ONLY;
  }
  return result;
}

void ddsi_sched_acknack_if_needed (struct ddsi_xevent *ev, struct ddsi_proxy_writer *pwr, struct ddsi_pwr_rd_match *rwn, ddsrt_mtime_t tnow)
{
  // This is the relatively expensive and precise code to determine what the ACKNACK event will do,
  // the alternative is to do:
  //
  //   add_acknack_getsource (pwr, rwn, &reorder, &bitmap_base, &notail);
  //   const ddsi_seqno_t last_seq = rwn->filtered ? rwn->last_seq : pwr->last_seq;
  //   if (bitmap_base <= last_seq)
  //     (void) ddsi_resched_xevent_if_earlier (ev, tnow);
  //   else if (!(rwn->heartbeat_since_ack && rwn->ack_requested))
  //     ; // writer didn't ask for it
  //   else if (!(bitmap_base > rwn->last_nack.seq_base || ackdelay_passed))
  //     ; // no progress since last, not enough time passed
  //   else
  //    (void) ddsi_resched_xevent_if_earlier (ev, tnow);
  //
  // which is a stripped-down version of the same logic that more aggressively schedules the event,
  // relying on the event handler to suppress unnecessary messages.  There doesn't seem to be a big
  // downside to being precise.

  struct ddsi_domaingv * const gv = pwr->e.gv;
  const bool ackdelay_passed = (tnow.v >= ddsrt_mtime_add_duration (rwn->t_last_ack, gv->config.ack_delay).v);
  const bool nackdelay_passed = (tnow.v >= ddsrt_mtime_add_duration (rwn->t_last_nack, gv->config.nack_delay).v);
  struct ddsi_add_acknack_info info;
  struct ddsi_last_nack_summary nack_summary;
  const enum ddsi_add_acknack_result aanr =
    get_acknack_info (pwr, rwn, &nack_summary, &info, ackdelay_passed, nackdelay_passed);
  switch (aanr)
  {
    case AANR_SILENT_ACK:
      // nothing to be done for now
      break;
    case AANR_ACK:
    case AANR_NACK:
    case AANR_NACKFRAG_ONLY:
      (void) ddsi_resched_xevent_if_earlier (ev, tnow);
      break;
    case AANR_SILENT_NACK:
    case AANR_SUPPRESSED_NACK:
      (void) ddsi_resched_xevent_if_earlier (ev, ddsrt_mtime_add_duration (rwn->t_last_nack, gv->config.nack_delay));
      break;
  }
}

#ifndef NDEBUG
static bool need_to_eventually_nack (enum ddsi_add_acknack_result aanr)
{
  switch (aanr)
  {
    case AANR_SILENT_ACK:
    case AANR_ACK:
      return false;
    case AANR_NACK:
    case AANR_NACKFRAG_ONLY:
    case AANR_SILENT_NACK:
    case AANR_SUPPRESSED_NACK:
      break;
  }
  return true;
}
#endif

static void resched_acknack_if_data_missing (struct ddsi_xevent *ev, struct ddsi_proxy_writer *pwr, struct ddsi_pwr_rd_match *rwn, ddsrt_mtime_t tnow, const enum ddsi_add_acknack_result aanr)
{
  switch (aanr)
  {
    case AANR_ACK:
      // Sending something, nothing missing so no need to reschedule
      break;

    case AANR_SILENT_ACK:
      // Not sending anything, nothing missing so no need to reschedule
      break;

    case AANR_NACK:
    case AANR_NACKFRAG_ONLY:
      // Sending a retransmit request now, reschedule because requesting data isn't a guarantee
      // we'll get it.
      (void) ddsi_resched_xevent_if_earlier (ev, ddsrt_mtime_add_duration (tnow, pwr->e.gv->config.auto_resched_nack_delay));
      break;

    case AANR_SILENT_NACK:
    case AANR_SUPPRESSED_NACK: {
      // Not sending anything or only sending an ACK, despite knowing we are missing data.
      //
      // Rate-limit spontaneous (or "illegal") NACKs, do any further processing only if enough
      // time has passed, else bail out after rescheduling it for the time at which we are
      // willing to send it
      const int64_t intv = pwr->e.gv->config.nack_delay;
      ddsrt_mtime_t tnext = ddsrt_mtime_add_duration (rwn->t_last_nack, intv);
      if (tnext.v < tnow.v)
        tnext = ddsrt_mtime_add_duration (tnow, intv);
      ddsi_resched_xevent_if_earlier (ev, tnext);
      break;
    }
  }
}

static struct ddsi_xmsg *make_and_resched_acknack (struct ddsi_xevent *ev, struct ddsi_proxy_writer *pwr, struct ddsi_pwr_rd_match *rwn, ddsrt_mtime_t tnow)
{
  struct ddsi_domaingv * const gv = pwr->e.gv;
  struct ddsi_xmsg *msg;
  struct ddsi_add_acknack_info info;

  struct ddsi_last_nack_summary nack_summary;
  const enum ddsi_add_acknack_result aanr =
    get_acknack_info (pwr, rwn, &nack_summary, &info,
                      tnow.v >= ddsrt_mtime_add_duration (rwn->t_last_ack, gv->config.ack_delay).v,
                      tnow.v >= ddsrt_mtime_add_duration (rwn->t_last_nack, gv->config.nack_delay).v);

  // Reschedule in cases there is data missing, bail out if not sending anything at all
  resched_acknack_if_data_missing (ev, pwr, rwn, tnow, aanr);
  switch (aanr)
  {
    case AANR_SILENT_ACK:
    case AANR_SILENT_NACK:
      assert (!need_to_eventually_nack (aanr) || ddsi_xevent_is_scheduled (ev));
      return NULL;
    case AANR_ACK:
    case AANR_NACK:
    case AANR_NACKFRAG_ONLY:
    case AANR_SUPPRESSED_NACK:
      break;
  }

  // Committing to sending a message in response: update the state.  Note that there's still a
  // possibility of not sending a message, but that is only in case of failures of some sort.
  // Resetting the flags and bailing out simply means we will wait until the next heartbeat to
  // do try again.
  rwn->directed_heartbeat = 0;
  rwn->heartbeat_since_ack = 0;
  rwn->heartbeatfrag_since_ack = 0;
  rwn->nack_sent_on_nackdelay = (info.nack_sent_on_nackdelay ? 1 : 0);

  struct ddsi_participant *pp = NULL;
  if (ddsi_omg_proxy_participant_is_secure (pwr->c.proxypp))
  {
    struct ddsi_reader *rd = ddsi_entidx_lookup_reader_guid (pwr->e.gv->entity_index, &rwn->rd_guid);
    if (rd)
      pp = rd->c.pp;
  }

  if ((msg = ddsi_xmsg_new (gv->xmsgpool, &rwn->rd_guid, pp, DDSI_ACKNACK_SIZE_MAX, DDSI_XMSG_KIND_CONTROL)) == NULL)
  {
    assert (!need_to_eventually_nack (aanr) || ddsi_xevent_is_scheduled (ev));
    return NULL;
  }

  ddsi_xmsg_setdst_pwr (msg, pwr);
  if (gv->config.meas_hb_to_ack_latency && rwn->hb_timestamp.v)
  {
    // If HB->ACK latency measurement is enabled, and we have a
    // timestamp available, add it and clear the time stamp.  There
    // is no real guarantee that the two match, but I haven't got a
    // solution for that yet ...  If adding the time stamp fails,
    // too bad, but no reason to get worried. */
    ddsi_xmsg_add_timestamp (msg, rwn->hb_timestamp);
    rwn->hb_timestamp.v = 0;
  }

  if (aanr != AANR_NACKFRAG_ONLY)
    add_acknack (msg, pwr, rwn, &info);
  if (info.nackfrag.seq > 0)
  {
    ETRACE (pwr, " + ");
    add_NackFrag (msg, pwr, rwn, &info);
  }
  ETRACE (pwr, "\n");
  if (ddsi_xmsg_size (msg) == 0)
  {
    // attempt at encoding the message caused it to be dropped
    ddsi_xmsg_free (msg);
    assert (!need_to_eventually_nack (aanr) || ddsi_xevent_is_scheduled (ev));
    return NULL;
  }

  rwn->count++;
  switch (aanr)
  {
    case AANR_SILENT_ACK:
    case AANR_SILENT_NACK:
      // can't be reached because of early returns
      assert (0);
      break;
    case AANR_ACK:
      rwn->ack_requested = 0;
      rwn->t_last_ack = tnow;
      rwn->last_nack.seq_base = nack_summary.seq_base;
      break;
    case AANR_NACK:
    case AANR_NACKFRAG_ONLY:
      if (nack_summary.frag_end_p1 != 0)
        pwr->nackfragcount++;
      if (aanr != AANR_NACKFRAG_ONLY)
      {
        rwn->ack_requested = 0;
        rwn->t_last_ack = tnow;
      }
      rwn->last_nack = nack_summary;
      rwn->t_last_nack = tnow;
      break;
    case AANR_SUPPRESSED_NACK:
      rwn->ack_requested = 0;
      rwn->t_last_ack = tnow;
      rwn->last_nack.seq_base = nack_summary.seq_base;
      break;
  }
  GVTRACE ("send acknack(rd "PGUIDFMT" -> pwr "PGUIDFMT")\n", PGUID (rwn->rd_guid), PGUID (pwr->e.guid));
  assert (!need_to_eventually_nack (aanr) || ddsi_xevent_is_scheduled (ev));
  return msg;
}

static dds_duration_t preemptive_acknack_interval (const struct ddsi_pwr_rd_match *rwn)
{
  const dds_duration_t age = rwn->t_last_ack.v - rwn->tcreate.v;
  if (age <= DDS_SECS (10))
    return DDS_SECS (1);
  else if (age <= DDS_SECS (60))
    return DDS_SECS (2);
  else if (age <= DDS_SECS (120))
    return DDS_SECS (5);
  else
    return DDS_SECS (10);
}

static struct ddsi_xmsg *make_preemptive_acknack (struct ddsi_xevent *ev, struct ddsi_proxy_writer *pwr, struct ddsi_pwr_rd_match *rwn, ddsrt_mtime_t tnow)
{
  const dds_duration_t old_intv = preemptive_acknack_interval (rwn);
  if (tnow.v < ddsrt_mtime_add_duration (rwn->t_last_ack, old_intv).v)
  {
    (void) ddsi_resched_xevent_if_earlier (ev, ddsrt_mtime_add_duration (rwn->t_last_ack, old_intv));
    return NULL;
  }

  struct ddsi_domaingv * const gv = pwr->e.gv;
  struct ddsi_participant *pp = NULL;
  if (ddsi_omg_proxy_participant_is_secure (pwr->c.proxypp))
  {
    struct ddsi_reader *rd = ddsi_entidx_lookup_reader_guid (gv->entity_index, &rwn->rd_guid);
    if (rd)
      pp = rd->c.pp;
  }

  struct ddsi_xmsg *msg;
  if ((msg = ddsi_xmsg_new (gv->xmsgpool, &rwn->rd_guid, pp, DDSI_ACKNACK_SIZE_MAX, DDSI_XMSG_KIND_CONTROL)) == NULL)
  {
    // if out of memory, try again later
    (void) ddsi_resched_xevent_if_earlier (ev, ddsrt_mtime_add_duration (tnow, old_intv));
    return NULL;
  }

  ddsi_xmsg_setdst_pwr (msg, pwr);
  struct ddsi_xmsg_marker sm_marker;
  ddsi_rtps_acknack_t *an = ddsi_xmsg_append (msg, &sm_marker, DDSI_ACKNACK_SIZE (0));
  ddsi_xmsg_submsg_init (msg, sm_marker, DDSI_RTPS_SMID_ACKNACK);
  an->readerId = ddsi_hton_entityid (rwn->rd_guid.entityid);
  an->writerId = ddsi_hton_entityid (pwr->e.guid.entityid);
  an->readerSNState.bitmap_base = ddsi_to_seqno (1);
  an->readerSNState.numbits = 0;
  ddsi_count_t * const countp =
    (ddsi_count_t *) ((char *) an + offsetof (ddsi_rtps_acknack_t, bits) + DDSI_SEQUENCE_NUMBER_SET_BITS_SIZE (0));
  *countp = 0;
  ddsi_xmsg_submsg_setnext (msg, sm_marker);

  // print before security gets to it: it can delete the message
  // numbits is always 0 here, so need to print the bitmap
  ETRACE (pwr, "acknack "PGUIDFMT" -> "PGUIDFMT": #%"PRIu32":%"PRId64"/%"PRIu32":\n",
          PGUID (rwn->rd_guid), PGUID (pwr->e.guid), *countp,
          ddsi_from_seqno (an->readerSNState.bitmap_base), an->readerSNState.numbits);

  ddsi_security_encode_datareader_submsg (msg, sm_marker, pwr, &rwn->rd_guid);

  rwn->t_last_ack = tnow;
  const dds_duration_t new_intv = preemptive_acknack_interval (rwn);
  (void) ddsi_resched_xevent_if_earlier (ev, ddsrt_mtime_add_duration (rwn->t_last_ack, new_intv));
  return msg;
}

void ddsi_acknack_xevent_cb (struct ddsi_domaingv *gv, struct ddsi_xevent *ev, struct ddsi_xpack *xp, void *varg, ddsrt_mtime_t tnow)
{
  /* FIXME: ought to keep track of which NACKs are being generated in
     response to a Heartbeat.  There is no point in having multiple
     readers NACK the data.

     FIXME: ought to determine the set of missing samples (as it does
     now), and then check which for of those fragments are available already.
     A little snag is that the defragmenter can throw out partial samples in
     favour of others, so MUST ensure that the defragmenter won't start
     threshing and fail to make progress! */
  struct ddsi_acknack_xevent_cb_arg const * const arg = varg;
  struct ddsi_proxy_writer *pwr;
  struct ddsi_xmsg *msg;
  struct ddsi_pwr_rd_match *rwn;

  if ((pwr = ddsi_entidx_lookup_proxy_writer_guid (gv->entity_index, &arg->pwr_guid)) == NULL)
  {
    return;
  }

  ddsrt_mutex_lock (&pwr->e.lock);
  if ((rwn = ddsrt_avl_lookup (&ddsi_pwr_readers_treedef, &pwr->readers, &arg->rd_guid)) == NULL)
  {
    ddsrt_mutex_unlock (&pwr->e.lock);
    return;
  }

  if (!pwr->have_seen_heartbeat)
    msg = make_preemptive_acknack (ev, pwr, rwn, tnow);
  else
    msg = make_and_resched_acknack (ev, pwr, rwn, tnow);
  ddsrt_mutex_unlock (&pwr->e.lock);

  /* ddsi_xpack_addmsg may sleep (for bandwidth-limited channels), so
     must be outside the lock */
  if (msg)
  {
    // a possible result of trying to encode a submessage is that it is removed,
    // in which case we may end up with an empty one.
    // FIXME: change ddsi_security_encode_datareader_submsg so that it returns this and make it warn_unused_result
    if (ddsi_xmsg_size (msg) == 0)
      ddsi_xmsg_free (msg);
    else
      ddsi_xpack_addmsg (xp, msg, 0);
  }
}
