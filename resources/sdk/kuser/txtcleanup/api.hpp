#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::txtcleanup
{
    // [vMopUp@TXTCLEANUP]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2bb9b4, 0x1596d bytes
    // win32kfull.sys .text:0x2bce10, 0x1659e bytes
    // win32kfull.sys .text:0x2bb924, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) v_mop_up;
};
#include "magic/api.end.hpp"
