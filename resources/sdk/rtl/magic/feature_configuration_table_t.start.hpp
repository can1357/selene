#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_FEATURE_CONFIGURATION_TABLE.FeatureCount", feature_count, 0x0, 0x20, true, 0x2fb801079b034bf0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtl::feature_configuration_t, 1>), "_RTL_FEATURE_CONFIGURATION_TABLE.Features", features, 0x20, 0x60, true, 0x41d4aa6e7ea3ab73)
#else
#define _m00
#define _m01
#endif