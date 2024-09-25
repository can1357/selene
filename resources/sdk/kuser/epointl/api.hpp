#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::epointl
{
    // [vScale@EPOINTL]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2c06d0, 0x1596d bytes
    // win32kfull.sys .text:0x2c1f08, 0x1659e bytes
    // win32kfull.sys .text:0x2c0640, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) v_scale;
};
#include "magic/api.end.hpp"
