/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: SecurityCoreTests.c
  Source: /home/wangkunlin/Desktop/cyclonedds/debug/bin/SecurityCoreTests.idl
  Cyclone DDS: V0.11.0

*****************************************************************/
#include "SecurityCoreTests.h"

static const uint32_t SecurityCoreTests_Type1_ops [] =
{
  /* Type1 */
  DDS_OP_ADR | DDS_OP_FLAG_KEY | DDS_OP_FLAG_MU | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (SecurityCoreTests_Type1, id),
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (SecurityCoreTests_Type1, value),
  DDS_OP_RTS,
  
  /* key: id */
  DDS_OP_KOF | 1, 0u /* order: 0 */
};

static const dds_key_descriptor_t SecurityCoreTests_Type1_keys[1] =
{
  { "id", 5, 0 }
};

/* Type Information:
  [MINIMAL c8370320ecade0d2b5bb44ea0b17] (#deps: 0)
  [COMPLETE 4961856a7c1a218f8b0b138b6ce1] (#deps: 0)
*/
#define TYPE_INFO_CDR_SecurityCoreTests_Type1 (const unsigned char []){ \
  0x60, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf1, 0xc8, 0x37, 0x03, 0x20, 0xec, 0xad, 0xe0, 0xd2, 0xb5, 0xbb, 0x44, \
  0xea, 0x0b, 0x17, 0x00, 0x37, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf2, 0x49, 0x61, 0x85, 0x6a, 0x7c, 0x1a, 0x21, 0x8f, 0x8b, 0x0b, 0x13, \
  0x8b, 0x6c, 0xe1, 0x00, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00\
}
#define TYPE_INFO_CDR_SZ_SecurityCoreTests_Type1 100u
#define TYPE_MAP_CDR_SecurityCoreTests_Type1 (const unsigned char []){ \
  0x4b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf1, 0xc8, 0x37, 0x03, 0x20, 0xec, 0xad, 0xe0, \
  0xd2, 0xb5, 0xbb, 0x44, 0xea, 0x0b, 0x17, 0x00, 0x33, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, \
  0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x00, 0x04, 0xb8, 0x0b, 0xb7, 0x74, 0x00, \
  0x0b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x04, 0x20, 0x63, 0xc1, 0x60, 0x00, \
  0x7c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0x49, 0x61, 0x85, 0x6a, 0x7c, 0x1a, 0x21, \
  0x8f, 0x8b, 0x0b, 0x13, 0x8b, 0x6c, 0xe1, 0x00, 0x64, 0x00, 0x00, 0x00, 0xf2, 0x51, 0x01, 0x00, \
  0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x53, 0x65, 0x63, 0x75, \
  0x72, 0x69, 0x74, 0x79, 0x43, 0x6f, 0x72, 0x65, 0x54, 0x65, 0x73, 0x74, 0x73, 0x3a, 0x3a, 0x54, \
  0x79, 0x70, 0x65, 0x31, 0x00, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, \
  0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x00, 0x04, 0x00, 0x03, 0x00, 0x00, 0x00, \
  0x69, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x00, 0x00, 0x00, \
  0x22, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0x49, 0x61, 0x85, 0x6a, 0x7c, 0x1a, 0x21, \
  0x8f, 0x8b, 0x0b, 0x13, 0x8b, 0x6c, 0xe1, 0xf1, 0xc8, 0x37, 0x03, 0x20, 0xec, 0xad, 0xe0, 0xd2, \
  0xb5, 0xbb, 0x44, 0xea, 0x0b, 0x17\
}
#define TYPE_MAP_CDR_SZ_SecurityCoreTests_Type1 246u
const dds_topic_descriptor_t SecurityCoreTests_Type1_desc =
{
  .m_size = sizeof (SecurityCoreTests_Type1),
  .m_align = dds_alignof (SecurityCoreTests_Type1),
  .m_flagset = DDS_TOPIC_FIXED_SIZE | DDS_TOPIC_XTYPES_METADATA,
  .m_nkeys = 1u,
  .m_typename = "SecurityCoreTests::Type1",
  .m_keys = SecurityCoreTests_Type1_keys,
  .m_nops = 3,
  .m_ops = SecurityCoreTests_Type1_ops,
  .m_meta = "",
  .type_information = { .data = TYPE_INFO_CDR_SecurityCoreTests_Type1, .sz = TYPE_INFO_CDR_SZ_SecurityCoreTests_Type1 },
  .type_mapping = { .data = TYPE_MAP_CDR_SecurityCoreTests_Type1, .sz = TYPE_MAP_CDR_SZ_SecurityCoreTests_Type1 }
};

