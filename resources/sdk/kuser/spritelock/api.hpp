#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::spritelock
{
    // [??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x43b10, 0x1eb80 bytes
    // win32kbase.sys .text:0x66330, 0x243e0 bytes
    // win32kbase.sys .text:0x53750, 0x27ef0 bytes
    // win32kbase.sys .text:0x30170, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1SPRITELOCK@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x43ae0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa1270, 0x243e0 bytes
    // win32kbase.sys .text:0xb06b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8fed0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
