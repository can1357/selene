#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::pffrefobj
{
    // [??0PFFREFOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148150, 0x13864 bytes
    // win32kfull.sys .text:0x1292c0, 0x1596d bytes
    // win32kfull.sys .text:0x119900, 0x1659e bytes
    // win32kfull.sys .text:0x12a200, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1PFFREFOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11bd30, 0x13864 bytes
    // win32kfull.sys .text:0x156fa8, 0x1596d bytes
    // win32kfull.sys .text:0x14e5a0, 0x1659e bytes
    // win32kfull.sys .text:0x157eb0, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
