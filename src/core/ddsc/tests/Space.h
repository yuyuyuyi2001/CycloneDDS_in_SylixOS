/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: Space.h
  Source: /home/wangkunlin/Desktop/cyclonedds/debug/bin/idl_analyze/Space.idl
  Cyclone DDS: V0.11.0

*****************************************************************/
#ifndef DDSC_SPACE_H_CD6BE55BE8B7B239F407329D6D9066D6
#define DDSC_SPACE_H_CD6BE55BE8B7B239F407329D6D9066D6

#include "dds/ddsc/dds_public_impl.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Space_Type1
{
  int32_t long_1;
  int32_t long_2;
  int32_t long_3;
} Space_Type1;

extern const dds_topic_descriptor_t Space_Type1_desc;

#define Space_Type1__alloc() \
((Space_Type1*) dds_alloc (sizeof (Space_Type1)));

#define Space_Type1_free(d,o) \
dds_sample_free ((d), &Space_Type1_desc, (o))

typedef struct Space_Type2
{
  int32_t long_1;
  int32_t long_2;
  int32_t long_3;
} Space_Type2;

extern const dds_topic_descriptor_t Space_Type2_desc;

#define Space_Type2__alloc() \
((Space_Type2*) dds_alloc (sizeof (Space_Type2)));

#define Space_Type2_free(d,o) \
dds_sample_free ((d), &Space_Type2_desc, (o))

typedef struct Space_Type3
{
  int32_t long_1;
  int32_t long_2;
  int32_t long_3;
} Space_Type3;

extern const dds_topic_descriptor_t Space_Type3_desc;

#define Space_Type3__alloc() \
((Space_Type3*) dds_alloc (sizeof (Space_Type3)));

#define Space_Type3_free(d,o) \
dds_sample_free ((d), &Space_Type3_desc, (o))

typedef struct Space_simpletypes
{
  int32_t l;
  int64_t ll;
  uint16_t us;
  uint32_t ul;
  uint64_t ull;
  float f;
  double d;
  char c;
  bool b;
  uint8_t o;
  char * s;
} Space_simpletypes;

extern const dds_topic_descriptor_t Space_simpletypes_desc;

#define Space_simpletypes__alloc() \
((Space_simpletypes*) dds_alloc (sizeof (Space_simpletypes)));

#define Space_simpletypes_free(d,o) \
dds_sample_free ((d), &Space_simpletypes_desc, (o))

typedef enum Space_invalid_data_enum
{
  Space_IDE0
} Space_invalid_data_enum;

#define Space_invalid_data_enum__alloc() \
((Space_invalid_data_enum*) dds_alloc (sizeof (Space_invalid_data_enum)));

typedef uint32_t Space_invalid_data_bitmask;
#define Space_IDB0 (1lu << 0)
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

typedef struct Space_invalid_data
{
  dds_sequence_octet o1;
  Space_invalid_data_enum e1;
  Space_invalid_data_bitmask bm1;
  uint8_t * exto;
} Space_invalid_data;

extern const dds_topic_descriptor_t Space_invalid_data_desc;

#define Space_invalid_data__alloc() \
((Space_invalid_data*) dds_alloc (sizeof (Space_invalid_data)));

#define Space_invalid_data_free(d,o) \
dds_sample_free ((d), &Space_invalid_data_desc, (o))

#ifdef __cplusplus
}
#endif

#endif /* DDSC_SPACE_H_CD6BE55BE8B7B239F407329D6D9066D6 */
