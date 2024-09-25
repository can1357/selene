#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::query_font_file_request
{
    // [Hff@QueryFontFileRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1296c0, 0x1596d bytes
    // win32kfull.sys .text:0x119c80, 0x1659e bytes
    // win32kfull.sys .text:0x12a600, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) hff;
    
    // [CaptureUsermodeParameters@QueryFontFileRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d9960, 0x13864 bytes
    // win32kfull.sys .text:0x111040, 0x1596d bytes
    // win32kfull.sys .text:0x105270, 0x1659e bytes
    // win32kfull.sys .text:0x111f70, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) capture_usermode_parameters;
    
    // [CreateUsermodeParameters@QueryFontFileRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2da6f0, 0x13864 bytes
    // win32kfull.sys .text:0x3bf30, 0x1596d bytes
    // win32kfull.sys .text:0x6a4f0, 0x1659e bytes
    // win32kfull.sys .text:0x3c340, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) create_usermode_parameters;
    
    // [GetDrvType@QueryFontFileRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14a520, 0x13864 bytes
    // win32kfull.sys .text:0x129640, 0x1596d bytes
    // win32kfull.sys .text:0x119c00, 0x1659e bytes
    // win32kfull.sys .text:0x12a580, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) get_drv_type;
    
    // [Zombied@QueryFontFileRequest]
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
