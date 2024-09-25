#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "wil_details_FeatureUsageSRUM.featureId", feature_id, 0x0, 0x20, true, 0x67942ae6f2d0c5a0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "wil_details_FeatureUsageSRUM.serviceReportingKind", service_reporting_kind, 0x20, 0x10, true, 0x8e137a169c610448)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "wil_details_FeatureUsageSRUM.usageCount", usage_count, 0x40, 0x20, true, 0x2d62d551ce9e2cbe)
#else
#define _m00
#define _m01
#define _m02
#endif