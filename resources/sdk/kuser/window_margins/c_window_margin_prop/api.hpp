#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::window_margins::c_window_margin_prop
{
    // [CreateMarginsProp@CWindowMarginProp@WindowMargins]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xb23cc, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) create_margins_prop;
    
    // [GetAtom@CWindowMarginProp@WindowMargins]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x119930, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) get_atom;
    
    // [s_atom@CWindowMarginProp@WindowMargins]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .data:0x33925c, 0x1659e bytes
    //
    _m2(sdk::unknown_ptr) s_atom;
};
#include "magic/api.end.hpp"
