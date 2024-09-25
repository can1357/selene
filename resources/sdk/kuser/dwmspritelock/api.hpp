#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::dwmspritelock
{
    // [??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x60ae4, 0x13864 bytes
    // win32kfull.sys .text:0x739a4, 0x1596d bytes
    // win32kfull.sys .text:0x3cd90, 0x1659e bytes
    // win32kfull.sys .text:0x74514, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1DWMSPRITELOCK@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x60aac, 0x13864 bytes
    // win32kfull.sys .text:0x7395c, 0x1596d bytes
    // win32kfull.sys .text:0x37824, 0x1659e bytes
    // win32kfull.sys .text:0x744cc, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
