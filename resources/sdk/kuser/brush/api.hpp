#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::brush
{
    // [bAddIcmDIB@BRUSH]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc39b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x14dd20, 0x243e0 bytes
    // win32kbase.sys .text:0x180c50, 0x27ef0 bytes
    // win32kbase.sys .text:0x14b580, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) b_add_icm_dib;
    
    // [hFindIcmDIB@BRUSH]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc3a70, 0x1eb80 bytes
    // win32kbase.sys .text:0x14de00, 0x243e0 bytes
    // win32kbase.sys .text:0x180d40, 0x27ef0 bytes
    // win32kbase.sys .text:0x14b660, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) h_find_icm_dib;
    
    // [_ulGlobalBrushUnique@BRUSH]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x12519c, 0x1eb80 bytes
    // win32kbase.sys .data:0x2623a0, 0x243e0 bytes
    // win32kbase.sys .data:0x2b73c8, 0x27ef0 bytes
    // win32kbase.sys .data:0x25f3e0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) ul_global_brush_unique;
    
    // [vDeleteIcmDIBs@BRUSH]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc3adc, 0x1eb80 bytes
    // win32kbase.sys .text:0xce2b8, 0x243e0 bytes
    // win32kbase.sys .text:0xdf9d8, 0x27ef0 bytes
    // win32kbase.sys .text:0xccc58, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) v_delete_icm_di_bs;
};
#include "magic/api.end.hpp"
