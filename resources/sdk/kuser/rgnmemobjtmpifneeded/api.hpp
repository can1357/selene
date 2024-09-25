#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::rgnmemobjtmpifneeded
{
    // [??0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x27a79c, 0x13864 bytes
    // win32kfull.sys .text:0x13729c, 0x1596d bytes
    // win32kfull.sys .text:0x12979c, 0x1659e bytes
    // win32kfull.sys .text:0x1381dc, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x27cb04, 0x13864 bytes
    // win32kfull.sys .text:0x137258, 0x1596d bytes
    // win32kfull.sys .text:0x129758, 0x1659e bytes
    // win32kfull.sys .text:0x138198, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
