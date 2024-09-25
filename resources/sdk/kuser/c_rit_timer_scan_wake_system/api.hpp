#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_rit_timer_scan_wake_system
{
    // [CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xba28c, 0x1596d bytes
    // win32kfull.sys .text:0x8e4f4, 0x1659e bytes
    // win32kfull.sys .text:0xbadfc, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) cleanup_rit_timer_scan_wake_event;
    
    // [ritTimerScanWakeEvent@CRitTimerScanWakeSystem]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x33ae78, 0x1596d bytes
    // win32kfull.sys .data:0x339198, 0x1659e bytes
    // win32kfull.sys .data:0x33aea8, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) rit_timer_scan_wake_event;
    
    // [ritTimerScanWakeSystemLock@CRitTimerScanWakeSystem]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x33b0f0, 0x1596d bytes
    // win32kfull.sys .data:0x339470, 0x1659e bytes
    // win32kfull.sys .data:0x33b120, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) rit_timer_scan_wake_system_lock;
};
#include "magic/api.end.hpp"
