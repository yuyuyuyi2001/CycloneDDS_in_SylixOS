/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: RWData.h
  Source: /home/wangkunlin/Desktop/cyclonedds/debug/bin/idl_analyze/RWData.idl
  Cyclone DDS: V0.11.0

*****************************************************************/
#ifndef DDSC_RWDATA_H_AF0995855CE855C3E21EA38146A186CD
#define DDSC_RWDATA_H_AF0995855CE855C3E21EA38146A186CD

#include "dds/ddsc/dds_public_impl.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RWData_Msg
{
  int32_t k;
} RWData_Msg;

extern const dds_topic_descriptor_t RWData_Msg_desc;

#define RWData_Msg__alloc() \
((RWData_Msg*) dds_alloc (sizeof (RWData_Msg)));

#define RWData_Msg_free(d,o) \
dds_sample_free ((d), &RWData_Msg_desc, (o))

#ifdef __cplusplus
}
#endif

#endif /* DDSC_RWDATA_H_AF0995855CE855C3E21EA38146A186CD */
