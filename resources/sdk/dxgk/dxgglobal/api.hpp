#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgglobal
{
    // [AbandonKeyedMutex@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x177dec, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) abandon_keyed_mutex;
    
    // [ControlVSyncForLogging@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x16b514, 0x60098 bytes
    //
    _m1(sdk::unknown_ptr) control_v_sync_for_logging;
    
    // [CreatePerfDataWorkerThreadIfNeeded@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x30a1c8, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) create_perf_data_worker_thread_if_needed;
    
    // [??1DXGGLOBAL@@EEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3098d4, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [GetMaximumAdapterCountInSession@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x166cec, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) get_maximum_adapter_count_in_session;
    
    // [GetMaximumGlobalAdapterCount@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x18eb60, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) get_maximum_global_adapter_count;
    
    // [RemoveMappedGuestAlloc@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x30caa0, 0x84380 bytes
    //
    _m6(sdk::unknown_ptr) remove_mapped_guest_alloc;
    
    // [ReportPerfData@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x30a1c8, 0x84380 bytes
    //
    _m7(sdk::unknown_ptr) report_perf_data;
    
    // [SetWslInterface@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x30d5cc, 0x84380 bytes
    //
    _m8(sdk::unknown_ptr) set_wsl_interface;
    
    // [FindVirtualMachine@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x26455c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2646bc, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) find_virtual_machine;
    
    // [AddGPUTimeCoreDripsBlockerTracking@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b9bd0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e38f4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b9ca0, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) add_gpu_time_core_drips_blocker_tracking;
    
    // [AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b9c98, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e39ac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b9d68, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) add_wake_up_core_drips_blocker_tracking;
    
    // [AdvancedColorPowerSettingsCallback@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17a620, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20b880, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17b4d0, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) advanced_color_power_settings_callback;
    
    // [AllocatePresentToHwQueueParams@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1198, 0x762b0 bytes
    // dxgkrnl.sys .text:0x23f4, 0x84380 bytes
    // dxgkrnl.sys .text:0x17dc, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) allocate_present_to_hw_queue_params;
    
    // [CaptureSchedulerLogs@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x26335c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30a0b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2634bc, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) capture_scheduler_logs;
    
    // [CheckDebugBreak@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3e034, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5bc90, 0x84380 bytes
    // dxgkrnl.sys .text:0x3e224, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) check_debug_break;
    
    // [ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x166a24, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1f7ee8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17533c, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) consider_for_multi_adapter_feature_usage;
    
    // [CreateAndOpenKeyedMutex@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x28a650, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33f5b4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28a6d0, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) create_and_open_keyed_mutex;
    
    // [CsExitInitiatedWnfCallbackInternal@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2635c8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ec3dc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x263728, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) cs_exit_initiated_wnf_callback_internal;
    
    // [CsExitInitiatedWnfSubscription@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17a828, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20ba84, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17b6d8, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) cs_exit_initiated_wnf_subscription;
    
    // [DelayDestroyAdapterWork@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2638b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30a200, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x263a10, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) delay_destroy_adapter_work;
    
    // [DelayLoadWin32k@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x18c40, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1d740, 0x84380 bytes
    // dxgkrnl.sys .text:0x19004, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) delay_load_win32k;
    
    // [DereferenceObjectWork@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x263980, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30a2d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x263ae0, 0x762b0 bytes
    //
    _o2(sdk::unknown_ptr) dereference_object_work;
    
    // [??1DXGGLOBAL@@AEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16b114, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x262ca0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x262e00, 0x762b0 bytes
    //
    _o3(sdk::unknown_ptr) destroy_instance_;
    
    // [EnableCoreDripsBlockerAccountingForProcess@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b9d4c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e3a54, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b9e1c, 0x762b0 bytes
    //
    _o4(sdk::unknown_ptr) enable_core_drips_blocker_accounting_for_process;
    
    // [EnsureVmBusInterface@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x263f14, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30a860, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x264074, 0x762b0 bytes
    //
    _o5(sdk::unknown_ptr) ensure_vm_bus_interface;
    
    // [FinalizeCSAccountingAndSendETW@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b9e00, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e3b10, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b9ed0, 0x762b0 bytes
    //
    _o6(sdk::unknown_ptr) finalize_cs_accounting_and_send_etw;
    
    // [GetDefaultColorSpaceTransform@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x264654, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30afec, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2647b4, 0x762b0 bytes
    //
    _o7(sdk::unknown_ptr) get_default_color_space_transform;
    
    // [GetFirstProfilerInterface@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x117fb0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17f4b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x124540, 0x762b0 bytes
    //
    _o8(sdk::unknown_ptr) get_first_profiler_interface;
    
    // [GetMaximumAdapterCount@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7b814, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xddc70, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x12ed30, 0x762b0 bytes
    //
    _o9(sdk::unknown_ptr) get_maximum_adapter_count;
    
    // [GetSessionMgr@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2647e4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30b190, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x264944, 0x762b0 bytes
    //
    _p0(sdk::unknown_ptr) get_session_mgr;
    
    // [HandleVirtualMachineReset@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2647f4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30b1a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x264954, 0x762b0 bytes
    //
    _p1(sdk::unknown_ptr) handle_virtual_machine_reset;
    
    // [HdrPowerPolicyChangeCallout@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x264908, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30b2b4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x264a68, 0x762b0 bytes
    //
    _p2(sdk::unknown_ptr) hdr_power_policy_change_callout;
    
    // [InitializeCSAccounting@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b9e98, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e3ba8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b9f68, 0x762b0 bytes
    //
    _p3(sdk::unknown_ptr) initialize_cs_accounting;
    
    // [InitializeResourceManagerSid@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17a6d8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20b940, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17b588, 0x762b0 bytes
    //
    _p4(sdk::unknown_ptr) initialize_resource_manager_sid;
    
    // [IsVmConnectedToHost@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x153dec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1db350, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15709c, 0x762b0 bytes
    //
    _p5(sdk::unknown_ptr) is_vm_connected_to_host;
    
    // [IterateProcessAndApplyCSFn@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b9f6c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e3c68, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ba03c, 0x762b0 bytes
    //
    _p6(sdk::unknown_ptr) iterate_process_and_apply_cs_fn;
    
    // [NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe02c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16b82c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd77c0, 0x762b0 bytes
    //
    _p7(sdk::unknown_ptr) notify_process_freeze_core_drips_blocker_tracking;
    
    // [NotifySharedPowerGraphicsFStateTransition@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x43974, 0x762b0 bytes
    // dxgkrnl.sys .text:0x53924, 0x84380 bytes
    // dxgkrnl.sys .text:0x43b64, 0x762b0 bytes
    //
    _p8(sdk::unknown_ptr) notify_shared_power_graphics_f_state_transition;
    
    // [NotifySharedPowerGraphicsPowerTransition@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x264b1c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30b518, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x264c7c, 0x762b0 bytes
    //
    _p9(sdk::unknown_ptr) notify_shared_power_graphics_power_transition;
    
    // [NotifySharedPowerGraphicsRemoving@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x264c20, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30b62c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x264d80, 0x762b0 bytes
    //
    _q0(sdk::unknown_ptr) notify_shared_power_graphics_removing;
    
    // [NotifyShutdown@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x264da8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30b7a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x264f08, 0x762b0 bytes
    //
    _q1(sdk::unknown_ptr) notify_shutdown;
    
    // [OpenKeyedMutexFromNtHandle@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x28bea8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3411a4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28bf28, 0x762b0 bytes
    //
    _q2(sdk::unknown_ptr) open_keyed_mutex_from_nt_handle;
    
    // [RecordFeatureUsage@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1816b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1fb1f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x184730, 0x762b0 bytes
    //
    _q3(sdk::unknown_ptr) record_feature_usage;
    
    // [RecordFeatureUsageWddmVersion@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1669ac, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1f7e70, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1752c4, 0x762b0 bytes
    //
    _q4(sdk::unknown_ptr) record_feature_usage_wddm_version;
    
    // [ReferenceAdapterByHostLuid@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2657e8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30c678, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x265948, 0x762b0 bytes
    //
    _q5(sdk::unknown_ptr) reference_adapter_by_host_luid;
    
    // [ReferenceWarpAdapter@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x265968, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30c820, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x265ac8, 0x762b0 bytes
    //
    _q6(sdk::unknown_ptr) reference_warp_adapter;
    
    // [RegisterSharedPowerComponent@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x43bac, 0x762b0 bytes
    // dxgkrnl.sys .text:0x53b7c, 0x84380 bytes
    // dxgkrnl.sys .text:0x43d9c, 0x762b0 bytes
    //
    _q7(sdk::unknown_ptr) register_shared_power_component;
    
    // [ReleaseComponentReferencesHelper@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x265ab0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ec688, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x265c10, 0x762b0 bytes
    //
    _q8(sdk::unknown_ptr) release_component_references_helper;
    
    // [RemoveListObjectFromSharedPowerList@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x43f14, 0x762b0 bytes
    // dxgkrnl.sys .text:0x53f70, 0x84380 bytes
    // dxgkrnl.sys .text:0x44104, 0x762b0 bytes
    //
    _q9(sdk::unknown_ptr) remove_list_object_from_shared_power_list;
    
    // [ReportGpuWakeupWorkItemCallback@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ba200, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e3ea0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ba2d0, 0x762b0 bytes
    //
    _r0(sdk::unknown_ptr) report_gpu_wakeup_work_item_callback;
    
    // [SendWnfNotificationToVmProcess@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2660f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30cf80, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x266250, 0x762b0 bytes
    //
    _r1(sdk::unknown_ptr) send_wnf_notification_to_vm_process;
    
    // [SendWnfNotificationToVmProcessWorkItem@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2661f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30d080, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x266350, 0x762b0 bytes
    //
    _r2(sdk::unknown_ptr) send_wnf_notification_to_vm_process_work_item;
    
    // [SetDFxEngaged@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ba294, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e3f60, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ba364, 0x762b0 bytes
    //
    _r3(sdk::unknown_ptr) set_d_fx_engaged;
    
    // [SetPDCIdleResiliencyEngaged@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ba2f8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x21f174, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ba3c8, 0x762b0 bytes
    //
    _r4(sdk::unknown_ptr) set_pdc_idle_resiliency_engaged;
    
    // [SetSharedPowerComponentState@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x266364, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30d248, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2664c4, 0x762b0 bytes
    //
    _r5(sdk::unknown_ptr) set_shared_power_component_state;
    
    // [SetVirtualRenderAdapter@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x266580, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30d47c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2666e0, 0x762b0 bytes
    //
    _r6(sdk::unknown_ptr) set_virtual_render_adapter;
    
    // [SetWarpAdapter@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x183564, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x215eb4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x186994, 0x762b0 bytes
    //
    _r7(sdk::unknown_ptr) set_warp_adapter;
    
    // [StartCoreDripsBlockerTracking@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x117fd8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17f3c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x124568, 0x762b0 bytes
    //
    _r8(sdk::unknown_ptr) start_core_drips_blocker_tracking;
    
    // [SubscribeWNFForCSAccounting@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ba388, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e3fc4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ba458, 0x762b0 bytes
    //
    _r9(sdk::unknown_ptr) subscribe_wnf_for_cs_accounting;
    
    // [UnregisterSharedPowerDriver@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x266950, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30d9ac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x266ab0, 0x762b0 bytes
    //
    _s0(sdk::unknown_ptr) unregister_shared_power_driver;
    
    // [ValidateAdapterValidAndInRunningState@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x266ab8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30db08, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x266c18, 0x762b0 bytes
    //
    _s1(sdk::unknown_ptr) validate_adapter_valid_and_in_running_state;
    
    // [AcquireAdapterOrdinal@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xdf67c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1639d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1f6bbc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x18572c, 0x762b0 bytes
    //
    _s2(sdk::unknown_ptr) acquire_adapter_ordinal;
    
    // [AddIndirectOutputDuplMgr@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16b4a4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2632e4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30a038, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x263444, 0x762b0 bytes
    //
    _s3(sdk::unknown_ptr) add_indirect_output_dupl_mgr;
    
    // [AllocHandle@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5e40, 0x60098 bytes
    // dxgkrnl.sys .text:0x3cb30, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4a630, 0x84380 bytes
    // dxgkrnl.sys .text:0x3cd20, 0x762b0 bytes
    //
    _s4(sdk::unknown_ptr) alloc_handle;
    
    // [CheckExclusiveOwnership@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd4248, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1573e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e5d50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15a230, 0x762b0 bytes
    //
    _s5(sdk::unknown_ptr) check_exclusive_ownership;
    
    // [??0DXGGLOBAL@@AEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xdf330, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17aa74, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20783c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17b924, 0x762b0 bytes
    //
    _s6(sdk::unknown_ptr) construct_instance;
    
    // [CreateAdapter@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xdf81c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x163640, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1f54f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x16d5ac, 0x762b0 bytes
    //
    _s7(sdk::unknown_ptr) create_adapter;
    
    // [CreateGlobal@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf062c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1779ec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x206fac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17ced8, 0x762b0 bytes
    //
    _s8(sdk::unknown_ptr) create_global;
    
    // [CreateKeyedMutex@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x6e684, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x28a714, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33f6a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28a794, 0x762b0 bytes
    //
    _s9(sdk::unknown_ptr) create_keyed_mutex;
    
    // [CreateSyncObject@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7b95c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1029c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x199ef8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x10e990, 0x762b0 bytes
    //
    _t0(sdk::unknown_ptr) create_sync_object;
    
    // [DeferredInitialize@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xdf6e4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17f20c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x211e88, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x18237c, 0x762b0 bytes
    //
    _t1(sdk::unknown_ptr) deferred_initialize;
    
    // [DestroyAdapter@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16b63c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x26399c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30a2ec, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x263afc, 0x762b0 bytes
    //
    _t2(sdk::unknown_ptr) destroy_adapter;
    
    // [DestroyGlobal@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16b694, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2639c4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30a314, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x263b24, 0x762b0 bytes
    //
    _t3(sdk::unknown_ptr) destroy_global;
    
    // [DestroyKeyedMutex@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x6e544, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x28af94, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x340008, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28b014, 0x762b0 bytes
    //
    _t4(sdk::unknown_ptr) destroy_keyed_mutex;
    
    // [DestroySyncObject@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7be8c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x107320, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19deac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x113350, 0x762b0 bytes
    //
    _t5(sdk::unknown_ptr) destroy_sync_object;
    
    // [DisableStablePowerState@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16b700, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x263a34, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30a380, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x263b94, 0x762b0 bytes
    //
    _t6(sdk::unknown_ptr) disable_stable_power_state;
    
    // [EnableClockCalibration@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16b880, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x263bdc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30a528, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x263d3c, 0x762b0 bytes
    //
    _t7(sdk::unknown_ptr) enable_clock_calibration;
    
    // [EnableFormattingBuffer@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16b98c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x263cd4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30a620, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x263e34, 0x762b0 bytes
    //
    _t8(sdk::unknown_ptr) enable_formatting_buffer;
    
    // [EnableStablePowerState@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16ba94, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x263dcc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30a718, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x263f2c, 0x762b0 bytes
    //
    _t9(sdk::unknown_ptr) enable_stable_power_state;
    
    // [FreeHandle@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5eac, 0x60098 bytes
    // dxgkrnl.sys .text:0x18024, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1c9a8, 0x84380 bytes
    // dxgkrnl.sys .text:0x187b4, 0x762b0 bytes
    //
    _u0(sdk::unknown_ptr) free_handle;
    
    // [GetGlobal@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x967b0, 0x60098 bytes
    // dxgkrnl.sys .text:0x2c40, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7480, 0x84380 bytes
    // dxgkrnl.sys .text:0x3fe0, 0x762b0 bytes
    //
    _u1(sdk::unknown_ptr) get_global;
    
    // [GetObjectA@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5d94, 0x60098 bytes
    // dxgkrnl.sys .text:0x1b580, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20d60, 0x84380 bytes
    // dxgkrnl.sys .text:0x1bc00, 0x762b0 bytes
    //
    _u2(sdk::unknown_ptr) get_object_a;
    
    // [GetSessionData@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7b838, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x104db0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x195c30, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x110d80, 0x762b0 bytes
    //
    _u3(sdk::unknown_ptr) get_session_data;
    
    // [Initialize@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xdf974, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x178680, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2090ec, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17a8bc, 0x762b0 bytes
    //
    _u4(sdk::unknown_ptr) initialize;
    
    // [IsSyncObjectLockSharedOwner@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x11064, 0x60098 bytes
    // dxgkrnl.sys .text:0x1b63c, 0x762b0 bytes
    // dxgkrnl.sys .text:0xc4e4, 0x84380 bytes
    // dxgkrnl.sys .text:0x1bcbc, 0x762b0 bytes
    //
    _u5(sdk::unknown_ptr) is_sync_object_lock_shared_owner;
    
    // [IsWindowVisible@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7bafc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14bf9c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bb2b4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1304dc, 0x762b0 bytes
    //
    _u6(sdk::unknown_ptr) is_window_visible;
    
    // [IterateAdaptersWithCallback@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7bd74, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x107c1c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x199228, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x113c4c, 0x762b0 bytes
    //
    _u7(sdk::unknown_ptr) iterate_adapters_with_callback;
    
    // [IterateOutputDuplMgrsWithCallback@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7b8dc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe2584, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x170bc8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdaec8, 0x762b0 bytes
    //
    _u8(sdk::unknown_ptr) iterate_output_dupl_mgrs_with_callback;
    
    // [m_pDxgmmsExport@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0x56350, 0x60098 bytes
    // dxgkrnl.sys .data:0xb0098, 0x762b0 bytes
    // dxgkrnl.sys .data:0x130c20, 0x84380 bytes
    // dxgkrnl.sys .data:0xb0098, 0x762b0 bytes
    //
    _u9(sdk::unknown_ptr) m_p_dxgmms_export;
    
    // [m_pGlobal@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0x56360, 0x60098 bytes
    // dxgkrnl.sys .data:0xb00a8, 0x762b0 bytes
    // dxgkrnl.sys .data:0x130c30, 0x84380 bytes
    // dxgkrnl.sys .data:0xb00a8, 0x762b0 bytes
    //
    _v0(sdk::unknown_ptr) m_p_global;
    
    // [NotifyAdapterRemoval@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16be8c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x264a14, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30b410, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x264b74, 0x762b0 bytes
    //
    _v1(sdk::unknown_ptr) notify_adapter_removal;
    
    // [OpenKeyedMutex@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x6e5a8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x28bd28, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x340fe4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28bda8, 0x762b0 bytes
    //
    _v2(sdk::unknown_ptr) open_keyed_mutex;
    
    // [OpenSyncObject@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x147824, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x158e40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e7810, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15bc90, 0x762b0 bytes
    //
    _v3(sdk::unknown_ptr) open_sync_object;
    
    // [PollDisplayChildrenAll@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16bf84, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x264f2c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30b924, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x26508c, 0x762b0 bytes
    //
    _v4(sdk::unknown_ptr) poll_display_children_all;
    
    // [ReferenceAdapterByLuid@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7bc54, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1076c4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a4e8c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1136f4, 0x762b0 bytes
    //
    _v5(sdk::unknown_ptr) reference_adapter_by_luid;
    
    // [ReferenceBddFallbackAdapter@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16c714, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2658a4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30c734, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x265a04, 0x762b0 bytes
    //
    _v6(sdk::unknown_ptr) reference_bdd_fallback_adapter;
    
    // [ReleaseAdapterOrdinal@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16c7c0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x265a28, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30c8d4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x265b88, 0x762b0 bytes
    //
    _v7(sdk::unknown_ptr) release_adapter_ordinal;
    
    // [RemoveIndirectOutputDuplMgr@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16c8b4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x265ce4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30ca34, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x265e44, 0x762b0 bytes
    //
    _v8(sdk::unknown_ptr) remove_indirect_output_dupl_mgr;
    
    // [ReportState@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16c914, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x265d4c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30cab8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x265eac, 0x762b0 bytes
    //
    _v9(sdk::unknown_ptr) report_state;
    
    // [SetSchedulerCrossAdapterData@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x24b58, 0x60098 bytes
    // dxgkrnl.sys .text:0x43f74, 0x762b0 bytes
    // dxgkrnl.sys .text:0x53fe0, 0x84380 bytes
    // dxgkrnl.sys .text:0x44164, 0x762b0 bytes
    //
    _w0(sdk::unknown_ptr) set_scheduler_cross_adapter_data;
    
    // [ToggleTopologyTransition@DXGGLOBAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5d58, 0x60098 bytes
    // dxgkrnl.sys .text:0x17fe4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1bed4, 0x84380 bytes
    // dxgkrnl.sys .text:0x18774, 0x762b0 bytes
    //
    _w1(sdk::unknown_ptr) toggle_topology_transition;
};
#include "magic/api.end.hpp"
