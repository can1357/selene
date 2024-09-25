#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::undoengupdatedevicesurface
{
    // [??1UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1537f4, 0x1596d bytes
    // win32kfull.sys .text:0x148cdc, 0x1659e bytes
    // win32kfull.sys .text:0x154734, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x26a758, 0x13864 bytes
    // win32kfull.sys .text:0x1538e8, 0x1596d bytes
    // win32kfull.sys .text:0x148d00, 0x1659e bytes
    // win32kfull.sys .text:0x154828, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
