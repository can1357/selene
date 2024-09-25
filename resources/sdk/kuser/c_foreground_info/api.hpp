#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_foreground_info
{
    // [ClearForeground@CForegroundInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x18f9e0, 0x243e0 bytes
    // win32kbase.sys .text:0x18ddd0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) clear_foreground;
    
    // [GetForeground@CForegroundInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xaa090, 0x243e0 bytes
    // win32kbase.sys .text:0x9f8a0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) get_foreground;
    
    // [HasForeground@CForegroundInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1acb10, 0x243e0 bytes
    // win32kbase.sys .text:0x1ab230, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) has_foreground;
    
    // [Initialize@CForegroundInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x27824, 0x243e0 bytes
    // win32kbase.sys .text:0x7a384, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) initialize;
    
    // [SetForeground@CForegroundInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1acb30, 0x243e0 bytes
    // win32kbase.sys .text:0x1ab250, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_foreground;
};
#include "magic/api.end.hpp"
