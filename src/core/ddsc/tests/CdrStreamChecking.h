/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: CdrStreamChecking.h
  Source: /home/wangkunlin/Desktop/cyclonedds/debug/bin/idl_analyze/CdrStreamChecking.idl
  Cyclone DDS: V0.11.0

*****************************************************************/
#ifndef DDSC_CDRSTREAMCHECKING_H_80D4BA8DECDF6DA94932574ACD0062EA
#define DDSC_CDRSTREAMCHECKING_H_80D4BA8DECDF6DA94932574ACD0062EA

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

typedef struct CdrStreamChecking_t1
{
  dds_sequence_octet f1;
} CdrStreamChecking_t1;

extern const dds_topic_descriptor_t CdrStreamChecking_t1_desc;

#define CdrStreamChecking_t1__alloc() \
((CdrStreamChecking_t1*) dds_alloc (sizeof (CdrStreamChecking_t1)));

#define CdrStreamChecking_t1_free(d,o) \
dds_sample_free ((d), &CdrStreamChecking_t1_desc, (o))

typedef enum CdrStreamChecking_en2
{
  CdrStreamChecking_E2_1
} CdrStreamChecking_en2;

#define CdrStreamChecking_en2__alloc() \
((CdrStreamChecking_en2*) dds_alloc (sizeof (CdrStreamChecking_en2)));

typedef struct CdrStreamChecking_t2
{
  CdrStreamChecking_en2 f1;
} CdrStreamChecking_t2;

extern const dds_topic_descriptor_t CdrStreamChecking_t2_desc;

#define CdrStreamChecking_t2__alloc() \
((CdrStreamChecking_t2*) dds_alloc (sizeof (CdrStreamChecking_t2)));

#define CdrStreamChecking_t2_free(d,o) \
dds_sample_free ((d), &CdrStreamChecking_t2_desc, (o))

typedef uint32_t CdrStreamChecking_bm3;
#define CdrStreamChecking_B3_1 (1lu << 0)
typedef struct CdrStreamChecking_t3
{
  CdrStreamChecking_bm3 f1;
} CdrStreamChecking_t3;

extern const dds_topic_descriptor_t CdrStreamChecking_t3_desc;

#define CdrStreamChecking_t3__alloc() \
((CdrStreamChecking_t3*) dds_alloc (sizeof (CdrStreamChecking_t3)));

#define CdrStreamChecking_t3_free(d,o) \
dds_sample_free ((d), &CdrStreamChecking_t3_desc, (o))

typedef struct CdrStreamChecking_t4
{
  uint8_t * f1;
} CdrStreamChecking_t4;

extern const dds_topic_descriptor_t CdrStreamChecking_t4_desc;

#define CdrStreamChecking_t4__alloc() \
((CdrStreamChecking_t4*) dds_alloc (sizeof (CdrStreamChecking_t4)));

#define CdrStreamChecking_t4_free(d,o) \
dds_sample_free ((d), &CdrStreamChecking_t4_desc, (o))

typedef struct CdrStreamChecking_t4a
{
  uint8_t * f1;
} CdrStreamChecking_t4a;

extern const dds_topic_descriptor_t CdrStreamChecking_t4a_desc;

#define CdrStreamChecking_t4a__alloc() \
((CdrStreamChecking_t4a*) dds_alloc (sizeof (CdrStreamChecking_t4a)));

#define CdrStreamChecking_t4a_free(d,o) \
dds_sample_free ((d), &CdrStreamChecking_t4a_desc, (o))

typedef struct CdrStreamChecking_t4b
{
  char * f1;
} CdrStreamChecking_t4b;

extern const dds_topic_descriptor_t CdrStreamChecking_t4b_desc;

#define CdrStreamChecking_t4b__alloc() \
((CdrStreamChecking_t4b*) dds_alloc (sizeof (CdrStreamChecking_t4b)));

#define CdrStreamChecking_t4b_free(d,o) \
dds_sample_free ((d), &CdrStreamChecking_t4b_desc, (o))

typedef struct CdrStreamChecking_u5
{
  int32_t _d;
  union
  {
    uint8_t * c0;
    char * c1;
  } _u;
} CdrStreamChecking_u5;

