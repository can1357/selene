#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_swap_chain_prop
{
    // [Init@CSwapChainProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x13bc70, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) init;
    
    // [Delete@CSwapChainProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13bcb0, 0x13864 bytes
    // win32kfull.sys .text:0x23e090, 0x1596d bytes
    // win32kfull.sys .text:0x238940, 0x1659e bytes
    // win32kfull.sys .text:0x23df40, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) _delete;
    
    // [ClearCompositionSurfaceObj@CSwapChainProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13bcd0, 0x13864 bytes
    // win32kfull.sys .text:0x14d3d0, 0x1596d bytes
    // win32kfull.sys .text:0x1417b4, 0x1659e bytes
    // win32kfull.sys .text:0x14e310, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) clear_composition_surface_obj;
    
    // [CreateSwapChainProp@CSwapChainProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13ba48, 0x13864 bytes
    // win32kfull.sys .text:0x14d414, 0x1596d bytes
    // win32kfull.sys .text:0x1417f8, 0x1659e bytes
    // win32kfull.sys .text:0x14e354, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) create_swap_chain_prop;
    
    // [GetAtom@CSwapChainProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x127420, 0x13864 bytes
    // win32kfull.sys .text:0x129360, 0x1596d bytes
    // win32kfull.sys .text:0x119920, 0x1659e bytes
    // win32kfull.sys .text:0x12a2a0, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) get_atom;
    
    // [NotifyDwm@CSwapChainProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13bbf4, 0x13864 bytes
    // win32kfull.sys .text:0x14d280, 0x1596d bytes
    // win32kfull.sys .text:0x141654, 0x1659e bytes
    // win32kfull.sys .text:0x14e1c0, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) notify_dwm;
    
    // [s_atom@CSwapChainProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x326d60, 0x13864 bytes
    // win32kfull.sys .data:0x339dec, 0x1596d bytes
    // win32kfull.sys .data:0x338024, 0x1659e bytes
    // win32kfull.sys .data:0x339dec, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) s_atom;
};
#include "magic/api.end.hpp"
