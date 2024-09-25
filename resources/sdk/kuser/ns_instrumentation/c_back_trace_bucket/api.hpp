#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::ns_instrumentation::c_back_trace_bucket
{
    // [Insert@CBackTraceBucket@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d7764, 0x13864 bytes
    // win32kfull.sys .text:0x2ddc4c, 0x1596d bytes
    // win32kbase.sys .text:0x192834, 0x27ef0 bytes
    // win32kfull.sys .text:0x2ddc5c, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) insert;
    
    // [Lookup@CBackTraceBucket@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d78e0, 0x13864 bytes
    // win32kfull.sys .text:0x2dde14, 0x1596d bytes
    // win32kbase.sys .text:0x1929fc, 0x27ef0 bytes
    // win32kfull.sys .text:0x2dde24, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) lookup;
    
    // [Remove@CBackTraceBucket@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d79f4, 0x13864 bytes
    // win32kfull.sys .text:0x2ddf78, 0x1596d bytes
    // win32kbase.sys .text:0x192b60, 0x27ef0 bytes
    // win32kfull.sys .text:0x2ddf88, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) remove;
};
#include "magic/api.end.hpp"
