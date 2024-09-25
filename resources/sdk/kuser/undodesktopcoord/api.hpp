#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::undodesktopcoord
{
    // [??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x26a6b4, 0x13864 bytes
    // win32kfull.sys .text:0x27e384, 0x1596d bytes
    // win32kfull.sys .text:0x27e4f4, 0x1659e bytes
    // win32kfull.sys .text:0x27e2f4, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1UNDODESKTOPCOORD@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x26a800, 0x13864 bytes
    // win32kfull.sys .text:0x27e4a0, 0x1596d bytes
    // win32kfull.sys .text:0x27e610, 0x1659e bytes
    // win32kfull.sys .text:0x27e410, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
