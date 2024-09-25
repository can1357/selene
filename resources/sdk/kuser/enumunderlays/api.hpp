#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::enumunderlays
{
    // [bEnum@ENUMUNDERLAYS]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xea6e8, 0x13864 bytes
    // win32kfull.sys .text:0x96618, 0x1596d bytes
    // win32kfull.sys .text:0x22794, 0x1659e bytes
    // win32kfull.sys .text:0x97188, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) b_enum;
    
    // [??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xea99c, 0x13864 bytes
    // win32kfull.sys .text:0x96900, 0x1596d bytes
    // win32kfull.sys .text:0x22c30, 0x1659e bytes
    // win32kfull.sys .text:0x97470, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
