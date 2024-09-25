#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::palmemobj
{
    // [bCreateHTPalette@PALMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xdeb30, 0x13864 bytes
    // win32kfull.sys .text:0xaf48, 0x1596d bytes
    // win32kfull.sys .text:0xee868, 0x1659e bytes
    // win32kfull.sys .text:0xb2f8, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) b_create_ht_palette;
    
    // [bCreatePalette@PALMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5a420, 0x1eb80 bytes
    // win32kbase.sys .text:0xd4ec0, 0x243e0 bytes
    // win32kbase.sys .text:0x95630, 0x27ef0 bytes
    // win32kbase.sys .text:0xd38b0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) b_create_palette;
    
    // [??1PALMEMOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5a390, 0x1eb80 bytes
    // win32kbase.sys .text:0x5e70, 0x243e0 bytes
    // win32kbase.sys .text:0x4e650, 0x27ef0 bytes
    // win32kbase.sys .text:0x851d0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
