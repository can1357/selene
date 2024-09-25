#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::window_margins
{
    // [CheckForChanges@WindowMargins]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x4ad54, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) check_for_changes;
    
    // [ExtendRect@WindowMargins]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc6634, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) extend_rect;
    
    // [GetPhysicalFrameBounds@WindowMargins]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x15d308, 0x1659e bytes
    //
    _m2(sdk::unknown_ptr) get_physical_frame_bounds;
    
    // [ReduceRect@WindowMargins]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc66a4, 0x1659e bytes
    //
    _m3(sdk::unknown_ptr) reduce_rect;
};
#include "magic/api.end.hpp"
