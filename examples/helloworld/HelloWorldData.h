/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: HelloWorldData.h
  Source: /home/wangkunlin/Desktop/cyclonedds/debug/bin/HelloWorldData.idl
  Cyclone DDS: V0.11.0

*****************************************************************/
#ifndef DDSC_HELLOWORLDDATA_H_A5875995A85BBA4169A0C9F26D7E3B54
#define DDSC_HELLOWORLDDATA_H_A5875995A85BBA4169A0C9F26D7E3B54

#include "dds/ddsc/dds_public_impl.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HelloWorldData_Msg
{
  int32_t userID;
  char * message;
} HelloWorldData_Msg;

extern const dds_topic_descriptor_t HelloWorldData_Msg_desc;

#define HelloWorldData_Msg__alloc() \
((HelloWorldData_Msg*) dds_alloc (sizeof (HelloWorldData_Msg)));

#define HelloWorldData_Msg_free(d,o) \
dds_sample_free ((d), &HelloWorldData_Msg_desc, (o))

#ifdef __cplusplus
}
#endif

#endif /* DDSC_HELLOWORLDDATA_H_A5875995A85BBA4169A0C9F26D7E3B54 */
