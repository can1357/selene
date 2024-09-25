#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::boundcliprgntosurface
{
    // [??1BOUNDCLIPRGNTOSURFACE@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xb8a40, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb8a60, 0x13864 bytes
    // win32kfull.sys .text:0x138a98, 0x1596d bytes
    // win32kfull.sys .text:0x1273dc, 0x1659e bytes
    // win32kfull.sys .text:0x1399d8, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
