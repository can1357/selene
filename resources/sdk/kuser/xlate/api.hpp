#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::xlate
{
    // [pfnXlateBetweenBitfields@XLATE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x128000, 0x13864 bytes
    // win32kfull.sys .text:0x13f764, 0x1596d bytes
    // win32kfull.sys .text:0x1304f4, 0x1659e bytes
    // win32kfull.sys .text:0x1406a4, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) pfn_xlate_between_bitfields;
    
    // [vCheckForICM@XLATE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1c2184, 0x13864 bytes
    // win32kfull.sys .text:0x2bf520, 0x1596d bytes
    // win32kfull.sys .text:0x2c0d60, 0x1659e bytes
    // win32kfull.sys .text:0x2bf490, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) v_check_for_icm;
    
    // [vCheckForTrivial@XLATE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1c2210, 0x13864 bytes
    // win32kfull.sys .text:0x2bf5b8, 0x1596d bytes
    // win32kfull.sys .text:0x2c0df8, 0x1659e bytes
    // win32kfull.sys .text:0x2bf528, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) v_check_for_trivial;
    
    // [vMapNewXlate@XLATE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b9180, 0x13864 bytes
    // win32kfull.sys .text:0x2bf6d8, 0x1596d bytes
    // win32kfull.sys .text:0x2c0f18, 0x1659e bytes
    // win32kfull.sys .text:0x2bf648, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) v_map_new_xlate;
};
#include "magic/api.end.hpp"
