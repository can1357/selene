#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::enumuncovered
{
    // [bEnum@ENUMUNCOVERED]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11b874, 0x13864 bytes
    // win32kfull.sys .text:0xf09e8, 0x1596d bytes
    // win32kfull.sys .text:0xf4518, 0x1659e bytes
    // win32kfull.sys .text:0xf1808, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) b_enum;
};
#include "magic/api.end.hpp"
