#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::eclipobjtmpifneeded
{
    // [??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x26a790, 0x13864 bytes
    // win32kfull.sys .text:0x152ce8, 0x1596d bytes
    // win32kfull.sys .text:0x1479d8, 0x1659e bytes
    // win32kfull.sys .text:0x153c28, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [vSetup@ECLIPOBJTMPIFNEEDED]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x272584, 0x13864 bytes
    // win32kfull.sys .text:0x152dbc, 0x1596d bytes
    // win32kfull.sys .text:0x147af4, 0x1659e bytes
    // win32kfull.sys .text:0x153cfc, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) v_setup;
};
#include "magic/api.end.hpp"
