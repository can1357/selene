#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::unload_font_file_request
{
    // [Hff@UnloadFontFileRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1296c0, 0x1596d bytes
    // win32kfull.sys .text:0x119c80, 0x1659e bytes
    // win32kfull.sys .text:0x12a600, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) hff;
    
    // [CaptureUsermodeParameters@UnloadFontFileRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d9eb0, 0x13864 bytes
    // win32kfull.sys .text:0x2de8e0, 0x1596d bytes
    // win32kfull.sys .text:0x1179c0, 0x1659e bytes
    // win32kfull.sys .text:0x2de8f0, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) capture_usermode_parameters;
    
    // [CreateUsermodeParameters@UnloadFontFileRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2dac10, 0x13864 bytes
    // win32kfull.sys .text:0x2decd0, 0x1596d bytes
    // win32kfull.sys .text:0x1163e0, 0x1659e bytes
    // win32kfull.sys .text:0x2dece0, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) create_usermode_parameters;
    
    // [GetDrvType@UnloadFontFileRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14a520, 0x13864 bytes
    // win32kfull.sys .text:0x129640, 0x1596d bytes
    // win32kfull.sys .text:0x119c00, 0x1659e bytes
    // win32kfull.sys .text:0x12a580, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) get_drv_type;
    
    // [Zombied@UnloadFontFileRequest]
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
