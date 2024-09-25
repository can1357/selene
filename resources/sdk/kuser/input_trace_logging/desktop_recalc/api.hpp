#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_trace_logging::desktop_recalc
{
    // [RapidHpdComplete@DesktopRecalc@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x246ecc, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) rapid_hpd_complete;
    
    // [RapidHpdModeChange@DesktopRecalc@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x246fa0, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) rapid_hpd_mode_change;
    
    // [RestoreMonitorAndWindowSnapshot@DesktopRecalc@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1d4afc, 0x1659e bytes
    //
    _m2(sdk::unknown_ptr) restore_monitor_and_window_snapshot;
    
    // [SaveMonitorAndWindowSnapshot@DesktopRecalc@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1d4c88, 0x1659e bytes
    //
    _m3(sdk::unknown_ptr) save_monitor_and_window_snapshot;
};
#include "magic/api.end.hpp"
