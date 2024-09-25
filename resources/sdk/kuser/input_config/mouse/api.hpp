#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_config::mouse
{
    // [GetPrimaryRegion@Mouse@InputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1fc060, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) get_primary_region;
    
    // [GetUnionRegion@Mouse@InputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x245c0, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) get_union_region;
    
    // [GetPrimaryRect@Mouse@InputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1bcf10, 0x243e0 bytes
    // win32kbase.sys .text:0x1bacf0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) get_primary_rect;
    
    // [GetUnionRect@Mouse@InputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1eaec, 0x243e0 bytes
    // win32kbase.sys .text:0x5cf60, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) get_union_rect;
    
    // [GetInputSpaceId@Mouse@InputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x71a40, 0x243e0 bytes
    // win32kbase.sys .text:0x246b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x5fbd0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_input_space_id;
    
    // [RegionFromPoint@Mouse@InputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ee30, 0x243e0 bytes
    // win32kbase.sys .text:0x24118, 0x27ef0 bytes
    // win32kbase.sys .text:0x592a8, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) region_from_point;
};
#include "magic/api.end.hpp"
