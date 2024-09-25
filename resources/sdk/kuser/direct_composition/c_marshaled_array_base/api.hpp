#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_marshaled_array_base
{
    // [Clear@CMarshaledArrayBase@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xb92e4, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) clear;
    
    // [Copy@CMarshaledArrayBase@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x233430, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) copy;
    
    // [Marshal@CMarshaledArrayBase@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x233528, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) marshal;
};
#include "magic/api.end.hpp"
