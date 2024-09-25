#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_FEATURE_CONFIGURATION_UPDATE.PreviousChangeStamp", previous_change_stamp, 0x0, 0x40, true, 0x9fd1e49b66d8b4ae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum rtl::feature_configuration_type_t), "_SYSTEM_FEATURE_CONFIGURATION_UPDATE.ConfigurationType", configuration_type, 0x40, 0x20, true, 0xd0c3e7c934fc1da4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_FEATURE_CONFIGURATION_UPDATE.UpdateCount", update_count, 0x60, 0x20, true, 0xefe8f6de1bda5481)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtl::feature_configuration_update_t, 1>), "_SYSTEM_FEATURE_CONFIGURATION_UPDATE.Updates", updates, 0x80, 0x0, true, 0x7b28972bc4ddb93b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif