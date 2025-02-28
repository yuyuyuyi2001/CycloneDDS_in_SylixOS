/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: RoundTrip.c
  Source: /home/wangkunlin/Desktop/cyclonedds/debug/bin/RoundTrip.idl
  Cyclone DDS: V0.11.0

*****************************************************************/
#include "RoundTrip.h"

static const uint32_t RoundTripModule_DataType_ops [] =
{
  /* DataType */
  DDS_OP_ADR | DDS_OP_TYPE_SEQ | DDS_OP_SUBTYPE_1BY, offsetof (RoundTripModule_DataType, payload),
  DDS_OP_RTS
};

/* Type Information:
  [MINIMAL 535515d9c79ca00f114126b29771] (#deps: 0)
  [COMPLETE 9c62f603b6dc77d29881277d74d3] (#deps: 0)
*/
#define TYPE_INFO_CDR_RoundTripModule_DataType (const unsigned char []){ \
  0x60, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf1, 0x53, 0x55, 0x15, 0xd9, 0xc7, 0x9c, 0xa0, 0x0f, 0x11, 0x41, 0x26, \
  0xb2, 0x97, 0x71, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf2, 0x9c, 0x62, 0xf6, 0x03, 0xb6, 0xdc, 0x77, 0xd2, 0x98, 0x81, 0x27, \
  0x7d, 0x74, 0xd3, 0x00, 0x56, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00\
}
#define TYPE_INFO_CDR_SZ_RoundTripModule_DataType 100u
#define TYPE_MAP_CDR_RoundTripModule_DataType (const unsigned char []){ \
  0x40, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf1, 0x53, 0x55, 0x15, 0xd9, 0xc7, 0x9c, 0xa0, \
  0x0f, 0x11, 0x41, 0x26, 0xb2, 0x97, 0x71, 0x00, 0x28, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0xf3, 0x01, 0x00, 0x00, 0x02, \
  0x32, 0x1c, 0x3c, 0xf4, 0x6a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0x9c, 0x62, 0xf6, \
  0x03, 0xb6, 0xdc, 0x77, 0xd2, 0x98, 0x81, 0x27, 0x7d, 0x74, 0xd3, 0x00, 0x52, 0x00, 0x00, 0x00, \
  0xf2, 0x51, 0x01, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, \
  0x52, 0x6f, 0x75, 0x6e, 0x64, 0x54, 0x72, 0x69, 0x70, 0x4d, 0x6f, 0x64, 0x75, 0x6c, 0x65, 0x3a, \
  0x3a, 0x44, 0x61, 0x74, 0x61, 0x54, 0x79, 0x70, 0x65, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0xf3, \
  0x01, 0x00, 0x00, 0x02, 0x08, 0x00, 0x00, 0x00, 0x70, 0x61, 0x79, 0x6c, 0x6f, 0x61, 0x64, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0x9c, 0x62, 0xf6, \
  0x03, 0xb6, 0xdc, 0x77, 0xd2, 0x98, 0x81, 0x27, 0x7d, 0x74, 0xd3, 0xf1, 0x53, 0x55, 0x15, 0xd9, \
  0xc7, 0x9c, 0xa0, 0x0f, 0x11, 0x41, 0x26, 0xb2, 0x97, 0x71\
}
#define TYPE_MAP_CDR_SZ_RoundTripModule_DataType 218u
const dds_topic_descriptor_t RoundTripModule_DataType_desc =
{
  .m_size = sizeof (RoundTripModule_DataType),
  .m_align = dds_alignof (RoundTripModule_DataType),
  .m_flagset = DDS_TOPIC_XTYPES_METADATA,
  .m_nkeys = 0u,
  .m_typename = "RoundTripModule::DataType",
  .m_keys = NULL,
  .m_nops = 2,
  .m_ops = RoundTripModule_DataType_ops,
  .m_meta = "",
  .type_information = { .data = TYPE_INFO_CDR_RoundTripModule_DataType, .sz = TYPE_INFO_CDR_SZ_RoundTripModule_DataType },
  .type_mapping = { .data = TYPE_MAP_CDR_RoundTripModule_DataType, .sz = TYPE_MAP_CDR_SZ_RoundTripModule_DataType }
};

