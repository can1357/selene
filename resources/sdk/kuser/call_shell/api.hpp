#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::call_shell
{
    // [xxxDisplayChangedHandler@CallShell]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x106358, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) xxx_display_changed_handler;
    
    // [xxxMigrateWindowHandler@CallShell]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x239fbc, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) xxx_migrate_window_handler;
    
    // [xxxArrangementRectangleHandler@CallShell]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23e3b0, 0x1596d bytes
    // win32kfull.sys .text:0x239f0c, 0x1659e bytes
    // win32kfull.sys .text:0x23e260, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) xxx_arrangement_rectangle_handler;
    
    // [xxxShowWindowPolicyHandler@CallShell]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xc0b48, 0x1596d bytes
    // win32kfull.sys .text:0x104214, 0x1659e bytes
    // win32kfull.sys .text:0xc16b8, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) xxx_show_window_policy_handler;
    
    // [xxxWindowSizeStartingHandler@CallShell]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23e4a4, 0x1596d bytes
    // win32kfull.sys .text:0x23ab28, 0x1659e bytes
    // win32kfull.sys .text:0x23e354, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) xxx_window_size_starting_handler;
};
#include "magic/api.end.hpp"
