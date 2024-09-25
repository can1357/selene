#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::window_grouping_feature
{
    // [InitializeWindowGroupFunctionality@WindowGroupingFeature]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x241240, 0x1596d bytes
    // win32kfull.sys .text:0x2410f0, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) initialize_window_group_functionality;
    
    // [UnInitializeWindowGroupFunctionality@WindowGroupingFeature]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0xc0b08, 0x1596d bytes
    // win32kfull.sys .text:0xc1678, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) un_initialize_window_group_functionality;
};
#include "magic/api.end.hpp"
