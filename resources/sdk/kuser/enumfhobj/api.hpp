#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::enumfhobj
{
    // [ppfeFirst@ENUMFHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x286e30, 0x13864 bytes
    // win32kfull.sys .text:0x294434, 0x1596d bytes
    // win32kfull.sys .text:0x15e236, 0x1659e bytes
    // win32kfull.sys .text:0x2943a4, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) ppfe_first;
    
    // [ppfeNext@ENUMFHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x286e5c, 0x13864 bytes
    // win32kfull.sys .text:0x29446c, 0x1596d bytes
    // win32kfull.sys .text:0x294560, 0x1659e bytes
    // win32kfull.sys .text:0x2943dc, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) ppfe_next;
};
#include "magic/api.end.hpp"
