#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_trace_logging::win32k
{
    // [ShellWindowPosApplied@Win32k@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x2399cc, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) shell_window_pos_applied;
    
    // [OnReadNotification@Win32k@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1ad9d4, 0x243e0 bytes
    // win32kbase.sys .text:0x1ac0f4, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) on_read_notification;
    
    // [AddInertiaInfo@Win32k@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b27b0, 0x243e0 bytes
    // win32kbase.sys .text:0x1f9120, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b0560, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) add_inertia_info;
    
    // [RemoveInertiaInfo@Win32k@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b2f9c, 0x243e0 bytes
    // win32kbase.sys .text:0x1f9a4c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b0d4c, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) remove_inertia_info;
    
    // [SessionInfo@Win32k@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x134d60, 0x243e0 bytes
    // win32kbase.sys .text:0x165ea4, 0x27ef0 bytes
    // win32kbase.sys .text:0x132710, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) session_info;
};
#include "magic/api.end.hpp"
