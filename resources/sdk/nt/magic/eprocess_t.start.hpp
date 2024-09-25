#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kprocess_t), "_EPROCESS.Pcb", pcb, 0x0, 0xc0, true, 0xaa1560eee532fcfb)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_EPROCESS.ProcessLock", process_lock, 0x21c0, 0x40, true, 0xd95b620d1460c6a4)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPROCESS.UniqueProcessId", unique_process_id, 0x2200, 0x40, true, 0x9f91945ae8b71841)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EPROCESS.ActiveProcessLinks", active_process_links, 0x2240, 0x80, true, 0xc03755c277094a7d)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::rundown_ref_t), "_EPROCESS.RundownProtect", rundown_protect, 0x22c0, 0x40, true, 0xee59c75771c32c7a)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EPROCESS.Flags2", flags2, 0x2300, 0x20, true, 0x2171a4ab2d60c12d)
#define _m006 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.JobNotReallyActive", job_not_really_active, 0x2300, 0x1, true, 0x68ea7998c6e3ea8, 1, uint32_t)
#define _m007 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.AccountingFolded", accounting_folded, 0x2301, 0x1, true, 0xaaa9cdd7ba17cc2f, 1, uint32_t)
#define _m008 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.NewProcessReported", new_process_reported, 0x2302, 0x1, true, 0x9a2656e8087b88fb, 1, uint32_t)
#define _m009 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.ExitProcessReported", exit_process_reported, 0x2303, 0x1, true, 0x909072195b651562, 1, uint32_t)
#define _m010 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.ReportCommitChanges", report_commit_changes, 0x2304, 0x1, true, 0x24b818005bc021ae, 1, uint32_t)
#define _m011 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.LastReportMemory", last_report_memory, 0x2305, 0x1, true, 0x671323a142a7d91d, 1, uint32_t)
#define _m012 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.ForceWakeCharge", force_wake_charge, 0x2306, 0x1, true, 0xbd769fff9317687d, 1, uint32_t)
#define _m013 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.CrossSessionCreate", cross_session_create, 0x2307, 0x1, true, 0x9f71c01d4ebc9164, 1, uint32_t)
#define _m014 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.NeedsHandleRundown", needs_handle_rundown, 0x2308, 0x1, true, 0x158b2d863694be12, 1, uint32_t)
#define _m015 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.RefTraceEnabled", ref_trace_enabled, 0x2309, 0x1, true, 0xdf3aa07954420917, 1, uint32_t)
#define _m016 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.EmptyJobEvaluated", empty_job_evaluated, 0x230b, 0x1, true, 0xa9d2e5c810c0f1c6, 1, uint32_t)
#define _m017 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_EPROCESS.DefaultPagePriority", default_page_priority, 0x230c, 0x3, true, 0x2c0ec34538abf67e, 3, uint32_t)
#define _m018 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.PrimaryTokenFrozen", primary_token_frozen, 0x230f, 0x1, true, 0xb99410aa5ebab2b, 1, uint32_t)
#define _m019 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.ProcessVerifierTarget", process_verifier_target, 0x2310, 0x1, true, 0x8180567f590794b2, 1, uint32_t)
#define _m020 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.AffinityPermanent", affinity_permanent, 0x2312, 0x1, true, 0x4b9612824b3996fb, 1, uint32_t)
#define _m021 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.AffinityUpdateEnable", affinity_update_enable, 0x2313, 0x1, true, 0x49ee219d2f55e8eb, 1, uint32_t)
#define _m022 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.PropagateNode", propagate_node, 0x2314, 0x1, true, 0xf4b19f3d97ee0ac9, 1, uint32_t)
#define _m023 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.ExplicitAffinity", explicit_affinity, 0x2315, 0x1, true, 0x7b6471ec69c3510c, 1, uint32_t)
#define _m024 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_EPROCESS.ProcessExecutionState", process_execution_state, 0x2316, 0x2, true, 0xb27252924fa1ced2, 2, uint32_t)
#define _m025 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_EPROCESS.ProcessStateChangeRequest", process_state_change_request, 0x231c, 0x2, true, 0x5bc2e98d8417ed4c, 2, uint32_t)
#define _m026 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.ProcessStateChangeInProgress", process_state_change_in_progress, 0x231e, 0x1, true, 0x9bae125222df7ea1, 1, uint32_t)
#define _m027 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.InPrivate", in_private, 0x231f, 0x1, true, 0x2362650897f4bdb7, 1, uint32_t)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EPROCESS.Flags", flags, 0x2320, 0x20, true, 0x1e1454ee7ca94339)
#define _m029 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.CreateReported", create_reported, 0x2320, 0x1, true, 0x22147a07c30f330d, 1, uint32_t)
#define _m030 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.NoDebugInherit", no_debug_inherit, 0x2321, 0x1, true, 0x8e5e87454b66ae80, 1, uint32_t)
#define _m031 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.ProcessExiting", process_exiting, 0x2322, 0x1, true, 0x724c00f2800bfec, 1, uint32_t)
#define _m032 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.ProcessDelete", process_delete, 0x2323, 0x1, true, 0x1c6f409425771c43, 1, uint32_t)
#define _m033 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.VmDeleted", vm_deleted, 0x2325, 0x1, true, 0x10668d590c04924e, 1, uint32_t)
#define _m034 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.OutswapEnabled", outswap_enabled, 0x2326, 0x1, true, 0xbb8a8b305a07619e, 1, uint32_t)
#define _m035 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.Outswapped", outswapped, 0x2327, 0x1, true, 0x3a54718c2c7fd294, 1, uint32_t)
#define _m036 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.FailFastOnCommitFail", fail_fast_on_commit_fail, 0x2328, 0x1, true, 0xcb1611febd84c57f, 1, uint32_t)
#define _m037 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.Wow64VaSpace4Gb", wow64_va_space4_gb, 0x2329, 0x1, true, 0xcf288902180190f7, 1, uint32_t)
#define _m038 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_EPROCESS.AddressSpaceInitialized", address_space_initialized, 0x232a, 0x2, true, 0xf243168042eef4f3, 2, uint32_t)
#define _m039 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.SetTimerResolution", set_timer_resolution, 0x232c, 0x1, true, 0xf504914525b514e, 1, uint32_t)
#define _m040 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.BreakOnTermination", break_on_termination, 0x232d, 0x1, true, 0x2cb63fe9eed1a867, 1, uint32_t)
#define _m041 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.DeprioritizeViews", deprioritize_views, 0x232e, 0x1, true, 0xbe2bc5af135593ea, 1, uint32_t)
#define _m042 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.WriteWatch", write_watch, 0x232f, 0x1, true, 0xebeb493c7fd4873d, 1, uint32_t)
#define _m043 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.ProcessInSession", process_in_session, 0x2330, 0x1, true, 0xcaf9d0654fbaf387, 1, uint32_t)
#define _m044 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.OverrideAddressSpace", override_address_space, 0x2331, 0x1, true, 0x3a4734658ad4675f, 1, uint32_t)
#define _m045 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.HasAddressSpace", has_address_space, 0x2332, 0x1, true, 0xd62bc404cf068fc5, 1, uint32_t)
#define _m046 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.LaunchPrefetched", launch_prefetched, 0x2333, 0x1, true, 0xe3edb2e5d9291777, 1, uint32_t)
#define _m047 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.VmTopDown", vm_top_down, 0x2335, 0x1, true, 0x8e39c4ed73f11854, 1, uint32_t)
#define _m048 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.ImageNotifyDone", image_notify_done, 0x2336, 0x1, true, 0x798a06569092f334, 1, uint32_t)
#define _m049 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.PdeUpdateNeeded", pde_update_needed, 0x2337, 0x1, true, 0x4692aedf0629b058, 1, uint32_t)
#define _m050 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.VdmAllowed", vdm_allowed, 0x2338, 0x1, true, 0x1926d578b8f36330, 1, uint32_t)
#define _m051 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.ProcessRundown", process_rundown, 0x2339, 0x1, true, 0xc9dfcf3404d2b1d8, 1, uint32_t)
#define _m052 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.ProcessInserted", process_inserted, 0x233a, 0x1, true, 0x4e92c8b7fb1eacd5, 1, uint32_t)
#define _m053 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_EPROCESS.DefaultIoPriority", default_io_priority, 0x233b, 0x3, true, 0x753d588f4e563399, 3, uint32_t)
#define _m054 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.ProcessSelfDelete", process_self_delete, 0x233e, 0x1, true, 0xc5b35ef59f01c9c6, 1, uint32_t)
#define _m055 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.SetTimerResolutionLink", set_timer_resolution_link, 0x233f, 0x1, true, 0x1fac77918db4e9ad, 1, uint32_t)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EPROCESS.CreateTime", create_time, 0x2340, 0x40, true, 0xd543d87e5a62a51)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_EPROCESS.ProcessQuotaUsage", process_quota_usage, 0x2380, 0x80, true, 0x3fed41e443275c4b)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_EPROCESS.ProcessQuotaPeak", process_quota_peak, 0x2400, 0x80, true, 0x2d8e4c6d21836ce5)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS.PeakVirtualSize", peak_virtual_size, 0x2480, 0x40, true, 0x986c8d93e5bcf3d)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS.VirtualSize", virtual_size, 0x24c0, 0x40, true, 0xb432a3b7f4f8b9f4)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EPROCESS.SessionProcessLinks", session_process_links, 0x2500, 0x80, true, 0x1b34671f15112ced)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPROCESS.ExceptionPortData", exception_port_data, 0x2580, 0x40, true, 0x44ca48c447110dc1)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS.ExceptionPortValue", exception_port_value, 0x2580, 0x40, true, 0x1867c9a115db04d5)
#define _m064 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_EPROCESS.ExceptionPortState", exception_port_state, 0x2580, 0x3, true, 0xab5e7a84f4a2e126, 3, uint64_t)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::fast_ref_t), "_EPROCESS.Token", token, 0x25c0, 0x40, true, 0x113dfb9f038e4205)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_EPROCESS.AddressCreationLock", address_creation_lock, 0x2640, 0x40, true, 0x9f98927b688919f0)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_EPROCESS.PageTableCommitmentLock", page_table_commitment_lock, 0x2680, 0x40, true, 0x46d31dc4dd72dc08)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_EPROCESS.RotateInProgress", rotate_in_progress, 0x26c0, 0x40, true, 0xca0259d8fc26b5d6)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_EPROCESS.ForkInProgress", fork_in_progress, 0x2700, 0x40, true, 0xc51241715f9d732a)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t volatile*), "_EPROCESS.CommitChargeJob", commit_charge_job, 0x2740, 0x40, true, 0x8cae7bb02a1e3c37)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_EPROCESS.CloneRoot", clone_root, 0x2780, 0x40, true, 0x94349ac2b5e56dd5)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_EPROCESS.NumberOfPrivatePages", number_of_private_pages, 0x27c0, 0x40, true, 0xec691d5f80701ac1)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_EPROCESS.NumberOfLockedPages", number_of_locked_pages, 0x2800, 0x40, true, 0x320c1a475267403b)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPROCESS.Win32Process", win32_process, 0x2840, 0x40, true, 0x60bfe4eeacedea0a)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t volatile*), "_EPROCESS.Job", job, 0x2880, 0x40, true, 0x74a7d4929d341a45)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPROCESS.SectionObject", section_object, 0x28c0, 0x40, true, 0x5f5b7c6a29a11656)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPROCESS.SectionBaseAddress", section_base_address, 0x2900, 0x40, true, 0xe4c26863a86d470b)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EPROCESS.Cookie", cookie, 0x2940, 0x20, true, 0x5d6d3de67230b49e)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pagefault_history_t*), "_EPROCESS.WorkingSetWatch", working_set_watch, 0x2980, 0x40, true, 0xd929d88973df9299)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPROCESS.Win32WindowStation", win32_window_station, 0x29c0, 0x40, true, 0x3938010e21c5e1c7)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPROCESS.InheritedFromUniqueProcessId", inherited_from_unique_process_id, 0x2a00, 0x40, true, 0xd749a486874e81fb)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_EPROCESS.OwnerProcessId", owner_process_id, 0x2a40, 0x40, true, 0xb99c093308ca3978)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::peb_t*), "_EPROCESS.Peb", peb, 0x2a80, 0x40, true, 0xf3306b0965702b13)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mm::session_space_t*), "_EPROCESS.Session", session, 0x2ac0, 0x40, true, 0xf995b5b9e7248ae2)
#define _m085 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_quota_block_t*), "_EPROCESS.QuotaBlock", quota_block, 0x2b40, 0x40, true, 0x7e31541076458ac4)
#define _m086 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::handle_table_t*), "_EPROCESS.ObjectTable", object_table, 0x2b80, 0x40, true, 0x4797a336b5420545)
#define _m087 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPROCESS.DebugPort", debug_port, 0x2bc0, 0x40, true, 0xecefc03c6719e6ad)
#define _m088 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ewow64process_t*), "_EPROCESS.WoW64Process", wo_w64_process, 0x2c00, 0x40, true, 0x530e162776e97d58)
#define _m089 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<void*, struct ex::fast_ref_t>), "_EPROCESS.DeviceMap", device_map, 0x2c40, 0x40, true, 0x855aba19e16669aa)
#define _m090 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPROCESS.EtwDataSource", etw_data_source, 0x2c80, 0x40, true, 0x6753bd13f113392f)
#define _m091 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS.PageDirectoryPte", page_directory_pte, 0x2cc0, 0x40, true, 0x16d08b28c0fcb9d5)
#define _m092 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_EPROCESS.ImageFilePointer", image_file_pointer, 0x2d00, 0x40, true, 0xa1eea1b519ab59a7)
#define _m093 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 15>), "_EPROCESS.ImageFileName", image_file_name, 0x2d40, 0x78, true, 0x8695d76f3f360f9c)
#define _m094 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EPROCESS.PriorityClass", priority_class, 0x2db8, 0x8, true, 0x9d5a2d20dd4aff90)
#define _m095 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPROCESS.SecurityPort", security_port, 0x2dc0, 0x40, true, 0xdbbf54aa05ec54e3)
#define _m096 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct se::audit_process_creation_info_t), "_EPROCESS.SeAuditProcessCreationInfo", se_audit_process_creation_info, 0x2e00, 0x40, true, 0xb9ac6f623348233)
#define _m097 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EPROCESS.JobLinks", job_links, 0x2e40, 0x80, true, 0xb7408716f6acf4c7)
#define _m098 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPROCESS.HighestUserAddress", highest_user_address, 0x2ec0, 0x40, true, 0xf6e7e42a254d0033)
#define _m099 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EPROCESS.ThreadListHead", thread_list_head, 0x2f00, 0x80, true, 0x64f44700458c0561)
#define _m100 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_EPROCESS.ActiveThreads", active_threads, 0x2f80, 0x20, true, 0xa78537b9e013a135)
#define _m101 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EPROCESS.ImagePathHash", image_path_hash, 0x2fa0, 0x20, true, 0xb2f22ab5a9df112a)
#define _m102 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EPROCESS.DefaultHardErrorProcessing", default_hard_error_processing, 0x2fc0, 0x20, true, 0xa3f70ff07aa36bfa)
#define _m103 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EPROCESS.LastThreadExitStatus", last_thread_exit_status, 0x2fe0, 0x20, true, 0x1329461ffbef2b4f)
#define _m104 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::fast_ref_t), "_EPROCESS.PrefetchTrace", prefetch_trace, 0x3000, 0x40, true, 0xa7d933414bcb98c9)
#define _m105 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPROCESS.LockedPagesList", locked_pages_list, 0x3040, 0x40, true, 0xf0df28dea6f63ab)
#define _m106 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EPROCESS.ReadOperationCount", read_operation_count, 0x3080, 0x40, true, 0xb308d42bea1f61bc)
#define _m107 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EPROCESS.WriteOperationCount", write_operation_count, 0x30c0, 0x40, true, 0x89ca43babbefaad9)
#define _m108 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EPROCESS.OtherOperationCount", other_operation_count, 0x3100, 0x40, true, 0xbb73a0d0af2be6a5)
#define _m109 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EPROCESS.ReadTransferCount", read_transfer_count, 0x3140, 0x40, true, 0xadd932bc5ac2e75f)
#define _m110 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EPROCESS.WriteTransferCount", write_transfer_count, 0x3180, 0x40, true, 0xbb998acdfc051c40)
#define _m111 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EPROCESS.OtherTransferCount", other_transfer_count, 0x31c0, 0x40, true, 0xa653124c79091f05)
#define _m112 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS.CommitChargeLimit", commit_charge_limit, 0x3200, 0x40, true, 0xa77113f0749c2084)
#define _m113 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_EPROCESS.CommitCharge", commit_charge, 0x3240, 0x40, true, 0xe60e19fa95a51962)
#define _m114 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_EPROCESS.CommitChargePeak", commit_charge_peak, 0x3280, 0x40, true, 0xc5396b8ee975d78d)
#define _m115 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmsupport_full_t), "_EPROCESS.Vm", vm, 0x3400, 0x0, true, 0x801c906fd87bca21)
#define _m116 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EPROCESS.MmProcessLinks", mm_process_links, 0x3e00, 0x80, true, 0xa7c68590e1a27bdf)
#define _m117 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EPROCESS.ModifiedPageCount", modified_page_count, 0x3e80, 0x20, true, 0x7f31246d7c03cd2a)
#define _m118 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EPROCESS.ExitStatus", exit_status, 0x3ea0, 0x20, true, 0xe5240bf90a6a5795)
#define _m119 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_EPROCESS.VadRoot", vad_root, 0x3ec0, 0x40, true, 0x18d4d53858e08e07)
#define _m120 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPROCESS.VadHint", vad_hint, 0x3f00, 0x40, true, 0xc0e161149e919b24)
#define _m121 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS.VadCount", vad_count, 0x3f40, 0x40, true, 0xb1d4f1a84e94e8cc)
#define _m122 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_EPROCESS.VadPhysicalPages", vad_physical_pages, 0x3f80, 0x40, true, 0xd3aebaddba79ef17)
#define _m123 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS.VadPhysicalPagesLimit", vad_physical_pages_limit, 0x3fc0, 0x40, true, 0xb7d0eb55ca1ed4e9)
#define _m124 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::process_context_t), "_EPROCESS.AlpcContext", alpc_context, 0x4000, 0x0, true, 0xa2bfe156130b4c75)
#define _m125 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EPROCESS.TimerResolutionLink", timer_resolution_link, 0x4100, 0x80, true, 0xa415c927fdc978fa)
#define _m126 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct po::diag_stack_record_t*), "_EPROCESS.TimerResolutionStackRecord", timer_resolution_stack_record, 0x4180, 0x40, true, 0xb6f203bf6d0155a)
#define _m127 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EPROCESS.RequestedTimerResolution", requested_timer_resolution, 0x41c0, 0x20, true, 0x4f21cafe84d0fe01)
#define _m128 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EPROCESS.SmallestTimerResolution", smallest_timer_resolution, 0x41e0, 0x20, true, 0xa212ea2678be398f)
#define _m129 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EPROCESS.ExitTime", exit_time, 0x4200, 0x40, true, 0xc11a2334b01e56d6)
#define _m130 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct win::inverted_function_table_t*, struct nt::inverted_function_table_kernel_mode_t*>), "_EPROCESS.InvertedFunctionTable", inverted_function_table, 0x4240, 0x40, true, 0xa67c66b72ec591ab)
#define _m131 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_EPROCESS.InvertedFunctionTableLock", inverted_function_table_lock, 0x4280, 0x40, true, 0x9baff2cee4f94b9e)
#define _m132 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EPROCESS.ActiveThreadsHighWatermark", active_threads_high_watermark, 0x42c0, 0x20, true, 0xbc2728aba5ca2e90)
#define _m133 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EPROCESS.LargePrivateVadCount", large_private_vad_count, 0x42e0, 0x20, true, 0xfef1ed260f4e97fd)
#define _m134 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_EPROCESS.ThreadListLock", thread_list_lock, 0x4300, 0x40, true, 0x4d67e53ac2edcb46)
#define _m135 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPROCESS.WnfContext", wnf_context, 0x4340, 0x40, true, 0x606349d3e6172d4d)
#define _m136 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EPROCESS.SignatureLevel", signature_level, 0x43c0, 0x8, true, 0x892061912066d2b2)
#define _m137 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EPROCESS.SectionSignatureLevel", section_signature_level, 0x43c8, 0x8, true, 0x7837e7b79045e3c)
#define _m138 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ps::protection_t), "_EPROCESS.Protection", protection, 0x43d0, 0x8, true, 0x65bb413c2c31bad8)
#define _m139 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_EPROCESS.HangCount", hang_count, 0x43d8, 0x3, true, 0x8f34d08dfe2b3135, 0, uint8_t)
#define _m140 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EPROCESS.Flags3", flags3, 0x43e0, 0x20, true, 0xf4ab580a8820afc9)
#define _m141 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.Minimal", minimal, 0x43e0, 0x1, true, 0x3b9cb18828066da, 1, uint32_t)
#define _m142 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.ReplacingPageRoot", replacing_page_root, 0x43e1, 0x1, true, 0x8e0bb8b07b2b3a87, 1, uint32_t)
#define _m143 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.Crashed", crashed, 0x43e2, 0x1, true, 0x578f7d29b8774fc0, 1, uint32_t)
#define _m144 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.JobVadsAreTracked", job_vads_are_tracked, 0x43e3, 0x1, true, 0x264c8c31a605827, 1, uint32_t)
#define _m145 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.VadTrackingDisabled", vad_tracking_disabled, 0x43e4, 0x1, true, 0x47c755adcf0b9d21, 1, uint32_t)
#define _m146 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.AuxiliaryProcess", auxiliary_process, 0x43e5, 0x1, true, 0x4e682eda1a321e04, 1, uint32_t)
#define _m147 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.SubsystemProcess", subsystem_process, 0x43e6, 0x1, true, 0xc601d4b1d5f968c0, 1, uint32_t)
#define _m148 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.IndirectCpuSets", indirect_cpu_sets, 0x43e7, 0x1, true, 0xb5c0cc7c5789cdeb, 1, uint32_t)
#define _m149 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.RelinquishedCommit", relinquished_commit, 0x43e8, 0x1, true, 0x575e714909d2000, 1, uint32_t)
#define _m150 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.HighGraphicsPriority", high_graphics_priority, 0x43e9, 0x1, true, 0x1cb7b0d0d3256f1f, 1, uint32_t)
#define _m151 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.CommitFailLogged", commit_fail_logged, 0x43ea, 0x1, true, 0x6ed83d074c47c261, 1, uint32_t)
#define _m152 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.ReserveFailLogged", reserve_fail_logged, 0x43eb, 0x1, true, 0xfdf42a670d4e33e4, 1, uint32_t)
#define _m153 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.AddressPolicyFrozen", address_policy_frozen, 0x43ee, 0x1, true, 0x8b401fe0af57114a, 1, uint32_t)
#define _m154 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EPROCESS.DeviceAsid", device_asid, 0x4400, 0x20, true, 0x5e3d2da19f731edc)
#define _m155 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPROCESS.SvmData", svm_data, 0x4440, 0x40, true, 0xa13056630aced7bb)
#define _m156 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_EPROCESS.SvmProcessLock", svm_process_lock, 0x4480, 0x40, true, 0xcfe9e26b2e72b466)
#define _m157 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS.SvmLock", svm_lock, 0x44c0, 0x40, true, 0x2cdb7e8c9ceceabf)
#define _m158 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EPROCESS.SvmProcessDeviceListHead", svm_process_device_list_head, 0x4500, 0x80, true, 0xd20deca45f2ff169)
#define _m159 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS.LastFreezeInterruptTime", last_freeze_interrupt_time, 0x4580, 0x40, true, 0xe32de0133916a6bd)
#define _m160 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::process_disk_counters_t*), "_EPROCESS.DiskCounters", disk_counters, 0x45c0, 0x40, true, 0xc7c3a21fc13f8c3d)
#define _m161 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPROCESS.PicoContext", pico_context, 0x4600, 0x40, true, 0xa06ce718fd9b4401)
#define _m162 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EPROCESS.HighPriorityFaultsAllowed", high_priority_faults_allowed, 0x4700, 0x20, true, 0xa2619ed3b2ca1093)
#define _m163 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPROCESS.VmContext", vm_context, 0x4780, 0x40, true, 0x9d6338f628a54439)
#define _m164 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS.SequenceNumber", sequence_number, 0x47c0, 0x40, true, 0xcdf92f65225cab53)
#define _m165 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS.CreateInterruptTime", create_interrupt_time, 0x4800, 0x40, true, 0x109d1ee8d1a1291e)
#define _m166 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS.CreateUnbiasedInterruptTime", create_unbiased_interrupt_time, 0x4840, 0x40, true, 0x8d23bdbf8b094e1f)
#define _m167 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS.TotalUnbiasedFrozenTime", total_unbiased_frozen_time, 0x4880, 0x40, true, 0x269f81cecd3420f5)
#define _m168 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS.LastAppStateUpdateTime", last_app_state_update_time, 0x48c0, 0x40, true, 0x19d4b987c4660adb)
#define _m169 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint61_t), "_EPROCESS.LastAppStateUptime", last_app_state_uptime, 0x4900, 0x3d, true, 0xaff8e0665aa14512, 61, uint64_t)
#define _m170 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_EPROCESS.LastAppState", last_app_state, 0x493d, 0x3, true, 0xed359074e9eff5b0, 3, uint64_t)
#define _m171 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_EPROCESS.SharedCommitCharge", shared_commit_charge, 0x4940, 0x40, true, 0x1de671efa3bc944d)
#define _m172 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_EPROCESS.SharedCommitLock", shared_commit_lock, 0x4980, 0x40, true, 0xb9e4003dd720dbdd)
#define _m173 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EPROCESS.SharedCommitLinks", shared_commit_links, 0x49c0, 0x80, true, 0x89efaa6d6abde63d)
#define _m174 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS.AllowedCpuSets", allowed_cpu_sets, 0x4a40, 0x40, true, 0x4ab16c5ad5107eda)
#define _m175 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS.DefaultCpuSets", default_cpu_sets, 0x4a80, 0x40, true, 0xa1378071335e093e)
#define _m176 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "_EPROCESS.AllowedCpuSetsIndirect", allowed_cpu_sets_indirect, 0x4a40, 0x40, true, 0x2cd7dd023f5ff2fb)
#define _m177 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "_EPROCESS.DefaultCpuSetsIndirect", default_cpu_sets_indirect, 0x4a80, 0x40, true, 0xe536c9b18916099f)
#define _m178 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPROCESS.DiskIoAttribution", disk_io_attribution, 0x4ac0, 0x40, true, 0x1aba287fe8d37ab4)
#define _m179 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPROCESS.DxgProcess", dxg_process, 0x4b00, 0x40, true, 0x40413b22ec220bf1)
#define _m180 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS.SecurityDomain", security_domain, 0x4f00, 0x40, true, 0xb0c6d593b6bbb)
#define _m181 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.Background", background, 0x2334, 0x1, true, 0xe46409947b6889ed, 1, uint32_t)
#define _m182 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.PicoCreated", pico_created, 0x230a, 0x1, true, 0x3e4f0b30a5e4a6af, 1, uint32_t)
#define _m183 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.RestrictSetThreadContext", restrict_set_thread_context, 0x2311, 0x1, true, 0xb331584935a7c208, 1, uint32_t)
#define _m184 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.EnableReadVmLogging", enable_read_vm_logging, 0x2318, 0x1, true, 0xac5e03b398d026da, 1, uint32_t)
#define _m185 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.EnableWriteVmLogging", enable_write_vm_logging, 0x2319, 0x1, true, 0x742536c2b36b0634, 1, uint32_t)
#define _m186 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.FatalAccessTerminationRequested", fatal_access_termination_requested, 0x231a, 0x1, true, 0x22aa5af4488fac6c, 1, uint32_t)
#define _m187 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.DisableSystemAllowedCpuSet", disable_system_allowed_cpu_set, 0x231b, 0x1, true, 0x85c2f9d233741390, 1, uint32_t)
#define _m188 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.ManageExecutableMemoryWrites", manage_executable_memory_writes, 0x2324, 0x1, true, 0xb7b0ef3e72cb4102, 1, uint32_t)
#define _m189 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS.MmReserved", mm_reserved, 0x2600, 0x40, true, 0xdf5ef297ae54c670)
#define _m190 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t*), "_EPROCESS.ServerSilo", server_silo, 0x4380, 0x40, true, 0x37bb4908291ffa5d)
#define _m191 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_EPROCESS.GhostCount", ghost_count, 0x43db, 0x3, true, 0xb6188a82bae7eae4, 3, uint8_t)
#define _m192 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.PrefilterException", prefilter_exception, 0x43de, 0x1, true, 0xfb64044bc884650d, 1, uint8_t)
#define _m193 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.SystemProcess", system_process, 0x43ec, 0x1, true, 0xa03146cc5f5acc33, 1, uint32_t)
#define _m194 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.HideImageBaseAddresses", hide_image_base_addresses, 0x43ed, 0x1, true, 0x2bfb5b7153adc570, 1, uint32_t)
#define _m195 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.ProcessFirstResume", process_first_resume, 0x43ef, 0x1, true, 0x10cc389156f17673, 1, uint32_t)
#define _m196 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.ForegroundExternal", foreground_external, 0x43f0, 0x1, true, 0xa39313581903ea11, 1, uint32_t)
#define _m197 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.ForegroundSystem", foreground_system, 0x43f1, 0x1, true, 0xc194d4487c4bb63a, 1, uint32_t)
#define _m198 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.HighMemoryPriority", high_memory_priority, 0x43f2, 0x1, true, 0x75c3d8222279995c, 1, uint32_t)
#define _m199 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.EnableProcessSuspendResumeLogging", enable_process_suspend_resume_logging, 0x43f3, 0x1, true, 0xc20ab52cb7441b8c, 1, uint32_t)
#define _m200 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.EnableThreadSuspendResumeLogging", enable_thread_suspend_resume_logging, 0x43f4, 0x1, true, 0xe997f5bf166cdeb6, 1, uint32_t)
#define _m201 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.SecurityDomainChanged", security_domain_changed, 0x43f5, 0x1, true, 0x69350b616a0fea7e, 1, uint32_t)
#define _m202 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.SecurityFreezeComplete", security_freeze_complete, 0x43f6, 0x1, true, 0x4900376b62377ae, 1, uint32_t)
#define _m203 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.VmProcessorHost", vm_processor_host, 0x43f7, 0x1, true, 0xad60fca3678045b9, 1, uint32_t)
#define _m204 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.VmProcessorHostTransition", vm_processor_host_transition, 0x43f8, 0x1, true, 0x80ef7fb4c4eb14f2, 1, uint32_t)
#define _m205 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.AltSyscall", alt_syscall, 0x43f9, 0x1, true, 0xcef341703ee1fc3d, 1, uint32_t)
#define _m206 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.TimerResolutionIgnore", timer_resolution_ignore, 0x43fa, 0x1, true, 0x1e3cfe17ea92042d, 1, uint32_t)
#define _m207 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPROCESS.EnclaveTable", enclave_table, 0x4640, 0x40, true, 0x988829534d7bd7f0)
#define _m208 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS.EnclaveNumber", enclave_number, 0x4680, 0x40, true, 0x9220bb5a7f2d8134)
#define _m209 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_EPROCESS.EnclaveLock", enclave_lock, 0x46c0, 0x40, true, 0x288a853bf22ffd66)
#define _m210 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct po::process_energy_context_t*), "_EPROCESS.EnergyContext", energy_context, 0x4740, 0x40, true, 0xda7aa586b579205e)
#define _m211 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EPROCESS.Win32KFilterSet", win32k_filter_set, 0x4b40, 0x20, true, 0x2792b68a1ab88962)
#define _m212 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile union ps::interlocked_timer_delay_values_t), "_EPROCESS.ProcessTimerDelay", process_timer_delay, 0x4b80, 0x40, true, 0x4edda92874c39729)
#define _m213 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_EPROCESS.KTimerSets", k_timer_sets, 0x4bc0, 0x20, true, 0x85de22602f3d2796)
#define _m214 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_EPROCESS.KTimer2Sets", k_timer2_sets, 0x4be0, 0x20, true, 0xade77291df0a5489)
#define _m215 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_EPROCESS.ThreadTimerSets", thread_timer_sets, 0x4c00, 0x20, true, 0xa1fe97f96cd28674)
#define _m216 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS.VirtualTimerListLock", virtual_timer_list_lock, 0x4c40, 0x40, true, 0x7329617558e5dda3)
#define _m217 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EPROCESS.VirtualTimerListHead", virtual_timer_list_head, 0x4c80, 0x80, true, 0xec02e64ec9866376)
#define _m218 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::state_name_t), "_EPROCESS.WakeChannel", wake_channel, 0x4d00, 0x40, true, 0x803f60c8aff1dfc0)
#define _m219 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ps::process_wake_information_t), "_EPROCESS.WakeInfo", wake_info, 0x4d00, 0x80, true, 0x640d108971ba3e3f)
#define _m220 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EPROCESS.MitigationFlags", mitigation_flags, 0x4e80, 0x20, true, 0x594694ba52b5dde6)
#define _m221 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.ControlFlowGuardEnabled", control_flow_guard_enabled, 0x0, 0x1, true, 0x35b6a7c952bd6add, 1, uint32_t)
#define _m222 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.ControlFlowGuardExportSuppressionEnabled", control_flow_guard_export_suppression_enabled, 0x1, 0x1, true, 0xf5f1bd76ee215c5c, 1, uint32_t)
#define _m223 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.ControlFlowGuardStrict", control_flow_guard_strict, 0x2, 0x1, true, 0x4fdd7c4b6d1d4399, 1, uint32_t)
#define _m224 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.DisallowStrippedImages", disallow_stripped_images, 0x3, 0x1, true, 0xc634ebc40c8dbb5d, 1, uint32_t)
#define _m225 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.ForceRelocateImages", force_relocate_images, 0x4, 0x1, true, 0xfd715b048ca0d654, 1, uint32_t)
#define _m226 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.HighEntropyASLREnabled", high_entropy_aslr_enabled, 0x5, 0x1, true, 0xd3067e8668b0667d, 1, uint32_t)
#define _m227 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.StackRandomizationDisabled", stack_randomization_disabled, 0x6, 0x1, true, 0x687360ce8205acd4, 1, uint32_t)
#define _m228 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.ExtensionPointDisable", extension_point_disable, 0x7, 0x1, true, 0x587748d21429045, 1, uint32_t)
#define _m229 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.DisableDynamicCode", disable_dynamic_code, 0x8, 0x1, true, 0x57da7d5d3a1de49f, 1, uint32_t)
#define _m230 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.DisableDynamicCodeAllowOptOut", disable_dynamic_code_allow_opt_out, 0x9, 0x1, true, 0x47d39e254b03ed1b, 1, uint32_t)
#define _m231 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.DisableDynamicCodeAllowRemoteDowngrade", disable_dynamic_code_allow_remote_downgrade, 0xa, 0x1, true, 0x8365676fa61a34c7, 1, uint32_t)
#define _m232 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.AuditDisableDynamicCode", audit_disable_dynamic_code, 0xb, 0x1, true, 0x62d7e029a9aca2d9, 1, uint32_t)
#define _m233 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.DisallowWin32kSystemCalls", disallow_win32k_system_calls, 0xc, 0x1, true, 0xed0ef664869b9c8, 1, uint32_t)
#define _m234 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.AuditDisallowWin32kSystemCalls", audit_disallow_win32k_system_calls, 0xd, 0x1, true, 0x43c2faf3857d432a, 1, uint32_t)
#define _m235 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.EnableFilteredWin32kAPIs", enable_filtered_win32k_ap_is, 0xe, 0x1, true, 0xdd86ab3da43dd6e0, 1, uint32_t)
#define _m236 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.AuditFilteredWin32kAPIs", audit_filtered_win32k_ap_is, 0xf, 0x1, true, 0x205277788b05c483, 1, uint32_t)
#define _m237 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.DisableNonSystemFonts", disable_non_system_fonts, 0x10, 0x1, true, 0xc7d5ecc27c2c5983, 1, uint32_t)
#define _m238 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.AuditNonSystemFontLoading", audit_non_system_font_loading, 0x11, 0x1, true, 0x6aead6d6807f88, 1, uint32_t)
#define _m239 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.PreferSystem32Images", prefer_system32_images, 0x12, 0x1, true, 0x841dd583ab4629a7, 1, uint32_t)
#define _m240 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.ProhibitRemoteImageMap", prohibit_remote_image_map, 0x13, 0x1, true, 0x1828d55b0f07ea04, 1, uint32_t)
#define _m241 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.AuditProhibitRemoteImageMap", audit_prohibit_remote_image_map, 0x14, 0x1, true, 0x10c11a68edd7f454, 1, uint32_t)
#define _m242 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.ProhibitLowILImageMap", prohibit_low_il_image_map, 0x15, 0x1, true, 0xa229d77b6b20bfba, 1, uint32_t)
#define _m243 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.AuditProhibitLowILImageMap", audit_prohibit_low_il_image_map, 0x16, 0x1, true, 0xd7270884088cb1e3, 1, uint32_t)
#define _m244 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.SignatureMitigationOptIn", signature_mitigation_opt_in, 0x17, 0x1, true, 0xb33e359480668f6c, 1, uint32_t)
#define _m245 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.AuditBlockNonMicrosoftBinaries", audit_block_non_microsoft_binaries, 0x18, 0x1, true, 0x6fe835e2252cc64a, 1, uint32_t)
#define _m246 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.AuditBlockNonMicrosoftBinariesAllowStore", audit_block_non_microsoft_binaries_allow_store, 0x19, 0x1, true, 0xe6be9f9a1f709bb5, 1, uint32_t)
#define _m247 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.LoaderIntegrityContinuityEnabled", loader_integrity_continuity_enabled, 0x1a, 0x1, true, 0x5337e045d4e9529d, 1, uint32_t)
#define _m248 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.AuditLoaderIntegrityContinuity", audit_loader_integrity_continuity, 0x1b, 0x1, true, 0x505e1cb71d4be24c, 1, uint32_t)
#define _m249 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.EnableModuleTamperingProtection", enable_module_tampering_protection, 0x1c, 0x1, true, 0xf2cc01ddfffb1e1b, 1, uint32_t)
#define _m250 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.EnableModuleTamperingProtectionNoInherit", enable_module_tampering_protection_no_inherit, 0x1d, 0x1, true, 0x3a8392cf8f8d8866, 1, uint32_t)
#define _m251 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.RestrictIndirectBranchPrediction", restrict_indirect_branch_prediction, 0x1e, 0x1, true, 0xd1b1da066c107eea, 1, uint32_t)
#define _m252 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlagsValues.IsolateSecurityDomain", isolate_security_domain, 0x1f, 0x1, true, 0x9de6d5b7f69261cb, 1, uint32_t)
#define _m253 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_mitigation_flags_values_t), "_EPROCESS.MitigationFlagsValues", mitigation_flags_values, 0x4e80, 0x20, true, 0x647031f293ed6df5)
#define _m254 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EPROCESS.MitigationFlags2", mitigation_flags2, 0x4ea0, 0x20, true, 0x6cb2942b5b0ffaed)
#define _m255 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.EnableExportAddressFilter", enable_export_address_filter, 0x0, 0x1, true, 0xd88ab512aefe6d66, 1, uint32_t)
#define _m256 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.AuditExportAddressFilter", audit_export_address_filter, 0x1, 0x1, true, 0x5ee0b9a6eaf5aa5a, 1, uint32_t)
#define _m257 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.EnableExportAddressFilterPlus", enable_export_address_filter_plus, 0x2, 0x1, true, 0xf91ae59bfa268f83, 1, uint32_t)
#define _m258 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.AuditExportAddressFilterPlus", audit_export_address_filter_plus, 0x3, 0x1, true, 0xf4a88bf04c67bfa4, 1, uint32_t)
#define _m259 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.EnableRopStackPivot", enable_rop_stack_pivot, 0x4, 0x1, true, 0x8d2967371cfbd475, 1, uint32_t)
#define _m260 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.AuditRopStackPivot", audit_rop_stack_pivot, 0x5, 0x1, true, 0x1b45f8149a390472, 1, uint32_t)
#define _m261 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.EnableRopCallerCheck", enable_rop_caller_check, 0x6, 0x1, true, 0xe64e7a0f0f4eeaf5, 1, uint32_t)
#define _m262 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.AuditRopCallerCheck", audit_rop_caller_check, 0x7, 0x1, true, 0x6a8b909722b9e861, 1, uint32_t)
#define _m263 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.EnableRopSimExec", enable_rop_sim_exec, 0x8, 0x1, true, 0x87551f83b6b262e2, 1, uint32_t)
#define _m264 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.AuditRopSimExec", audit_rop_sim_exec, 0x9, 0x1, true, 0x9d20bc1afcd451e1, 1, uint32_t)
#define _m265 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.EnableImportAddressFilter", enable_import_address_filter, 0xa, 0x1, true, 0x66712d400ea50322, 1, uint32_t)
#define _m266 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.AuditImportAddressFilter", audit_import_address_filter, 0xb, 0x1, true, 0x344d8977716d6983, 1, uint32_t)
#define _m267 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.DisablePageCombine", disable_page_combine, 0xc, 0x1, true, 0xa3d978a583f4dfdb, 1, uint32_t)
#define _m268 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.SpeculativeStoreBypassDisable", speculative_store_bypass_disable, 0xd, 0x1, true, 0x90b7c06b97cb1ec3, 1, uint32_t)
#define _m269 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.CetUserShadowStacks", cet_user_shadow_stacks, 0xe, 0x1, true, 0xf32732a2b995551c, 1, uint32_t)
#define _m270 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.AuditCetUserShadowStacks", audit_cet_user_shadow_stacks, 0xf, 0x1, true, 0x1e36bb872f950386, 1, uint32_t)
#define _m271 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.AuditCetUserShadowStacksLogged", audit_cet_user_shadow_stacks_logged, 0x10, 0x1, true, 0xeda4ccdc10554dca, 1, uint32_t)
#define _m272 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.UserCetSetContextIpValidation", user_cet_set_context_ip_validation, 0x11, 0x1, true, 0xc43d4326f4a78edf, 1, uint32_t)
#define _m273 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.AuditUserCetSetContextIpValidation", audit_user_cet_set_context_ip_validation, 0x12, 0x1, true, 0x2e0e532a3a16e37c, 1, uint32_t)
#define _m274 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.AuditUserCetSetContextIpValidationLogged", audit_user_cet_set_context_ip_validation_logged, 0x13, 0x1, true, 0xd7f5d9df76c8f88e, 1, uint32_t)
#define _m275 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.CetUserShadowStacksStrictMode", cet_user_shadow_stacks_strict_mode, 0x14, 0x1, true, 0xb2597702386b1ee5, 1, uint32_t)
#define _m276 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.BlockNonCetBinaries", block_non_cet_binaries, 0x15, 0x1, true, 0x89d6cab74b888998, 1, uint32_t)
#define _m277 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.BlockNonCetBinariesNonEhcont", block_non_cet_binaries_non_ehcont, 0x16, 0x1, true, 0x16672b1903a18a9d, 1, uint32_t)
#define _m278 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.AuditBlockNonCetBinaries", audit_block_non_cet_binaries, 0x17, 0x1, true, 0xe5257543020eccc7, 1, uint32_t)
#define _m279 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.AuditBlockNonCetBinariesLogged", audit_block_non_cet_binaries_logged, 0x18, 0x1, true, 0x736505b651961058, 1, uint32_t)
#define _m280 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.CetDynamicApisOutOfProcOnly", cet_dynamic_apis_out_of_proc_only, 0x1e, 0x1, true, 0xb79044f5fb14cca7, 1, uint32_t)
#define _m281 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.UserCetSetContextIpValidationRelaxedMode", user_cet_set_context_ip_validation_relaxed_mode, 0x1f, 0x1, true, 0x2d6d71af483281f6, 1, uint32_t)
#define _m282 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.XtendedControlFlowGuard", xtended_control_flow_guard, 0x0, 0x0, false, 0xb0e1b8b600cc87ed, 1, uint32_t)
#define _m283 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.AuditXtendedControlFlowGuard", audit_xtended_control_flow_guard, 0x0, 0x0, false, 0x838ffc701ff49d9d, 1, uint32_t)
#define _m284 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.PointerAuthUserIp", pointer_auth_user_ip, 0x0, 0x0, false, 0x70dc28e548031029, 1, uint32_t)
#define _m285 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.AuditPointerAuthUserIp", audit_pointer_auth_user_ip, 0x0, 0x0, false, 0x7d242564d9232004, 1, uint32_t)
#define _m286 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags2Values.AuditPointerAuthUserIpLogged", audit_pointer_auth_user_ip_logged, 0x0, 0x0, false, 0xb6a42038ef548ca, 1, uint32_t)
#define _m287 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_mitigation_flags2_values_t), "_EPROCESS.MitigationFlags2Values", mitigation_flags2_values, 0x4ea0, 0x20, true, 0xb255ef000f23023d)
#define _m288 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPROCESS.PartitionObject", partition_object, 0x4ec0, 0x40, true, 0xe214d2e6ab75e48e)
#define _m289 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS.ParentSecurityDomain", parent_security_domain, 0x4f40, 0x40, true, 0xa25102f3a0442c1f)
#define _m290 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPROCESS.CoverageSamplerContext", coverage_sampler_context, 0x4f80, 0x40, true, 0xb03d50f6b4afed26)
#define _m291 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPROCESS.MmHotPatchContext", mm_hot_patch_context, 0x4fc0, 0x40, true, 0x8dfab4063bfe4934)
#define _m292 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_EPROCESS.DynamicEHContinuationTargetsTree", dynamic_eh_continuation_targets_tree, 0x5000, 0x40, true, 0x3b6a0f5cb7baad70)
#define _m293 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_EPROCESS.DynamicEHContinuationTargetsLock", dynamic_eh_continuation_targets_lock, 0x5040, 0x40, true, 0xa8630bd5f91ba49b)
#define _m294 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.DisallowUserTerminate", disallow_user_terminate, 0x43fb, 0x1, true, 0xa9a8fde4569abc0e, 1, uint32_t)
#define _m295 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ps::dynamic_enforced_address_ranges_t), "_EPROCESS.DynamicEnforcedCetCompatibleRanges", dynamic_enforced_cet_compatible_ranges, 0x5080, 0x80, true, 0x351a29e6f434279d)
#define _m296 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.DisableDynamicCode", disable_dynamic_code, 0x0, 0x0, false, 0xa993acaecd6d06f7, 1, uint32_t)
#define _m297 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.StackRandomizationDisabled", stack_randomization_disabled, 0x0, 0x0, false, 0x4ae937d7a15a8ca1, 1, uint32_t)
#define _m298 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.DisallowStrippedImages", disallow_stripped_images, 0x0, 0x0, false, 0xffcbab921a2ea30, 1, uint32_t)
#define _m299 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.HighEntropyASLREnabled", high_entropy_aslr_enabled, 0x0, 0x0, false, 0xfe7d9eeb2d7d285d, 1, uint32_t)
#define _m300 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.ExtensionPointDisable", extension_point_disable, 0x0, 0x0, false, 0xc2da60aa3e1fe6e1, 1, uint32_t)
#define _m301 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.ForceRelocateImages", force_relocate_images, 0x0, 0x0, false, 0x8cd803742f46c43d, 1, uint32_t)
#define _m302 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.DisallowWin32kSystemCalls", disallow_win32k_system_calls, 0x0, 0x0, false, 0xa1a57277105321da, 1, uint32_t)
#define _m303 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.ControlFlowGuardEnabled", control_flow_guard_enabled, 0x0, 0x0, false, 0xb2b3835da2841f18, 1, uint32_t)
#define _m304 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS.WorkingSetPage", working_set_page, 0x0, 0x0, false, 0x14ca2f2c2974898f)
#define _m305 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPROCESS.LdtInformation", ldt_information, 0x0, 0x0, false, 0x27b5b3443376b72d)
#define _m306 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EPROCESS.AweInfo", awe_info, 0x0, 0x0, false, 0x95f385bde63c1ac0)
#define _m307 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.DisableNonSystemFonts", disable_non_system_fonts, 0x0, 0x0, false, 0xd78cc81f26265fd9, 1, uint32_t)
#define _m308 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.AuditNonSystemFontLoading", audit_non_system_font_loading, 0x0, 0x0, false, 0xa593cb6b97735783, 1, uint32_t)
#define _m309 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.ProhibitRemoteImageMap", prohibit_remote_image_map, 0x0, 0x0, false, 0x6b93b107e97ce336, 1, uint32_t)
#define _m310 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.ProhibitLowILImageMap", prohibit_low_il_image_map, 0x0, 0x0, false, 0xd1da7a87c656bdc9, 1, uint32_t)
#define _m311 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.SignatureMitigationOptIn", signature_mitigation_opt_in, 0x0, 0x0, false, 0x98a2068ea0990fb7, 1, uint32_t)
#define _m312 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.DisableDynamicCodeAllowOptOut", disable_dynamic_code_allow_opt_out, 0x0, 0x0, false, 0xd6b0832d436b4089, 1, uint32_t)
#define _m313 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.EnableFilteredWin32kAPIs", enable_filtered_win32k_ap_is, 0x0, 0x0, false, 0xec8b4c5f55e39f06, 1, uint32_t)
#define _m314 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.AuditFilteredWin32kAPIs", audit_filtered_win32k_ap_is, 0x0, 0x0, false, 0x32bca49773f6558c, 1, uint32_t)
#define _m315 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.PreferSystem32Images", prefer_system32_images, 0x0, 0x0, false, 0xe48c04c08aa33db8, 1, uint32_t)
#define _m316 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.AutomaticallyOverrideChildProcessPolicy", automatically_override_child_process_policy, 0x0, 0x0, false, 0xb554e5b853a81a93, 1, uint32_t)
#define _m317 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.RestrictIndirectBranchPrediction", restrict_indirect_branch_prediction, 0x0, 0x0, false, 0xcedd6bc473094808, 1, uint32_t)
#define _m318 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EPROCESS.TrustletIdentity", trustlet_identity, 0x0, 0x0, false, 0x3e8be6663d67abfd)
#define _m319 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EPROCESS.KeepAliveCounter", keep_alive_counter, 0x0, 0x0, false, 0xe798b4ff5251f721)
#define _m320 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EPROCESS.NoWakeKeepAliveCounter", no_wake_keep_alive_counter, 0x0, 0x0, false, 0x149579f32ee93893)
#define _m321 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::process_energy_values_t*), "_EPROCESS.EnergyValues", energy_values, 0x0, 0x0, false, 0xa4094e297f594e0f)
#define _m322 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EPROCESS.ReadyTime", ready_time, 0x0, 0x0, false, 0x49df4c7bba64b7fa)
#define _m323 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.EnableProcessRemoteExecProtectVmLogging", enable_process_remote_exec_protect_vm_logging, 0x0, 0x0, false, 0x7d7c8e467e3df14b, 1, uint32_t)
#define _m324 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.EnableProcessLocalExecProtectVmLogging", enable_process_local_exec_protect_vm_logging, 0x0, 0x0, false, 0x5e5643391a08c75c, 1, uint32_t)
#define _m325 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MemoryCompressionProcess", memory_compression_process, 0x0, 0x0, false, 0x28cac09d3a1cf482, 1, uint32_t)
#define _m326 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EPROCESS.Machine", machine, 0x0, 0x0, false, 0xd81ccff35eaad725)
#define _m327 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ke::ideal_processor_assignment_block_t), "_EPROCESS.IdealProcessorAssignmentBlock", ideal_processor_assignment_block, 0x0, 0x0, false, 0x5e3bec84acc8c8e5)
#define _m328 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EPROCESS.DisabledComponentFlags", disabled_component_flags, 0x0, 0x0, false, 0x66f0d54d73cdf297)
#define _m329 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_EPROCESS.PageCombineSequence", page_combine_sequence, 0x0, 0x0, false, 0x8f89916eafbd657d)
#define _m330 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_EPROCESS.EnableOptionalXStateFeaturesLock", enable_optional_x_state_features_lock, 0x0, 0x0, false, 0x36f02089ef35f2bf)
#define _m331 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t volatile*), "_EPROCESS.PathRedirectionHashes", path_redirection_hashes, 0x0, 0x0, false, 0xa019f0d414f8f04f)
#define _m332 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ps::syscall_provider_t*), "_EPROCESS.SyscallProvider", syscall_provider, 0x0, 0x0, false, 0x13da5c4508f227c0)
#define _m333 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EPROCESS.SyscallProviderProcessLinks", syscall_provider_process_links, 0x0, 0x0, false, 0xcf8d0c81b2a1205d)
#define _m334 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct psp::syscall_provider_dispatch_context_t), "_EPROCESS.SyscallProviderDispatchContext", syscall_provider_dispatch_context, 0x0, 0x0, false, 0xf88d6afbefc251ec)
#define _m335 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EPROCESS.MitigationFlags3", mitigation_flags3, 0x0, 0x0, false, 0x7495a11bc5792af8)
#define _m338 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_mitigation_flags3_values_t), "_EPROCESS.MitigationFlags3Values", mitigation_flags3_values, 0x0, 0x0, false, 0x1d8a62437c5f9a5e)
#define _p36 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EPROCESS.MitigationFlags3Values.RestrictCoreSharing", restrict_core_sharing, 0x0, 0x0, false, 0x145b9fec3820c3f5, 1, uint32_t)
#define _p37 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint31_t), "_EPROCESS.MitigationFlags3Values.MitigationFlags3Spare", mitigation_flags3_spare, 0x0, 0x0, false, 0x820648d4945df8ff, 31, uint32_t)
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
#define _m164
#define _m165
#define _m166
#define _m167
#define _m168
#define _m169
#define _m170
#define _m171
#define _m172
#define _m173
#define _m174
#define _m175
#define _m176
#define _m177
#define _m178
#define _m179
#define _m180
#define _m181
#define _m182
#define _m183
#define _m184
#define _m185
#define _m186
#define _m187
#define _m188
#define _m189
#define _m190
#define _m191
#define _m192
#define _m193
#define _m194
#define _m195
#define _m196
#define _m197
#define _m198
#define _m199
#define _m200
#define _m201
#define _m202
#define _m203
#define _m204
#define _m205
#define _m206
#define _m207
#define _m208
#define _m209
#define _m210
#define _m211
#define _m212
#define _m213
#define _m214
#define _m215
#define _m216
#define _m217
#define _m218
#define _m219
#define _m220
#define _m221
#define _m222
#define _m223
#define _m224
#define _m225
#define _m226
#define _m227
#define _m228
#define _m229
#define _m230
#define _m231
#define _m232
#define _m233
#define _m234
#define _m235
#define _m236
#define _m237
#define _m238
#define _m239
#define _m240
#define _m241
#define _m242
#define _m243
#define _m244
#define _m245
#define _m246
#define _m247
#define _m248
#define _m249
#define _m250
#define _m251
#define _m252
#define _m253
#define _m254
#define _m255
#define _m256
#define _m257
#define _m258
#define _m259
#define _m260
#define _m261
#define _m262
#define _m263
#define _m264
#define _m265
#define _m266
#define _m267
#define _m268
#define _m269
#define _m270
#define _m271
#define _m272
#define _m273
#define _m274
#define _m275
#define _m276
#define _m277
#define _m278
#define _m279
#define _m280
#define _m281
#define _m282
#define _m283
#define _m284
#define _m285
#define _m286
#define _m287
#define _m288
#define _m289
#define _m290
#define _m291
#define _m292
#define _m293
#define _m294
#define _m295
#define _m296
#define _m297
#define _m298
#define _m299
#define _m300
#define _m301
#define _m302
#define _m303
#define _m304
#define _m305
#define _m306
#define _m307
#define _m308
#define _m309
#define _m310
#define _m311
#define _m312
#define _m313
#define _m314
#define _m315
#define _m316
#define _m317
#define _m318
#define _m319
#define _m320
#define _m321
#define _m322
#define _m323
#define _m324
#define _m325
#define _m326
#define _m327
#define _m328
#define _m329
#define _m330
#define _m331
#define _m332
#define _m333
#define _m334
#define _m335
#define _m338
#define _p36
#define _p37
#endif