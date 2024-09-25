#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::pftobj
{
    // [HFFToPPFF@PFTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x272f14, 0x1596d bytes
    // win32kfull.sys .text:0x273074, 0x1659e bytes
    // win32kfull.sys .text:0x272e64, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) hff_to_ppff;
    
    // [bUnloadAllButPermanentFonts@PFTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7ced8, 0x13864 bytes
    // win32kfull.sys .text:0x3b734, 0x1596d bytes
    // win32kfull.sys .text:0x6a010, 0x1659e bytes
    // win32kfull.sys .text:0x3bb44, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_unload_all_but_permanent_fonts;
    
    // [bUnloadEUDCFont@PFTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7cc20, 0x13864 bytes
    // win32kfull.sys .text:0x3ae08, 0x1596d bytes
    // win32kfull.sys .text:0x7d2d4, 0x1659e bytes
    // win32kfull.sys .text:0x3b218, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_unload_eudc_font;
    
    // [bUnloadWorkhorse@PFTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7cd1c, 0x13864 bytes
    // win32kfull.sys .text:0x3b04c, 0x1596d bytes
    // win32kfull.sys .text:0x7cd8c, 0x1659e bytes
    // win32kfull.sys .text:0x3b45c, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) b_unload_workhorse;
    
    // [chpfeIncrPFF@PFTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7cb00, 0x13864 bytes
    // win32kfull.sys .text:0x3af28, 0x1596d bytes
    // win32kfull.sys .text:0x7cf70, 0x1659e bytes
    // win32kfull.sys .text:0x3b338, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) chpfe_incr_pff;
    
    // [FontChangeTime@PFTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x32cc10, 0x13864 bytes
    // win32kfull.sys .data:0x33c138, 0x1596d bytes
    // win32kfull.sys .data:0x33a4d0, 0x1659e bytes
    // win32kfull.sys .data:0x33c118, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) font_change_time;
};
#include "magic/api.end.hpp"
