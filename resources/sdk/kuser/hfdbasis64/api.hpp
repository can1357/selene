#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::hfdbasis64
{
    // [vError@HFDBASIS64]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xc7840, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) v_error;
    
    // [vInit@HFDBASIS64]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8b54c, 0x1eb80 bytes
    // win32kbase.sys .text:0x152404, 0x243e0 bytes
    // win32kbase.sys .text:0x1855f4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1502a4, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) v_init;
    
    // [vParentError@HFDBASIS64]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc79c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x15247c, 0x243e0 bytes
    // win32kbase.sys .text:0x18566c, 0x27ef0 bytes
    // win32kbase.sys .text:0x15031c, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) v_parent_error;
    
    // [vUntransform@HFDBASIS64]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc7a38, 0x1eb80 bytes
    // win32kbase.sys .text:0x1524e0, 0x243e0 bytes
    // win32kbase.sys .text:0x1856d4, 0x27ef0 bytes
    // win32kbase.sys .text:0x150380, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) v_untransform;
};
#include "magic/api.end.hpp"
