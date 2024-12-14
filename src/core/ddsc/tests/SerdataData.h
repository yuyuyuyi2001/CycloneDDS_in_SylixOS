/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: SerdataData.h
  Source: /home/wangkunlin/Desktop/cyclonedds/debug/bin/idl_analyze/SerdataData.idl
  Cyclone DDS: V0.11.0

*****************************************************************/
#ifndef DDSC_SERDATADATA_H_062403D2DE0B98AB1D031BE9DE7B8246
#define DDSC_SERDATADATA_H_062403D2DE0B98AB1D031BE9DE7B8246

#include "dds/ddsc/dds_public_impl.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SerdataKeyOrder
{
  uint8_t a;
  uint8_t b;
  uint64_t c;
} SerdataKeyOrder;

extern const dds_topic_descriptor_t SerdataKeyOrder_desc;

#define SerdataKeyOrder__alloc() \
((SerdataKeyOrder*) dds_alloc (sizeof (SerdataKeyOrder)));

#define SerdataKeyOrder_free(d,o) \
dds_sample_free ((d), &SerdataKeyOrder_desc, (o))

typedef struct SerdataKeyOrderId
{
  uint8_t a;
  uint8_t b;
  uint64_t c;
} SerdataKeyOrderId;

extern const dds_topic_descriptor_t SerdataKeyOrderId_desc;

#define SerdataKeyOrderId__alloc() \
((SerdataKeyOrderId*) dds_alloc (sizeof (SerdataKeyOrderId)));

#define SerdataKeyOrderId_free(d,o) \
dds_sample_free ((d), &SerdataKeyOrderId_desc, (o))

typedef struct SerdataKeyOrderHashId
{
  uint8_t a;
  uint8_t b;
  uint64_t c;
} SerdataKeyOrderHashId;

extern const dds_topic_descriptor_t SerdataKeyOrderHashId_desc;

#define SerdataKeyOrderHashId__alloc() \
((SerdataKeyOrderHashId*) dds_alloc (sizeof (SerdataKeyOrderHashId)));

#define SerdataKeyOrderHashId_free(d,o) \
dds_sample_free ((d), &SerdataKeyOrderHashId_desc, (o))

typedef struct SerdataKeyOrderAppendable
{
  uint8_t a;
  uint8_t b;
  uint64_t c;
} SerdataKeyOrderAppendable;

extern const dds_topic_descriptor_t SerdataKeyOrderAppendable_desc;

#define SerdataKeyOrderAppendable__alloc() \
((SerdataKeyOrderAppendable*) dds_alloc (sizeof (SerdataKeyOrderAppendable)));

#define SerdataKeyOrderAppendable_free(d,o) \
dds_sample_free ((d), &SerdataKeyOrderAppendable_desc, (o))

typedef struct SerdataKeyOrderMutable
{
  uint8_t a;
  uint8_t b;
  uint64_t c;
} SerdataKeyOrderMutable;

extern const dds_topic_descriptor_t SerdataKeyOrderMutable_desc;

#define SerdataKeyOrderMutable__alloc() \
((SerdataKeyOrderMutable*) dds_alloc (sizeof (SerdataKeyOrderMutable)));

#define SerdataKeyOrderMutable_free(d,o) \
dds_sample_free ((d), &SerdataKeyOrderMutable_desc, (o))

typedef struct SerdataKeyString
{
  uint8_t a;
  char * b;
} SerdataKeyString;

extern const dds_topic_descriptor_t SerdataKeyString_desc;

#define SerdataKeyString__alloc() \
((SerdataKeyString*) dds_alloc (sizeof (SerdataKeyString)));

#define SerdataKeyString_free(d,o) \
dds_sample_free ((d), &SerdataKeyString_desc, (o))

typedef struct SerdataKeyStringBounded
{
  uint8_t a;
  char b[4];
} SerdataKeyStringBounded;

extern const dds_topic_descriptor_t SerdataKeyStringBounded_desc;

#define SerdataKeyStringBounded__alloc() \
((SerdataKeyStringBounded*) dds_alloc (sizeof (SerdataKeyStringBounded)));

#define SerdataKeyStringBounded_free(d,o) \
dds_sample_free ((d), &SerdataKeyStringBounded_desc, (o))

typedef struct SerdataKeyStringAppendable
{
  uint8_t a;
  char * b;
} SerdataKeyStringAppendable;

extern const dds_topic_descriptor_t SerdataKeyStringAppendable_desc;

#define SerdataKeyStringAppendable__alloc() \
((SerdataKeyStringAppendable*) dds_alloc (sizeof (SerdataKeyStringAppendable)));

