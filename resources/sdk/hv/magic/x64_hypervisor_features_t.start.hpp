#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union hv::partition_privilege_mask_t), "_HV_X64_HYPERVISOR_FEATURES.PartitionPrivileges", partition_privileges, 0x0, 0x40, true, 0x59918a8e5659bab3)
#define _m001 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_HV_X64_HYPERVISOR_FEATURES.MaxSupportedCState", max_supported_c_state, 0x40, 0x4, true, 0xdd05466e7c327b2a, 4, uint32_t)
#define _m002 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.HpetNeededForC3PowerState_Deprecated", hpet_needed_for_c3_power_state_deprecated, 0x44, 0x1, true, 0x679cdfcc8580cced, 1, uint32_t)
#define _m003 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.MwaitAvailable_Deprecated", mwait_available_deprecated, 0x60, 0x1, true, 0x4a4f8f5f7525989f, 1, uint32_t)
#define _m004 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.GuestDebuggingAvailable", guest_debugging_available, 0x61, 0x1, true, 0xf34c9830119dabe0, 1, uint32_t)
#define _m005 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.PerformanceMonitorsAvailable", performance_monitors_available, 0x62, 0x1, true, 0x3c6b68e6a95fcd71, 1, uint32_t)
#define _m006 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.CpuDynamicPartitioningAvailable", cpu_dynamic_partitioning_available, 0x63, 0x1, true, 0x638f55b68c5a5e08, 1, uint32_t)
#define _m007 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.XmmRegistersForFastHypercallAvailable", xmm_registers_for_fast_hypercall_available, 0x64, 0x1, true, 0xd00ce2916fefec2d, 1, uint32_t)
#define _m008 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.GuestIdleAvailable", guest_idle_available, 0x65, 0x1, true, 0x74fd7d7fe9c84ea5, 1, uint32_t)
#define _m009 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.HypervisorSleepStateSupportAvailable", hypervisor_sleep_state_support_available, 0x66, 0x1, true, 0x4729a2f7c11657e4, 1, uint32_t)
#define _m010 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.NumaDistanceQueryAvailable", numa_distance_query_available, 0x67, 0x1, true, 0x2c2d495514f9a63c, 1, uint32_t)
#define _m011 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.FrequencyRegsAvailable", frequency_regs_available, 0x68, 0x1, true, 0xd2ce9650f0dcee96, 1, uint32_t)
#define _m012 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.SyntheticMachineCheckAvailable", synthetic_machine_check_available, 0x69, 0x1, true, 0x3afecd92ed3f7246, 1, uint32_t)
#define _m013 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.GuestCrashRegsAvailable", guest_crash_regs_available, 0x6a, 0x1, true, 0x366abce8bbe69d44, 1, uint32_t)
#define _m014 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.DebugRegsAvailable", debug_regs_available, 0x6b, 0x1, true, 0xb4be92ac919487ed, 1, uint32_t)
#define _m015 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.Npiep1Available", npiep1_available, 0x6c, 0x1, true, 0xb25ecaf15f12e461, 1, uint32_t)
#define _m016 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.DisableHypervisorAvailable", disable_hypervisor_available, 0x6d, 0x1, true, 0x23ce2dd6c4800ee0, 1, uint32_t)
#define _m017 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.ExtendedGvaRangesForFlushVirtualAddressListAvailable", extended_gva_ranges_for_flush_virtual_address_list_available, 0x6e, 0x1, true, 0x53bd45842ec190ea, 1, uint32_t)
#define _m018 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.FastHypercallOutputAvailable", fast_hypercall_output_available, 0x6f, 0x1, true, 0xc67b60a481deb1bc, 1, uint32_t)
#define _m019 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.SvmFeaturesAvailable", svm_features_available, 0x70, 0x1, true, 0x562b94d315590dd4, 1, uint32_t)
#define _m020 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.SintPollingModeAvailable", sint_polling_mode_available, 0x71, 0x1, true, 0xfbac9572d71b05d8, 1, uint32_t)
#define _m021 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.HypercallMsrLockAvailable", hypercall_msr_lock_available, 0x72, 0x1, true, 0x84c8b4b309639fe7, 1, uint32_t)
#define _m022 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.DirectSyntheticTimers", direct_synthetic_timers, 0x73, 0x1, true, 0x766aa44f53fde51, 1, uint32_t)
#define _m023 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.RegisterPatAvailable", register_pat_available, 0x74, 0x1, true, 0xe9c325adeaf7c0ce, 1, uint32_t)
#define _m024 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.RegisterBndcfgsAvailable", register_bndcfgs_available, 0x75, 0x1, true, 0x710c71919a9ae54f, 1, uint32_t)
#define _m025 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.WatchdogTimerAvailable", watchdog_timer_available, 0x76, 0x1, true, 0xd70c7733241f0215, 1, uint32_t)
#define _m026 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.SyntheticTimeUnhaltedTimerAvailable", synthetic_time_unhalted_timer_available, 0x77, 0x1, true, 0x40bfd8570a9804db, 1, uint32_t)
#define _m027 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.DeviceDomainsAvailable", device_domains_available, 0x78, 0x1, true, 0x8f660a454a16b93f, 1, uint32_t)
#define _m028 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.S1DeviceDomainsAvailable", s1_device_domains_available, 0x79, 0x1, true, 0xa1c270bdfe4dbb3f, 1, uint32_t)
#define _m029 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.LbrAvailable", lbr_available, 0x7a, 0x1, true, 0x1bec3934092a08be, 1, uint32_t)
#define _m030 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.IptAvailable", ipt_available, 0x7b, 0x1, true, 0x2052fc0e42584e22, 1, uint32_t)
#define _m031 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.CrossVtlFlushAvailable", cross_vtl_flush_available, 0x7c, 0x1, true, 0x87606b8b9a698e1d, 1, uint32_t)
#define _m032 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.IdleSpecCtrlAvailable", idle_spec_ctrl_available, 0x7d, 0x1, true, 0x6edd6cee68c7c3e5, 1, uint32_t)
#define _m033 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.InvariantMperfAvailable", invariant_mperf_available, 0x0, 0x0, false, 0xcec62fcd6ac5d12f, 1, uint32_t)
#define _m034 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.SupervisorShadowStackAvailable", supervisor_shadow_stack_available, 0x0, 0x0, false, 0x7d4a0a9ad0ef4b31, 1, uint32_t)
#define _m035 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.ArchPmuAvailable", arch_pmu_available, 0x0, 0x0, false, 0x1cd30d630e0cea11, 1, uint32_t)
#define _m036 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.ExceptionTrapInterceptAvailable", exception_trap_intercept_available, 0x0, 0x0, false, 0x7727ff6beb1d99e0, 1, uint32_t)
#define _m037 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.TranslateGvaFlagsAvailable", translate_gva_flags_available, 0x0, 0x0, false, 0xa641036eac3132c1, 1, uint32_t)
#define _m038 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_X64_HYPERVISOR_FEATURES.ApicEoiInterceptAvailable", apic_eoi_intercept_available, 0x0, 0x0, false, 0xb999a2936fc92166, 1, uint32_t)
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
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#endif