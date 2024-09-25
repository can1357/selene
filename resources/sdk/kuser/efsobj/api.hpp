#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::efsobj
{
    // [bAdd@EFSOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x82118, 0x13864 bytes
    // win32kfull.sys .text:0x6e5f4, 0x1596d bytes
    // win32kfull.sys .text:0x7e61c, 0x1659e bytes
    // win32kfull.sys .text:0x6f164, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) b_add;
    
    // [bGrow@EFSOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13d514, 0x13864 bytes
    // win32kfull.sys .text:0x38930, 0x1596d bytes
    // win32kfull.sys .text:0x133050, 0x1659e bytes
    // win32kfull.sys .text:0x38d40, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_grow;
    
    // [WriteEFE@EFSOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x82278, 0x13864 bytes
    // win32kfull.sys .text:0x6e768, 0x1596d bytes
    // win32kfull.sys .text:0x7e764, 0x1659e bytes
    // win32kfull.sys .text:0x6f2d8, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) write_efe;
};
#include "magic/api.end.hpp"
