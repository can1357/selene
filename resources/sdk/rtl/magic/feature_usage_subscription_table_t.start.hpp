#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_FEATURE_USAGE_SUBSCRIPTION_TABLE.SubscriptionCount", subscription_count, 0x0, 0x20, true, 0x6798d12c22ea2514)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtl::feature_usage_subscription_details_t, 1>), "_RTL_FEATURE_USAGE_SUBSCRIPTION_TABLE.Subscriptions", subscriptions, 0x20, 0x80, true, 0x68b2f5b98460121)
#else
#define _m00
#define _m01
#endif