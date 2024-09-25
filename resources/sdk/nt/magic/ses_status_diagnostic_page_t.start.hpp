#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_STATUS_DIAGNOSTIC_PAGE.PageCode", page_code, 0x0, 0x8, true, 0xa588c1d7fecd2487)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DIAGNOSTIC_PAGE.Unrecoverable", unrecoverable, 0x8, 0x1, true, 0x2a3143ee39c02a7a, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DIAGNOSTIC_PAGE.Critical", critical, 0x9, 0x1, true, 0x719959eb08b44444, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DIAGNOSTIC_PAGE.NonCritical", non_critical, 0xa, 0x1, true, 0xd9be69e6b1b5f735, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DIAGNOSTIC_PAGE.Informational", informational, 0xb, 0x1, true, 0x6cfb0f53cf0cf38d, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_STATUS_DIAGNOSTIC_PAGE.InvalidOperation", invalid_operation, 0xc, 0x1, true, 0xfdebda633ccc060f, 1, uint8_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SES_STATUS_DIAGNOSTIC_PAGE.PageLength", page_length, 0x10, 0x10, true, 0xa1ea5aab8be34a8e)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SES_STATUS_DIAGNOSTIC_PAGE.GenerationCode", generation_code, 0x20, 0x20, true, 0xbec8bacb29c3fb63)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::ses_status_descriptor_t, 1>), "_SES_STATUS_DIAGNOSTIC_PAGE.Descriptors", descriptors, 0x40, 0x20, true, 0xdcc7a86ed1b3570a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif