#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOADER_FEATURE_CONFIGURATION_INFORMATION.FeatureConfigurationBuffer", feature_configuration_buffer, 0x0, 0x40, true, 0x4c9df40ea753f622)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_FEATURE_CONFIGURATION_INFORMATION.FeatureConfigurationBufferSize", feature_configuration_buffer_size, 0x40, 0x40, true, 0x850911740317e9d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOADER_FEATURE_CONFIGURATION_INFORMATION.UsageSubscriptionBuffer", usage_subscription_buffer, 0x80, 0x40, true, 0xc820170976c2532e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_FEATURE_CONFIGURATION_INFORMATION.UsageSubscriptionBufferSize", usage_subscription_buffer_size, 0xc0, 0x40, true, 0xbb4a6827d0377c91)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOADER_FEATURE_CONFIGURATION_INFORMATION.DelayedUsageReportBuffer", delayed_usage_report_buffer, 0x100, 0x40, true, 0x51446594e9bf47bd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_FEATURE_CONFIGURATION_INFORMATION.DelayedUsageReportBufferSize", delayed_usage_report_buffer_size, 0x140, 0x40, true, 0x99dbb1b0a80a0c6c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::loader_feature_configuration_diagnostic_information_t), "_LOADER_FEATURE_CONFIGURATION_INFORMATION.DiagnosticInformation", diagnostic_information, 0x180, 0xc0, true, 0x6f9b2cd92e37a097)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif