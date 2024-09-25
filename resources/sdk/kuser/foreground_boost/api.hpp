#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::foreground_boost
{
    // [IsProcessPriorityByClassBackground@ForegroundBoost]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x15bc00, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) is_process_priority_by_class_background;
    
    // [SetForegroundPriority@ForegroundBoost]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xc6bc0, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) set_foreground_priority;
    
    // [UpdateProcessPriorityForSpinning@ForegroundBoost]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x25390, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) update_process_priority_for_spinning;
};
#include "magic/api.end.hpp"
