#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_DOWNLOAD_MICROCODE_STATUS_DIAGNOSTIC_PAGE.PageCode", page_code, 0x0, 0x8, true, 0x725c1786c173d0a8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_DOWNLOAD_MICROCODE_STATUS_DIAGNOSTIC_PAGE.NumberOfSecondarySubEnclosures", number_of_secondary_sub_enclosures, 0x8, 0x8, true, 0x2076f9bdccea0c5a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SES_DOWNLOAD_MICROCODE_STATUS_DIAGNOSTIC_PAGE.PageLength", page_length, 0x10, 0x10, true, 0xad31dfbe748e4d5b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SES_DOWNLOAD_MICROCODE_STATUS_DIAGNOSTIC_PAGE.GenerationCode", generation_code, 0x20, 0x20, true, 0x1ce691838d8a4b04)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::ses_download_microcode_status_descriptor_t, 1>), "_SES_DOWNLOAD_MICROCODE_STATUS_DIAGNOSTIC_PAGE.Descriptors", descriptors, 0x40, 0x68, true, 0x1d3c3a09851ef337)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif