#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_CONTROL_DIAGNOSTIC_PAGE.PageCode", page_code, 0x0, 0x8, true, 0x2ca745e87bc8601e)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DIAGNOSTIC_PAGE.Unrecoverable", unrecoverable, 0x8, 0x1, true, 0x18ba8b403d99aa39, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DIAGNOSTIC_PAGE.Critical", critical, 0x9, 0x1, true, 0xb4f3e19412aac40c, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DIAGNOSTIC_PAGE.NonCritical", non_critical, 0xa, 0x1, true, 0xadebebf5a950362a, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_CONTROL_DIAGNOSTIC_PAGE.Informational", informational, 0xb, 0x1, true, 0xea5911a357570327, 1, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SES_CONTROL_DIAGNOSTIC_PAGE.PageLength", page_length, 0x10, 0x10, true, 0x2b32b8d6b6f3c0e5)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SES_CONTROL_DIAGNOSTIC_PAGE.ExpectedGenerationCode", expected_generation_code, 0x20, 0x20, true, 0xcc1b9199e1941f91)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::ses_control_descriptor_t, 1>), "_SES_CONTROL_DIAGNOSTIC_PAGE.Descriptors", descriptors, 0x40, 0x20, true, 0xa82c61a6c999feef)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif