#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::priority_boost
{
    // [IsProcessPriorityByClassBackground@PriorityBoost]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x223fc4, 0x1596d bytes
    // win32kfull.sys .text:0x223e84, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) is_process_priority_by_class_background;
    
    // [UpdateProcessPriorityForSpinning@PriorityBoost]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x324ac, 0x1596d bytes
    // win32kfull.sys .text:0x328bc, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) update_process_priority_for_spinning;
};
#include "magic/api.end.hpp"
