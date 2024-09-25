#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::bezier32
{
    // [bInit@BEZIER32]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x74550, 0x1eb80 bytes
    // win32kbase.sys .text:0xa00f0, 0x243e0 bytes
    // win32kbase.sys .text:0xac660, 0x27ef0 bytes
    // win32kbase.sys .text:0x8eee0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) b_init;
    
    // [bNext@BEZIER32]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x74480, 0x1eb80 bytes
    // win32kbase.sys .text:0x9fe60, 0x243e0 bytes
    // win32kbase.sys .text:0xac3d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8ec50, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) b_next;
};
#include "magic/api.end.hpp"
