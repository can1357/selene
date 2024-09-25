#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::pathmemobj
{
    // [??0PATHMEMOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x738e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x19470, 0x243e0 bytes
    // win32kbase.sys .text:0x15d20, 0x27ef0 bytes
    // win32kbase.sys .text:0x45420, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1PATHMEMOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x738b0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa06b0, 0x243e0 bytes
    // win32kbase.sys .text:0x517d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8f380, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
