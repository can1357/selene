#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::rapid_hpd
{
    // [ProcessModeChange@RapidHPD]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x114924, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) process_mode_change;
};
#include "magic/api.end.hpp"
