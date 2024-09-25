#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::cd_comp_dynamic_array_base
{
    // [Grow@CDCompDynamicArrayBase@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6d384, 0x1eb80 bytes
    // win32kbase.sys .text:0x47634, 0x243e0 bytes
    // win32kbase.sys .text:0x2dbf8, 0x27ef0 bytes
    // win32kbase.sys .text:0x37294, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) grow;
    
    // [SetCount@CDCompDynamicArrayBase@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe8b44, 0x1eb80 bytes
    // win32kbase.sys .text:0x7bc4c, 0x243e0 bytes
    // win32kbase.sys .text:0xa8e70, 0x27ef0 bytes
    // win32kbase.sys .text:0x903e0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) set_count;
    
    // [Shrink@CDCompDynamicArrayBase@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe8b78, 0x1eb80 bytes
    // win32kbase.sys .text:0x7d58c, 0x243e0 bytes
    // win32kbase.sys .text:0xa93e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x9095c, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) shrink;
};
#include "magic/api.end.hpp"
