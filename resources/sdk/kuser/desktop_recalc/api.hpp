#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::desktop_recalc
{
    // [OnMonitorRectsChanged@DesktopRecalc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x14d318, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) on_monitor_rects_changed;
    
    // [OnRapidHpdComparisonFailed@DesktopRecalc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x23dbb8, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) on_rapid_hpd_comparison_failed;
    
    // [OnWindowUncloak@DesktopRecalc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc44f8, 0x1659e bytes
    //
    _m2(sdk::unknown_ptr) on_window_uncloak;
    
    // [OnWorkAreaChanged@DesktopRecalc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x9104c, 0x1659e bytes
    //
    _m3(sdk::unknown_ptr) on_work_area_changed;
    
    // [StartRecalc@DesktopRecalc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x14d508, 0x1659e bytes
    //
    _m4(sdk::unknown_ptr) start_recalc;
    
    // [StartRecalcForDesktop@DesktopRecalc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x14d6b8, 0x1659e bytes
    //
    _m5(sdk::unknown_ptr) start_recalc_for_desktop;
    
    // [xxxOnWindowRestoreFromMinimized@DesktopRecalc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xd0dc8, 0x1659e bytes
    //
    _m6(sdk::unknown_ptr) xxx_on_window_restore_from_minimized;
    
    // [xxxProcessRecalcForThread@DesktopRecalc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc4300, 0x1659e bytes
    //
    _m7(sdk::unknown_ptr) xxx_process_recalc_for_thread;
    
    // [xxxProcessRecalcForWindow@DesktopRecalc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x23e318, 0x1659e bytes
    //
    _m8(sdk::unknown_ptr) xxx_process_recalc_for_window;
};
#include "magic/api.end.hpp"
