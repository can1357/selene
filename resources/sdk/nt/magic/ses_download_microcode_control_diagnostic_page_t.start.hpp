#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_DOWNLOAD_MICROCODE_CONTROL_DIAGNOSTIC_PAGE.PageCode", page_code, 0x0, 0x8, true, 0xa908bacad56a9c5b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_DOWNLOAD_MICROCODE_CONTROL_DIAGNOSTIC_PAGE.SubEnclosureId", sub_enclosure_id, 0x8, 0x8, true, 0x319fc00f85f63505)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SES_DOWNLOAD_MICROCODE_CONTROL_DIAGNOSTIC_PAGE.PageLength", page_length, 0x10, 0x10, true, 0x549d2bc18d39131c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SES_DOWNLOAD_MICROCODE_CONTROL_DIAGNOSTIC_PAGE.ExpectedGenerationCode", expected_generation_code, 0x20, 0x20, true, 0xb0054d69a7549878)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_DOWNLOAD_MICROCODE_CONTROL_DIAGNOSTIC_PAGE.Mode", mode, 0x40, 0x8, true, 0xcfcc291ee7de6303)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_DOWNLOAD_MICROCODE_CONTROL_DIAGNOSTIC_PAGE.BufferID", buffer_id, 0x58, 0x8, true, 0x7b275a5c3426723f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SES_DOWNLOAD_MICROCODE_CONTROL_DIAGNOSTIC_PAGE.BufferOffset", buffer_offset, 0x60, 0x20, true, 0xf115639481a6a0ae)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SES_DOWNLOAD_MICROCODE_CONTROL_DIAGNOSTIC_PAGE.ImageLength", image_length, 0x80, 0x20, true, 0x9f7547c4e56393bf)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SES_DOWNLOAD_MICROCODE_CONTROL_DIAGNOSTIC_PAGE.DataLength", data_length, 0xa0, 0x20, true, 0x1b7f2a190554fc85)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SES_DOWNLOAD_MICROCODE_CONTROL_DIAGNOSTIC_PAGE.Data", data, 0xc0, 0x8, true, 0xe1a74067398ad94d)
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
#define _m09
#endif