typedef struct CdrStreamChecking_t5
{
  struct CdrStreamChecking_u5 f1;
} CdrStreamChecking_t5;

extern const dds_topic_descriptor_t CdrStreamChecking_t5_desc;

#define CdrStreamChecking_t5__alloc() \
((CdrStreamChecking_t5*) dds_alloc (sizeof (CdrStreamChecking_t5)));

#define CdrStreamChecking_t5_free(d,o) \
dds_sample_free ((d), &CdrStreamChecking_t5_desc, (o))

typedef struct CdrStreamChecking_t6
{
  bool f1;
} CdrStreamChecking_t6;

extern const dds_topic_descriptor_t CdrStreamChecking_t6_desc;

#define CdrStreamChecking_t6__alloc() \
((CdrStreamChecking_t6*) dds_alloc (sizeof (CdrStreamChecking_t6)));

#define CdrStreamChecking_t6_free(d,o) \
dds_sample_free ((d), &CdrStreamChecking_t6_desc, (o))

typedef struct CdrStreamChecking_t6x
{
  uint8_t f1;
} CdrStreamChecking_t6x;

extern const dds_topic_descriptor_t CdrStreamChecking_t6x_desc;

#define CdrStreamChecking_t6x__alloc() \
((CdrStreamChecking_t6x*) dds_alloc (sizeof (CdrStreamChecking_t6x)));

#define CdrStreamChecking_t6x_free(d,o) \
dds_sample_free ((d), &CdrStreamChecking_t6x_desc, (o))

typedef struct CdrStreamChecking_u7
{
  bool _d;
  union
  {
    bool c1;
  } _u;
} CdrStreamChecking_u7;

typedef struct CdrStreamChecking_t7
{
  struct CdrStreamChecking_u7 f1;
} CdrStreamChecking_t7;

extern const dds_topic_descriptor_t CdrStreamChecking_t7_desc;

#define CdrStreamChecking_t7__alloc() \
((CdrStreamChecking_t7*) dds_alloc (sizeof (CdrStreamChecking_t7)));

#define CdrStreamChecking_t7_free(d,o) \
dds_sample_free ((d), &CdrStreamChecking_t7_desc, (o))

typedef struct CdrStreamChecking_u7x
{
  uint8_t _d;
  union
  {
    uint8_t c1;
  } _u;
} CdrStreamChecking_u7x;

typedef struct CdrStreamChecking_t7x
{
  struct CdrStreamChecking_u7x f1;
} CdrStreamChecking_t7x;

extern const dds_topic_descriptor_t CdrStreamChecking_t7x_desc;

#define CdrStreamChecking_t7x__alloc() \
((CdrStreamChecking_t7x*) dds_alloc (sizeof (CdrStreamChecking_t7x)));

#define CdrStreamChecking_t7x_free(d,o) \
dds_sample_free ((d), &CdrStreamChecking_t7x_desc, (o))

typedef struct CdrStreamChecking_t8
{
  bool f1[2];
} CdrStreamChecking_t8;

extern const dds_topic_descriptor_t CdrStreamChecking_t8_desc;

#define CdrStreamChecking_t8__alloc() \
((CdrStreamChecking_t8*) dds_alloc (sizeof (CdrStreamChecking_t8)));

#define CdrStreamChecking_t8_free(d,o) \
dds_sample_free ((d), &CdrStreamChecking_t8_desc, (o))

typedef struct CdrStreamChecking_t8x
{
  uint8_t f1[2];
} CdrStreamChecking_t8x;

extern const dds_topic_descriptor_t CdrStreamChecking_t8x_desc;

#define CdrStreamChecking_t8x__alloc() \
((CdrStreamChecking_t8x*) dds_alloc (sizeof (CdrStreamChecking_t8x)));

#define CdrStreamChecking_t8x_free(d,o) \
dds_sample_free ((d), &CdrStreamChecking_t8x_desc, (o))

#ifdef __cplusplus
}
#endif

#endif /* DDSC_CDRSTREAMCHECKING_H_80D4BA8DECDF6DA94932574ACD0062EA */