static const uint32_t SecurityCoreTests_Type2_ops [] =
{
  /* Type2 */
  DDS_OP_ADR | DDS_OP_FLAG_KEY | DDS_OP_FLAG_MU | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (SecurityCoreTests_Type2, id),
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (SecurityCoreTests_Type2, text),
  DDS_OP_RTS,
  
  /* key: id */
  DDS_OP_KOF | 1, 0u /* order: 0 */
};

static const dds_key_descriptor_t SecurityCoreTests_Type2_keys[1] =
{
  { "id", 5, 0 }
};

/* Type Information:
  [MINIMAL aa75185ac22cdc8ea185b4689e70] (#deps: 0)
  [COMPLETE 7f5015f6842a1f121b655d00c874] (#deps: 0)
*/
#define TYPE_INFO_CDR_SecurityCoreTests_Type2 (const unsigned char []){ \
  0x60, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf1, 0xaa, 0x75, 0x18, 0x5a, 0xc2, 0x2c, 0xdc, 0x8e, 0xa1, 0x85, 0xb4, \
  0x68, 0x9e, 0x70, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf2, 0x7f, 0x50, 0x15, 0xf6, 0x84, 0x2a, 0x1f, 0x12, 0x1b, 0x65, 0x5d, \
  0x00, 0xc8, 0x74, 0x00, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00\
}
#define TYPE_INFO_CDR_SZ_SecurityCoreTests_Type2 100u
#define TYPE_MAP_CDR_SecurityCoreTests_Type2 (const unsigned char []){ \
  0x4c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf1, 0xaa, 0x75, 0x18, 0x5a, 0xc2, 0x2c, 0xdc, \
  0x8e, 0xa1, 0x85, 0xb4, 0x68, 0x9e, 0x70, 0x00, 0x34, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, \
  0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x00, 0x04, 0xb8, 0x0b, 0xb7, 0x74, 0x00, \
  0x0c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x70, 0x00, 0x1c, 0xb2, 0x51, 0xec, \
  0x7b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0x7f, 0x50, 0x15, 0xf6, 0x84, 0x2a, 0x1f, \
  0x12, 0x1b, 0x65, 0x5d, 0x00, 0xc8, 0x74, 0x00, 0x63, 0x00, 0x00, 0x00, 0xf2, 0x51, 0x01, 0x00, \
  0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x53, 0x65, 0x63, 0x75, \
  0x72, 0x69, 0x74, 0x79, 0x43, 0x6f, 0x72, 0x65, 0x54, 0x65, 0x73, 0x74, 0x73, 0x3a, 0x3a, 0x54, \
  0x79, 0x70, 0x65, 0x32, 0x00, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, \
  0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x00, 0x04, 0x00, 0x03, 0x00, 0x00, 0x00, \
  0x69, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x70, 0x00, 0x05, 0x00, 0x00, 0x00, 0x74, 0x65, 0x78, 0x74, 0x00, 0x00, 0x00, 0x00, \
  0x22, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0x7f, 0x50, 0x15, 0xf6, 0x84, 0x2a, 0x1f, \
  0x12, 0x1b, 0x65, 0x5d, 0x00, 0xc8, 0x74, 0xf1, 0xaa, 0x75, 0x18, 0x5a, 0xc2, 0x2c, 0xdc, 0x8e, \
  0xa1, 0x85, 0xb4, 0x68, 0x9e, 0x70\
}
#define TYPE_MAP_CDR_SZ_SecurityCoreTests_Type2 246u
const dds_topic_descriptor_t SecurityCoreTests_Type2_desc =
{
  .m_size = sizeof (SecurityCoreTests_Type2),
  .m_align = dds_alignof (SecurityCoreTests_Type2),
  .m_flagset = DDS_TOPIC_XTYPES_METADATA,
  .m_nkeys = 1u,
  .m_typename = "SecurityCoreTests::Type2",
  .m_keys = SecurityCoreTests_Type2_keys,
  .m_nops = 3,
  .m_ops = SecurityCoreTests_Type2_ops,
  .m_meta = "",
  .type_information = { .data = TYPE_INFO_CDR_SecurityCoreTests_Type2, .sz = TYPE_INFO_CDR_SZ_SecurityCoreTests_Type2 },
  .type_mapping = { .data = TYPE_MAP_CDR_SecurityCoreTests_Type2, .sz = TYPE_MAP_CDR_SZ_SecurityCoreTests_Type2 }
};

