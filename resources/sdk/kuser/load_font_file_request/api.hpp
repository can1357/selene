#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::load_font_file_request
{
    // [Hff@LoadFontFileRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7950, 0x1596d bytes
    // win32kfull.sys .text:0x39f0, 0x1659e bytes
    // win32kfull.sys .text:0x7d00, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) hff;
    
    // [CaptureUsermodeParameters@LoadFontFileRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d9630, 0x13864 bytes
    // win32kfull.sys .text:0x10f810, 0x1596d bytes
    // win32kfull.sys .text:0x1043e0, 0x1659e bytes
    // win32kfull.sys .text:0x110740, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) capture_usermode_parameters;
    
    // [CreateUsermodeParameters@LoadFontFileRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2da2a0, 0x13864 bytes
    // win32kfull.sys .text:0x3bd20, 0x1596d bytes
    // win32kfull.sys .text:0x6a2d0, 0x1659e bytes
    // win32kfull.sys .text:0x3c130, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) create_usermode_parameters;
    
    // [GetDrvType@LoadFontFileRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14a4f0, 0x13864 bytes
    // win32kfull.sys .text:0x129650, 0x1596d bytes
    // win32kfull.sys .text:0x119c10, 0x1659e bytes
    // win32kfull.sys .text:0x12a590, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) get_drv_type;
    
    // [Zombied@LoadFontFileRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14a550, 0x13864 bytes
    // win32kfull.sys .text:0x129720, 0x1596d bytes
    // win32kfull.sys .text:0x119980, 0x1659e bytes
    // win32kfull.sys .text:0x12a660, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) zombied;
};
#include "magic/api.end.hpp"
