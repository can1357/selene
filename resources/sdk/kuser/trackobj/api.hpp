#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::trackobj
{
    // [vUpdateDrvDelta@TRACKOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x27b558, 0x13864 bytes
    // win32kfull.sys .text:0x287694, 0x1596d bytes
    // win32kfull.sys .text:0x28685c, 0x1659e bytes
    // win32kfull.sys .text:0x287604, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) v_update_drv_delta;
};
#include "magic/api.end.hpp"
