#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_manual_reset_event
{
    // [Create@CManualResetEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11a370, 0x13864 bytes
    // win32kfull.sys .text:0x10a710, 0x1596d bytes
    // win32kfull.sys .text:0x68390, 0x1659e bytes
    // win32kfull.sys .text:0x10b640, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [Destroy@CManualResetEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1232f0, 0x13864 bytes
    // win32kfull.sys .text:0x1205e8, 0x1596d bytes
    // win32kfull.sys .text:0x111224, 0x1659e bytes
    // win32kfull.sys .text:0x121528, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy;
};
#include "magic/api.end.hpp"
