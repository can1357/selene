#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::multispriteddiaccess
{
    // [??0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10ee0c, 0x13864 bytes
    // win32kfull.sys .text:0xeed80, 0x1596d bytes
    // win32kfull.sys .text:0xf2938, 0x1659e bytes
    // win32kfull.sys .text:0xefba0, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1MULTISPRITEDDIACCESS@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10edc4, 0x13864 bytes
    // win32kfull.sys .text:0xeed30, 0x1596d bytes
    // win32kfull.sys .text:0xf28e8, 0x1659e bytes
    // win32kfull.sys .text:0xefb50, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
