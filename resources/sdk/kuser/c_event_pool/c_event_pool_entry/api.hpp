#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_event_pool::c_event_pool_entry
{
    // [Create@CEventPoolEntry@CEventPool]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2db04c, 0x13864 bytes
    // win32kfull.sys .text:0x10a6ac, 0x1596d bytes
    // win32kfull.sys .text:0x681e8, 0x1659e bytes
    // win32kfull.sys .text:0x10b5dc, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [Destroy@CEventPoolEntry@CEventPool]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2db188, 0x13864 bytes
    // win32kfull.sys .text:0x1205b4, 0x1596d bytes
    // win32kfull.sys .text:0x111100, 0x1659e bytes
    // win32kfull.sys .text:0x1214f4, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy;
};
#include "magic/api.end.hpp"
