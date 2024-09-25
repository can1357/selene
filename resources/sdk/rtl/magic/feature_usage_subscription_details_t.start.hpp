#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_FEATURE_USAGE_SUBSCRIPTION_DETAILS.FeatureId", feature_id, 0x0, 0x20, true, 0x124bbd666f5ace30)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_FEATURE_USAGE_SUBSCRIPTION_DETAILS.ReportingKind", reporting_kind, 0x20, 0x10, true, 0x5ab56dba8a486795)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_FEATURE_USAGE_SUBSCRIPTION_DETAILS.ReportingOptions", reporting_options, 0x30, 0x10, true, 0xb38df7ee404887d4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::feature_usage_subscription_target_t), "_RTL_FEATURE_USAGE_SUBSCRIPTION_DETAILS.ReportingTarget", reporting_target, 0x40, 0x40, true, 0x8e4a29e36139be67)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif