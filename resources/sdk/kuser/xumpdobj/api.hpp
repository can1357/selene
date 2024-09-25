#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::xumpdobj
{
    // [??0XUMPDOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29babc, 0x13864 bytes
    // win32kfull.sys .text:0x19b4c, 0x1596d bytes
    // win32kfull.sys .text:0x1203d8, 0x1659e bytes
    // win32kfull.sys .text:0x19efc, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1XUMPDOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29bb40, 0x13864 bytes
    // win32kfull.sys .text:0x195b0, 0x1596d bytes
    // win32kfull.sys .text:0x11fba0, 0x1659e bytes
    // win32kfull.sys .text:0x19960, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
