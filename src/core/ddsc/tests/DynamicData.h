/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: DynamicData.h
  Source: /home/wangkunlin/Desktop/cyclonedds/debug/bin/idl_analyze/DynamicData.idl
  Cyclone DDS: V0.11.0

*****************************************************************/
#ifndef DDSC_DYNAMICDATA_H_D2EE0AE1760875E009B4A705A3B4E80A
#define DDSC_DYNAMICDATA_H_D2EE0AE1760875E009B4A705A3B4E80A

#include "dds/ddsc/dds_public_impl.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef DDS_SEQUENCE_INT32_DEFINED
#define DDS_SEQUENCE_INT32_DEFINED
typedef struct dds_sequence_int32
{
  uint32_t _maximum;
  uint32_t _length;
  int32_t *_buffer;
  bool _release;
} dds_sequence_int32;

#define dds_sequence_int32__alloc() \
((dds_sequence_int32*) dds_alloc (sizeof (dds_sequence_int32)));

#define dds_sequence_int32_allocbuf(l) \
((int32_t *) dds_alloc ((l) * sizeof (int32_t)))
#endif /* DDS_SEQUENCE_INT32_DEFINED */

typedef struct DynamicData_Msg
{
  char * message;
  int32_t scalar;
  dds_sequence_int32 values;
} DynamicData_Msg;

extern const dds_topic_descriptor_t DynamicData_Msg_desc;

#define DynamicData_Msg__alloc() \
((DynamicData_Msg*) dds_alloc (sizeof (DynamicData_Msg)));

#define DynamicData_Msg_free(d,o) \
dds_sample_free ((d), &DynamicData_Msg_desc, (o))

#ifndef DDS_SEQUENCE_INT32_DEFINED
#define DDS_SEQUENCE_INT32_DEFINED
typedef struct dds_sequence_int32
{
  uint32_t _maximum;
  uint32_t _length;
  int32_t *_buffer;
  bool _release;
} dds_sequence_int32;

#define dds_sequence_int32__alloc() \
((dds_sequence_int32*) dds_alloc (sizeof (dds_sequence_int32)));

#define dds_sequence_int32_allocbuf(l) \
((int32_t *) dds_alloc ((l) * sizeof (int32_t)))
#endif /* DDS_SEQUENCE_INT32_DEFINED */

typedef struct DynamicData_KMsg
{
  char * message;
  int32_t scalar;
  dds_sequence_int32 values;
} DynamicData_KMsg;

extern const dds_topic_descriptor_t DynamicData_KMsg_desc;

#define DynamicData_KMsg__alloc() \
((DynamicData_KMsg*) dds_alloc (sizeof (DynamicData_KMsg)));

#define DynamicData_KMsg_free(d,o) \
dds_sample_free ((d), &DynamicData_KMsg_desc, (o))

#ifdef __cplusplus
}
#endif

#endif /* DDSC_DYNAMICDATA_H_D2EE0AE1760875E009B4A705A3B4E80A */
