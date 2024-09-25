#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::monitor_mgr
{
    // [AcquireMonitorExclusive@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x1dfd0, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) acquire_monitor_exclusive;
    
    // [AcquireMonitorShared@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0xb838, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) acquire_monitor_shared;
    
    // [_CancelSkippedDepartures@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x15732c, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) cancel_skipped_departures;
    
    // [??1MONITOR_MGR@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b4020, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [DestroyStaticUSB4Class@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b41ec, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) destroy_static_usb4_class;
    
    // [GetDisplayDriverCapsExtension@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e4ac0, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) get_display_driver_caps_extension;
    
    // [GetDriverCaps@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e4ae0, 0x84380 bytes
    //
    _m6(sdk::unknown_ptr) get_driver_caps;
    
    // [GetDriverDdiVersion@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x215ef0, 0x84380 bytes
    //
    _m7(sdk::unknown_ptr) get_driver_ddi_version;
    
    // [GetDriverVersion@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e4b00, 0x84380 bytes
    //
    _m8(sdk::unknown_ptr) get_driver_version;
    
    // [GetDriverWorkarounds@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e4b20, 0x84380 bytes
    //
    _m9(sdk::unknown_ptr) get_driver_workarounds;
    
    // [_GetUsb4TargetList@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b498c, 0x84380 bytes
    //
    _n0(sdk::unknown_ptr) get_usb4_target_list;
    
    // [IsBddDevice@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1ad7d0, 0x84380 bytes
    //
    _n1(sdk::unknown_ptr) is_bdd_device;
    
    // [IsBddFallbackDriver@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b4230, 0x84380 bytes
    //
    _n2(sdk::unknown_ptr) is_bdd_fallback_driver;
    
    // [IsCcdDatabaseIgnored@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b4260, 0x84380 bytes
    //
    _n3(sdk::unknown_ptr) is_ccd_database_ignored;
    
    // [IsForceVariableRefreshEnabled@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2160c0, 0x84380 bytes
    //
    _n4(sdk::unknown_ptr) is_force_variable_refresh_enabled;
    
    // [IsSoftGPU@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b4280, 0x84380 bytes
    //
    _n5(sdk::unknown_ptr) is_soft_gpu;
    
    // [IsVirtualMonitorDevice@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1b9c40, 0x84380 bytes
    //
    _n6(sdk::unknown_ptr) is_virtual_monitor_device;
    
    // [IsXboxOneDevice@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x215f90, 0x84380 bytes
    //
    _n7(sdk::unknown_ptr) is_xbox_one_device;
    
    // [_pUsb4Manager@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .data:0x130ce8, 0x84380 bytes
    //
    _n8(sdk::unknown_ptr) p_usb4_manager;
    
    // [_QuerySkippedRemovalState@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1573c0, 0x84380 bytes
    //
    _n9(sdk::unknown_ptr) query_skipped_removal_state;
    
    // [RequestAsyncDisplaySwitchCallout@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b42a0, 0x84380 bytes
    //
    _o0(sdk::unknown_ptr) request_async_display_switch_callout;
    
    // [_GetDisplayCoreFromMonitor@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2143c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x21484, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) get_display_core_from_monitor;
    
    // [??1MONITOR_MGR@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1afe70, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2ec7e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ec550, 0x762b0 bytes
    //
    _o2(sdk::unknown_ptr) destroy_instance_;
    
    // [_GetMonitorHandle@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x7428, 0x60098 bytes
    // dxgkrnl.sys .text:0x7e2c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x379c, 0x762b0 bytes
    //
    _o3(sdk::unknown_ptr) get_monitor_handle;
    
    // [_MonitorOnOffTelemetry@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1619d4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1eea3c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x164824, 0x762b0 bytes
    //
    _o4(sdk::unknown_ptr) monitor_on_off_telemetry;
    
    // [_AddTargetIntoPersistencyRegistry@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b00d0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2ecaa0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b42bc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ec810, 0x762b0 bytes
    //
    _o5(sdk::unknown_ptr) add_target_into_persistency_registry;
    
    // [_CleanUpFromSimulatedMonitor@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8749c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14a340, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16fefc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14d390, 0x762b0 bytes
    //
    _o6(sdk::unknown_ptr) clean_up_from_simulated_monitor;
    
    // [??0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xf670, 0x60098 bytes
    // dxgkrnl.sys .text:0x202a8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x27f98, 0x84380 bytes
    // dxgkrnl.sys .text:0x23868, 0x762b0 bytes
    //
    _o7(sdk::unknown_ptr) construct_instance;
    
    // [_CreateAndInsertMonitorEventHandler@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe9bb0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x179b30, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20a8dc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x179d28, 0x762b0 bytes
    //
    _o8(sdk::unknown_ptr) create_and_insert_monitor_event_handler;
    
    // [_CreateBootPersistentMonitors@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe9850, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1701ac, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x21231c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x165f9c, 0x762b0 bytes
    //
    _o9(sdk::unknown_ptr) create_boot_persistent_monitors;
    
    // [_CreatePhysicalMonitor@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe9db4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x175eec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ff390, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1650fc, 0x762b0 bytes
    //
    _p0(sdk::unknown_ptr) create_physical_monitor;
    
    // [_CreateSimulatedMonitor@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b01d4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2ecbe4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b43d8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ec954, 0x762b0 bytes
    //
    _p1(sdk::unknown_ptr) create_simulated_monitor;
    
    // [_DelayNotifyClient@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0x571f4, 0x60098 bytes
    // dxgkrnl.sys .data:0xb15ec, 0x762b0 bytes
    // dxgkrnl.sys .data:0x1322e9, 0x84380 bytes
    // dxgkrnl.sys .data:0xb15dc, 0x762b0 bytes
    //
    _p2(sdk::unknown_ptr) delay_notify_client;
    
    // [_DeleteTargetFromPersistencyRegistry@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b0484, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2ecf34, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b47cc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ecca4, 0x762b0 bytes
    //
    _p3(sdk::unknown_ptr) delete_target_from_persistency_registry;
    
    // [_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x87a5c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x12c60c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x171cf8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1288e8, 0x762b0 bytes
    //
    _p4(sdk::unknown_ptr) destroy_all_same_type_simulated_monitor;
    
    // [_DestroyPhysicalMonitor@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b0574, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2ed064, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x222138, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ecdd4, 0x762b0 bytes
    //
    _p5(sdk::unknown_ptr) destroy_physical_monitor;
    
    // [_DestroySimulatedMonitor@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b0628, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2ed144, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b48d8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2eceb4, 0x762b0 bytes
    //
    _p6(sdk::unknown_ptr) destroy_simulated_monitor;
    
    // [_DRTGetTargetInformation@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b039c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2ece0c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b46e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ecb7c, 0x762b0 bytes
    //
    _p7(sdk::unknown_ptr) drt_get_target_information;
    
    // [_EnableDisableMonitor@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x87850, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14a464, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1dc160, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14d4b4, 0x762b0 bytes
    //
    _p8(sdk::unknown_ptr) enable_disable_monitor;
    
    // [_EnableDisableMonitorInternal@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd942c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x15f054, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ec90c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x161ea4, 0x762b0 bytes
    //
    _p9(sdk::unknown_ptr) enable_disable_monitor_internal;
    
    // [_EnterMonitorPendingState@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x342e8, 0x60098 bytes
    // dxgkrnl.sys .text:0x5b244, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6b424, 0x84380 bytes
    // dxgkrnl.sys .text:0x5b3d4, 0x762b0 bytes
    //
    _q0(sdk::unknown_ptr) enter_monitor_pending_state;
    
    // [_GetEmergencySimulatedMonitor@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe97d8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x176594, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1fe4cc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x164930, 0x762b0 bytes
    //
    _q1(sdk::unknown_ptr) get_emergency_simulated_monitor;
    
    // [_GetMonitorFromHandle@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x7490, 0x60098 bytes
    // dxgkrnl.sys .text:0x7df0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x51bc, 0x84380 bytes
    // dxgkrnl.sys .text:0x3944, 0x762b0 bytes
    //
    _q2(sdk::unknown_ptr) get_monitor_from_handle;
    
    // [_GetMonitorInformationForTargets@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x87580, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1047b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17d5b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x110780, 0x762b0 bytes
    //
    _q3(sdk::unknown_ptr) get_monitor_information_for_targets;
    
    // [_GetMonitorInstance@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x873c0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11d324, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ac0fc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xed8c8, 0x762b0 bytes
    //
    _q4(sdk::unknown_ptr) get_monitor_instance;
    
    // [_HandleCreateMonitorStep2@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe9efc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x175dd4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1fe68c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x164b30, 0x762b0 bytes
    //
    _q5(sdk::unknown_ptr) handle_create_monitor_step2;
    
    // [_HandleCreatePhysicalMonitor@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe9ffc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x175c6c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1fe518, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1649c8, 0x762b0 bytes
    //
    _q6(sdk::unknown_ptr) handle_create_physical_monitor;
    
    // [_HandleCreateSimulatedMonitor@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b06c8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2ed228, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b4ad8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ecf98, 0x762b0 bytes
    //
    _q7(sdk::unknown_ptr) handle_create_simulated_monitor;
    
    // [_HandleMonitorPnPNotification@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xeffd0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x177200, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2053a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17d2e0, 0x762b0 bytes
    //
    _q8(sdk::unknown_ptr) handle_monitor_pn_p_notification;
    
    // [_HandleRemovePhysicalMonitor@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b0a18, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2ed608, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b4e78, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ed378, 0x762b0 bytes
    //
    _q9(sdk::unknown_ptr) handle_remove_physical_monitor;
    
    // [_HandleRemoveSimulatedMonitor@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b0b80, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2ed7e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b50b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ed550, 0x762b0 bytes
    //
    _r0(sdk::unknown_ptr) handle_remove_simulated_monitor;
    
    // [_InitializeMonitorManager@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xea1c8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x161e28, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20836c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x183a50, 0x762b0 bytes
    //
    _r1(sdk::unknown_ptr) initialize_monitor_manager;
    
    // [_InsertMonitorToList@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe9d1c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1760e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ff304, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x165038, 0x762b0 bytes
    //
    _r2(sdk::unknown_ptr) insert_monitor_to_list;
    
    // [_IsMonitorInMonitorList@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b0d28, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2ed9e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b5284, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ed750, 0x762b0 bytes
    //
    _r3(sdk::unknown_ptr) is_monitor_in_monitor_list;
    
    // [_IsUsingSimulatedMonitor@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x879e0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x13d0d8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c2e98, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1314b0, 0x762b0 bytes
    //
    _r4(sdk::unknown_ptr) is_using_simulated_monitor;
    
    // [_IssueMonitorEvent@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe9a50, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1611f4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ee2e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x164044, 0x762b0 bytes
    //
    _r5(sdk::unknown_ptr) issue_monitor_event;
    
    // [_LeaveMonitorPendingState@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x34374, 0x60098 bytes
    // dxgkrnl.sys .text:0x5b2fc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6b48c, 0x84380 bytes
    // dxgkrnl.sys .text:0x5b48c, 0x762b0 bytes
    //
    _r6(sdk::unknown_ptr) leave_monitor_pending_state;
    
    // [_LogMonitorPresentEvent@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x87720, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14a664, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1dc33c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14d6b4, 0x762b0 bytes
    //
    _r7(sdk::unknown_ptr) log_monitor_present_event;
    
    // [_MigrateSimulatedMonitor@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b0dbc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2edaa4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b52ec, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ed814, 0x762b0 bytes
    //
    _r8(sdk::unknown_ptr) migrate_simulated_monitor;
    
    // [_MonitorPendingEventTraceHead@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0x56f08, 0x60098 bytes
    // dxgkrnl.sys .data:0xb0d00, 0x762b0 bytes
    // dxgkrnl.sys .data:0x131a90, 0x84380 bytes
    // dxgkrnl.sys .data:0xb0d08, 0x762b0 bytes
    //
    _r9(sdk::unknown_ptr) monitor_pending_event_trace_head;
    
    // [_MonitorPendingEventTraceLock@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0x56f18, 0x60098 bytes
    // dxgkrnl.sys .data:0xb0cf8, 0x762b0 bytes
    // dxgkrnl.sys .data:0x131a88, 0x84380 bytes
    // dxgkrnl.sys .data:0xb0d18, 0x762b0 bytes
    //
    _s0(sdk::unknown_ptr) monitor_pending_event_trace_lock;
    
    // [_MonitorTelemetry@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b0ef8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2edc34, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b5424, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ed9a4, 0x762b0 bytes
    //
    _s1(sdk::unknown_ptr) monitor_telemetry;
    
    // [_OnAdapterInitializationDone@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xea160, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x170134, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2122a4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x165f24, 0x762b0 bytes
    //
    _s2(sdk::unknown_ptr) on_adapter_initialization_done;
    
    // [_OpenPersistencyRegistry@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe98d8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1702b4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2123b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1660a4, 0x762b0 bytes
    //
    _s3(sdk::unknown_ptr) open_persistency_registry;
    
    // [_pInterfaceNotificationHandle@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0x56f90, 0x60098 bytes
    // dxgkrnl.sys .data:0xb0eb8, 0x762b0 bytes
    // dxgkrnl.sys .data:0x131b58, 0x84380 bytes
    // dxgkrnl.sys .data:0xb0ec8, 0x762b0 bytes
    //
    _s4(sdk::unknown_ptr) p_interface_notification_handle;
    
    // [_PersistencyRegNameFromTargetID@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b101c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2edde8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b559c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2edb58, 0x762b0 bytes
    //
    _s5(sdk::unknown_ptr) persistency_reg_name_from_target_id;
    
    // [_ReleaseMonitorPendingEvent@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xca48, 0x60098 bytes
    // dxgkrnl.sys .text:0x1308c, 0x762b0 bytes
    // dxgkrnl.sys .text:0xe8d8, 0x84380 bytes
    // dxgkrnl.sys .text:0xb710, 0x762b0 bytes
    //
    _s6(sdk::unknown_ptr) release_monitor_pending_event;
    
    // [_RemoveMonitorEventHandler@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b10c4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2edec8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b565c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2edc38, 0x762b0 bytes
    //
    _s7(sdk::unknown_ptr) remove_monitor_event_handler;
    
    // [_RemoveMonitorFromList@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe9c78, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x176044, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x201658, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x165254, 0x762b0 bytes
    //
    _s8(sdk::unknown_ptr) remove_monitor_from_list;
    
    // [_SerializeMonitorPresentEvent@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b11a8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2edfec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b571c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2edd5c, 0x762b0 bytes
    //
    _s9(sdk::unknown_ptr) serialize_monitor_present_event;
    
    // [_UsingCCDNameForTTM@MONITOR_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0x571f5, 0x60098 bytes
    // dxgkrnl.sys .data:0xb15ed, 0x762b0 bytes
    // dxgkrnl.sys .data:0x1322e8, 0x84380 bytes
    // dxgkrnl.sys .data:0xb15dd, 0x762b0 bytes
    //
    _t0(sdk::unknown_ptr) using_ccd_name_for_ttm;
};
#include "magic/api.end.hpp"
