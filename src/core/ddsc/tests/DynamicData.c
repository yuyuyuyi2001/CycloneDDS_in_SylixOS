/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: DynamicData.c
  Source: /home/wangkunlin/Desktop/cyclonedds/debug/bin/idl_analyze/DynamicData.idl
  Cyclone DDS: V0.11.0

*****************************************************************/
#include "DynamicData.h"

static const uint32_t DynamicData_Msg_ops [] =
{
  /* Msg */
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (DynamicData_Msg, message),
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (DynamicData_Msg, scalar),
  DDS_OP_ADR | DDS_OP_TYPE_SEQ | DDS_OP_SUBTYPE_4BY | DDS_OP_FLAG_SGN, offsetof (DynamicData_Msg, values),
  DDS_OP_RTS
};

/* Type Information:
  [MINIMAL c5fa052a91729d6878ebe8e6025f] (#deps: 0)
  [COMPLETE f14e8ec8d1107f4ee514643f9578] (#deps: 0)
*/
#define TYPE_INFO_CDR_DynamicData_Msg (const unsigned char []){ \
  0x60, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf1, 0xc5, 0xfa, 0x05, 0x2a, 0x91, 0x72, 0x9d, 0x68, 0x78, 0xeb, 0xe8, \
  0xe6, 0x02, 0x5f, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf2, 0xf1, 0x4e, 0x8e, 0xc8, 0xd1, 0x10, 0x7f, 0x4e, 0xe5, 0x14, 0x64, \
  0x3f, 0x95, 0x78, 0x00, 0x85, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00\
}
#define TYPE_INFO_CDR_SZ_DynamicData_Msg 100u
#define TYPE_MAP_CDR_DynamicData_Msg (const unsigned char []){ \
  0x60, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf1, 0xc5, 0xfa, 0x05, 0x2a, 0x91, 0x72, 0x9d, \
  0x68, 0x78, 0xeb, 0xe8, 0xe6, 0x02, 0x5f, 0x00, 0x48, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, \
  0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x70, 0x00, 0x78, 0xe7, 0x31, 0x02, \
  0x0b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x04, 0xa2, 0x7a, 0x65, 0x49, 0x00, \
  0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0xf3, 0x01, 0x00, 0x00, 0x04, \
  0xf0, 0x9c, 0xc7, 0xee, 0x99, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0xf1, 0x4e, 0x8e, \
  0xc8, 0xd1, 0x10, 0x7f, 0x4e, 0xe5, 0x14, 0x64, 0x3f, 0x95, 0x78, 0x00, 0x81, 0x00, 0x00, 0x00, \
  0xf2, 0x51, 0x01, 0x00, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, \
  0x44, 0x79, 0x6e, 0x61, 0x6d, 0x69, 0x63, 0x44, 0x61, 0x74, 0x61, 0x3a, 0x3a, 0x4d, 0x73, 0x67, \
  0x00, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x70, 0x00, 0x08, 0x00, 0x00, 0x00, 0x6d, 0x65, 0x73, 0x73, \
  0x61, 0x67, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x73, 0x63, 0x61, 0x6c, 0x61, 0x72, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0xf3, \
  0x01, 0x00, 0x00, 0x04, 0x07, 0x00, 0x00, 0x00, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x73, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0xf1, 0x4e, 0x8e, \
  0xc8, 0xd1, 0x10, 0x7f, 0x4e, 0xe5, 0x14, 0x64, 0x3f, 0x95, 0x78, 0xf1, 0xc5, 0xfa, 0x05, 0x2a, \
  0x91, 0x72, 0x9d, 0x68, 0x78, 0xeb, 0xe8, 0xe6, 0x02, 0x5f\
}
#define TYPE_MAP_CDR_SZ_DynamicData_Msg 298u
const dds_topic_descriptor_t DynamicData_Msg_desc =
{
  .m_size = sizeof (DynamicData_Msg),
  .m_align = dds_alignof (DynamicData_Msg),
  .m_flagset = DDS_TOPIC_XTYPES_METADATA,
  .m_nkeys = 0u,
  .m_typename = "DynamicData::Msg",
  .m_keys = NULL,
  .m_nops = 4,
  .m_ops = DynamicData_Msg_ops,
  .m_meta = "",
  .type_information = { .data = TYPE_INFO_CDR_DynamicData_Msg, .sz = TYPE_INFO_CDR_SZ_DynamicData_Msg },
  .type_mapping = { .data = TYPE_MAP_CDR_DynamicData_Msg, .sz = TYPE_MAP_CDR_SZ_DynamicData_Msg }
};

