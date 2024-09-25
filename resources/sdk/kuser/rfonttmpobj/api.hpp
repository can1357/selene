#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::rfonttmpobj
{
    // [??0RFONTTMPOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x1292c0, 0x1596d bytes
    // win32kfull.sys .text:0x12a200, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148148, 0x13864 bytes
    // win32kfull.sys .text:0x155ba8, 0x1596d bytes
    // win32kfull.sys .text:0x14df04, 0x1659e bytes
    // win32kfull.sys .text:0x156a78, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??1RFONTTMPOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xab30, 0x13864 bytes
    // win32kfull.sys .text:0xf3f7c, 0x1596d bytes
    // win32kfull.sys .text:0x14df2c, 0x1659e bytes
    // win32kfull.sys .text:0xf4e0c, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
