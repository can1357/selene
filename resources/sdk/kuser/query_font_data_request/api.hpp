#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::query_font_data_request
{
    // [Hff@QueryFontDataRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1296e0, 0x1596d bytes
    // win32kfull.sys .text:0x119ca0, 0x1659e bytes
    // win32kfull.sys .text:0x12a620, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) hff;
    
    // [CaptureUsermodeParameters@QueryFontDataRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d9740, 0x13864 bytes
    // win32kfull.sys .text:0x9d440, 0x1596d bytes
    // win32kfull.sys .text:0x74140, 0x1659e bytes
    // win32kfull.sys .text:0x9dfb0, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) capture_usermode_parameters;
    
    // [CreateUsermodeParameters@QueryFontDataRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2da520, 0x13864 bytes
    // win32kfull.sys .text:0x3c4d0, 0x1596d bytes
    // win32kfull.sys .text:0x6ab40, 0x1659e bytes
    // win32kfull.sys .text:0x3c8e0, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) create_usermode_parameters;
    
    // [GetDrvType@QueryFontDataRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14a510, 0x13864 bytes
    // win32kfull.sys .text:0x129680, 0x1596d bytes
    // win32kfull.sys .text:0x119c40, 0x1659e bytes
    // win32kfull.sys .text:0x12a5c0, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) get_drv_type;
    
    // [Zombied@QueryFontDataRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14a570, 0x13864 bytes
    // win32kfull.sys .text:0x129760, 0x1596d bytes
    // win32kfull.sys .text:0x119d10, 0x1659e bytes
    // win32kfull.sys .text:0x12a6a0, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) zombied;
};
#include "magic/api.end.hpp"
