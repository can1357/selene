#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_FEATURE_CONFIGURATION_SECTIONS_INFORMATION.OverallChangeStamp", overall_change_stamp, 0x0, 0x40, true, 0x908e36b092d16954)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::system_feature_configuration_sections_information_entry_t, 3>), "_SYSTEM_FEATURE_CONFIGURATION_SECTIONS_INFORMATION.Descriptors", descriptors, 0x40, 0x40, true, 0x50fe1081cd0d766e)
#else
#define _m00
#define _m01
#endif