#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::erectl
{
    // [vScale@ERECTL]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x26f4f0, 0x1596d bytes
    // win32kfull.sys .text:0x26f6e8, 0x1659e bytes
    // win32kfull.sys .text:0x26f440, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) v_scale;
    
    // [bContain@ERECTL]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8efd8, 0x13864 bytes
    // win32kfull.sys .text:0x138b60, 0x1596d bytes
    // win32kfull.sys .text:0x1274a4, 0x1659e bytes
    // win32kfull.sys .text:0x139aa0, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_contain;
    
    // [bEmpty@ERECTL]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8efc0, 0x13864 bytes
    // win32kfull.sys .text:0x84be8, 0x1596d bytes
    // win32kfull.sys .text:0x13d78, 0x1659e bytes
    // win32kfull.sys .text:0x85758, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_empty;
    
    // [bEqual@ERECTL]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5f71c, 0x1eb80 bytes
    // win32kbase.sys .text:0x659f0, 0x243e0 bytes
    // win32kbase.sys .text:0xbad70, 0x27ef0 bytes
    // win32kbase.sys .text:0x2f66c, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) b_equal;
    
    // [bOffsetAdd@ERECTL]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8eec8, 0x13864 bytes
    // win32kfull.sys .text:0x145cf8, 0x1596d bytes
    // win32kfull.sys .text:0x12c84, 0x1659e bytes
    // win32kfull.sys .text:0x146c38, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) b_offset_add;
    
    // [bOffsetSubtract@ERECTL]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x262d44, 0x13864 bytes
    // win32kfull.sys .text:0x26ee18, 0x1596d bytes
    // win32kfull.sys .text:0x26f014, 0x1659e bytes
    // win32kfull.sys .text:0x26ed68, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) b_offset_subtract;
    
    // [bWrapped@ERECTL]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x568b0, 0x13864 bytes
    // win32kfull.sys .text:0x43c84, 0x1596d bytes
    // win32kfull.sys .text:0xc4d0, 0x1659e bytes
    // win32kfull.sys .text:0x44094, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) b_wrapped;
    
    // [vOrder@ERECTL]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8ef70, 0x13864 bytes
    // win32kfull.sys .text:0x43c58, 0x1596d bytes
    // win32kfull.sys .text:0x12d00, 0x1659e bytes
    // win32kfull.sys .text:0x44068, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) v_order;
};
#include "magic/api.end.hpp"
