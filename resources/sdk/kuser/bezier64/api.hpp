#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::bezier64
{
    // [bNext@BEZIER64]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc7380, 0x1eb80 bytes
    // win32kbase.sys .text:0x151cd0, 0x243e0 bytes
    // win32kbase.sys .text:0x184f20, 0x27ef0 bytes
    // win32kbase.sys .text:0x14fb70, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) b_next;
    
    // [vInit@BEZIER64]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc7880, 0x1eb80 bytes
    // win32kbase.sys .text:0x152280, 0x243e0 bytes
    // win32kbase.sys .text:0x185480, 0x27ef0 bytes
    // win32kbase.sys .text:0x150120, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) v_init;
};
#include "magic/api.end.hpp"
