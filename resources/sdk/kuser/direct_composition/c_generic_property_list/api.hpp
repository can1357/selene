#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_generic_property_list
{
    // [EnsureSpace@CGenericPropertyList@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x22ca48, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) ensure_space;
    
    // [push_back@CGenericPropertyList@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ded9c, 0x243e0 bytes
    // win32kbase.sys .text:0x22d360, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dcb5c, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) push_back;
};
#include "magic/api.end.hpp"
