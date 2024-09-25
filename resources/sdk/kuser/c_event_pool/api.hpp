#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_event_pool
{
    // [Create@CEventPool]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10a660, 0x1596d bytes
    // win32kfull.sys .text:0x68344, 0x1659e bytes
    // win32kfull.sys .text:0x10b590, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [Destroy@CEventPool]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12055c, 0x1596d bytes
    // win32kfull.sys .text:0x111174, 0x1659e bytes
    // win32kfull.sys .text:0x12149c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy;
};
#include "magic/api.end.hpp"
