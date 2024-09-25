#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ttmi
{
    // [TtmiLogInactivityTimerReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x99c0b0, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) log_inactivity_timer_reset;
    
    // [TtmiLogInactivityTimoutUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x99c180, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) log_inactivity_timout_update;
    
    // [TtmiLogSessionSetCsSessionGoalStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6807bc, 0x32828 bytes
    //
    _m2(sdk::unknown_ptr) log_session_set_cs_session_goal_start;
    
    // [TtmiLogSessionSetCsSessionGoalStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6808a8, 0x32828 bytes
    //
    _m3(sdk::unknown_ptr) log_session_set_cs_session_goal_stop;
    
    // [TtmiResetInactivityTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x99ec6c, 0x1fd000 bytes
    //
    _m4(sdk::unknown_ptr) reset_inactivity_timer;
    
    // [TtmiUndimAllTerminals]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x67c8e8, 0x32828 bytes
    //
    _m5(sdk::unknown_ptr) undim_all_terminals;
    
    // [TtmiDevicesRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8f93d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99667c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f7ac0, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) devices_rundown;
    
    // [TtmiLogCalloutWatchdogCrashSkipped]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fe870, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99aa64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fcf60, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) log_callout_watchdog_crash_skipped;
    
    // [TtmiLogDeviceArrivalNotified]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8febf4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99ade8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fd2e4, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) log_device_arrival_notified;
    
    // [TtmiLogDeviceArrivedTerminalEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fed40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99af34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fd430, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) log_device_arrived_terminal_event;
    
    // [TtmiLogDeviceAssignedTerminalEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fee80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99b074, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fd570, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) log_device_assigned_terminal_event;
    
    // [TtmiLogDeviceDepartedTerminalEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fef70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99b164, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fd660, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) log_device_departed_terminal_event;
    
    // [TtmiLogDeviceEnumeratedTerminalEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8ff158, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99b34c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fd848, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) log_device_enumerated_terminal_event;
    
    // [TtmiLogDeviceRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8ff538, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99b72c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fdc28, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) log_device_rundown;
    
    // [TtmiLogDeviceSetInputWakeCapability]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8ff690, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99b884, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fdd80, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) log_device_set_input_wake_capability;
    
    // [TtmiLogDisplayPowerRequestSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8ffa50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99bc44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fe140, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) log_display_power_request_set;
    
    // [TtmiLogInitiateModernStandbyTransitionStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x900034, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99c3c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fe724, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) log_initiate_modern_standby_transition_start;
    
    // [TtmiLogInitiateModernStandbyTransitionStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x900128, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99c4bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fe818, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) log_initiate_modern_standby_transition_stop;
    
    // [TtmiLogQueueDequeueEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90053c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99c8d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fec2c, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) log_queue_dequeue_event;
    
    // [TtmiLogQueueEnqueueEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x900694, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99ca28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fed84, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) log_queue_enqueue_event;
    
    // [TtmiLogSessionDisplayRequiredPowerRequestUpdated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x900c68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99cffc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ff358, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) log_session_display_required_power_request_updated;
    
    // [TtmiLogSessionPowerRequestAcknowledged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x901078, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99d40c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ff768, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) log_session_power_request_acknowledged;
    
    // [TtmiLogSessionPowerRequestCreated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9011c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99d558, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ff8b8, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) log_session_power_request_created;
    
    // [TtmiLogSessionPowerRequestDeleted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x90128c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99d61c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ff97c, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) log_session_power_request_deleted;
    
    // [TtmiLogSessionRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x901424, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99d7b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ffb14, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) log_session_rundown;
    
    // [TtmiLogTerminalDisplayStateChangedEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x901a10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99dda0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x900100, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) log_terminal_display_state_changed_event;
    
    // [TtmiLogTerminalRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x902034, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99e3c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x900724, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) log_terminal_rundown;
    
    // [TtmiPurgeSessionPowerRequestEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fc1dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x998498, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fa8cc, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) purge_session_power_request_entries;
    
    // [TtmiSessionsRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fc330, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9985e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8faa20, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) sessions_rundown;
    
    // [TtmiSetDisplayPowerRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fc3f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9986a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8faae0, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) set_display_power_request;
    
    // [TtmiSetInputWakeCapability]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8f977c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x996a28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f7e6c, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) set_input_wake_capability;
    
    // [TtmiTerminalsRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8faea4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99f158, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f9594, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) terminals_rundown;
    
    // [TtmiAcquireCurrentSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x536f18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fc17c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x998438, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fa86c, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) acquire_current_session;
    
    // [TtmiAssignDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67b954, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f931c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9965bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f7a0c, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) assign_device;
    
    // [TtmiCloseEventQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67e740, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90250c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99fa48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x900bfc, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) close_event_queue;
    
    // [TtmiCreateEventQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67e7c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9025b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99faec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x900ca8, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) create_event_queue;
    
    // [TtmiCreateTerminal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67c180, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fa6fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99e8a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f8dec, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) create_terminal;
    
    // [TtmiEvacuateDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67b9fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f9478, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x996724, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f7b68, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) evacuate_devices;
    
    // [TtmiGetTerminalById]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67c3fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fa998, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99eb60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f9088, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) get_terminal_by_id;
    
    // [TtmiLogCalloutStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67ed38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fe484, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99a6ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fcb74, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) log_callout_start;
    
    // [TtmiLogCalloutStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67ee6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fe5c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99a828, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fccb0, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) log_callout_stop;
    
    // [TtmiLogCleanupCurrentSessionStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67efbc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fe9dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99abd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fd0cc, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) log_cleanup_current_session_start;
    
    // [TtmiLogCleanupCurrentSessionStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67f05c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fea84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99ac78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fd174, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) log_cleanup_current_session_stop;
    
    // [TtmiLogConsoleUserPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67f0fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8feb2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99ad20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fd21c, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) log_console_user_present;
    
    // [TtmiLogDeviceDepartureNotified]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67f1bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ff040, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99b234, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fd730, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) log_device_departure_notified;
    
    // [TtmiLogDeviceFromTerminalRemoved]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67f2d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ff298, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99b48c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fd988, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) log_device_from_terminal_removed;
    
    // [TtmiLogDeviceInputNotified]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67f3fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ff3cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99b5c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fdabc, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) log_device_input_notified;
    
    // [TtmiLogDeviceToTerminalAssigned]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67f540, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ff7a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99b994, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fde90, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) log_device_to_terminal_assigned;
    
    // [TtmiLogDispatchApiStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67f628, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ff890, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99ba84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fdf80, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) log_dispatch_api_start;
    
    // [TtmiLogDispatchApiStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67f6f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ff960, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99bb54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fe050, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) log_dispatch_api_stop;
    
    // [TtmiLogEnterProximity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67f7d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ffb80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99bd74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fe270, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) log_enter_proximity;
    
    // [TtmiLogError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x536fac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ffc50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99be44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fe340, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) log_error;
    
    // [TtmiLogExitProximity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67f8a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ffda8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99bf9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fe498, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) log_exit_proximity;
    
    // [TtmiLogInitCurrentSessionStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67f9bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ffebc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99c250, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fe5ac, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) log_init_current_session_start;
    
    // [TtmiLogInitCurrentSessionStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67fa5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fff64, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99c2f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fe654, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) log_init_current_session_stop;
    
    // [TtmiLogProximityBlockedRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67fb24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9001f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99c58c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fe8e8, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) log_proximity_blocked_request;
    
    // [TtmiLogProximityPowerPress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67fc3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x900318, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99c6ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fea08, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) log_proximity_power_press;
    
    // [TtmiLogQueueCreated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67fd88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x900468, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99c7fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8feb58, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) log_queue_created;
    
    // [TtmiLogQueueDestroyed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67fe58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x900600, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99c994, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fecf0, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) log_queue_destroyed;
    
    // [TtmiLogQueueHandleClosed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67fee8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x900758, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99caec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fee48, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) log_queue_handle_closed;
    
    // [TtmiLogQueueHandleOpened]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67ffa8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x900820, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99cbb4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fef10, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) log_queue_handle_opened;
    
    // [TtmiLogSessionActivate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x680068, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9008e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99cc7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fefd8, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) log_session_activate;
    
    // [TtmiLogSessionCsExitComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x680108, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x900990, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99cd24, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ff080, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) log_session_cs_exit_complete;
    
    // [TtmiLogSessionDeactivate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x680198, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x900a24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99cdb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ff114, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) log_session_deactivate;
    
    // [TtmiLogSessionDeviceAssignmentPolicySet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x680238, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x900acc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99ce60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ff1bc, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) log_session_device_assignment_policy_set;
    
    // [TtmiLogSessionDisplayRequiredDereference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x680304, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x900ba0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99cf34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ff290, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) log_session_display_required_dereference;
    
    // [TtmiLogSessionDisplayRequiredReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6803c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x900d2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99d0c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ff41c, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) log_session_display_required_reference;
    
    // [TtmiLogSessionMonitorControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x680484, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x900df4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99d188, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ff4e4, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) log_session_monitor_control;
    
    // [TtmiLogSessionPowerControlStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x680564, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x900edc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99d270, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ff5cc, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) log_session_power_control_start;
    
    // [TtmiLogSessionPowerControlStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x680650, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x900fd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99d364, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ff6c0, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) log_session_power_control_stop;
    
    // [TtmiLogSessionPowerStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6806f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x901350, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99d6e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ffa40, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) log_session_power_state_change;
    
    // [TtmiLogSessionWorkerPass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x680970, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9015ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99d93c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ffc9c, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) log_session_worker_pass;
    
    // [TtmiLogSessionWorkerStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x680a30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x901674, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99da04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ffd64, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) log_session_worker_start;
    
    // [TtmiLogSessionWorkerStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x680ac0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x901708, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99da98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ffdf8, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) log_session_worker_stop;
    
    // [TtmiLogTerminalCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x680b74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9017c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99db50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ffeb0, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) log_terminal_cleanup;
    
    // [TtmiLogTerminalCreated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x680c34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x901888, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99dc18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fff78, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) log_terminal_created;
    
    // [TtmiLogTerminalDestroyed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x680d20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90197c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99dd0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90006c, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) log_terminal_destroyed;
    
    // [TtmiLogTerminalDisplayTimeouts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x680db0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x901b20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99deb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x900210, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) log_terminal_display_timeouts;
    
    // [TtmiLogTerminalHandleClosed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x680ec0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x901c34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99dfc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x900324, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) log_terminal_handle_closed;
    
    // [TtmiLogTerminalHandleOpened]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x680fa0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x901d1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99e0ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90040c, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) log_terminal_handle_opened;
    
    // [TtmiLogTerminalOffRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x681080, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x901e04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99e194, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9004f4, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) log_terminal_off_request;
    
    // [TtmiLogTerminalOnRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x681190, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x901f1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99e2ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90060c, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) log_terminal_on_request;
    
    // [TtmiLogTerminalStateMachine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6812a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90228c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99e61c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90097c, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) log_terminal_state_machine;
    
    // [TtmiOpenDefaultTerminal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67c434, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fa9d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99eb9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f90c4, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) open_default_terminal;
    
    // [TtmiPublishDeviceEnumerationEvents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67ba5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f94e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99678c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f7bd0, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) publish_device_enumeration_events;
    
    // [TtmiResetTerminalTimeouts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67c4f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8faaa4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99ed0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f9194, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) reset_terminal_timeouts;
    
    // [TtmiRetrieveEventFromQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67e950, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x902750, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99fc40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x900e40, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) retrieve_event_from_queue;
    
    // [TtmiScheduleSessionWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67d6a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fc2f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9985ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fa9e8, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) schedule_session_worker;
    
    // [TtmiSessionDeviceListWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67bae8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f9574, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x996820, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f7c64, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) session_device_list_worker;
    
    // [TtmiSessionTerminalListWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67c53c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8faaec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99ed90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f91dc, 0x1fe000 bytes
    //
    _u9(sdk::unknown_ptr) session_terminal_list_worker;
    
    // [TtmiSetPendingOnOffRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67c728, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8face4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99ef98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f93d4, 0x1fe000 bytes
    //
    _v0(sdk::unknown_ptr) set_pending_on_off_request;
    
    // [TtmiTerminalMonitorControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67c7e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fad98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99f04c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f9488, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) terminal_monitor_control;
    
    // [TtmiTerminalSetDisplayTimeouts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67c870, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fae28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99f0dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f9518, 0x1fe000 bytes
    //
    _v2(sdk::unknown_ptr) terminal_set_display_timeouts;
    
    // [TtmiUpdateActiveTerminalCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67d6d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fc648, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9988d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fad38, 0x1fe000 bytes
    //
    _v3(sdk::unknown_ptr) update_active_terminal_count;
    
    // [TtmiWriteEnumerationEventsToQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67d710, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fc694, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x998924, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fad84, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) write_enumeration_events_to_queue;
    
    // [TtmiWriteEventToAllQueues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67d790, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fc730, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9989c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fae20, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) write_event_to_all_queues;
    
    // [TtmiWriteEventToSingleQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67eaa0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9028c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99fda8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x900fb0, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) write_event_to_single_queue;
};
#include "magic/api.end.hpp"