#define SerdataKeyStringAppendable_free(d,o) \
dds_sample_free ((d), &SerdataKeyStringAppendable_desc, (o))

typedef struct SerdataKeyStringBoundedAppendable
{
  uint8_t a;
  char b[4];
} SerdataKeyStringBoundedAppendable;

extern const dds_topic_descriptor_t SerdataKeyStringBoundedAppendable_desc;

#define SerdataKeyStringBoundedAppendable__alloc() \
((SerdataKeyStringBoundedAppendable*) dds_alloc (sizeof (SerdataKeyStringBoundedAppendable)));

#define SerdataKeyStringBoundedAppendable_free(d,o) \
dds_sample_free ((d), &SerdataKeyStringBoundedAppendable_desc, (o))

typedef struct SerdataKeyArr
{
  uint8_t a[12];
} SerdataKeyArr;

extern const dds_topic_descriptor_t SerdataKeyArr_desc;

#define SerdataKeyArr__alloc() \
((SerdataKeyArr*) dds_alloc (sizeof (SerdataKeyArr)));

#define SerdataKeyArr_free(d,o) \
dds_sample_free ((d), &SerdataKeyArr_desc, (o))

typedef struct SerdataKeyOrderFinalNestedMutable
{
  uint8_t x;
  uint8_t y;
  struct SerdataKeyOrderMutable z;
} SerdataKeyOrderFinalNestedMutable;

extern const dds_topic_descriptor_t SerdataKeyOrderFinalNestedMutable_desc;

#define SerdataKeyOrderFinalNestedMutable__alloc() \
((SerdataKeyOrderFinalNestedMutable*) dds_alloc (sizeof (SerdataKeyOrderFinalNestedMutable)));

#define SerdataKeyOrderFinalNestedMutable_free(d,o) \
dds_sample_free ((d), &SerdataKeyOrderFinalNestedMutable_desc, (o))

typedef struct SerdataKeyOrderAppendableNestedMutable
{
  uint8_t x;
  uint8_t y;
  struct SerdataKeyOrderMutable z;
} SerdataKeyOrderAppendableNestedMutable;

extern const dds_topic_descriptor_t SerdataKeyOrderAppendableNestedMutable_desc;

#define SerdataKeyOrderAppendableNestedMutable__alloc() \
((SerdataKeyOrderAppendableNestedMutable*) dds_alloc (sizeof (SerdataKeyOrderAppendableNestedMutable)));

#define SerdataKeyOrderAppendableNestedMutable_free(d,o) \
dds_sample_free ((d), &SerdataKeyOrderAppendableNestedMutable_desc, (o))

typedef struct SerdataKeyOrderMutableNestedMutable
{
  uint8_t x;
  uint8_t y;
  struct SerdataKeyOrderMutable z;
} SerdataKeyOrderMutableNestedMutable;

extern const dds_topic_descriptor_t SerdataKeyOrderMutableNestedMutable_desc;

#define SerdataKeyOrderMutableNestedMutable__alloc() \
((SerdataKeyOrderMutableNestedMutable*) dds_alloc (sizeof (SerdataKeyOrderMutableNestedMutable)));

#define SerdataKeyOrderMutableNestedMutable_free(d,o) \
dds_sample_free ((d), &SerdataKeyOrderMutableNestedMutable_desc, (o))

typedef struct SerdataKeyOrderMutableNestedAppendable
{
  uint8_t x;
  uint8_t y;
  struct SerdataKeyOrderAppendable z;
} SerdataKeyOrderMutableNestedAppendable;

extern const dds_topic_descriptor_t SerdataKeyOrderMutableNestedAppendable_desc;

#define SerdataKeyOrderMutableNestedAppendable__alloc() \
((SerdataKeyOrderMutableNestedAppendable*) dds_alloc (sizeof (SerdataKeyOrderMutableNestedAppendable)));

#define SerdataKeyOrderMutableNestedAppendable_free(d,o) \
dds_sample_free ((d), &SerdataKeyOrderMutableNestedAppendable_desc, (o))

typedef struct SerdataKeyOrderMutableNestedFinal
{
  uint8_t x;
  uint8_t y;
  struct SerdataKeyOrder z;
} SerdataKeyOrderMutableNestedFinal;

extern const dds_topic_descriptor_t SerdataKeyOrderMutableNestedFinal_desc;

#define SerdataKeyOrderMutableNestedFinal__alloc() \
((SerdataKeyOrderMutableNestedFinal*) dds_alloc (sizeof (SerdataKeyOrderMutableNestedFinal)));

#define SerdataKeyOrderMutableNestedFinal_free(d,o) \
dds_sample_free ((d), &SerdataKeyOrderMutableNestedFinal_desc, (o))

