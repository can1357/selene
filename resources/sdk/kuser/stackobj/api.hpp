#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::stackobj
{
    // [bExpand@STACKOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b467c, 0x13864 bytes
    // win32kfull.sys .text:0x2b8a20, 0x1596d bytes
    // win32kfull.sys .text:0x2b9df0, 0x1659e bytes
    // win32kfull.sys .text:0x2b8990, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) b_expand;
    
    // [bExpandScanline@STACKOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12a22c, 0x13864 bytes
    // win32kfull.sys .text:0x2b8ad8, 0x1596d bytes
    // win32kfull.sys .text:0x2b9ebc, 0x1659e bytes
    // win32kfull.sys .text:0x2b8a48, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_expand_scanline;
    
    // [bPushMergeScrScan@STACKOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12a2cc, 0x13864 bytes
    // win32kfull.sys .text:0x2b910c, 0x1596d bytes
    // win32kfull.sys .text:0x2ba4dc, 0x1659e bytes
    // win32kfull.sys .text:0x2b907c, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_push_merge_scr_scan;
};
#include "magic/api.end.hpp"
