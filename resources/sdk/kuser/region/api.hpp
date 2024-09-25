#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::region
{
    // [ulUniqueREGION@REGION]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x11e8f0, 0x1eb80 bytes
    // win32kbase.sys .data:0x259f88, 0x243e0 bytes
    // win32kbase.sys .data:0x2aedb8, 0x27ef0 bytes
    // win32kbase.sys .data:0x256fb8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) ul_unique_region;
    
    // [vDeleteREGION@REGION]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x49314, 0x13864 bytes
    // win32kbase.sys .text:0x51ac0, 0x243e0 bytes
    // win32kbase.sys .text:0x376b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x17de0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) v_delete_region;
};
#include "magic/api.end.hpp"
