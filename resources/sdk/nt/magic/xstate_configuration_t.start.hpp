#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_XSTATE_CONFIGURATION.EnabledFeatures", enabled_features, 0x0, 0x40, true, 0x8a42ab50194e8dd5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_XSTATE_CONFIGURATION.EnabledVolatileFeatures", enabled_volatile_features, 0x40, 0x40, true, 0x4f08fa25d209053)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_XSTATE_CONFIGURATION.Size", size, 0x80, 0x20, true, 0xa0a172d9eb2a3e33)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_XSTATE_CONFIGURATION.ControlFlags", control_flags, 0xa0, 0x20, true, 0x2ab99917a7af887a)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_XSTATE_CONFIGURATION.OptimizedSave", optimized_save, 0xa0, 0x1, true, 0xeecc4770bf56ef56, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_XSTATE_CONFIGURATION.CompactionEnabled", compaction_enabled, 0xa1, 0x1, true, 0x96423e489740a650, 1, uint32_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::xstate_feature_t, 64>), "_XSTATE_CONFIGURATION.Features", features, 0xc0, 0x0, true, 0xe99755d060412ca3)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_XSTATE_CONFIGURATION.EnabledSupervisorFeatures", enabled_supervisor_features, 0x10c0, 0x40, true, 0x80429c62b91ef6a6)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_XSTATE_CONFIGURATION.AlignedFeatures", aligned_features, 0x1100, 0x40, true, 0x4570c2ce533033a9)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_XSTATE_CONFIGURATION.AllFeatureSize", all_feature_size, 0x1140, 0x20, true, 0x62c439d4b6182e1d)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 64>), "_XSTATE_CONFIGURATION.AllFeatures", all_features, 0x1160, 0x0, true, 0x60af3e8440b29482)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_XSTATE_CONFIGURATION.EnabledUserVisibleSupervisorFeatures", enabled_user_visible_supervisor_features, 0x1980, 0x40, true, 0x52fc25b24031931d)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_XSTATE_CONFIGURATION.ExtendedFeatureDisable", extended_feature_disable, 0xa2, 0x1, true, 0x2ae9b0f84810bb69, 1, uint32_t)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_XSTATE_CONFIGURATION.ExtendedFeatureDisableFeatures", extended_feature_disable_features, 0x19c0, 0x40, true, 0xe1dc9aaf68eaf9e0)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_XSTATE_CONFIGURATION.AllNonLargeFeatureSize", all_non_large_feature_size, 0x1a00, 0x20, true, 0x47d148e3c6387b18)
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