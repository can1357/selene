#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_EJOB.Event", event, 0x0, 0xc0, true, 0x34b916b1b2626e3b)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EJOB.JobLinks", job_links, 0xc0, 0x80, true, 0x73e34e4432a9bde3)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EJOB.ProcessListHead", process_list_head, 0x140, 0x80, true, 0x13543437d7e2428a)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eresource_t), "_EJOB.JobLock", job_lock, 0x1c0, 0x40, true, 0x653b42d78d086e0d)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EJOB.TotalUserTime", total_user_time, 0x500, 0x40, true, 0xae227915140279c3)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EJOB.TotalKernelTime", total_kernel_time, 0x540, 0x40, true, 0x5a268647bc4f5564)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EJOB.TotalCycleTime", total_cycle_time, 0x580, 0x40, true, 0x8d50dcf3a74c4ee0)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EJOB.ThisPeriodTotalUserTime", this_period_total_user_time, 0x5c0, 0x40, true, 0xb727f7b200ee4ff1)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EJOB.ThisPeriodTotalKernelTime", this_period_total_kernel_time, 0x600, 0x40, true, 0x6f5f8fecdd858225)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.TotalContextSwitches", total_context_switches, 0x640, 0x40, true, 0x6030d96da96205a7)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.TotalPageFaultCount", total_page_fault_count, 0x680, 0x20, true, 0xeb02773360c43dd9)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.TotalProcesses", total_processes, 0x6a0, 0x20, true, 0x7d4ea2cd3cd391f6)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.ActiveProcesses", active_processes, 0x6c0, 0x20, true, 0x6a2453445ab63653)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.TotalTerminatedProcesses", total_terminated_processes, 0x6e0, 0x20, true, 0x5053ad3c94492ff0)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EJOB.PerProcessUserTimeLimit", per_process_user_time_limit, 0x700, 0x40, true, 0x4104dbf99c6f9abf)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EJOB.PerJobUserTimeLimit", per_job_user_time_limit, 0x740, 0x40, true, 0x654f4a8ef2f41d08)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.MinimumWorkingSetSize", minimum_working_set_size, 0x780, 0x40, true, 0x4d322ede80e351b)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.MaximumWorkingSetSize", maximum_working_set_size, 0x7c0, 0x40, true, 0x2002c93f2e78659d)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.LimitFlags", limit_flags, 0x800, 0x20, true, 0xf477fc878801d7a8)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.ActiveProcessLimit", active_process_limit, 0x820, 0x20, true, 0x9256a4d2fbaa98b0)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kaffinity_ex_t), "_EJOB.Affinity", affinity, 0x840, 0x40, true, 0xa85efb8ccbab05f8)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::job_access_state_t*), "_EJOB.AccessState", access_state, 0xd80, 0x40, true, 0xe1cad6d0e871f384)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EJOB.AccessStateQuotaReference", access_state_quota_reference, 0xdc0, 0x40, true, 0x7eebc9be5d37b656)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.UIRestrictionsClass", ui_restrictions_class, 0xe00, 0x20, true, 0xdc8cf17508c6d19b)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.EndOfJobTimeAction", end_of_job_time_action, 0xe20, 0x20, true, 0xbef86ef11d44478b)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EJOB.CompletionPort", completion_port, 0xe40, 0x40, true, 0xb4c527dde381fa39)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EJOB.CompletionKey", completion_key, 0xe80, 0x40, true, 0xb356c76a74e0fe88)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.CompletionCount", completion_count, 0xec0, 0x40, true, 0x414cdbd1ddda4b84)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.SessionId", session_id, 0xf00, 0x20, true, 0xb101fc5b26594ec1)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.SchedulingClass", scheduling_class, 0xf20, 0x20, true, 0xfcce8c34121c8529)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.ReadOperationCount", read_operation_count, 0xf40, 0x40, true, 0x5dd8ebda417eb6df)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.WriteOperationCount", write_operation_count, 0xf80, 0x40, true, 0x107a700a95d3acda)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.OtherOperationCount", other_operation_count, 0xfc0, 0x40, true, 0x5e62c9ea17e10390)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.ReadTransferCount", read_transfer_count, 0x1000, 0x40, true, 0x541f772b0b047d31)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.WriteTransferCount", write_transfer_count, 0x1040, 0x40, true, 0x642c248b0f278070)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.OtherTransferCount", other_transfer_count, 0x1080, 0x40, true, 0x9d8324a012d3b3e6)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::process_disk_counters_t), "_EJOB.DiskIoInfo", disk_io_info, 0x10c0, 0x40, true, 0x6597cdf884d81457)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.ProcessMemoryLimit", process_memory_limit, 0x1200, 0x40, true, 0x5e2f080550ffde49)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.JobMemoryLimit", job_memory_limit, 0x1240, 0x40, true, 0x1dbce9f2ce9f33e8)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.JobTotalMemoryLimit", job_total_memory_limit, 0x1280, 0x40, true, 0x29720d44fe0436c0)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.PeakProcessMemoryUsed", peak_process_memory_used, 0x12c0, 0x40, true, 0x6446f8a0c4eab1a0)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.PeakJobMemoryUsed", peak_job_memory_used, 0x1300, 0x40, true, 0x862b59288243eded)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kaffinity_ex_t), "_EJOB.EffectiveAffinity", effective_affinity, 0x1340, 0x40, true, 0xca23f04c4a83a0c6)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EJOB.EffectivePerProcessUserTimeLimit", effective_per_process_user_time_limit, 0x1880, 0x40, true, 0xa4a060a35cd2d518)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.EffectiveMinimumWorkingSetSize", effective_minimum_working_set_size, 0x18c0, 0x40, true, 0x8b97101fecc6fe27)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.EffectiveMaximumWorkingSetSize", effective_maximum_working_set_size, 0x1900, 0x40, true, 0xc90b75e583086948)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.EffectiveProcessMemoryLimit", effective_process_memory_limit, 0x1940, 0x40, true, 0xa028f6c523623f1)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t*), "_EJOB.EffectiveProcessMemoryLimitJob", effective_process_memory_limit_job, 0x1980, 0x40, true, 0x8c6fa3f4f3dcd03e)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t*), "_EJOB.EffectivePerProcessUserTimeLimitJob", effective_per_process_user_time_limit_job, 0x19c0, 0x40, true, 0x1d93a666951c14)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t*), "_EJOB.EffectiveNetIoRateLimitJob", effective_net_io_rate_limit_job, 0x1a00, 0x40, true, 0xb02e908192957716)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t*), "_EJOB.EffectiveHeapAttributionJob", effective_heap_attribution_job, 0x1a40, 0x40, true, 0xf77f479b74ff2c5c)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.EffectiveLimitFlags", effective_limit_flags, 0x1a80, 0x20, true, 0xe3fb7921d4999d7a)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.EffectiveSchedulingClass", effective_scheduling_class, 0x1aa0, 0x20, true, 0x5ee6093636096e8f)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.EffectiveFreezeCount", effective_freeze_count, 0x1ac0, 0x20, true, 0x60635b2b3ff8b649)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.EffectiveBackgroundCount", effective_background_count, 0x1ae0, 0x20, true, 0x25ffafbf591ba566)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.EffectiveSwapCount", effective_swap_count, 0x1b00, 0x20, true, 0x3d6f6d2d22794c14)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.EffectiveNotificationLimitCount", effective_notification_limit_count, 0x1b20, 0x20, true, 0xaca7bf705478dc1e)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EJOB.EffectivePriorityClass", effective_priority_class, 0x1b40, 0x8, true, 0x83d125e6f43df11f)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EJOB.PriorityClass", priority_class, 0x1b48, 0x8, true, 0xd928b96672685253)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EJOB.NestingDepth", nesting_depth, 0x1b50, 0x8, true, 0x3bcf0a593fe2c1ae)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.CompletionFilter", completion_filter, 0x1b60, 0x20, true, 0x7ef37dd64c7a3473)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::state_name_t), "_EJOB.WakeChannel", wake_channel, 0x1b80, 0x40, true, 0x860c85e4426921b7)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct ps::wake_information_t, struct ps::job_wake_information_t>), "_EJOB.WakeInfo", wake_info, 0x1b80, 0x40, true, 0xe5ea68d12b72c069)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::jobobject_wake_filter_t), "_EJOB.WakeFilter", wake_filter, 0x1dc0, 0x40, true, 0xb02c3777d0c2c52c)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.LowEdgeLatchFilter", low_edge_latch_filter, 0x1e00, 0x20, true, 0xe369fe29f682c5c2)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t*), "_EJOB.NotificationLink", notification_link, 0x1e40, 0x40, true, 0x958ce804493dc500)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.CurrentJobMemoryUsed", current_job_memory_used, 0x1e80, 0x40, true, 0xd0b334fd99318315)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::job_notification_information_t*), "_EJOB.NotificationInfo", notification_info, 0x1ec0, 0x40, true, 0x18678b7ad0797188)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EJOB.NotificationInfoQuotaReference", notification_info_quota_reference, 0x1f00, 0x40, true, 0xa3668336d345e8a8)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::mini_completion_packet_user_t*), "_EJOB.NotificationPacket", notification_packet, 0x1f40, 0x40, true, 0x13040e2d8eacd884)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::job_cpu_rate_control_t*), "_EJOB.CpuRateControl", cpu_rate_control, 0x1f80, 0x40, true, 0xb5f08d8606ac31e0)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EJOB.EffectiveSchedulingGroup", effective_scheduling_group, 0x1fc0, 0x40, true, 0x9b7ed3817bae7123)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.ReadyTime", ready_time, 0x2000, 0x40, true, 0xac2af3e3c95ad00a)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_EJOB.MemoryLimitsLock", memory_limits_lock, 0x2040, 0x40, true, 0xc86d435be32551ee)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EJOB.SiblingJobLinks", sibling_job_links, 0x2080, 0x80, true, 0x78fdcbc89df5f698)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EJOB.ChildJobListHead", child_job_list_head, 0x2100, 0x80, true, 0x79211d89a4942d68)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t*), "_EJOB.ParentJob", parent_job, 0x2180, 0x40, true, 0xf31f4e470882f10)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t volatile*), "_EJOB.RootJob", root_job, 0x21c0, 0x40, true, 0x5de11f58f4d12e2a)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EJOB.IteratorListHead", iterator_list_head, 0x2200, 0x80, true, 0xca66f49f312562a7)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.AncestorCount", ancestor_count, 0x2280, 0x40, true, 0x7049e32d80414da)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t**), "_EJOB.Ancestors", ancestors, 0x22c0, 0x40, true, 0x7ca7dc1eaa688e4f)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EJOB.SessionObject", session_object, 0x22c0, 0x40, true, 0x9518dc2039970e4a)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_values_t), "_EJOB.Accounting", accounting, 0x2300, 0x40, true, 0x933aa864009b698b)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.ShadowActiveProcessCount", shadow_active_process_count, 0x2640, 0x20, true, 0x4fbf18e62d0040eb)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.ActiveAuxiliaryProcessCount", active_auxiliary_process_count, 0x2660, 0x20, true, 0x8270bd328d99f814)
#define _m085 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.SequenceNumber", sequence_number, 0x2680, 0x20, true, 0xdb1cb61fcc042b4d)
#define _m086 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.JobId", job_id, 0x26a0, 0x20, true, 0xa7b394c01fedcba1)
#define _m087 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_EJOB.ContainerId", container_id, 0x26c0, 0x80, true, 0x22d8a30d8fff23c6)
#define _m088 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eserversilo_globals_t*), "_EJOB.ServerSiloGlobals", server_silo_globals, 0x27c0, 0x40, true, 0xbf9148e88d4ab514)
#define _m089 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ps::property_set_t), "_EJOB.PropertySet", property_set, 0x2800, 0xc0, true, 0xbbec080e25aca29d)
#define _m090 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct psp::storage_t*), "_EJOB.Storage", storage, 0x28c0, 0x40, true, 0x2c61e8d962b59c7d)
#define _m091 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::job_net_rate_control_t*), "_EJOB.NetRateControl", net_rate_control, 0x2900, 0x40, true, 0x41267b1daf7bbe29)
#define _m092 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.JobFlags", job_flags, 0x2940, 0x20, true, 0xc204053e0d85660d)
#define _m093 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.CloseDone", close_done, 0x2940, 0x1, true, 0x32f95018cb91c781, 1, uint32_t)
#define _m094 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.MultiGroup", multi_group, 0x2941, 0x1, true, 0xca90b3dc41c2372a, 1, uint32_t)
#define _m095 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.OutstandingNotification", outstanding_notification, 0x2942, 0x1, true, 0xa33d0d31db4fa2e6, 1, uint32_t)
#define _m096 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.NotificationInProgress", notification_in_progress, 0x2943, 0x1, true, 0x94bc9465749b5224, 1, uint32_t)
#define _m097 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.UILimits", ui_limits, 0x2944, 0x1, true, 0x9a4caef89b504d9c, 1, uint32_t)
#define _m098 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.CpuRateControlActive", cpu_rate_control_active, 0x2945, 0x1, true, 0x8fe2bd1d1d2de8db, 1, uint32_t)
#define _m099 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.OwnCpuRateControl", own_cpu_rate_control, 0x2946, 0x1, true, 0x96ce2473f88cc2e6, 1, uint32_t)
#define _m100 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.Terminating", terminating, 0x2947, 0x1, true, 0x8ed87218ddb21c86, 1, uint32_t)
#define _m101 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.WorkingSetLock", working_set_lock, 0x2948, 0x1, true, 0x3cfd030cbc81739a, 1, uint32_t)
#define _m102 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.JobFrozen", job_frozen, 0x2949, 0x1, true, 0x3cb6fc1fd80c7462, 1, uint32_t)
#define _m103 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.Background", background, 0x294a, 0x1, true, 0xa64c5b5fdc355ad4, 1, uint32_t)
#define _m104 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.WakeNotificationAllocated", wake_notification_allocated, 0x294b, 0x1, true, 0x5d184b6e2c9cf775, 1, uint32_t)
#define _m105 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.WakeNotificationEnabled", wake_notification_enabled, 0x294c, 0x1, true, 0xe44b21637754a1fc, 1, uint32_t)
#define _m106 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.WakeNotificationPending", wake_notification_pending, 0x294d, 0x1, true, 0xeff3fee2f863f10a, 1, uint32_t)
#define _m107 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.LimitNotificationRequired", limit_notification_required, 0x294e, 0x1, true, 0x74c6909fa4428ee8, 1, uint32_t)
#define _m108 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.ZeroCountNotificationRequired", zero_count_notification_required, 0x294f, 0x1, true, 0x9b6410f17b0811d6, 1, uint32_t)
#define _m109 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.CycleTimeNotificationRequired", cycle_time_notification_required, 0x2950, 0x1, true, 0x4fe54078116c2140, 1, uint32_t)
#define _m110 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.CycleTimeNotificationPending", cycle_time_notification_pending, 0x2951, 0x1, true, 0x365191a9cdd0f35c, 1, uint32_t)
#define _m111 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.TimersVirtualized", timers_virtualized, 0x2952, 0x1, true, 0xedd202abc70308ef, 1, uint32_t)
#define _m112 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.JobSwapped", job_swapped, 0x2953, 0x1, true, 0x861cad6971509ce7, 1, uint32_t)
#define _m113 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.ViolationDetected", violation_detected, 0x2954, 0x1, true, 0x53f2f69e4cbce351, 1, uint32_t)
#define _m114 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.EmptyJobNotified", empty_job_notified, 0x2955, 0x1, true, 0xa0b614692df3e8aa, 1, uint32_t)
#define _m115 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.NoSystemCharge", no_system_charge, 0x2956, 0x1, true, 0xd6643f90b4f44ff2, 1, uint32_t)
#define _m116 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.DropNoWakeCharges", drop_no_wake_charges, 0x2957, 0x1, true, 0xc14dbd170f506605, 1, uint32_t)
#define _m117 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.NoWakeChargePolicyDecided", no_wake_charge_policy_decided, 0x2958, 0x1, true, 0xb0062b4f0b03e500, 1, uint32_t)
#define _m118 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.NetRateControlActive", net_rate_control_active, 0x2959, 0x1, true, 0xe4a407d3c89c8395, 1, uint32_t)
#define _m119 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.OwnNetRateControl", own_net_rate_control, 0x295a, 0x1, true, 0x8576cd5c2212216, 1, uint32_t)
#define _m120 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.IoRateControlActive", io_rate_control_active, 0x295b, 0x1, true, 0x9c7f653921c8ac01, 1, uint32_t)
#define _m121 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.OwnIoRateControl", own_io_rate_control, 0x295c, 0x1, true, 0x70a737f897714a41, 1, uint32_t)
#define _m122 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.DisallowNewProcesses", disallow_new_processes, 0x295d, 0x1, true, 0x8a60f71bc222dbbe, 1, uint32_t)
#define _m123 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.Silo", silo, 0x295e, 0x1, true, 0xcf5a67a1a90ec375, 1, uint32_t)
#define _m124 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct nt::process_energy_values_t*, struct nt::process_extended_energy_values_t*>), "_EJOB.EnergyValues", energy_values, 0x2980, 0x40, true, 0x9595d8f9c6afe01d)
#define _m125 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_EJOB.SharedCommitCharge", shared_commit_charge, 0x29c0, 0x40, true, 0xceb06743cc84f7f)
#define _m126 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.DiskIoAttributionUserRefCount", disk_io_attribution_user_ref_count, 0x2a00, 0x20, true, 0x211b70dae493c044)
#define _m127 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.DiskIoAttributionRefCount", disk_io_attribution_ref_count, 0x2a20, 0x20, true, 0x1adabc8fe738f138)
#define _m128 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EJOB.DiskIoAttributionContext", disk_io_attribution_context, 0x2a40, 0x40, true, 0x8182d6eb6c6205c1)
#define _m129 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t*), "_EJOB.DiskIoAttributionOwnerJob", disk_io_attribution_owner_job, 0x2a40, 0x40, true, 0x7b9f4c44c85bf92c)
#define _m130 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::job_rate_control_header_t), "_EJOB.IoRateControlHeader", io_rate_control_header, 0x2a80, 0x40, true, 0x4a2405ae9c9e343c)
#define _m131 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ps::io_control_entry_t), "_EJOB.GlobalIoControl", global_io_control, 0x2bc0, 0xc0, true, 0x11846ae6d84bd302)
#define _m132 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_EJOB.IoControlStateLock", io_control_state_lock, 0x2d80, 0x20, true, 0xfdacb7824411ccb0)
#define _m133 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::rb_tree_t), "_EJOB.VolumeIoControlTree", volume_io_control_tree, 0x2dc0, 0x80, true, 0x7511a8fe9abb1fd4)
#define _m134 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.IoRateOverQuotaHistory", io_rate_over_quota_history, 0x2e40, 0x40, true, 0x7353da8b53c87491)
#define _m135 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.IoRateCurrentGeneration", io_rate_current_generation, 0x2e80, 0x20, true, 0x5d9f828e8da80ebc)
#define _m136 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.IoRateLastQueryGeneration", io_rate_last_query_generation, 0x2ea0, 0x20, true, 0xfe5024b622c66ca9)
#define _m137 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.IoRateGenerationLength", io_rate_generation_length, 0x2ec0, 0x20, true, 0x3db3c555c59243fb)
#define _m138 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.IoRateOverQuotaNotifySequenceId", io_rate_over_quota_notify_sequence_id, 0x2ee0, 0x20, true, 0xc65a2f4006cfefcd)
#define _m139 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_EJOB.IoControlLock", io_control_lock, 0x2f40, 0x40, true, 0x276d44d312bb0d4b)
#define _m140 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.SiloHardReferenceCount", silo_hard_reference_count, 0x2f80, 0x40, true, 0x1aac8b08a8beb815)
#define _m141 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_EJOB.RundownWorkItem", rundown_work_item, 0x2fc0, 0x0, true, 0x6b7dc2c8ca45eae8)
#define _m142 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_EJOB.ContainerTelemetryId", container_telemetry_id, 0x2740, 0x80, true, 0xc83ce0fe461cc0d0)
#define _m143 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.ContainerTelemetryIdSet", container_telemetry_id_set, 0x295f, 0x1, true, 0x56cb9a951a1248ef, 1, uint32_t)
#define _m144 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.JobFlags2", job_flags2, 0x2960, 0x20, true, 0x952e4af973164120)
#define _m145 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.ParentLocked", parent_locked, 0x2960, 0x1, true, 0x861de7f2f0f259a8, 1, uint32_t)
#define _m146 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.EnableUsermodeSiloThreadImpersonation", enable_usermode_silo_thread_impersonation, 0x2961, 0x1, true, 0xeda115d38a12df6f, 1, uint32_t)
#define _m147 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EJOB.DisallowUsermodeSiloThreadImpersonation", disallow_usermode_silo_thread_impersonation, 0x2962, 0x1, true, 0x5f844e00936538b7, 1, uint32_t)
#define _m148 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.LastThrottledIoTime", last_throttled_io_time, 0x2f00, 0x40, true, 0x326d3c78faf790f6)
#define _m149 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EJOB.PartitionObject", partition_object, 0x30c0, 0x40, true, 0x3219485207b616a3)
#define _m150 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t*), "_EJOB.PartitionOwnerJob", partition_owner_job, 0x3100, 0x40, true, 0x1d0f747bbd6d80a7)
#define _m151 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::jobobject_energy_tracking_state_t), "_EJOB.EnergyTrackingState", energy_tracking_state, 0x3140, 0x40, true, 0x45639f7231a5fd9d)
#define _m152 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.KernelWaitTime", kernel_wait_time, 0x3180, 0x40, true, 0x5201cd39b678b1dc)
#define _m153 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.UserWaitTime", user_wait_time, 0x31c0, 0x40, true, 0x73344a6280445730)
#define _m154 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.EffectiveIoPriorityLimit", effective_io_priority_limit, 0x0, 0x0, false, 0xabb5251d6b07717)
#define _m155 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.IoPriorityLimit", io_priority_limit, 0x0, 0x0, false, 0x5aed63276a9e615d)
#define _m156 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.EffectivePagePriorityLimit", effective_page_priority_limit, 0x0, 0x0, false, 0xea900fb813576afa)
#define _m157 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.PagePriorityLimit", page_priority_limit, 0x0, 0x0, false, 0xfcae41a38fa2918e)
#define _m158 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.OwnedHighEdgeFilters", owned_high_edge_filters, 0x0, 0x0, false, 0x4b017e8a462ad312)
#define _m159 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t*), "_EJOB.ParentSilo", parent_silo, 0x0, 0x0, false, 0xe78b808475b82b7)
#define _m160 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EJOB.TimerListLock", timer_list_lock, 0x0, 0x0, false, 0xd310b4d9c51a1a71)
#define _m161 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EJOB.TimerListHead", timer_list_head, 0x0, 0x0, false, 0xd3ea68a59fa91e2f)
#define _m162 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EJOB.EffectiveHighEdgeFilters", effective_high_edge_filters, 0x0, 0x0, false, 0x1d0dfac5826407b4)
#define _m163 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t volatile*), "_EJOB.WakeRoot", wake_root, 0x0, 0x0, false, 0x6aa33c43598fcd19)
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
#define _m042
#define _m043
#define _m044
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
#define _m068
#define _m069
#define _m070
#define _m071
#define _m072
#define _m073
#define _m074
#define _m075
#define _m076
#define _m077
#define _m078
#define _m079
#define _m080
#define _m081
#define _m082
#define _m083
#define _m084
#define _m085
#define _m086
#define _m087
#define _m088
#define _m089
#define _m090
#define _m091
#define _m092
#define _m093
#define _m094
#define _m095
#define _m096
#define _m097
#define _m098
#define _m099
#define _m100
#define _m101
#define _m102
#define _m103
#define _m104
#define _m105
#define _m106
#define _m107
#define _m108
#define _m109
#define _m110
#define _m111
#define _m112
#define _m113
#define _m114
#define _m115
#define _m116
#define _m117
#define _m118
#define _m119
#define _m120
#define _m121
#define _m122
#define _m123
#define _m124
#define _m125
#define _m126
#define _m127
#define _m128
#define _m129
#define _m130
#define _m131
#define _m132
#define _m133
#define _m134
#define _m135
#define _m136
#define _m137
#define _m138
#define _m139
#define _m140
#define _m141
#define _m142
#define _m143
#define _m144
#define _m145
#define _m146
#define _m147
#define _m148
#define _m149
#define _m150
#define _m151
#define _m152
#define _m153
#define _m154
#define _m155
#define _m156
#define _m157
#define _m158
#define _m159
#define _m160
#define _m161
#define _m162
#define _m163
#endif