static const uint32_t DynamicData_KMsg_ops [] =
{
  /* KMsg */
  DDS_OP_ADR | DDS_OP_FLAG_KEY | DDS_OP_FLAG_MU | DDS_OP_TYPE_STR, offsetof (DynamicData_KMsg, message),
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (DynamicData_KMsg, scalar),
  DDS_OP_ADR | DDS_OP_TYPE_SEQ | DDS_OP_SUBTYPE_4BY | DDS_OP_FLAG_SGN, offsetof (DynamicData_KMsg, values),
  DDS_OP_RTS,
  
  /* key: message */
  DDS_OP_KOF | 1, 0u /* order: 0 */
};

static const dds_key_descriptor_t DynamicData_KMsg_keys[1] =
{
  { "message", 7, 0 }
};

/* Type Information:
  [MINIMAL 1fc8a0a2bd9cd031ee4ae37d296f] (#deps: 0)
  [COMPLETE b2415936a93da0150b22da3d11a3] (#deps: 0)
*/
#define TYPE_INFO_CDR_DynamicData_KMsg (const unsigned char []){ \
  0x60, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf1, 0x1f, 0xc8, 0xa0, 0xa2, 0xbd, 0x9c, 0xd0, 0x31, 0xee, 0x4a, 0xe3, \
  0x7d, 0x29, 0x6f, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf2, 0xb2, 0x41, 0x59, 0x36, 0xa9, 0x3d, 0xa0, 0x15, 0x0b, 0x22, 0xda, \
  0x3d, 0x11, 0xa3, 0x00, 0x85, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00\
}
#define TYPE_INFO_CDR_SZ_DynamicData_KMsg 100u
#define TYPE_MAP_CDR_DynamicData_KMsg (const unsigned char []){ \
  0x60, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf1, 0x1f, 0xc8, 0xa0, 0xa2, 0xbd, 0x9c, 0xd0, \
  0x31, 0xee, 0x4a, 0xe3, 0x7d, 0x29, 0x6f, 0x00, 0x48, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, \
  0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x00, 0x70, 0x00, 0x78, 0xe7, 0x31, 0x02, \
  0x0b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x04, 0xa2, 0x7a, 0x65, 0x49, 0x00, \
  0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0xf3, 0x01, 0x00, 0x00, 0x04, \
  0xf0, 0x9c, 0xc7, 0xee, 0x99, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0xb2, 0x41, 0x59, \
  0x36, 0xa9, 0x3d, 0xa0, 0x15, 0x0b, 0x22, 0xda, 0x3d, 0x11, 0xa3, 0x00, 0x81, 0x00, 0x00, 0x00, \
  0xf2, 0x51, 0x01, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, \
  0x44, 0x79, 0x6e, 0x61, 0x6d, 0x69, 0x63, 0x44, 0x61, 0x74, 0x61, 0x3a, 0x3a, 0x4b, 0x4d, 0x73, \
  0x67, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x31, 0x00, 0x70, 0x00, 0x08, 0x00, 0x00, 0x00, 0x6d, 0x65, 0x73, 0x73, \
  0x61, 0x67, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x73, 0x63, 0x61, 0x6c, 0x61, 0x72, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0xf3, \
  0x01, 0x00, 0x00, 0x04, 0x07, 0x00, 0x00, 0x00, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x73, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0xb2, 0x41, 0x59, \
  0x36, 0xa9, 0x3d, 0xa0, 0x15, 0x0b, 0x22, 0xda, 0x3d, 0x11, 0xa3, 0xf1, 0x1f, 0xc8, 0xa0, 0xa2, \
  0xbd, 0x9c, 0xd0, 0x31, 0xee, 0x4a, 0xe3, 0x7d, 0x29, 0x6f\
}
#define TYPE_MAP_CDR_SZ_DynamicData_KMsg 298u
const dds_topic_descriptor_t DynamicData_KMsg_desc =
{
  .m_size = sizeof (DynamicData_KMsg),
  .m_align = dds_alignof (DynamicData_KMsg),
  .m_flagset = DDS_TOPIC_XTYPES_METADATA,
  .m_nkeys = 1u,
  .m_typename = "DynamicData::KMsg",
  .m_keys = DynamicData_KMsg_keys,
  .m_nops = 4,
  .m_ops = DynamicData_KMsg_ops,
  .m_meta = "",
  .type_information = { .data = TYPE_INFO_CDR_DynamicData_KMsg, .sz = TYPE_INFO_CDR_SZ_DynamicData_KMsg },
  .type_mapping = { .data = TYPE_MAP_CDR_DynamicData_KMsg, .sz = TYPE_MAP_CDR_SZ_DynamicData_KMsg }
};

