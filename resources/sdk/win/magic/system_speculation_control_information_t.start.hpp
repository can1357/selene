#if !IN_PARSER
#define _m000 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.BpbEnabled", bpb_enabled, 0x0, 0x1, true, 0x9d941afd992c2cfd, 1, uint32_t)
#define _m001 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.BpbDisabledSystemPolicy", bpb_disabled_system_policy, 0x1, 0x1, true, 0xeb63b0efc811a639, 1, uint32_t)
#define _m002 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.BpbDisabledNoHardwareSupport", bpb_disabled_no_hardware_support, 0x2, 0x1, true, 0x3e369a03e933a740, 1, uint32_t)
#define _m003 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.SpecCtrlEnumerated", spec_ctrl_enumerated, 0x3, 0x1, true, 0xf1b813dd2e69bb5a, 1, uint32_t)
#define _m004 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.SpecCmdEnumerated", spec_cmd_enumerated, 0x4, 0x1, true, 0xc0b875b0bbcf3c71, 1, uint32_t)
#define _m005 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.IbrsPresent", ibrs_present, 0x5, 0x1, true, 0x773c5c2578498043, 1, uint32_t)
#define _m006 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.StibpPresent", stibp_present, 0x6, 0x1, true, 0x9c3c9d7298f22c59, 1, uint32_t)
#define _m007 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.SmepPresent", smep_present, 0x7, 0x1, true, 0x6ed0fedafac0ec2f, 1, uint32_t)
#define _m008 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.SpeculativeStoreBypassDisableAvailable", speculative_store_bypass_disable_available, 0x8, 0x1, true, 0xa389e7cb5233c2d7, 1, uint32_t)
#define _m009 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.SpeculativeStoreBypassDisableSupported", speculative_store_bypass_disable_supported, 0x9, 0x1, true, 0x67c428590023ad8b, 1, uint32_t)
#define _m010 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.SpeculativeStoreBypassDisabledSystemWide", speculative_store_bypass_disabled_system_wide, 0xa, 0x1, true, 0x63094062a45fc802, 1, uint32_t)
#define _m011 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.SpeculativeStoreBypassDisabledKernel", speculative_store_bypass_disabled_kernel, 0xb, 0x1, true, 0x78150aba740ef9f, 1, uint32_t)
#define _m012 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.SpeculativeStoreBypassDisableRequired", speculative_store_bypass_disable_required, 0xc, 0x1, true, 0x2e37b5c127b3de1b, 1, uint32_t)
#define _m013 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.BpbDisabledKernelToUser", bpb_disabled_kernel_to_user, 0xd, 0x1, true, 0xaa81ee2d752aba96, 1, uint32_t)
#define _m014 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.SpecCtrlRetpolineEnabled", spec_ctrl_retpoline_enabled, 0xe, 0x1, true, 0xa38eeb151e76dbc8, 1, uint32_t)
#define _m015 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.SpecCtrlImportOptimizationEnabled", spec_ctrl_import_optimization_enabled, 0xf, 0x1, true, 0xa1ddd6e9a0f535b7, 1, uint32_t)
#define _m016 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.EnhancedIbrs", enhanced_ibrs, 0x10, 0x1, true, 0x68d017733d70a439, 1, uint32_t)
#define _m017 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.HvL1tfStatusAvailable", hv_l1tf_status_available, 0x11, 0x1, true, 0x630318b5c1d6219a, 1, uint32_t)
#define _m018 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.HvL1tfProcessorNotAffected", hv_l1tf_processor_not_affected, 0x12, 0x1, true, 0xe15b03b2e1c6c678, 1, uint32_t)
#define _m019 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.HvL1tfMigitationEnabled", hv_l1tf_migitation_enabled, 0x13, 0x1, true, 0xae9fa2ccbcb0a7f2, 1, uint32_t)
#define _m020 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.HvL1tfMigitationNotEnabled_Hardware", hv_l1tf_migitation_not_enabled_hardware, 0x14, 0x1, true, 0x220ccb398552b3dc, 1, uint32_t)
#define _m021 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.HvL1tfMigitationNotEnabled_LoadOption", hv_l1tf_migitation_not_enabled_load_option, 0x15, 0x1, true, 0xb570c4dab299167f, 1, uint32_t)
#define _m022 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.HvL1tfMigitationNotEnabled_CoreScheduler", hv_l1tf_migitation_not_enabled_core_scheduler, 0x16, 0x1, true, 0x4a32ed6650df7370, 1, uint32_t)
#define _m023 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.EnhancedIbrsReported", enhanced_ibrs_reported, 0x17, 0x1, true, 0x650cb3cfa44e094d, 1, uint32_t)
#define _m024 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.MdsHardwareProtected", mds_hardware_protected, 0x18, 0x1, true, 0x9ad1229de4bf70c7, 1, uint32_t)
#define _m025 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.MbClearEnabled", mb_clear_enabled, 0x19, 0x1, true, 0xddeef6556f1f4ebc, 1, uint32_t)
#define _m026 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags.MbClearReported", mb_clear_reported, 0x1a, 0x1, true, 0x89b7bb1cb0a6aa23, 1, uint32_t)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_speculation_control_flags_t), "_SYSTEM_SPECULATION_CONTROL_INFORMATION.SpeculationControlFlags", speculation_control_flags, 0x0, 0x20, true, 0x53b7f55f25d4f4c5)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m27
#endif