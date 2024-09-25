#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::true_type_free_glyphset_request
{
    // [Hff@TrueTypeFreeGlyphsetRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1296c0, 0x1596d bytes
    // win32kfull.sys .text:0x119c80, 0x1659e bytes
    // win32kfull.sys .text:0x12a600, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) hff;
    
    // [CaptureUsermodeParameters@TrueTypeFreeGlyphsetRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4d560, 0x13864 bytes
    // win32kfull.sys .text:0x1291d0, 0x1596d bytes
    // win32kfull.sys .text:0x1198f0, 0x1659e bytes
    // win32kfull.sys .text:0x12a110, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) capture_usermode_parameters;
    
    // [CreateUsermodeParameters@TrueTypeFreeGlyphsetRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2dabb0, 0x13864 bytes
    // win32kfull.sys .text:0x103f70, 0x1596d bytes
    // win32kfull.sys .text:0x13a9d0, 0x1659e bytes
    // win32kfull.sys .text:0x104ea0, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) create_usermode_parameters;
    
    // [GetDrvType@TrueTypeFreeGlyphsetRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xc2c0, 0x13864 bytes
    // win32kfull.sys .text:0x7950, 0x1596d bytes
    // win32kfull.sys .text:0x39f0, 0x1659e bytes
    // win32kfull.sys .text:0x7d00, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) get_drv_type;
    
    // [Zombied@TrueTypeFreeGlyphsetRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14a5a0, 0x13864 bytes
    // win32kfull.sys .text:0x129730, 0x1596d bytes
    // win32kfull.sys .text:0x119ce0, 0x1659e bytes
    // win32kfull.sys .text:0x12a670, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) zombied;
};
#include "magic/api.end.hpp"
