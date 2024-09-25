#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::restoresavedcattrs
{
    // [vInit@RESTORESAVEDCATTRS]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x1286c4, 0x1596d bytes
    // win32kfull.sys .text:0x129604, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) v_init;
    
    // [??1RESTORESAVEDCATTRS@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x2667e0, 0x13864 bytes
    // win32kfull.sys .text:0x128928, 0x1596d bytes
    // win32kfull.sys .text:0x129868, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [vDone@RESTORESAVEDCATTRS]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2685a4, 0x13864 bytes
    // win32kfull.sys .text:0x13f58c, 0x1596d bytes
    // win32kfull.sys .text:0x121ebc, 0x1659e bytes
    // win32kfull.sys .text:0x1404cc, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) v_done;
};
#include "magic/api.end.hpp"
