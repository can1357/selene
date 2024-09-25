#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::cit_user_activity_stat
{
    // [CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x357b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x94d98, 0x243e0 bytes
    // win32kbase.sys .text:0x752f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x67334, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) calculate_delta_from;
    
    // [SetActive@CIT_USER_ACTIVITY_STAT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x35774, 0x1eb80 bytes
    // win32kbase.sys .text:0x2d224, 0x243e0 bytes
    // win32kbase.sys .text:0x264e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x6f794, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) set_active;
};
#include "magic/api.end.hpp"
