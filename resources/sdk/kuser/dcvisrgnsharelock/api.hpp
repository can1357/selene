#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::dcvisrgnsharelock
{
    // [??0DCVISRGNSHARELOCK@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1482f0, 0x13864 bytes
    // win32kfull.sys .text:0x12807c, 0x1596d bytes
    // win32kfull.sys .text:0x14df60, 0x1659e bytes
    // win32kfull.sys .text:0x128fbc, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1DCVISRGNSHARELOCK@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14832c, 0x13864 bytes
    // win32kfull.sys .text:0x1283ec, 0x1596d bytes
    // win32kfull.sys .text:0x14dfac, 0x1659e bytes
    // win32kfull.sys .text:0x12932c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
