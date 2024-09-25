#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::dwmsprite
{
    // [vUpdateDpiScaling@DWMSPRITE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xcf588, 0x1596d bytes
    // win32kfull.sys .text:0xb3150, 0x1659e bytes
    // win32kfull.sys .text:0xd0248, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) v_update_dpi_scaling;
    
    // [SetLogicalSurface@DWMSPRITE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x49e50, 0x13864 bytes
    // win32kfull.sys .text:0xcf854, 0x1596d bytes
    // win32kfull.sys .text:0xb33bc, 0x1659e bytes
    // win32kfull.sys .text:0xd0514, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) set_logical_surface;
};
#include "magic/api.end.hpp"
