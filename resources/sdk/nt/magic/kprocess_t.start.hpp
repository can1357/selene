#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::dispatcher_header_t), "_KPROCESS.Header", header, 0x0, 0xc0, true, 0x1f847fe519bb7423)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KPROCESS.ProfileListHead", profile_list_head, 0xc0, 0x80, true, 0x3e91c00f42869932)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPROCESS.DirectoryTableBase", directory_table_base, 0x140, 0x40, true, 0x6c9e5a8a0c254a90)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KPROCESS.ThreadListHead", thread_list_head, 0x180, 0x80, true, 0x62a46f9c3f06e641)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPROCESS.ProcessLock", process_lock, 0x200, 0x20, true, 0x9206b37c50d5955d)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPROCESS.DeepFreezeStartTime", deep_freeze_start_time, 0x240, 0x40, true, 0x1c7f3a18c88536ee)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kaffinity_ex_t), "_KPROCESS.Affinity", affinity, 0x280, 0x40, true, 0x27deef239b8e45bb)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KPROCESS.ReadyListHead", ready_list_head, 0xac0, 0x80, true, 0x84f31326c809c38b)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_KPROCESS.SwapListEntry", swap_list_entry, 0xb40, 0x40, true, 0xa043bc5f8c62dd2a)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile struct nt::kaffinity_ex_t), "_KPROCESS.ActiveProcessors", active_processors, 0xb80, 0x40, true, 0x2f8f1fb855ebb31f)
#define _m010 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile int1_t), "_KPROCESS.AutoAlignment", auto_alignment, 0x13c0, 0x1, true, 0x7de9d08bfffec65f, 1, uint32_t)
#define _m011 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile int1_t), "_KPROCESS.DisableBoost", disable_boost, 0x13c1, 0x1, true, 0xb3791667d31b833e, 1, uint32_t)
#define _m012 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile int1_t), "_KPROCESS.DisableQuantum", disable_quantum, 0x13c2, 0x1, true, 0xbda8c991b7943c45, 1, uint32_t)
#define _m013 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KPROCESS.DeepFreeze", deep_freeze, 0x13c3, 0x1, true, 0xb91ab9cc073779be, 1, uint32_t)
#define _m014 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KPROCESS.TimerVirtualization", timer_virtualization, 0x13c4, 0x1, true, 0x7fcf19f292feede, 1, uint32_t)
#define _m015 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KPROCESS.CheckStackExtents", check_stack_extents, 0x13c5, 0x1, true, 0x1f569141614bed7c, 1, uint32_t)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KPROCESS.ProcessFlags", process_flags, 0x13c0, 0x20, true, 0xd1957ff9749da5d2)
#define _m017 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint32_t), "_KPROCESS.ActiveGroupsMask", active_groups_mask, 0x13e0, 0x20, true, 0xd277458a62748784, 0, uint32_t)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_KPROCESS.BasePriority", base_priority, 0x1400, 0x8, true, 0x2557ae8b12b911dd)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_KPROCESS.QuantumReset", quantum_reset, 0x1408, 0x8, true, 0xaa65eff96bb85dc6)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPROCESS.Visited", visited, 0x1410, 0x8, true, 0xe4bacdcc22521620)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::kexecute_options_t), "_KPROCESS.Flags", flags, 0x1418, 0x8, true, 0xee017b702a7f0e31)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::array<uint32_t, 20>, sdk::array<uint16_t, 20>>), "_KPROCESS.ThreadSeed", thread_seed, 0x1420, 0x40, true, 0x1548adaaf675b588)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 20>), "_KPROCESS.IdealNode", ideal_node, 0x1820, 0x40, true, 0x5c36f2053d8df04a)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KPROCESS.IdealGlobalNode", ideal_global_node, 0x1a20, 0x10, true, 0xbd040e157b520f59)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile union nt::kstack_count_t), "_KPROCESS.StackCount", stack_count, 0x1a40, 0x20, true, 0x54b947f010619d5a)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KPROCESS.ProcessListEntry", process_list_entry, 0x1a80, 0x80, true, 0xdc4da22c7877f94b)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPROCESS.CycleTime", cycle_time, 0x1b00, 0x40, true, 0x9a7f0b19c71c188f)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPROCESS.ContextSwitches", context_switches, 0x1b40, 0x40, true, 0x6d143962f083720c)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kscheduling_group_t*), "_KPROCESS.SchedulingGroup", scheduling_group, 0x1b80, 0x40, true, 0xa393e1c881fed4f9)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPROCESS.FreezeCount", freeze_count, 0x1bc0, 0x20, true, 0xc264fe5ccbe2fbe6)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPROCESS.KernelTime", kernel_time, 0x1be0, 0x20, true, 0x19d8dd8b63f4dad8)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPROCESS.UserTime", user_time, 0x1c00, 0x20, true, 0x4640539c247047c3)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KPROCESS.InstrumentationCallback", instrumentation_callback, 0x1ec0, 0x40, true, 0xc15c464615789d80)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPROCESS.ProcessTimerDelay", process_timer_delay, 0x220, 0x20, true, 0x38649a31f8d7a547)
#define _m035 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KPROCESS.CacheIsolationEnabled", cache_isolation_enabled, 0x13c6, 0x1, true, 0xb26e5a8385bb964a, 1, uint32_t)
#define _m036 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint4_t), "_KPROCESS.PpmPolicy", ppm_policy, 0x13c7, 0x3, true, 0xf4e2589092d2d634, 0, uint32_t)
#define _m037 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KPROCESS.VaSpaceDeleted", va_space_deleted, 0x13ca, 0x1, true, 0xf060615303592db6, 1, uint32_t)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 20>), "_KPROCESS.IdealProcessor", ideal_processor, 0x1620, 0x40, true, 0xbe0c672d3b9c1ba1)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPROCESS.ReadyTime", ready_time, 0x1c20, 0x20, true, 0xf8827026718a684a)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPROCESS.UserDirectoryTableBase", user_directory_table_base, 0x1c40, 0x40, true, 0x57ec94eed3fc46b2)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPROCESS.AddressPolicy", address_policy, 0x1c80, 0x8, true, 0x764cbb9ac7662bc6)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_secure_state_t), "_KPROCESS.SecureState", secure_state, 0x1f00, 0x40, true, 0xb26e3ed14079ea67)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPROCESS.KernelWaitTime", kernel_wait_time, 0x1f40, 0x40, true, 0x42f444daad66a6da)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPROCESS.UserWaitTime", user_wait_time, 0x1f80, 0x40, true, 0xd58703a80ef0716e)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 8>), "_KPROCESS.EndPadding", end_padding, 0x1fc0, 0x0, true, 0x4f0f3748e0419b6f)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 12>), "_KPROCESS.AffinityPadding", affinity_padding, 0x7c0, 0x0, true, 0xd6dc2626f1cf2040)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 12>), "_KPROCESS.ActiveProcessorsPadding", active_processors_padding, 0x10c0, 0x0, true, 0xf7c8918d2b9d5a32)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 12>), "_KPROCESS.ThreadSeedPadding", thread_seed_padding, 0x1560, 0xc0, true, 0xe43b517901742941)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 12>), "_KPROCESS.IdealProcessorPadding", ideal_processor_padding, 0x1760, 0xc0, true, 0x25b8a8206679a3b3)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 12>), "_KPROCESS.IdealNodePadding", ideal_node_padding, 0x1960, 0xc0, true, 0x1c53b86703b9aaf2)
#define _m054 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint2_t), "_KPROCESS.SpareFlags0", spare_flags0, 0x0, 0x0, false, 0x20ee979b9504acec, 2, uint32_t)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KPROCESS.LdtFreeSelectorHint", ldt_free_selector_hint, 0x0, 0x0, false, 0x3a48df44e7b7e42f)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KPROCESS.LdtTableLength", ldt_table_length, 0x0, 0x0, false, 0xb42fe3356839354e)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::kgdtentry64_t), "_KPROCESS.LdtSystemDescriptor", ldt_system_descriptor, 0x0, 0x0, false, 0x90eda147a4bc8b47)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KPROCESS.LdtBaseAddress", ldt_base_address, 0x0, 0x0, false, 0x976cb5c6fe80093f)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::fast_mutex_t), "_KPROCESS.LdtProcessLock", ldt_process_lock, 0x0, 0x0, false, 0x30d0b0433c3c5497)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPROCESS.SecurePid", secure_pid, 0x0, 0x0, false, 0x589e5601db4b1089)
#define _m061 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KPROCESS.MultiGroup", multi_group, 0x0, 0x0, false, 0x30a59dc2b4024e0d, 1, uint32_t)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPROCESS.LastRebalanceQpc", last_rebalance_qpc, 0x0, 0x0, false, 0x5cacf1c744e6f8)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KPROCESS.PerProcessorCycleTimes", per_processor_cycle_times, 0x0, 0x0, false, 0x72fcc6f6d015a1f9)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPROCESS.ExtendedFeatureDisableMask", extended_feature_disable_mask, 0x0, 0x0, false, 0xbf1840e02394d991)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KPROCESS.PrimaryGroup", primary_group, 0x0, 0x0, false, 0x67b1b7073b77e8c4)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KPROCESS.UserCetLogging", user_cet_logging, 0x0, 0x0, false, 0xf0fdb718151a4234)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KPROCESS.CpuPartitionList", cpu_partition_list, 0x0, 0x0, false, 0x2aaad10a943a7585)
#define _m42 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPROCESS.SecureState.SecureHandle", secure_handle, 0x0, 0x40, true, 0x73bc096a15d5458b)
#define _m43 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPROCESS.SecureState.Flags.SecureProcess", secure_process, 0x0, 0x1, true, 0xe5ef51d19c6b8539, 1, uint64_t)
#define _m44 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_flags_t), "_KPROCESS.SecureState.Flags", flags, 0x0, 0x40, true, 0xf35c10a6036c2b8a)
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
#define _m039
#define _m040
#define _m041
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m059
#define _m060
#define _m061
#define _m062
#define _m063
#define _m064
#define _m065
#define _m066
#define _m067
#define _m42
#define _m43
#define _m44
#endif