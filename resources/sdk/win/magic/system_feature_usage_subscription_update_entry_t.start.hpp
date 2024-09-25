#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_FEATURE_USAGE_SUBSCRIPTION_UPDATE_ENTRY.Remove", remove, 0x0, 0x20, true, 0xfe69480279cddd21)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::feature_usage_subscription_details_t), "_SYSTEM_FEATURE_USAGE_SUBSCRIPTION_UPDATE_ENTRY.Details", details, 0x20, 0x80, true, 0x9efbf70afe5b7fe4)
#else
#define _m00
#define _m01
#endif