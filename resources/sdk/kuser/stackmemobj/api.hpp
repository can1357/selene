#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::stackmemobj
{
    // [??0STACKMEMOBJ@@QEAA@KKJJJ@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12a79c, 0x13864 bytes
    // win32kfull.sys .text:0x2b88bc, 0x1596d bytes
    // win32kfull.sys .text:0x2b9c70, 0x1659e bytes
    // win32kfull.sys .text:0x2b882c, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1STACKMEMOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x127188, 0x13864 bytes
    // win32kfull.sys .text:0x2b89bc, 0x1596d bytes
    // win32kfull.sys .text:0x2b9d8c, 0x1659e bytes
    // win32kfull.sys .text:0x2b892c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
