#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::destroy_font_request
{
    // [Hff@DestroyFontRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1296b0, 0x1596d bytes
    // win32kfull.sys .text:0x119c70, 0x1659e bytes
    // win32kfull.sys .text:0x12a5f0, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) hff;
    
    // [CaptureUsermodeParameters@DestroyFontRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4d560, 0x13864 bytes
    // win32kfull.sys .text:0x1291d0, 0x1596d bytes
    // win32kfull.sys .text:0x1198f0, 0x1659e bytes
    // win32kfull.sys .text:0x12a110, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) capture_usermode_parameters;
    
    // [CreateUsermodeParameters@DestroyFontRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d9ec0, 0x13864 bytes
    // win32kfull.sys .text:0x3c0b0, 0x1596d bytes
    // win32kfull.sys .text:0x134170, 0x1659e bytes
    // win32kfull.sys .text:0x3c4c0, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) create_usermode_parameters;
    
    // [GetDrvType@DestroyFontRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14a540, 0x13864 bytes
    // win32kfull.sys .text:0x129600, 0x1596d bytes
    // win32kfull.sys .text:0x119bc0, 0x1659e bytes
    // win32kfull.sys .text:0x12a540, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) get_drv_type;
    
    // [Zombied@DestroyFontRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14a590, 0x13864 bytes
    // win32kfull.sys .text:0x129700, 0x1596d bytes
    // win32kfull.sys .text:0x119cc0, 0x1659e bytes
    // win32kfull.sys .text:0x12a640, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) zombied;
};
#include "magic/api.end.hpp"
