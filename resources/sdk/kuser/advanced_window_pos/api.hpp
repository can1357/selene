#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::advanced_window_pos
{
    // [GetMigrateMonitor@AdvancedWindowPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc5a7c, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) get_migrate_monitor;
    
    // [GetWindowState@AdvancedWindowPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1077ec, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) get_window_state;
    
    // [HasFullscreenState@AdvancedWindowPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc7300, 0x1659e bytes
    //
    _m2(sdk::unknown_ptr) has_fullscreen_state;
    
    // [MigrateCheckpoint@AdvancedWindowPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x24dc58, 0x1659e bytes
    //
    _m3(sdk::unknown_ptr) migrate_checkpoint;
    
    // [xxxApplyWindowPos@AdvancedWindowPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x24dd90, 0x1659e bytes
    //
    _m4(sdk::unknown_ptr) xxx_apply_window_pos;
    
    // [xxxMigrateWindowToMonitor@AdvancedWindowPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x24ed50, 0x1659e bytes
    //
    _m5(sdk::unknown_ptr) xxx_migrate_window_to_monitor;
    
    // [xxxVerticalMaximize@AdvancedWindowPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x24ed8c, 0x1659e bytes
    //
    _m6(sdk::unknown_ptr) xxx_vertical_maximize;
};
#include "magic/api.end.hpp"
