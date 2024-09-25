#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::ewndobj
{
    // [bDelete@EWNDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x27af38, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) b_delete;
    
    // [vDelete@EWNDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x286f74, 0x1596d bytes
    // win32kfull.sys .text:0x286140, 0x1659e bytes
    // win32kfull.sys .text:0x286ee4, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) v_delete;
    
    // [bValid@EWNDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x27af80, 0x13864 bytes
    // win32kfull.sys .text:0x286f48, 0x1596d bytes
    // win32kfull.sys .text:0x286114, 0x1659e bytes
    // win32kfull.sys .text:0x286eb8, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_valid;
    
    // [vOffset@EWNDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x27b300, 0x13864 bytes
    // win32kfull.sys .text:0x2873d8, 0x1596d bytes
    // win32kfull.sys .text:0x2865a0, 0x1659e bytes
    // win32kfull.sys .text:0x287348, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) v_offset;
    
    // [vSetClip@EWNDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x27b350, 0x13864 bytes
    // win32kfull.sys .text:0x287438, 0x1596d bytes
    // win32kfull.sys .text:0x286600, 0x1659e bytes
    // win32kfull.sys .text:0x2873a8, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) v_set_clip;
};
#include "magic/api.end.hpp"
