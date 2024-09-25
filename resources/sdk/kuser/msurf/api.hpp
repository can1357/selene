#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::msurf
{
    // [vRestore@MSURF]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a7180, 0x1596d bytes
    // win32kfull.sys .text:0x2a72c8, 0x1659e bytes
    // win32kfull.sys .text:0x2a70f0, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) v_restore;
    
    // [bFindSurface@MSURF]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x298f24, 0x13864 bytes
    // win32kfull.sys .text:0x2a6730, 0x1596d bytes
    // win32kfull.sys .text:0x15efb4, 0x1659e bytes
    // win32kfull.sys .text:0x2a66a0, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_find_surface;
    
    // [bNextSurface@MSURF]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x299334, 0x13864 bytes
    // win32kfull.sys .text:0x2a6b84, 0x1596d bytes
    // win32kfull.sys .text:0x2a6cd0, 0x1659e bytes
    // win32kfull.sys .text:0x2a6af4, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_next_surface;
};
#include "magic/api.end.hpp"
