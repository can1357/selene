#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::window_grouping_window_management
{
    // [HandleWindowDestruction@WindowGroupingWindowManagement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x2410f0, 0x1596d bytes
    // win32kfull.sys .text:0x240fa0, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) handle_window_destruction;
    
    // [SetWindowGroup@WindowGroupingWindowManagement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x24145c, 0x1596d bytes
    // win32kfull.sys .text:0x24130c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) set_window_group;
};
#include "magic/api.end.hpp"
