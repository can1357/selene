#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::query_glyph_attrs_request
{
    // [Hff@QueryGlyphAttrsRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1296b0, 0x1596d bytes
    // win32kfull.sys .text:0x119c70, 0x1659e bytes
    // win32kfull.sys .text:0x12a5f0, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) hff;
    
    // [CaptureUsermodeParameters@QueryGlyphAttrsRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d9b70, 0x13864 bytes
    // win32kfull.sys .text:0x2de7b0, 0x1596d bytes
    // win32kfull.sys .text:0x2de560, 0x1659e bytes
    // win32kfull.sys .text:0x2de7c0, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) capture_usermode_parameters;
    
    // [CreateUsermodeParameters@QueryGlyphAttrsRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2da850, 0x13864 bytes
    // win32kfull.sys .text:0x2dec50, 0x1596d bytes
    // win32kfull.sys .text:0x2de9a0, 0x1659e bytes
    // win32kfull.sys .text:0x2dec60, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) create_usermode_parameters;
    
    // [GetDrvType@QueryGlyphAttrsRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14a540, 0x13864 bytes
    // win32kfull.sys .text:0x129600, 0x1596d bytes
    // win32kfull.sys .text:0x119bc0, 0x1659e bytes
    // win32kfull.sys .text:0x12a540, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) get_drv_type;
    
    // [Zombied@QueryGlyphAttrsRequest]
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
