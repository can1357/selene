#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::lfontobj
{
    // [??1LFONTOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x7dcdc, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7dc28, 0x13864 bytes
    // win32kfull.sys .text:0x6732c, 0x1596d bytes
    // win32kfull.sys .text:0x74420, 0x1659e bytes
    // win32kfull.sys .text:0x67e9c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [ppfeMapFont@LFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7dcf4, 0x13864 bytes
    // win32kfull.sys .text:0x64bb0, 0x1596d bytes
    // win32kfull.sys .text:0x7a730, 0x1659e bytes
    // win32kfull.sys .text:0x65720, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) ppfe_map_font;
};
#include "magic/api.end.hpp"
