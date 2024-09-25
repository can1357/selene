#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::query_font_tree_request
{
    // [Hff@QueryFontTreeRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1296f0, 0x1596d bytes
    // win32kfull.sys .text:0x119cb0, 0x1659e bytes
    // win32kfull.sys .text:0x12a630, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) hff;
    
    // [CaptureGlyphSet@QueryFontTreeRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d9224, 0x13864 bytes
    // win32kfull.sys .text:0xdf6b0, 0x1596d bytes
    // win32kfull.sys .text:0x6b828, 0x1659e bytes
    // win32kfull.sys .text:0xe0370, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) capture_glyph_set;
    
    // [CaptureKerningPairs@QueryFontTreeRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d93a4, 0x13864 bytes
    // win32kfull.sys .text:0x13bf7c, 0x1596d bytes
    // win32kfull.sys .text:0x12e5fc, 0x1659e bytes
    // win32kfull.sys .text:0x13cebc, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) capture_kerning_pairs;
    
    // [CaptureUsermodeParameters@QueryFontTreeRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d9b10, 0x13864 bytes
    // win32kfull.sys .text:0xdf640, 0x1596d bytes
    // win32kfull.sys .text:0x6b7c0, 0x1659e bytes
    // win32kfull.sys .text:0xe0300, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) capture_usermode_parameters;
    
    // [CreateUsermodeParameters@QueryFontTreeRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2da7e0, 0x13864 bytes
    // win32kfull.sys .text:0x3c030, 0x1596d bytes
    // win32kfull.sys .text:0x6a590, 0x1659e bytes
    // win32kfull.sys .text:0x3c440, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) create_usermode_parameters;
    
    // [GetDrvType@QueryFontTreeRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14a530, 0x13864 bytes
    // win32kfull.sys .text:0x1296a0, 0x1596d bytes
    // win32kfull.sys .text:0x119c60, 0x1659e bytes
    // win32kfull.sys .text:0x12a5e0, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) get_drv_type;
    
    // [TryGlyphSetHasSameContent@QueryFontTreeRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2dace0, 0x13864 bytes
    // win32kfull.sys .text:0xfabb0, 0x1596d bytes
    // win32kfull.sys .text:0xfe490, 0x1659e bytes
    // win32kfull.sys .text:0xfbae0, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) try_glyph_set_has_same_content;
    
    // [TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2dadd4, 0x13864 bytes
    // win32kfull.sys .text:0xdfd88, 0x1596d bytes
    // win32kfull.sys .text:0x6b994, 0x1659e bytes
    // win32kfull.sys .text:0xe0a48, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) try_probe_and_read_user_mode_glyph_set;
    
    // [Zombied@QueryFontTreeRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14a580, 0x13864 bytes
    // win32kfull.sys .text:0x129780, 0x1596d bytes
    // win32kfull.sys .text:0x119d30, 0x1659e bytes
    // win32kfull.sys .text:0x12a6c0, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) zombied;
};
#include "magic/api.end.hpp"
