/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: variouspub_types.h
  Source: /home/wangkunlin/Desktop/cyclonedds/debug/bin/variouspub_types.idl
  Cyclone DDS: V0.11.0

*****************************************************************/
#ifndef DDSC_VARIOUSPUB_TYPES_H_9FCE1848EFDD93DBB28A3363C1DE0982
#define DDSC_VARIOUSPUB_TYPES_H_9FCE1848EFDD93DBB28A3363C1DE0982

#include "dds/ddsc/dds_public_impl.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct A
{
  char * name;
  char * message;
  uint32_t count;
} A;

extern const dds_topic_descriptor_t A_desc;

#define A__alloc() \
((A*) dds_alloc (sizeof (A)));

#define A_free(d,o) \
dds_sample_free ((d), &A_desc, (o))

typedef struct T
{
  int16_t s;
  int32_t l;
} T;

extern const dds_topic_descriptor_t T_desc;

#define T__alloc() \
((T*) dds_alloc (sizeof (T)));

#define T_free(d,o) \
dds_sample_free ((d), &T_desc, (o))

#ifndef DDS_SEQUENCE_T_DEFINED
#define DDS_SEQUENCE_T_DEFINED
typedef struct dds_sequence_T
{
  uint32_t _maximum;
  uint32_t _length;
  struct T *_buffer;
  bool _release;
} dds_sequence_T;

#define dds_sequence_T__alloc() \
((dds_sequence_T*) dds_alloc (sizeof (dds_sequence_T)));

#define dds_sequence_T_allocbuf(l) \
((struct T *) dds_alloc ((l) * sizeof (struct T)))
#endif /* DDS_SEQUENCE_T_DEFINED */

typedef struct B
{
  struct A a;
  dds_sequence_T ts;
} B;

extern const dds_topic_descriptor_t B_desc;

#define B__alloc() \
((B*) dds_alloc (sizeof (B)));

#define B_free(d,o) \
dds_sample_free ((d), &B_desc, (o))

typedef struct C
{
  struct B b;
  int16_t k;
} C;

extern const dds_topic_descriptor_t C_desc;

#define C__alloc() \
((C*) dds_alloc (sizeof (C)));

#define C_free(d,o) \
dds_sample_free ((d), &C_desc, (o))

typedef struct M1_O
{
  int32_t * x;
} M1_O;

extern const dds_topic_descriptor_t M1_O_desc;

#define M1_O__alloc() \
((M1_O*) dds_alloc (sizeof (M1_O)));

#define M1_O_free(d,o) \
dds_sample_free ((d), &M1_O_desc, (o))

#ifdef __cplusplus
}
#endif

#endif /* DDSC_VARIOUSPUB_TYPES_H_9FCE1848EFDD93DBB28A3363C1DE0982 */
