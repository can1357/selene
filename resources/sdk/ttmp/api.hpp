#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ttmp
{
    // [TtmpAcDcPowerSettingRegistration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74b478, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) ac_dc_power_setting_registration;
    
    // [TtmpAcquireQueueLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x67ebf4, 0x32828 bytes
    //
    _m1(sdk::unknown_ptr) acquire_queue_lock;
    
    // [TtmpAcquireSessionLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x67d800, 0x32828 bytes
    //
    _m2(sdk::unknown_ptr) acquire_session_lock;
    
    // [TtmpApplyDeviceAutoAssignment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x67bcbc, 0x32828 bytes
    //
    _m3(sdk::unknown_ptr) apply_device_auto_assignment;
    
    // [TtmpBatteryCountPowerSettingRegistration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74b470, 0x32828 bytes
    //
    _m4(sdk::unknown_ptr) battery_count_power_setting_registration;
    
    // [TtmpDisplayBurstPowerSettingCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x57165c, 0x32828 bytes
    //
    _m5(sdk::unknown_ptr) display_burst_power_setting_callback;
    
    // [TtmpLastInputInactivityResetTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc37ea0, 0x1fd000 bytes
    //
    _m6(sdk::unknown_ptr) last_input_inactivity_reset_time;
    
    // [TtmpSetCsSessionGoal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x67dbf0, 0x32828 bytes
    //
    _m7(sdk::unknown_ptr) set_cs_session_goal;
    
    // [TtmpTerminalInactivityLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc37e00, 0x1fd000 bytes
    //
    _m8(sdk::unknown_ptr) terminal_inactivity_lock;
    
    // [TtmpTerminalInactivityTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc37e68, 0x1fd000 bytes
    //
    _m9(sdk::unknown_ptr) terminal_inactivity_timeout;
    
    // [TtmpTerminalInactivityTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc37ec0, 0x1fd000 bytes
    //
    _n0(sdk::unknown_ptr) terminal_inactivity_timer;
    
    // [TtmpTerminalInactivityTimerDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc37f00, 0x1fd000 bytes
    //
    _n1(sdk::unknown_ptr) terminal_inactivity_timer_dpc;
    
    // [TtmpTerminalInactivityTimerDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x58e740, 0x1fd000 bytes
    //
    _n2(sdk::unknown_ptr) terminal_inactivity_timer_dpc_routine;
    
    // [TtmpTerminalInactivityWorkCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc37e70, 0x1fd000 bytes
    //
    _n3(sdk::unknown_ptr) terminal_inactivity_work_count;
    
    // [TtmpTerminalInactivityWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc37e80, 0x1fd000 bytes
    //
    _n4(sdk::unknown_ptr) terminal_inactivity_work_item;
    
    // [TtmpTerminalInactivityWorkerRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x99f600, 0x1fd000 bytes
    //
    _n5(sdk::unknown_ptr) terminal_inactivity_worker_routine;
    
    // [TtmpWnfInactivityTimeoutCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x99f950, 0x1fd000 bytes
    //
    _n6(sdk::unknown_ptr) wnf_inactivity_timeout_callback;
    
    // [TtmpCallAssignedToTerminal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8f9840, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x996aec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f7f30, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) call_assigned_to_terminal;
    
    // [TtmpCalloutArmWatchdog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8f9aac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x996d58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f819c, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) callout_arm_watchdog;
    
    // [TtmpCalloutCreateWatchdog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8f9b50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x996dfc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f8240, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) callout_create_watchdog;
    
    // [TtmpCalloutDestroyWatchdog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8f9bb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x996e5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f82a0, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) callout_destroy_watchdog;
    
    // [TtmpCalloutLiveDumpSecondaryCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x672f50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6d80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6620, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) callout_live_dump_secondary_callback;
    
    // [TtmpCalloutWatchdogCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8f9c30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x996ee0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f8320, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) callout_watchdog_callback;
    
    // [TtmpCleanupPowerRequestsTrackingFromCurrentSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fc914, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x998ba8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fb004, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) cleanup_power_requests_tracking_from_current_session;
    
    // [TtmpCommitTerminalDisplayStateUpdateWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8f9d40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x996ff0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f8430, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) commit_terminal_display_state_update_worker;
    
    // [TtmpDeviceCalloutCrashDumpEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf9d6c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b5c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9d6c, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) device_callout_crash_dump_enabled;
    
    // [TtmpDeviceCalloutTimeoutsSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf9d6d, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b5c9, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9d6d, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) device_callout_timeouts_set;
    
    // [TtmpDeviceWatchdogTimeouts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc0ed50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc091f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0ed90, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) device_watchdog_timeouts;
    
    // [TtmpDispatchSetDisplayPowerRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fe1bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99a424, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fc8ac, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) dispatch_set_display_power_request;
    
    // [TtmpDispatchSetInputWakeCapability]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fe3d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99a640, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fcac8, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) dispatch_set_input_wake_capability;
    
    // [TtmpFindDeviceByDeviceId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8f9ee4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x997194, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f85d4, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) find_device_by_device_id;
    
    // [TtmpFindPowerRequestEntryById]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fcb24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x998da0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fb214, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) find_power_request_entry_by_id;
    
    // [TtmpGetCalloutTagFromCalloutType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8f9f54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x997204, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f8644, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) get_callout_tag_from_callout_type;
    
    // [TtmpGetConfigOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8f9fac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99725c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f869c, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) get_config_override;
    
    // [TtmpInitializeWatchdogTimeouts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fa0c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99737c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f87b8, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) initialize_watchdog_timeouts;
    
    // [TtmpInitiateModernStandbyTransition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fcc68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x998ed8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fb358, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) initiate_modern_standby_transition;
    
    // [TtmpInsertPowerRequestToSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fcd00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x998f70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fb3f0, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) insert_power_request_to_session;
    
    // [TtmpPowerRequestEntryComparator]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fd020, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x999284, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fb710, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) power_request_entry_comparator;
    
    // [TtmpPowerRequestHashAllocator]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fd030, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x999294, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fb720, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) power_request_hash_allocator;
    
    // [TtmpPowerRequestHashDeallocator]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fd054, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9992b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fb744, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) power_request_hash_deallocator;
    
    // [TtmpPublishDisplayRequiredPowerRequestEvents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fd070, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9992d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fb760, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) publish_display_required_power_request_events;
    
    // [TtmpPushTerminalDisplayStateOntoDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fa268, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x997514, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f8958, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) push_terminal_display_state_onto_device;
    
    // [TtmpQueueTerminalDisplayStateOntoDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fa3f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99769c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f8ae0, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) queue_terminal_display_state_onto_device;
    
    // [TtmpSetDisplayRequestEnded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fd410, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x999660, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fbb00, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) set_display_request_ended;
    
    // [TtmpTraceLoggingCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9024f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99e880, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x900be0, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) trace_logging_callback;
    
    // [TtmpUpdateDisplayRequiredPowerRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fd600, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99984c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fbcf0, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) update_display_required_power_request;
    
    // [TtmpUpdatePowerRequestAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fd6d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99991c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fbdc0, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) update_power_request_attribute;
    
    // [TtmpWriteDisplayRequiredPowerRequestUpdatedEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fd798, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9999e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fbe88, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) write_display_required_power_request_updated_event;
    
    // [TtmpWriteDisplayStateChangedEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fb638, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99f9d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f9d28, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) write_display_state_changed_event;
    
    // [TtmpAcquireSessionById]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x536f54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fc7a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x998a38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fae98, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) acquire_session_by_id;
    
    // [TtmpAcquireSessionFromTerminalHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67df6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fdae4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x999d38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fc1d4, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) acquire_session_from_terminal_handle;
    
    // [TtmpActivateSessionWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67d820, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fc870, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x998b00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8faf60, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) activate_session_worker;
    
    // [TtmpBreakOnError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a248, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b258, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51200, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b258, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) break_on_error;
    
    // [TtmpCallSetBuiltinPanelState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67bcdc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f98dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x996b88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f7fcc, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) call_set_builtin_panel_state;
    
    // [TtmpCallSetDisplayState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67bd34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f995c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x996c08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f804c, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) call_set_display_state;
    
    // [TtmpCallSetInputMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67bdb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f9a0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x996cb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f80fc, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) call_set_input_mode;
    
    // [TtmpCloseQueueHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67ec10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x902a50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99ff20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x901140, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) close_queue_handle;
    
    // [TtmpCloseTerminalHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67c940, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fafb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99f260, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f96a0, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) close_terminal_handle;
    
    // [TtmpDeactivateSessionWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67d8c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fca78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x998cf4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fb168, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) deactivate_session_worker;
    
    // [TtmpDeleteQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67ec40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x902a90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99ff60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x901180, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) delete_queue;
    
    // [TtmpDeleteTerminal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67c9d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fb060, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99f310, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f9750, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) delete_terminal;
    
    // [TtmpDereferenceSessionMaybeLast]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67d938, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fcaf8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x998d74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fb1e8, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) dereference_session_maybe_last;
    
    // [TtmpDispatchAssignDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67e0a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fdc44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x999e88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fc334, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) dispatch_assign_device;
    
    // [TtmpDispatchCreateEventQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67e14c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fdcec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x999f30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fc3dc, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) dispatch_create_event_queue;
    
    // [TtmpDispatchCreateTerminal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67e238, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fde00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99a06c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fc4f0, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) dispatch_create_terminal;
    
    // [TtmpDispatchEvacuateDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67e320, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fdef0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99a15c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fc5e0, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) dispatch_evacuate_devices;
    
    // [TtmpDispatchGetTerminalEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67e3d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fdf9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99a208, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fc68c, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) dispatch_get_terminal_event;
    
    // [TtmpDispatchOpenTerminal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67e48c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fe064, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99a2cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fc754, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) dispatch_open_terminal;
    
    // [TtmpDispatchSetDefaultDeviceAssignment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67e528, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fe100, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99a368, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fc7f0, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) dispatch_set_default_device_assignment;
    
    // [TtmpDispatchSetDisplayState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67e5d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fe268, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99a4d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fc958, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) dispatch_set_display_state;
    
    // [TtmpDispatchSetDisplayTimeouts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67e690, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fe31c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99a584, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fca0c, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) dispatch_set_display_timeouts;
    
    // [TtmpEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74af14, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd5378c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9ec, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) enabled;
    
    // [TtmpEnterProximity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67c9d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fb078, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99f328, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f9768, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) enter_proximity;
    
    // [TtmpExitProximity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67ca2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fb0d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99f384, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f97c4, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) exit_proximity;
    
    // [TtmpFindDeviceByToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67be2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f9f18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9971c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f8608, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) find_device_by_token;
    
    // [TtmpOpenQueueHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67ecf0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x902b50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9a0020, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x901240, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) open_queue_handle;
    
    // [TtmpOpenTerminalHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67ca7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fb130, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99f3e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f9820, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) open_terminal_handle;
    
    // [TtmpProximityEscapeMsec]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74acb8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd5355c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7c4, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) proximity_escape_msec;
    
    // [TtmpPublishDeviceEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67be64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fa140, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9973f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f8830, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) publish_device_event;
    
    // [TtmpPushTerminalState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67bf48, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fa320, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9975cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f8a10, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) push_terminal_state;
    
    // [TtmpQueueMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x281698, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x34988, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x40ec0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x34cd0, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) queue_mapping;
    
    // [TtmpQueueObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74af90, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd537e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca50, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) queue_object_type;
    
    // [TtmpResetEvaluationTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67cacc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fb184, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99f434, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f9874, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) reset_evaluation_timer;
    
    // [TtmpScheduledEvaluationDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20eaa4, 0x32828 bytes
    // ntoskrnl.exe .text:0x57af40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58e700, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57ad30, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) scheduled_evaluation_dpc;
    
    // [TtmpScheduledEvaluationWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67cb2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fb200, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99f4b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f98f0, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) scheduled_evaluation_worker;
    
    // [TtmpSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ac60, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c788, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53530, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c788, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) session;
    
    // [TtmpSessionLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3025c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1e140, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc37f40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e160, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) session_lock;
    
    // [TtmpSessionPowerControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67d960, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fd13c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99938c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fb82c, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) session_power_control;
    
    // [TtmpSessionWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67d9ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fd1e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x999430, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fb8d0, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) session_worker;
    
    // [TtmpSetTerminalPendingCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67cb94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fb280, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99f530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f9970, 0x1fe000 bytes
    //
    _u9(sdk::unknown_ptr) set_terminal_pending_cleanup;
    
    // [TtmpShouldEscapeProximity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67cbbc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fb2b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99f560, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f99a0, 0x1fe000 bytes
    //
    _v0(sdk::unknown_ptr) should_escape_proximity;
    
    // [TtmpStartCallout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67c06c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fa4ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x997788, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f8bdc, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) start_callout;
    
    // [TtmpStopCallout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67c0dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fa5d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x997874, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f8cc8, 0x1fe000 bytes
    //
    _v2(sdk::unknown_ptr) stop_callout;
    
    // [TtmpTerminal0PowerSettingCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67dc70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fd530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x999780, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fbc20, 0x1fe000 bytes
    //
    _v3(sdk::unknown_ptr) terminal0_power_setting_callback;
    
    // [TtmpTerminalMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x281688, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x34978, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x40eb0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x34cc0, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) terminal_mapping;
    
    // [TtmpTerminalObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74add8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c8e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53698, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c8e8, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) terminal_object_type;
    
    // [TtmpTsmEvaluateTimeouts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67cc4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fb348, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99f644, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f9a38, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) tsm_evaluate_timeouts;
    
    // [TtmpTsmIterate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67ccb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fb3b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99f6ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f9aa0, 0x1fe000 bytes
    //
    _v7(sdk::unknown_ptr) tsm_iterate;
    
    // [TtmpTsmTestTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67cd78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fb480, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99f77c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f9b70, 0x1fe000 bytes
    //
    _v8(sdk::unknown_ptr) tsm_test_timeout;
    
    // [TtmpUpdatePrimaryDisplayWnf]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67c114, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fa668, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x997904, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f8d58, 0x1fe000 bytes
    //
    _v9(sdk::unknown_ptr) update_primary_display_wnf;
    
    // [TtmpUpdateTerminalState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67cd8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fb49c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99f798, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f9b8c, 0x1fe000 bytes
    //
    _w0(sdk::unknown_ptr) update_terminal_state;
};
#include "magic/api.end.hpp"
