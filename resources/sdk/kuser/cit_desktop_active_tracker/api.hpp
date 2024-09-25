#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::cit_desktop_active_tracker
{
    // [CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x5d80, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) calculate_up_to_time;
    
    // [UpdateActive@CIT_DESKTOP_ACTIVE_TRACKER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x5d5c, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) update_active;
};
#include "magic/api.end.hpp"
