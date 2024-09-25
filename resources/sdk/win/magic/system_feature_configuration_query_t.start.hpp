#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum rtl::feature_configuration_type_t), "_SYSTEM_FEATURE_CONFIGURATION_QUERY.ConfigurationType", configuration_type, 0x0, 0x20, true, 0xc8f02180dc15772b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_FEATURE_CONFIGURATION_QUERY.FeatureId", feature_id, 0x20, 0x20, true, 0xb86a989e661d362)
#else
#define _m00
#define _m01
#endif