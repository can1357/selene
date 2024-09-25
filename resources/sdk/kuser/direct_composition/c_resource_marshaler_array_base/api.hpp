#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_resource_marshaler_array_base
{
    // [Clear@CResourceMarshalerArrayBase@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xae09c, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) clear;
    
    // [Marshal@CResourceMarshalerArrayBase@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xa79c0, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) marshal;
    
    // [Set@CResourceMarshalerArrayBase@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xade00, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) set;
};
#include "magic/api.end.hpp"
