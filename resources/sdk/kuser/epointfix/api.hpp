#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::epointfix
{
    // [??0EPOINTFIX@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14a080, 0x13864 bytes
    // win32kfull.sys .text:0x129400, 0x1596d bytes
    // win32kfull.sys .text:0x1199d0, 0x1659e bytes
    // win32kfull.sys .text:0x12a340, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1EPOINTFIX@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4d560, 0x13864 bytes
    // win32kfull.sys .text:0x1291d0, 0x1596d bytes
    // win32kfull.sys .text:0x1198f0, 0x1659e bytes
    // win32kfull.sys .text:0x12a110, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