static const uint32_t RoundTripModule_Address_ops [] =
{
  /* Address */
  DDS_OP_ADR | DDS_OP_FLAG_KEY | DDS_OP_FLAG_MU | DDS_OP_TYPE_STR, offsetof (RoundTripModule_Address, ip),
  DDS_OP_ADR | DDS_OP_FLAG_KEY | DDS_OP_FLAG_MU | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (RoundTripModule_Address, port),
  DDS_OP_RTS,
  
  /* key: ip */
  DDS_OP_KOF | 1, 0u /* order: 0 */,
  
  /* key: port */
  DDS_OP_KOF | 1, 2u /* order: 1 */
};

static const dds_key_descriptor_t RoundTripModule_Address_keys[2] =
{
  { "ip", 5, 0 },
  { "port", 7, 1 }
};

/* Type Information:
  [MINIMAL 5e5bed10cfea9a1ab965876991b6] (#deps: 0)
  [COMPLETE 11c6812902f0e940b3087c9b7508] (#deps: 0)
*/
#define TYPE_INFO_CDR_RoundTripModule_Address (const unsigned char []){ \
  0x60, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf1, 0x5e, 0x5b, 0xed, 0x10, 0xcf, 0xea, 0x9a, 0x1a, 0xb9, 0x65, 0x87, \
  0x69, 0x91, 0xb6, 0x00, 0x37, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf2, 0x11, 0xc6, 0x81, 0x29, 0x02, 0xf0, 0xe9, 0x40, 0xb3, 0x08, 0x7c, \
  0x9b, 0x75, 0x08, 0x00, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00\
}
#define TYPE_INFO_CDR_SZ_RoundTripModule_Address 100u
#define TYPE_MAP_CDR_RoundTripModule_Address (const unsigned char []){ \
  0x4b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf1, 0x5e, 0x5b, 0xed, 0x10, 0xcf, 0xea, 0x9a, \
  0x1a, 0xb9, 0x65, 0x87, 0x69, 0x91, 0xb6, 0x00, 0x33, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, \
  0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x00, 0x70, 0x00, 0x95, 0x7b, 0x52, 0x7b, \
  0x0b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x31, 0x00, 0x04, 0x90, 0x15, 0x55, 0xfb, 0x00, \
  0x7b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0x11, 0xc6, 0x81, 0x29, 0x02, 0xf0, 0xe9, \
  0x40, 0xb3, 0x08, 0x7c, 0x9b, 0x75, 0x08, 0x00, 0x63, 0x00, 0x00, 0x00, 0xf2, 0x51, 0x01, 0x00, \
  0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x52, 0x6f, 0x75, 0x6e, \
  0x64, 0x54, 0x72, 0x69, 0x70, 0x4d, 0x6f, 0x64, 0x75, 0x6c, 0x65, 0x3a, 0x3a, 0x41, 0x64, 0x64, \
  0x72, 0x65, 0x73, 0x73, 0x00, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, \
  0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x00, 0x70, 0x00, 0x03, 0x00, 0x00, 0x00, \
  0x69, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x31, 0x00, 0x04, 0x00, 0x05, 0x00, 0x00, 0x00, 0x70, 0x6f, 0x72, 0x74, 0x00, 0x00, 0x00, 0x00, \
  0x22, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0x11, 0xc6, 0x81, 0x29, 0x02, 0xf0, 0xe9, \
  0x40, 0xb3, 0x08, 0x7c, 0x9b, 0x75, 0x08, 0xf1, 0x5e, 0x5b, 0xed, 0x10, 0xcf, 0xea, 0x9a, 0x1a, \
  0xb9, 0x65, 0x87, 0x69, 0x91, 0xb6\
}
#define TYPE_MAP_CDR_SZ_RoundTripModule_Address 246u
const dds_topic_descriptor_t RoundTripModule_Address_desc =
{
  .m_size = sizeof (RoundTripModule_Address),
  .m_align = dds_alignof (RoundTripModule_Address),
  .m_flagset = DDS_TOPIC_XTYPES_METADATA,
  .m_nkeys = 2u,
  .m_typename = "RoundTripModule::Address",
  .m_keys = RoundTripModule_Address_keys,
  .m_nops = 3,
  .m_ops = RoundTripModule_Address_ops,
  .m_meta = "",
  .type_information = { .data = TYPE_INFO_CDR_RoundTripModule_Address, .sz = TYPE_INFO_CDR_SZ_RoundTripModule_Address },
  .type_mapping = { .data = TYPE_MAP_CDR_RoundTripModule_Address, .sz = TYPE_MAP_CDR_SZ_RoundTripModule_Address }
};

