#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::query_glyph_metrics_plus_bits_request
{
    // [CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x99e70, 0x1596d bytes
    // win32kfull.sys .text:0x72050, 0x1659e bytes
    // win32kfull.sys .text:0x9a9e0, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) capture_usermode_parameters;
    
    // [CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3c340, 0x1596d bytes
    // win32kfull.sys .text:0x6a880, 0x1659e bytes
    // win32kfull.sys .text:0x3c750, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) create_usermode_parameters;
    
    // [GetDrvType@QueryGlyphMetricsPlusBitsRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x129680, 0x1596d bytes
    // win32kfull.sys .text:0x119c40, 0x1659e bytes
    // win32kfull.sys .text:0x12a5c0, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) get_drv_type;
    
    // [Hff@QueryGlyphMetricsPlusBitsRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1296e0, 0x1596d bytes
    // win32kfull.sys .text:0x119ca0, 0x1659e bytes
    // win32kfull.sys .text:0x12a620, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) hff;
    
    // [Zombied@QueryGlyphMetricsPlusBitsRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x129760, 0x1596d bytes
    // win32kfull.sys .text:0x119d10, 0x1659e bytes
    // win32kfull.sys .text:0x12a6a0, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) zombied;
};
#include "magic/api.end.hpp"
