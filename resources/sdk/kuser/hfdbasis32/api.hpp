#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::hfdbasis32
{
    // [lError@HFDBASIS32]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x747d4, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) l_error;
    
    // [lParentErrorDividedBy4@HFDBASIS32]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xc7804, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) l_parent_error_divided_by4;
    
    // [vSteadyState@HFDBASIS32]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa0380, 0x243e0 bytes
    // win32kbase.sys .text:0xac8f8, 0x27ef0 bytes
    // win32kbase.sys .text:0x8f170, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) v_steady_state;
};
#include "magic/api.end.hpp"
