#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::ns_instrumentation::c_back_trace_store_ex
{
    // [Destroy@CBackTraceStoreEx@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x2d75bc, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) destroy;
    
    // [Create@CBackTraceStoreEx@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x15e354, 0x243e0 bytes
    // win32kbase.sys .text:0x1925ec, 0x27ef0 bytes
    // win32kbase.sys .text:0x15c744, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) create;
    
    // [AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d749c, 0x13864 bytes
    // win32kfull.sys .text:0x2dd928, 0x1596d bytes
    // win32kbase.sys .text:0x19248c, 0x27ef0 bytes
    // win32kfull.sys .text:0x2dd938, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) acquire_back_trace;
};
#include "magic/api.end.hpp"
