/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: RWData.c
  Source: /home/wangkunlin/Desktop/cyclonedds/debug/bin/idl_analyze/RWData.idl
  Cyclone DDS: V0.11.0

*****************************************************************/
#include "RWData.h"

static const uint32_t RWData_Msg_ops [] =
{
  /* Msg */
  DDS_OP_ADR | DDS_OP_FLAG_KEY | DDS_OP_FLAG_MU | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (RWData_Msg, k),
  DDS_OP_RTS,
  
  /* key: k */
  DDS_OP_KOF | 1, 0u /* order: 0 */
};

static const dds_key_descriptor_t RWData_Msg_keys[1] =
{
  { "k", 3, 0 }
};

/* Type Information:
  [MINIMAL 7bd3514b967b22299af7acff4344] (#deps: 0)
  [COMPLETE f544cea27d64bfbf4671721c2a2d] (#deps: 0)
*/
#define TYPE_INFO_CDR_RWData_Msg (const unsigned char []){ \
  0x60, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf1, 0x7b, 0xd3, 0x51, 0x4b, 0x96, 0x7b, 0x22, 0x29, 0x9a, 0xf7, 0xac, \
  0xff, 0x43, 0x44, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf2, 0xf5, 0x44, 0xce, 0xa2, 0x7d, 0x64, 0xbf, 0xbf, 0x46, 0x71, 0x72, \
  0x1c, 0x2a, 0x2d, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00\
}
#define TYPE_INFO_CDR_SZ_RWData_Msg 100u
#define TYPE_MAP_CDR_RWData_Msg (const unsigned char []){ \
  0x3b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf1, 0x7b, 0xd3, 0x51, 0x4b, 0x96, 0x7b, 0x22, \
  0x29, 0x9a, 0xf7, 0xac, 0xff, 0x43, 0x44, 0x00, 0x23, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x00, 0x04, 0x8c, 0xe4, 0xb1, 0x6b, 0x00, \
  0x50, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0xf5, 0x44, 0xce, 0xa2, 0x7d, 0x64, 0xbf, \
  0xbf, 0x46, 0x71, 0x72, 0x1c, 0x2a, 0x2d, 0x00, 0x38, 0x00, 0x00, 0x00, 0xf2, 0x51, 0x01, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x52, 0x57, 0x44, 0x61, \
  0x74, 0x61, 0x3a, 0x3a, 0x4d, 0x73, 0x67, 0x00, 0x18, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x00, 0x04, 0x00, 0x02, 0x00, 0x00, 0x00, \
  0x6b, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0xf5, 0x44, 0xce, \
  0xa2, 0x7d, 0x64, 0xbf, 0xbf, 0x46, 0x71, 0x72, 0x1c, 0x2a, 0x2d, 0xf1, 0x7b, 0xd3, 0x51, 0x4b, \
  0x96, 0x7b, 0x22, 0x29, 0x9a, 0xf7, 0xac, 0xff, 0x43, 0x44\
}
#define TYPE_MAP_CDR_SZ_RWData_Msg 186u
const dds_topic_descriptor_t RWData_Msg_desc =
{
  .m_size = sizeof (RWData_Msg),
  .m_align = dds_alignof (RWData_Msg),
  .m_flagset = DDS_TOPIC_FIXED_SIZE | DDS_TOPIC_XTYPES_METADATA,
  .m_nkeys = 1u,
  .m_typename = "RWData::Msg",
  .m_keys = RWData_Msg_keys,
  .m_nops = 2,
  .m_ops = RWData_Msg_ops,
  .m_meta = "",
  .type_information = { .data = TYPE_INFO_CDR_RWData_Msg, .sz = TYPE_INFO_CDR_SZ_RWData_Msg },
  .type_mapping = { .data = TYPE_MAP_CDR_RWData_Msg, .sz = TYPE_MAP_CDR_SZ_RWData_Msg }
};

