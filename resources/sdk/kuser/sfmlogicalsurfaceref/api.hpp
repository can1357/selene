#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::sfmlogicalsurfaceref
{
    // [??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6588c, 0x13864 bytes
    // win32kfull.sys .text:0x73ed0, 0x1596d bytes
    // win32kfull.sys .text:0xfbc44, 0x1659e bytes
    // win32kfull.sys .text:0x74a40, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1SFMLOGICALSURFACEREF@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x65860, 0x13864 bytes
    // win32kfull.sys .text:0x73560, 0x1596d bytes
    // win32kfull.sys .text:0x3bbf0, 0x1659e bytes
    // win32kfull.sys .text:0x740d0, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [LockLogicalSurfaceObj@SFMLOGICALSURFACEREF]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x65868, 0x13864 bytes
    // win32kfull.sys .text:0x73f04, 0x1596d bytes
    // win32kfull.sys .text:0xfbc78, 0x1659e bytes
    // win32kfull.sys .text:0x74a74, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) lock_logical_surface_obj;
};
#include "magic/api.end.hpp"
