#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_wil_details_UsageSubscriptionData.featureId", feature_id, 0x0, 0x20, true, 0xa897e6c0ba27f27f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_wil_details_UsageSubscriptionData.serviceReportingKind", service_reporting_kind, 0x20, 0x10, true, 0x4d2e19d2c4569d3a)
#else
#define _m00
#define _m01
#endif