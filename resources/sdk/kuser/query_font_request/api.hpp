#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::query_font_request
{
    // [Hff@QueryFontRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1296f0, 0x1596d bytes
    // win32kfull.sys .text:0x119cb0, 0x1659e bytes
    // win32kfull.sys .text:0x12a630, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) hff;
    
    // [CaptureUsermodeParameters@QueryFontRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d9a00, 0x13864 bytes
    // win32kfull.sys .text:0xdf2c0, 0x1596d bytes
    // win32kfull.sys .text:0x6f240, 0x1659e bytes
    // win32kfull.sys .text:0xdff80, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) capture_usermode_parameters;
    
    // [CreateUsermodeParameters@QueryFontRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2da770, 0x13864 bytes
    // win32kfull.sys .text:0x3bfc0, 0x1596d bytes
    // win32kfull.sys .text:0x6a610, 0x1659e bytes
    // win32kfull.sys .text:0x3c3d0, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) create_usermode_parameters;
    
    // [GetDrvType@QueryFontRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14a530, 0x13864 bytes
    // win32kfull.sys .text:0x1296a0, 0x1596d bytes
    // win32kfull.sys .text:0x119c60, 0x1659e bytes
    // win32kfull.sys .text:0x12a5e0, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) get_drv_type;
    
    // [Zombied@QueryFontRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14a580, 0x13864 bytes
    // win32kfull.sys .text:0x129780, 0x1596d bytes
    // win32kfull.sys .text:0x119d30, 0x1659e bytes
    // win32kfull.sys .text:0x12a6c0, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) zombied;
};
#include "magic/api.end.hpp"
