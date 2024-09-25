#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_FEATURE_USAGE_DATA.FeatureId", feature_id, 0x0, 0x20, true, 0xcda9d24088180cf0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_FEATURE_USAGE_DATA.ReportingKind", reporting_kind, 0x20, 0x10, true, 0xcc684366f9f52fb1)
#else
#define _m00
#define _m01
#endif