#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::efloat
{
    // [bIs1@EFLOAT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbd4b8, 0x13864 bytes
    // win32kbase.sys .text:0x14e868, 0x243e0 bytes
    // win32kbase.sys .text:0x181938, 0x27ef0 bytes
    // win32kbase.sys .text:0x14c0c8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) b_is1;
    
    // [bIs16@EFLOAT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x135a20, 0x13864 bytes
    // win32kfull.sys .text:0x13e5b0, 0x1596d bytes
    // win32kfull.sys .text:0x12fd40, 0x1659e bytes
    // win32kfull.sys .text:0x13f4f0, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_is16;
    
    // [bIs1Over16@EFLOAT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbd4a0, 0x13864 bytes
    // win32kfull.sys .text:0x293f4, 0x1596d bytes
    // win32kfull.sys .text:0xc99d8, 0x1659e bytes
    // win32kfull.sys .text:0x29804, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_is1_over16;
    
    // [bIsZero@EFLOAT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbd3e4, 0x13864 bytes
    // win32kfull.sys .text:0x46c6c, 0x1596d bytes
    // win32kfull.sys .text:0x76584, 0x1659e bytes
    // win32kfull.sys .text:0x4707c, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) b_is_zero;
    
    // [eqCross@EFLOAT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc87b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1534b0, 0x243e0 bytes
    // win32kbase.sys .text:0x186710, 0x27ef0 bytes
    // win32kbase.sys .text:0x151350, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) eq_cross;
    
    // [eqLength@EFLOAT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x60560, 0x1eb80 bytes
    // win32kbase.sys .text:0xaa0f0, 0x243e0 bytes
    // win32kbase.sys .text:0xbf150, 0x27ef0 bytes
    // win32kbase.sys .text:0x9f900, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) eq_length;
    
    // [vAbs@EFLOAT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbd488, 0x13864 bytes
    // win32kfull.sys .text:0x6d548, 0x1596d bytes
    // win32kfull.sys .text:0x76c38, 0x1659e bytes
    // win32kfull.sys .text:0x6e0b8, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) v_abs;
    
    // [vSqrt@EFLOAT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbd3fc, 0x13864 bytes
    // win32kfull.sys .text:0x113a58, 0x1596d bytes
    // win32kfull.sys .text:0x13fd7c, 0x1659e bytes
    // win32kfull.sys .text:0x114988, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) v_sqrt;
};
#include "magic/api.end.hpp"