typedef struct SerdataKeyNestedFinalImplicitSubtype
{
  uint8_t x;
  uint8_t y;
  struct SerdataKeyOrder z;
} SerdataKeyNestedFinalImplicitSubtype;

typedef struct SerdataKeyNestedFinalImplicit
{
  struct SerdataKeyNestedFinalImplicitSubtype d;
  struct SerdataKeyNestedFinalImplicitSubtype e;
  uint32_t f;
} SerdataKeyNestedFinalImplicit;

extern const dds_topic_descriptor_t SerdataKeyNestedFinalImplicit_desc;

#define SerdataKeyNestedFinalImplicit__alloc() \
((SerdataKeyNestedFinalImplicit*) dds_alloc (sizeof (SerdataKeyNestedFinalImplicit)));

#define SerdataKeyNestedFinalImplicit_free(d,o) \
dds_sample_free ((d), &SerdataKeyNestedFinalImplicit_desc, (o))

typedef struct SerdataKeyNestedFinalImplicit2Subtype3
{
  uint8_t x;
  uint8_t y;
} SerdataKeyNestedFinalImplicit2Subtype3;

typedef struct SerdataKeyNestedFinalImplicit2Subtype2
{
  struct SerdataKeyNestedFinalImplicit2Subtype3 e;
  struct SerdataKeyNestedFinalImplicit2Subtype3 f;
} SerdataKeyNestedFinalImplicit2Subtype2;

typedef struct SerdataKeyNestedFinalImplicit2Subtype1
{
  struct SerdataKeyNestedFinalImplicit2Subtype2 c;
  struct SerdataKeyNestedFinalImplicit2Subtype2 d;
} SerdataKeyNestedFinalImplicit2Subtype1;

typedef struct SerdataKeyNestedFinalImplicit2
{
  struct SerdataKeyNestedFinalImplicit2Subtype1 a;
  struct SerdataKeyNestedFinalImplicit2Subtype1 b;
} SerdataKeyNestedFinalImplicit2;

extern const dds_topic_descriptor_t SerdataKeyNestedFinalImplicit2_desc;

#define SerdataKeyNestedFinalImplicit2__alloc() \
((SerdataKeyNestedFinalImplicit2*) dds_alloc (sizeof (SerdataKeyNestedFinalImplicit2)));

#define SerdataKeyNestedFinalImplicit2_free(d,o) \
dds_sample_free ((d), &SerdataKeyNestedFinalImplicit2_desc, (o))

typedef struct SerdataKeyNestedMutableImplicitSubtype
{
  uint8_t x;
  uint8_t y;
  struct SerdataKeyOrder z;
} SerdataKeyNestedMutableImplicitSubtype;

typedef struct SerdataKeyNestedMutableImplicit
{
  struct SerdataKeyNestedMutableImplicitSubtype d;
  struct SerdataKeyNestedMutableImplicitSubtype e;
  uint32_t f;
} SerdataKeyNestedMutableImplicit;

extern const dds_topic_descriptor_t SerdataKeyNestedMutableImplicit_desc;

#define SerdataKeyNestedMutableImplicit__alloc() \
((SerdataKeyNestedMutableImplicit*) dds_alloc (sizeof (SerdataKeyNestedMutableImplicit)));

#define SerdataKeyNestedMutableImplicit_free(d,o) \
dds_sample_free ((d), &SerdataKeyNestedMutableImplicit_desc, (o))

typedef struct SerdataKeyInheritMutableNested
{
  uint16_t nx;
  uint16_t ny;
  uint16_t nz;
} SerdataKeyInheritMutableNested;

typedef struct SerdataKeyInheritMutableBase
{
  struct SerdataKeyInheritMutableNested bx;
  uint16_t by;
  uint16_t bz;
} SerdataKeyInheritMutableBase;

typedef struct SerdataKeyInheritMutable
{
  struct SerdataKeyInheritMutableBase parent;
  struct SerdataKeyInheritMutableNested a;
  uint16_t b;
  uint16_t c;
} SerdataKeyInheritMutable;

extern const dds_topic_descriptor_t SerdataKeyInheritMutable_desc;

#define SerdataKeyInheritMutable__alloc() \
((SerdataKeyInheritMutable*) dds_alloc (sizeof (SerdataKeyInheritMutable)));

#define SerdataKeyInheritMutable_free(d,o) \
dds_sample_free ((d), &SerdataKeyInheritMutable_desc, (o))

#ifdef __cplusplus
}
#endif

#endif /* DDSC_SERDATADATA_H_062403D2DE0B98AB1D031BE9DE7B8246 */
