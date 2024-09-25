#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::driver_object_t*), "FxLibraryGlobalsType.DriverObject", driver_object, 0x0, 0x40, true, 0x249e76fc1f04aa4e)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "FxLibraryGlobalsType.LibraryDeviceObject", library_device_object, 0x40, 0x40, true, 0x1cf298b5a3c0c351)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_io_connect_interrupt_ex_t ), "FxLibraryGlobalsType.IoConnectInterruptEx", io_connect_interrupt_ex, 0x80, 0x40, true, 0xdb4173f136e9cfbc)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_io_disconnect_interrupt_ex_t ), "FxLibraryGlobalsType.IoDisconnectInterruptEx", io_disconnect_interrupt_ex, 0xc0, 0x40, true, 0x713de346c5264012)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint64_t()>*), "FxLibraryGlobalsType.KeQueryActiveProcessors", ke_query_active_processors, 0x100, 0x40, true, 0x913c2ee2497352c4)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::kdpc_t*, char)>*), "FxLibraryGlobalsType.KeSetTargetProcessorDpc", ke_set_target_processor_dpc, 0x140, 0x40, true, 0x203ef5c234c27bc6)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_ke_set_coalescable_timer_t ), "FxLibraryGlobalsType.KeSetCoalescableTimer", ke_set_coalescable_timer, 0x180, 0x40, true, 0x8272ee35611b407)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "FxLibraryGlobalsType.IoUnregisterPlugPlayNotificationEx", io_unregister_plug_play_notification_ex, 0x1c0, 0x40, true, 0x1da6ff36dd684fa8)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_pox_register_device_t ), "FxLibraryGlobalsType.PoxRegisterDevice", pox_register_device, 0x200, 0x40, true, 0x19c275115ed6fc54)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::pohandle_t*)>*), "FxLibraryGlobalsType.PoxStartDevicePowerManagement", pox_start_device_power_management, 0x240, 0x40, true, 0xb710494c9ff6e65)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::pohandle_t*)>*), "FxLibraryGlobalsType.PoxUnregisterDevice", pox_unregister_device, 0x280, 0x40, true, 0x45920656a845aa90)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::pohandle_t*, uint32_t, uint32_t)>*), "FxLibraryGlobalsType.PoxActivateComponent", pox_activate_component, 0x2c0, 0x40, true, 0x3ed95cd3a6d87e22)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::pohandle_t*, uint32_t, uint32_t)>*), "FxLibraryGlobalsType.PoxIdleComponent", pox_idle_component, 0x300, 0x40, true, 0x86b98c1af1ca76f5)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::pohandle_t*)>*), "FxLibraryGlobalsType.PoxReportDevicePoweredOn", pox_report_device_powered_on, 0x340, 0x40, true, 0xce93d31839d0e879)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::pohandle_t*, uint32_t)>*), "FxLibraryGlobalsType.PoxCompleteIdleState", pox_complete_idle_state, 0x380, 0x40, true, 0xb84c6ab4f7b5b650)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::pohandle_t*, uint32_t)>*), "FxLibraryGlobalsType.PoxCompleteIdleCondition", pox_complete_idle_condition, 0x3c0, 0x40, true, 0xd99d4d52c810ede3)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::pohandle_t*)>*), "FxLibraryGlobalsType.PoxCompleteDevicePowerNotRequired", pox_complete_device_power_not_required, 0x400, 0x40, true, 0xb448632b2b0ea49c)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_pox_set_device_idle_timeout_t ), "FxLibraryGlobalsType.PoxSetDeviceIdleTimeout", pox_set_device_idle_timeout, 0x440, 0x40, true, 0xb85e29ed67f5466e)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct io::report_interrupt_active_state_parameters_t*)>*), "FxLibraryGlobalsType.IoReportInterruptActive", io_report_interrupt_active, 0x480, 0x40, true, 0x718a72fcf928ad06)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct io::report_interrupt_active_state_parameters_t*)>*), "FxLibraryGlobalsType.IoReportInterruptInactive", io_report_interrupt_inactive, 0x4c0, 0x40, true, 0xf51874c6ad1a0748)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_vf_check_nx_pool_type_t ), "FxLibraryGlobalsType.VfCheckNxPoolType", vf_check_nx_pool_type, 0x500, 0x40, true, 0x6eafa0d3b2b9c9ea)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::osversioninfoexw_t), "FxLibraryGlobalsType.OsVersionInfo", os_version_info, 0x580, 0xe0, true, 0xfd4eaedf2d057302)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_no_dynam_t), "FxLibraryGlobalsType.FxDriverGlobalsListLock", fx_driver_globals_list_lock, 0xe80, 0x80, true, 0xa52847fe82fa3d3c)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxLibraryGlobalsType.FxDriverGlobalsList", fx_driver_globals_list, 0xf00, 0x80, true, 0xd2cd85302a9c0dd5)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxLibraryGlobalsType.BugCheckDriverInfoIndex", bug_check_driver_info_index, 0xf80, 0x20, true, 0x44d858506dda630c)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxLibraryGlobalsType.BugCheckDriverInfoCount", bug_check_driver_info_count, 0xfa0, 0x20, true, 0x48e3ee51f733f7f7)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::dump_driver_info_entry_t*), "FxLibraryGlobalsType.BugCheckDriverInfo", bug_check_driver_info, 0xfc0, 0x40, true, 0x165a1b35dcfd44ed)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kbugcheck_reason_callback_record_t), "FxLibraryGlobalsType.BugCheckCallbackRecord", bug_check_callback_record, 0x1000, 0x80, true, 0x8c773abcd007ebb6)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxLibraryGlobalsType.ProcessorGroupSupport", processor_group_support, 0x1180, 0x8, true, 0x4653f0688e6f80c4)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxLibraryGlobalsType.InternalTracingInitialized", internal_tracing_initialized, 0x1188, 0x8, true, 0xd43cbd90e527eea3)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_tracker_cache_aware_t), "FxLibraryGlobalsType.DriverTracker", driver_tracker, 0x11c0, 0xc0, true, 0xcfe3bc244bf250a8)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxLibraryGlobalsType.BestDriverForDumpLog", best_driver_for_dump_log, 0x1280, 0x40, true, 0xd740d582fc889b82)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxLibraryGlobalsType.PassiveLevelInterruptSupport", passive_level_interrupt_support, 0x12c0, 0x8, true, 0xb578fd14ada094ea)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxLibraryGlobalsType.IsUserModeFramework", is_user_mode_framework, 0x12c8, 0x8, true, 0xc298afd88cc61ec)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxLibraryGlobalsType.StaticallyLinked", statically_linked, 0x12d0, 0x8, true, 0x34c4062ca7f9819c)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "FxLibraryGlobalsType.MachineSleepStates", machine_sleep_states, 0x12d8, 0x18, true, 0xf2c09034cab0d16d)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxLibraryGlobalsType.VerifierSectionHandle", verifier_section_handle, 0x1300, 0x40, true, 0xcba470ab2bd8bde3)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "FxLibraryGlobalsType.VerifierSectionHandleRefCount", verifier_section_handle_ref_count, 0x1340, 0x20, true, 0x170ed41d943f3051)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wmi::wdf_notify_routines_t*), "FxLibraryGlobalsType.PerfTraceRoutines", perf_trace_routines, 0x1380, 0x40, true, 0x66d8ed500fa07e22)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wmi::wdf_notify_routines_t), "FxLibraryGlobalsType.DummyPerfTraceRoutines", dummy_perf_trace_routines, 0x13c0, 0x0, true, 0xafc4a0edb8807d0d)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxLibraryGlobalsType.IfrDisabled", ifr_disabled, 0x1500, 0x8, true, 0xfc21d3fd855df869)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(uint32_t)>*), "FxLibraryGlobalsType.VfIsRuleClassEnabled", vf_is_rule_class_enabled, 0x540, 0x40, true, 0xf3de892d625e725b)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::companion_library_t*), "FxLibraryGlobalsType.CompanionLibrary", companion_library, 0x14c0, 0x40, true, 0xd244d7caba66afd5)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxLibraryGlobalsType.SleepStudyDisabled", sleep_study_disabled, 0x1508, 0x8, true, 0xb2d1e6ddf0b46ae9)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxLibraryGlobalsType.WdfDirectedPowerTransitionEnabled", wdf_directed_power_transition_enabled, 0x1510, 0x8, true, 0x592fbd2c09359ac8)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxLibraryGlobalsType.AllowBindToPreReleaseVersion", allow_bind_to_pre_release_version, 0x1518, 0x8, true, 0x81f7eb3a01750045)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxLibraryGlobalsType.UseWdfTimerForPofx", use_wdf_timer_for_pofx, 0x0, 0x0, false, 0x33301dd2e8c80fb1)
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
#endif