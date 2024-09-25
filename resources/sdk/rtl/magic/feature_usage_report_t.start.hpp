#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_FEATURE_USAGE_REPORT.FeatureId", feature_id, 0x0, 0x20, true, 0x7c3138d59d758d25)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_FEATURE_USAGE_REPORT.ReportingKind", reporting_kind, 0x20, 0x10, true, 0xa4ec75da7e6606e4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_FEATURE_USAGE_REPORT.ReportingOptions", reporting_options, 0x30, 0x10, true, 0x27e79eb2c52cff55)
#else
#define _m00
#define _m01
#define _m02
#endif