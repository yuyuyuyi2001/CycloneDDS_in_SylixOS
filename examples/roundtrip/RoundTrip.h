/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: RoundTrip.h
  Source: /home/wangkunlin/Desktop/cyclonedds/debug/bin/RoundTrip.idl
  Cyclone DDS: V0.11.0

*****************************************************************/
#ifndef DDSC_ROUNDTRIP_H_A85521F47038ECAB8C51A9B342547AE6
#define DDSC_ROUNDTRIP_H_A85521F47038ECAB8C51A9B342547AE6

#include "dds/ddsc/dds_public_impl.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef DDS_SEQUENCE_OCTET_DEFINED
#define DDS_SEQUENCE_OCTET_DEFINED
typedef struct dds_sequence_octet
{
  uint32_t _maximum;
  uint32_t _length;
  uint8_t *_buffer;
  bool _release;
} dds_sequence_octet;

#define dds_sequence_octet__alloc() \
((dds_sequence_octet*) dds_alloc (sizeof (dds_sequence_octet)));

#define dds_sequence_octet_allocbuf(l) \
((uint8_t *) dds_alloc ((l) * sizeof (uint8_t)))
#endif /* DDS_SEQUENCE_OCTET_DEFINED */

typedef struct RoundTripModule_DataType
{
  dds_sequence_octet payload;
} RoundTripModule_DataType;

extern const dds_topic_descriptor_t RoundTripModule_DataType_desc;

#define RoundTripModule_DataType__alloc() \
((RoundTripModule_DataType*) dds_alloc (sizeof (RoundTripModule_DataType)));

#define RoundTripModule_DataType_free(d,o) \
dds_sample_free ((d), &RoundTripModule_DataType_desc, (o))

#ifdef __cplusplus
}
#endif

#endif /* DDSC_ROUNDTRIP_H_A85521F47038ECAB8C51A9B342547AE6 */
