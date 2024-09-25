#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_DIAGNOSTIC_PAGE.PageCode", page_code, 0x0, 0x8, true, 0x2bc9ae309e891137)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SES_DIAGNOSTIC_PAGE.PageLength", page_length, 0x10, 0x10, true, 0xdb6a6701e4d6b787)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SES_DIAGNOSTIC_PAGE.PageData", page_data, 0x20, 0x8, true, 0x28ac5f1e9122abcd)
#else
#define _m00
#define _m01
#define _m02
#endif