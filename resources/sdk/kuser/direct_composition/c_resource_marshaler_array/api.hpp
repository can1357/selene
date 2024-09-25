#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_resource_marshaler_array
{
    // [Clear@CResourceMarshalerArray@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xa31c8, 0x243e0 bytes
    // win32kbase.sys .text:0x926d8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) clear;
    
    // [Set@CResourceMarshalerArray@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xa3108, 0x243e0 bytes
    // win32kbase.sys .text:0x92618, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) set;
};
#include "magic/api.end.hpp"
