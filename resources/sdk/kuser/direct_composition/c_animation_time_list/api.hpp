#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_animation_time_list
{
    // [Release@CAnimationTimeList@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6e32c, 0x1eb80 bytes
    // win32kbase.sys .text:0xb01ac, 0x243e0 bytes
    // win32kbase.sys .text:0xc7a60, 0x27ef0 bytes
    // win32kbase.sys .text:0xa6b34, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
