#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_CONFIGURATION_DIAGNOSTIC_PAGE.PageCode", page_code, 0x0, 0x8, true, 0xaf39ceb728af8949)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_CONFIGURATION_DIAGNOSTIC_PAGE.NumberOfSecondarySubEnclosures", number_of_secondary_sub_enclosures, 0x8, 0x8, true, 0xd3853d5e484a6bfb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SES_CONFIGURATION_DIAGNOSTIC_PAGE.PageLength", page_length, 0x10, 0x10, true, 0xd3ea31f6da6dec82)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SES_CONFIGURATION_DIAGNOSTIC_PAGE.GenerationCode", generation_code, 0x20, 0x20, true, 0x8b036d3db9e46fc6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::ses_enclosure_descriptor_t, 1>), "_SES_CONFIGURATION_DIAGNOSTIC_PAGE.Descriptors", descriptors, 0x40, 0x48, true, 0x2b8e895b8cf329d5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif