#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::resource_object
{
    // [ObjectInit@ResourceObject@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x34950, 0x1eb80 bytes
    // win32kbase.sys .text:0x73010, 0x243e0 bytes
    // win32kbase.sys .text:0x27350, 0x27ef0 bytes
    // win32kbase.sys .text:0xb120, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) object_init;
    
    // [ResolveHandle@ResourceObject@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x351e4, 0x1eb80 bytes
    // win32kbase.sys .text:0xa1124, 0x243e0 bytes
    // win32kbase.sys .text:0xb05b4, 0x27ef0 bytes
    // win32kbase.sys .text:0x8fd84, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) resolve_handle;
};
#include "magic/api.end.hpp"
