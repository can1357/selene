#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ttm
{
    // [TtmNotifyCsStateExited]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x67d2e4, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) notify_cs_state_exited;
    
    // [TtmNotifySessionPowerRequestCreated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x998028, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) notify_session_power_request_created;
    
    // [TtmGetSessionDisplayRequiredCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67cffc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fb7b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8f9ea4, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) get_session_display_required_count;
    
    // [TtmNotifyLowPowerStateExited]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fbb30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x997db0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fa220, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) notify_low_power_state_exited;
    
    // [TtmNotifySessionPowerRequestDeleted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fbd8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x998060, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fa47c, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) notify_session_power_request_deleted;
    
    // [TtmNotifySessionPowerRequestPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8fbf08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9981d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fa5f8, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) notify_session_power_request_present;
    
    // [TtmCleanupCurrentSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67cf0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fb6ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x997998, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f9d9c, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) cleanup_current_session;
    
    // [TtmDispatchApi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67dd1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fd844, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x999a8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fbf34, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) dispatch_api;
    
    // [TtmInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x551738, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b4388, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86dd9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bbfc8, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) init;
    
    // [TtmInitCurrentSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67d058, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fb814, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x997aa8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f9f04, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) init_current_session;
    
    // [TtmIsEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f6884, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x604e98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ed1b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71088c, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) is_enabled;
    
    // [TtmNotifyConsoleUserPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67d254, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fba9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x997d1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fa18c, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) notify_console_user_present;
    
    // [TtmNotifyDeviceArrival]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x536dfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f8dd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x996070, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f74c0, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) notify_device_arrival;
    
    // [TtmNotifyDeviceDeparture]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67b73c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f90d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x996370, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f77c0, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) notify_device_departure;
    
    // [TtmNotifyDeviceInput]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67b7f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f9190, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x996430, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f7880, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) notify_device_input;
    
    // [TtmNotifySessionDisplayBurst]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67d354, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fbba4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x997e2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fa294, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) notify_session_display_burst;
    
    // [TtmNotifySessionDisplayRequiredChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67d3d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fbc40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x997ec8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fa330, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) notify_session_display_required_change;
    
    // [TtmNotifySessionPowerStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67d4d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fbfa8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x998260, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fa698, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) notify_session_power_state_change;
    
    // [TtmNotifySessionTerminalInput]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67d564, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fc034, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9982f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fa724, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) notify_session_terminal_input;
    
    // [TtmSessionMonitorControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67d5f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8fc0cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x998388, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8fa7bc, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) session_monitor_control;
};
#include "magic/api.end.hpp"
