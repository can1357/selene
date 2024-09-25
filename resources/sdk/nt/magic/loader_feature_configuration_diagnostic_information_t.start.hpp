#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION.OriginalBootStatus", original_boot_status, 0x0, 0x8, true, 0xab1f1f62913fa601)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION.NewBootStatus", new_boot_status, 0x8, 0x8, true, 0x1022762d115be3b8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION.ConfigurationLoaded", configuration_loaded, 0x10, 0x8, true, 0x4a99741752610120)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION.Flags.AllFlags", all_flags, 0x0, 0x20, true, 0x944c7267c6fdd19d)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION.Flags.LkgSupported", lkg_supported, 0x0, 0x1, true, 0xae42e684873ee3d, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION.Flags.FinalBootBeforeRecovery", final_boot_before_recovery, 0x1, 0x1, true, 0xcfef6614ca0c03ed, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION.Flags.ConfigurationComparisonAttempted", configuration_comparison_attempted, 0x2, 0x1, true, 0xdc19b127cedeebd2, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION.Flags.CurrentConfigurationLoadAttempted", current_configuration_load_attempted, 0x3, 0x1, true, 0x9bde1a85e5be8a0a, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION.Flags.LkgConfigurationLoadAttempted", lkg_configuration_load_attempted, 0x4, 0x1, true, 0x6862d6c9b4641fe8, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION.Flags.UsageSubscriptionLoadAttempted", usage_subscription_load_attempted, 0x5, 0x1, true, 0x6e040464a89a592, 1, uint32_t)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION.Flags", flags, 0x20, 0x20, true, 0xaf30acdcf16b2c78)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION.ConfigurationComparisonStatus", configuration_comparison_status, 0x40, 0x20, true, 0xda595a65e4fa104d)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION.CurrentConfigurationLoadStatus", current_configuration_load_status, 0x60, 0x20, true, 0xf5bb15bbc83fd478)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION.LkgConfigurationLoadStatus", lkg_configuration_load_status, 0x80, 0x20, true, 0x4924cb1c86ace329)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION.UsageSubscriptionLoadStatus", usage_subscription_load_status, 0xa0, 0x20, true, 0xfebd972ac89f3cb7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#endif