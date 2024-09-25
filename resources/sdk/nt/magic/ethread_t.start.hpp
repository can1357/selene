#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t), "_ETHREAD.Tcb", tcb, 0x0, 0x80, true, 0x57c5bba1ea0b006b)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ETHREAD.CreateTime", create_time, 0x2180, 0x40, true, 0x32a5a4585187abcf)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ETHREAD.ExitTime", exit_time, 0x21c0, 0x40, true, 0xf07cb47a675d8520)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ETHREAD.KeyedWaitChain", keyed_wait_chain, 0x21c0, 0x80, true, 0x3e143ba993ba26b5)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ETHREAD.PostBlockList", post_block_list, 0x2240, 0x80, true, 0x53be308f3406645)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETHREAD.ForwardLinkShadow", forward_link_shadow, 0x2240, 0x40, true, 0xf5bebdccee8d79cf)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETHREAD.StartAddress", start_address, 0x2280, 0x40, true, 0x697c97d135f97ff7)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::termination_port_t*), "_ETHREAD.TerminationPort", termination_port, 0x22c0, 0x40, true, 0x1f49dd720030b970)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_ETHREAD.ReaperLink", reaper_link, 0x22c0, 0x40, true, 0xf8b2a111b246ee83)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETHREAD.KeyedWaitValue", keyed_wait_value, 0x22c0, 0x40, true, 0x72f58c16c773df39)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETHREAD.ActiveTimerListLock", active_timer_list_lock, 0x2300, 0x40, true, 0x949cb50e9618ff45)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ETHREAD.ActiveTimerListHead", active_timer_list_head, 0x2340, 0x80, true, 0x14db90969689b605)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::client_id_t), "_ETHREAD.Cid", cid, 0x23c0, 0x80, true, 0xa0000a6faea4a96e)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ksemaphore_t), "_ETHREAD.KeyedWaitSemaphore", keyed_wait_semaphore, 0x2440, 0x0, true, 0xdeec62d415767e1d)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ksemaphore_t), "_ETHREAD.AlpcWaitSemaphore", alpc_wait_semaphore, 0x2440, 0x0, true, 0x6a3a56599f35c617)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ps::client_security_context_t), "_ETHREAD.ClientSecurity", client_security, 0x2540, 0x40, true, 0xcd64b1f55d5acea8)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ETHREAD.IrpList", irp_list, 0x2580, 0x80, true, 0x9ad13229f12020f7)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETHREAD.TopLevelIrp", top_level_irp, 0x2600, 0x40, true, 0x4d5772e22077f77)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_ETHREAD.DeviceToVerify", device_to_verify, 0x2640, 0x40, true, 0xa3d678dd6ada71e7)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETHREAD.Win32StartAddress", win32_start_address, 0x2680, 0x40, true, 0xd05f9e39dc353395)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETHREAD.ChargeOnlySession", charge_only_session, 0x26c0, 0x40, true, 0xe991d1cddc618016)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETHREAD.LegacyPowerObject", legacy_power_object, 0x2700, 0x40, true, 0xb148d86bda076153)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ETHREAD.ThreadListEntry", thread_list_entry, 0x2740, 0x80, true, 0x86f2eb78e07f9708)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::rundown_ref_t), "_ETHREAD.RundownProtect", rundown_protect, 0x27c0, 0x40, true, 0x7d3c92a2a780e46a)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_ETHREAD.ThreadLock", thread_lock, 0x2800, 0x40, true, 0xe7ee9982039b1d84)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETHREAD.ReadClusterSize", read_cluster_size, 0x2840, 0x20, true, 0x26d22ad0954912ee)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_ETHREAD.MmLockOrdering", mm_lock_ordering, 0x2860, 0x20, true, 0x3818c91b555f947a)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETHREAD.CrossThreadFlags", cross_thread_flags, 0x2880, 0x20, true, 0xaba7c2212a400f01)
#define _m028 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.Terminated", terminated, 0x2880, 0x1, true, 0x175b19119677697e, 1, uint32_t)
#define _m029 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.ThreadInserted", thread_inserted, 0x2881, 0x1, true, 0x8d0d23aef4839a0a, 1, uint32_t)
#define _m030 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.HideFromDebugger", hide_from_debugger, 0x2882, 0x1, true, 0x8b6adaf28454b886, 1, uint32_t)
#define _m031 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.ActiveImpersonationInfo", active_impersonation_info, 0x2883, 0x1, true, 0xaee979e0c40e1abb, 1, uint32_t)
#define _m032 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.HardErrorsAreDisabled", hard_errors_are_disabled, 0x2884, 0x1, true, 0xad085af42ed0b75b, 1, uint32_t)
#define _m033 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.BreakOnTermination", break_on_termination, 0x2885, 0x1, true, 0xbf2f6d45e97962f0, 1, uint32_t)
#define _m034 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.SkipCreationMsg", skip_creation_msg, 0x2886, 0x1, true, 0xad0780c395bca056, 1, uint32_t)
#define _m035 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.SkipTerminationMsg", skip_termination_msg, 0x2887, 0x1, true, 0xef3d5a16df43b4a8, 1, uint32_t)
#define _m036 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.CopyTokenOnOpen", copy_token_on_open, 0x2888, 0x1, true, 0x27c3cba0db259b67, 1, uint32_t)
#define _m037 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_ETHREAD.ThreadIoPriority", thread_io_priority, 0x2889, 0x3, true, 0x4fcbf3e3eca335e4, 3, uint32_t)
#define _m038 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_ETHREAD.ThreadPagePriority", thread_page_priority, 0x288c, 0x3, true, 0xaa7dc86ea10a6da5, 3, uint32_t)
#define _m039 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.RundownFail", rundown_fail, 0x288f, 0x1, true, 0x5c3ce8906b469735, 1, uint32_t)
#define _m040 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.UmsForceQueueTermination", ums_force_queue_termination, 0x2890, 0x1, true, 0x5f06cef0a0acb3a, 1, uint32_t)
#define _m041 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.IndirectCpuSets", indirect_cpu_sets, 0x2891, 0x1, true, 0x92c9d8c2bbfb86b8, 1, uint32_t)
#define _m042 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.DisableDynamicCodeOptOut", disable_dynamic_code_opt_out, 0x2892, 0x1, true, 0xd5e8cc0c62d20258, 1, uint32_t)
#define _m043 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.ExplicitCaseSensitivity", explicit_case_sensitivity, 0x2893, 0x1, true, 0xf2a3d6645a16c108, 1, uint32_t)
#define _m044 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_ETHREAD.ReservedCrossThreadFlags", reserved_cross_thread_flags, 0x2898, 0x8, true, 0x9853410e5908168c, 0, uint32_t)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETHREAD.SameThreadPassiveFlags", same_thread_passive_flags, 0x28a0, 0x20, true, 0x6db35aced9a663a3)
#define _m046 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.ActiveExWorker", active_ex_worker, 0x28a0, 0x1, true, 0xc7553689a2b8c2cf, 1, uint32_t)
#define _m047 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.MemoryMaker", memory_maker, 0x28a1, 0x1, true, 0x5c786c1f86b61db8, 1, uint32_t)
#define _m048 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_ETHREAD.StoreLockThread", store_lock_thread, 0x28a2, 0x2, true, 0xa5c5448ef0b4516c, 2, uint32_t)
#define _m049 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.ClonedThread", cloned_thread, 0x28a4, 0x1, true, 0x5cf6d22f743cc9d3, 1, uint32_t)
#define _m050 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.KeyedEventInUse", keyed_event_in_use, 0x28a5, 0x1, true, 0x7b8fd1ec0a2bb208, 1, uint32_t)
#define _m051 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.SelfTerminate", self_terminate, 0x28a6, 0x1, true, 0xb1e4323cb0e29eba, 1, uint32_t)
#define _m052 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.RespectIoPriority", respect_io_priority, 0x28a7, 0x1, true, 0x8c2b16924161fca6, 1, uint32_t)
#define _m053 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.ActivePageLists", active_page_lists, 0x28a8, 0x1, true, 0xb94c7add07aa26fe, 1, uint32_t)
#define _m054 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint23_t), "_ETHREAD.ReservedSameThreadPassiveFlags", reserved_same_thread_passive_flags, 0x28ac, 0x14, true, 0x624caf458f6e7c96, 0, uint32_t)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETHREAD.SameThreadApcFlags", same_thread_apc_flags, 0x28c0, 0x20, true, 0x39997950e7cbd976)
#define _m056 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.OwnsProcessAddressSpaceExclusive", owns_process_address_space_exclusive, 0x28c0, 0x1, true, 0x841d83d0732139c8, 1, uint8_t)
#define _m057 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.OwnsProcessAddressSpaceShared", owns_process_address_space_shared, 0x28c1, 0x1, true, 0x7ed526dacfc6c909, 1, uint8_t)
#define _m058 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.HardFaultBehavior", hard_fault_behavior, 0x28c2, 0x1, true, 0x97793123839ab318, 1, uint8_t)
#define _m059 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.StartAddressInvalid", start_address_invalid, 0x28c3, 0x1, true, 0xf36d8b161f10f481, 1, uint8_t)
#define _m060 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.EtwCalloutActive", etw_callout_active, 0x28c4, 0x1, true, 0x27a1b66e2316d440, 1, uint8_t)
#define _m061 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.SuppressSymbolLoad", suppress_symbol_load, 0x28c5, 0x1, true, 0x880ff9290478a800, 1, uint8_t)
#define _m062 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.Prefetching", prefetching, 0x28c6, 0x1, true, 0x505f4bd986ac20e4, 1, uint8_t)
#define _m063 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.OwnsVadExclusive", owns_vad_exclusive, 0x28c7, 0x1, true, 0x646da1cfb6315473, 1, uint8_t)
#define _m064 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.SystemPagePriorityActive", system_page_priority_active, 0x28c8, 0x1, true, 0xa318b52af7c3fba9, 1, uint8_t)
#define _m065 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_ETHREAD.SystemPagePriority", system_page_priority, 0x28c9, 0x3, true, 0x7ea71333a1304ac6, 3, uint8_t)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETHREAD.CacheManagerActive", cache_manager_active, 0x28e0, 0x8, true, 0xec6b9471ad631189)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETHREAD.DisablePageFaultClustering", disable_page_fault_clustering, 0x28e8, 0x8, true, 0x7bebfc626628d8c4)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETHREAD.ActiveFaultCount", active_fault_count, 0x28f0, 0x8, true, 0x4254992b791b724c)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETHREAD.LockOrderState", lock_order_state, 0x28f8, 0x8, true, 0x5731d19c455f123b)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETHREAD.AlpcMessageId", alpc_message_id, 0x2940, 0x40, true, 0x7c45734645f210cf)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETHREAD.AlpcMessage", alpc_message, 0x2980, 0x40, true, 0xe4541fc3beb086ce)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETHREAD.AlpcReceiveAttributeSet", alpc_receive_attribute_set, 0x2980, 0x20, true, 0xeafc7835953e58f7)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ETHREAD.AlpcWaitListEntry", alpc_wait_list_entry, 0x29c0, 0x80, true, 0x978f5b3471e51ee9)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETHREAD.ExitStatus", exit_status, 0x2a40, 0x20, true, 0xde5a3463e4a80695)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETHREAD.CacheManagerCount", cache_manager_count, 0x2a60, 0x20, true, 0x3cb1f3d6e7acf8dd)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETHREAD.IoBoostCount", io_boost_count, 0x2a80, 0x20, true, 0x32422bb86ad359b8)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETHREAD.IoQoSBoostCount", io_qo_s_boost_count, 0x2aa0, 0x20, true, 0x5ada19f964fe7ce2)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETHREAD.IoQoSThrottleCount", io_qo_s_throttle_count, 0x2ac0, 0x20, true, 0xb1a0dbc10e8784a2)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETHREAD.KernelStackReference", kernel_stack_reference, 0x2ae0, 0x20, true, 0x5c0b37aac984fe73)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ETHREAD.BoostList", boost_list, 0x2b00, 0x80, true, 0x8de875e464917caf)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ETHREAD.DeboostList", deboost_list, 0x2b80, 0x80, true, 0x280bf1cb06b79f2c)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETHREAD.BoostListLock", boost_list_lock, 0x2c00, 0x40, true, 0xd58727bdc6a5cc12)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETHREAD.IrpListLock", irp_list_lock, 0x2c40, 0x40, true, 0x4fb5ed0e121d7059)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETHREAD.ReservedForSynchTracking", reserved_for_synch_tracking, 0x2c80, 0x40, true, 0x890499245a3582c6)
#define _m085 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_ETHREAD.CmCallbackListHead", cm_callback_list_head, 0x2cc0, 0x40, true, 0x2e4b02392382873d)
#define _m086 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_ETHREAD.ActivityId", activity_id, 0x2d00, 0x40, true, 0x3c0696a8d64afed5)
#define _m087 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_ETHREAD.SeLearningModeListHead", se_learning_mode_list_head, 0x2d40, 0x40, true, 0x65f58be0e15d3bed)
#define _m088 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETHREAD.VerifierContext", verifier_context, 0x2d80, 0x40, true, 0x17d23ebd48b99ce7)
#define _m089 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETHREAD.AdjustedClientToken", adjusted_client_token, 0x2dc0, 0x40, true, 0xc6742ff7799c1d19)
#define _m090 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETHREAD.WorkOnBehalfThread", work_on_behalf_thread, 0x2e00, 0x40, true, 0x7b3c8727c349a95d)
#define _m091 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ps::property_set_t), "_ETHREAD.PropertySet", property_set, 0x2e40, 0xc0, true, 0xad98354e151b01c9)
#define _m092 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETHREAD.PicoContext", pico_context, 0x2f00, 0x40, true, 0xe53da3a9dd1e9ac4)
#define _m093 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETHREAD.UserFsBase", user_fs_base, 0x2f40, 0x40, true, 0x44185c46cc632a5b)
#define _m094 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETHREAD.UserGsBase", user_gs_base, 0x2f80, 0x40, true, 0xded0ec2fd200ccaf)
#define _m095 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::thread_energy_values_t*), "_ETHREAD.EnergyValues", energy_values, 0x2fc0, 0x40, true, 0x5bde057048e7b7db)
#define _m096 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETHREAD.SelectedCpuSets", selected_cpu_sets, 0x3000, 0x40, true, 0xcd90d9bb1baef289)
#define _m097 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "_ETHREAD.SelectedCpuSetsIndirect", selected_cpu_sets_indirect, 0x3000, 0x40, true, 0x354dabd65f910539)
#define _m098 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t*), "_ETHREAD.Silo", silo, 0x3040, 0x40, true, 0x70e20b3bf66736a3)
#define _m099 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_ETHREAD.ThreadName", thread_name, 0x3080, 0x40, true, 0x55008d07fecee03)
#define _m100 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::context*), "_ETHREAD.SetContextState", set_context_state, 0x30c0, 0x40, true, 0x6dbe23d01c64dd3e)
#define _m101 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.PicoNotifyExit", pico_notify_exit, 0x2894, 0x1, true, 0x91ceadfefd7b3abe, 1, uint32_t)
#define _m102 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.DbgWerUserReportActive", dbg_wer_user_report_active, 0x2895, 0x1, true, 0x1bc5fc5d40e57fb5, 1, uint32_t)
#define _m103 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.ForcedSelfTrimActive", forced_self_trim_active, 0x2896, 0x1, true, 0xaf2ddb8290657d8d, 1, uint32_t)
#define _m104 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.SamplingCoverage", sampling_coverage, 0x2897, 0x1, true, 0xbacee74733c41d99, 1, uint32_t)
#define _m105 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.SecureContext", secure_context, 0x28a9, 0x1, true, 0x962150c4ead324d2, 1, uint32_t)
#define _m106 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.ZeroPageThread", zero_page_thread, 0x28aa, 0x1, true, 0x6432af38aca42817, 1, uint32_t)
#define _m107 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.WorkloadClass", workload_class, 0x28ab, 0x1, true, 0xe66cc270bb96c41e, 1, uint32_t)
#define _m108 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.AllowUserWritesToExecutableMemory", allow_user_writes_to_executable_memory, 0x28cc, 0x1, true, 0x68f31849ba820de1, 1, uint8_t)
#define _m109 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.AllowKernelWritesToExecutableMemory", allow_kernel_writes_to_executable_memory, 0x28cd, 0x1, true, 0xf52da854c4030adb, 1, uint8_t)
#define _m110 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.OwnsVadShared", owns_vad_shared, 0x28ce, 0x1, true, 0x822c88012f59f423, 1, uint8_t)
#define _m111 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETHREAD.PerformanceCountLowReserved", performance_count_low_reserved, 0x2900, 0x20, true, 0x4bb4be615a0a598c)
#define _m112 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETHREAD.PerformanceCountHighReserved", performance_count_high_reserved, 0x2920, 0x20, true, 0x14e8ba9a90175417)
#define _m113 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETHREAD.LastExpectedRunTime", last_expected_run_time, 0x3100, 0x20, true, 0x246e0c5083e25a5a)
#define _m114 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETHREAD.HeapData", heap_data, 0x3120, 0x20, true, 0xa30fa5919c78abce)
#define _m115 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ETHREAD.OwnerEntryListHead", owner_entry_list_head, 0x3140, 0x80, true, 0x396f38da26eb3208)
#define _m116 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETHREAD.DisownedOwnerEntryListLock", disowned_owner_entry_list_lock, 0x31c0, 0x40, true, 0x40d5cd074efaa147)
#define _m117 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ETHREAD.DisownedOwnerEntryListHead", disowned_owner_entry_list_head, 0x3200, 0x80, true, 0x3e66a4474c74c996)
#define _m118 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::klock_entry_t, 6>), "_ETHREAD.LockEntries", lock_entries, 0x3280, 0x0, true, 0x916c95288797d828)
#define _m119 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETHREAD.CmDbgInfo", cm_dbg_info, 0x4480, 0x40, true, 0x1176d7975694f133)
#define _m120 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.GenerateDumpOnBadHandleAccess", generate_dump_on_bad_handle_access, 0x0, 0x0, false, 0x546a49b40c669b2e, 1, uint32_t)
#define _m121 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.SessionAttachActive", session_attach_active, 0x0, 0x0, false, 0xdf4e71fcd8228c4b, 1, uint8_t)
#define _m122 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETHREAD.PasidMsrValid", pasid_msr_valid, 0x0, 0x0, false, 0xf80a78d618eb18ba, 1, uint8_t)
#define _m123 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETHREAD.LastSoftParkElectionQos", last_soft_park_election_qos, 0x0, 0x0, false, 0xfd38c0370e63f47d)
#define _m124 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETHREAD.LastSoftParkElectionWorkloadType", last_soft_park_election_workload_type, 0x0, 0x0, false, 0xcc7f5a2a35827324)
#define _m125 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETHREAD.LastSoftParkElectionRunningType", last_soft_park_election_running_type, 0x0, 0x0, false, 0x735483f06cf5aed3)
#define _m126 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETHREAD.CmThreadInfo", cm_thread_info, 0x0, 0x0, false, 0xb1710c9d976661e2)
#define _m127 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETHREAD.FlsData", fls_data, 0x0, 0x0, false, 0xf6113a679cec76dc)
#define _m128 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETHREAD.LastSoftParkElectionRunTime", last_soft_park_election_run_time, 0x0, 0x0, false, 0x2555ba7713954927)
#define _m129 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETHREAD.LastSoftParkElectionGeneration", last_soft_park_election_generation, 0x0, 0x0, false, 0x644ff99ae9283a60)
#define _m130 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETHREAD.ReadyTime", ready_time, 0x0, 0x0, false, 0x4fe1ca73d5b4a20c)
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
#endif