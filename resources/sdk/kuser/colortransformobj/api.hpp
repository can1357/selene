#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::colortransformobj
{
    // [??1COLORTRANSFORMOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x481d4, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [bDelete@COLORTRANSFORMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2867a4, 0x13864 bytes
    // win32kfull.sys .text:0x294018, 0x1596d bytes
    // win32kfull.sys .text:0x294108, 0x1659e bytes
    // win32kfull.sys .text:0x293f88, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_delete;
    
    // [hCreate@COLORTRANSFORMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x286928, 0x13864 bytes
    // win32kfull.sys .text:0x29422c, 0x1596d bytes
    // win32kfull.sys .text:0x29431c, 0x1659e bytes
    // win32kfull.sys .text:0x29419c, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) h_create;
};
#include "magic/api.end.hpp"
