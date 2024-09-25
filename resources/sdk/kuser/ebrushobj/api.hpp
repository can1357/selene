#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::ebrushobj
{
    // [bIsCMYKColor@EBRUSHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x259f3c, 0x13864 bytes
    // win32kfull.sys .text:0x26dc34, 0x1596d bytes
    // win32kfull.sys .text:0x26de68, 0x1659e bytes
    // win32kfull.sys .text:0x26db44, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) b_is_cmyk_color;
    
    // [mixBest@EBRUSHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbeae8, 0x13864 bytes
    // win32kfull.sys .text:0x136be8, 0x1596d bytes
    // win32kfull.sys .text:0x1290f8, 0x1659e bytes
    // win32kfull.sys .text:0x137b28, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) mix_best;
    
    // [vDelete@EBRUSHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5ca30, 0x1eb80 bytes
    // win32kbase.sys .text:0x19330, 0x243e0 bytes
    // win32kbase.sys .text:0x92380, 0x27ef0 bytes
    // win32kbase.sys .text:0x452e0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) v_delete;
    
    // [vInitBrush@EBRUSHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5ca60, 0x1eb80 bytes
    // win32kbase.sys .text:0x31dd0, 0x243e0 bytes
    // win32kbase.sys .text:0x94a10, 0x27ef0 bytes
    // win32kbase.sys .text:0x458a0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) v_init_brush;
};
#include "magic/api.end.hpp"
