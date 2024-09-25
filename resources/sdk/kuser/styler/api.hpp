#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::styler
{
    // [??0STYLER@@QEAA@AEAVEPATHOBJ@@PEAU_LINEATTRS@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbe69c, 0x13864 bytes
    // win32kfull.sys .text:0x12ee84, 0x1596d bytes
    // win32kfull.sys .text:0x1249cc, 0x1659e bytes
    // win32kfull.sys .text:0x12fdc4, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [efNextStyleLength@STYLER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2c95d0, 0x13864 bytes
    // win32kfull.sys .text:0x2ce8ec, 0x1596d bytes
    // win32kfull.sys .text:0x2d0030, 0x1659e bytes
    // win32kfull.sys .text:0x2ce85c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) ef_next_style_length;
    
    // [efWorldLength@STYLER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2c9608, 0x13864 bytes
    // win32kfull.sys .text:0x2ce928, 0x1596d bytes
    // win32kfull.sys .text:0x2d006c, 0x1659e bytes
    // win32kfull.sys .text:0x2ce898, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) ef_world_length;
};
#include "magic/api.end.hpp"
