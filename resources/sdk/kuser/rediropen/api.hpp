#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::rediropen
{
    // [??1REDIROPEN@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x28de7c, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x28de28, 0x13864 bytes
    // win32kfull.sys .text:0x29b7f8, 0x1596d bytes
    // win32kfull.sys .text:0x29c7e8, 0x1659e bytes
    // win32kfull.sys .text:0x29b768, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
