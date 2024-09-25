#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::cit_user_active_tracker
{
    // [CalculateUpToTime@CIT_USER_ACTIVE_TRACKER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x35670, 0x1eb80 bytes
    // win32kbase.sys .text:0x2d268, 0x243e0 bytes
    // win32kbase.sys .text:0x26524, 0x27ef0 bytes
    // win32kbase.sys .text:0x6f7d8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) calculate_up_to_time;
    
    // [OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x356f8, 0x1eb80 bytes
    // win32kbase.sys .text:0x2c9fc, 0x243e0 bytes
    // win32kbase.sys .text:0x6b16c, 0x27ef0 bytes
    // win32kbase.sys .text:0xbb268, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) on_display_required_change;
    
    // [OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x35744, 0x1eb80 bytes
    // win32kbase.sys .text:0x2d1ec, 0x243e0 bytes
    // win32kbase.sys .text:0x264a8, 0x27ef0 bytes
    // win32kbase.sys .text:0x6f75c, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) on_user_active_event;
};
#include "magic/api.end.hpp"
