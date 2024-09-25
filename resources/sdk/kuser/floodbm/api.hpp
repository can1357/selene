#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::floodbm
{
    // [bExtendScanline@FLOODBM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12928c, 0x13864 bytes
    // win32kfull.sys .text:0x2b8b84, 0x1596d bytes
    // win32kfull.sys .text:0x2b9f70, 0x1659e bytes
    // win32kfull.sys .text:0x2b8af4, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) b_extend_scanline;
    
    // [bSearchAllSpans@FLOODBM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x129464, 0x13864 bytes
    // win32kfull.sys .text:0x2b926c, 0x1596d bytes
    // win32kfull.sys .text:0x2ba63c, 0x1659e bytes
    // win32kfull.sys .text:0x2b91dc, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_search_all_spans;
    
    // [iColorGet@FLOODBM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12968c, 0x13864 bytes
    // win32kfull.sys .text:0x2b949c, 0x1596d bytes
    // win32kfull.sys .text:0x2ba86c, 0x1659e bytes
    // win32kfull.sys .text:0x2b940c, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) i_color_get;
    
    // [vFindExtent@FLOODBM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x129198, 0x13864 bytes
    // win32kfull.sys .text:0x2b9564, 0x1596d bytes
    // win32kfull.sys .text:0x2ba938, 0x1659e bytes
    // win32kfull.sys .text:0x2b94d4, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) v_find_extent;
};
#include "magic/api.end.hpp"
