#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::umpdsurfobj
{
    // [??1UMPDSURFOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x2aac2c, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2aab8c, 0x13864 bytes
    // win32kfull.sys .text:0x12cdf4, 0x1596d bytes
    // win32kfull.sys .text:0x11f064, 0x1659e bytes
    // win32kfull.sys .text:0x12dd34, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [GetLockedSURFOBJ@UMPDSURFOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x285a44, 0x13864 bytes
    // win32kfull.sys .text:0x12ce64, 0x1596d bytes
    // win32kfull.sys .text:0x11f0d4, 0x1659e bytes
    // win32kfull.sys .text:0x12dda4, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) get_locked_surfobj;
};
#include "magic/api.end.hpp"
