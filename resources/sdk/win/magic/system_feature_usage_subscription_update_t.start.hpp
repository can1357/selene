#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_FEATURE_USAGE_SUBSCRIPTION_UPDATE.UpdateCount", update_count, 0x0, 0x20, true, 0x700bb6f1088db739)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::system_feature_usage_subscription_update_entry_t, 1>), "_SYSTEM_FEATURE_USAGE_SUBSCRIPTION_UPDATE.Updates", updates, 0x20, 0xa0, true, 0x6484d772bb37c262)
#else
#define _m00
#define _m01
#endif