#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::widepenobj
{
    // [ahob@WIDEPENOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x320e60, 0x13864 bytes
    // win32kfull.sys .data:0x32ba30, 0x1596d bytes
    // win32kfull.sys .data:0x329a40, 0x1659e bytes
    // win32kfull.sys .data:0x32ba30, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) ahob;
    
    // [aptfxHobby1@WIDEPENOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x324ed8, 0x13864 bytes
    // win32kfull.sys .data:0x333ec8, 0x1596d bytes
    // win32kfull.sys .data:0x3321e8, 0x1659e bytes
    // win32kfull.sys .data:0x333ec8, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) aptfx_hobby1;
    
    // [aptfxHobby2@WIDEPENOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x324eb0, 0x13864 bytes
    // win32kfull.sys .data:0x333e70, 0x1596d bytes
    // win32kfull.sys .data:0x332190, 0x1659e bytes
    // win32kfull.sys .data:0x333e70, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) aptfx_hobby2;
    
    // [aptfxHobby3@WIDEPENOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x324e80, 0x13864 bytes
    // win32kfull.sys .data:0x333e98, 0x1596d bytes
    // win32kfull.sys .data:0x3321b8, 0x1659e bytes
    // win32kfull.sys .data:0x333e98, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) aptfx_hobby3;
    
    // [aptfxHobby4@WIDEPENOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x324e40, 0x13864 bytes
    // win32kfull.sys .data:0x333de0, 0x1596d bytes
    // win32kfull.sys .data:0x332100, 0x1659e bytes
    // win32kfull.sys .data:0x333de0, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) aptfx_hobby4;
    
    // [aptfxHobby5@WIDEPENOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x324df0, 0x13864 bytes
    // win32kfull.sys .data:0x333e20, 0x1596d bytes
    // win32kfull.sys .data:0x332140, 0x1659e bytes
    // win32kfull.sys .data:0x333e20, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) aptfx_hobby5;
    
    // [aptfxHobby6@WIDEPENOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x324da0, 0x13864 bytes
    // win32kfull.sys .data:0x333d90, 0x1596d bytes
    // win32kfull.sys .data:0x3320b0, 0x1659e bytes
    // win32kfull.sys .data:0x333d90, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) aptfx_hobby6;
    
    // [bHobbyize@WIDEPENOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbc1e0, 0x13864 bytes
    // win32kfull.sys .text:0x130ee8, 0x1596d bytes
    // win32kfull.sys .text:0x126504, 0x1659e bytes
    // win32kfull.sys .text:0x131e28, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) b_hobbyize;
    
    // [bPenFlatten@WIDEPENOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13b79c, 0x13864 bytes
    // win32kfull.sys .text:0x12eb70, 0x1596d bytes
    // win32kfull.sys .text:0x123d80, 0x1659e bytes
    // win32kfull.sys .text:0x12fab0, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) b_pen_flatten;
    
    // [bPolygonizePen@WIDEPENOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbc00c, 0x13864 bytes
    // win32kfull.sys .text:0x1310c0, 0x1596d bytes
    // win32kfull.sys .text:0x1266dc, 0x1659e bytes
    // win32kfull.sys .text:0x132000, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) b_polygonize_pen;
    
    // [bThicken@WIDEPENOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13b8f0, 0x13864 bytes
    // win32kfull.sys .text:0x1312a8, 0x1596d bytes
    // win32kfull.sys .text:0x1268c4, 0x1659e bytes
    // win32kfull.sys .text:0x1321e8, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) b_thicken;
    
    // [cptAddRound@WIDEPENOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2c9354, 0x13864 bytes
    // win32kfull.sys .text:0x2ce660, 0x1596d bytes
    // win32kfull.sys .text:0x2cfda4, 0x1659e bytes
    // win32kfull.sys .text:0x2ce5d0, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) cpt_add_round;
    
    // [vAddRoundEndCap@WIDEPENOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2c9954, 0x13864 bytes
    // win32kfull.sys .text:0x2ceb3c, 0x1596d bytes
    // win32kfull.sys .text:0x15f8f8, 0x1659e bytes
    // win32kfull.sys .text:0x2ceaac, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) v_add_round_end_cap;
    
    // [vDetermineDrawVertex@WIDEPENOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbbec0, 0x13864 bytes
    // win32kfull.sys .text:0x130d38, 0x1596d bytes
    // win32kfull.sys .text:0x126354, 0x1659e bytes
    // win32kfull.sys .text:0x131c78, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) v_determine_draw_vertex;
};
#include "magic/api.end.hpp"
