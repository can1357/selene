#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::widepathobj
{
    // [bValid@WIDEPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xbd7e4, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) b_valid;
    
    // [??0WIDEPATHOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xbd870, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [bBeginFigure@WIDEPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbd7a4, 0x13864 bytes
    // win32kfull.sys .text:0x1301d0, 0x1596d bytes
    // win32kfull.sys .text:0x125fa8, 0x1659e bytes
    // win32kfull.sys .text:0x131110, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_begin_figure;
    
    // [bGrowPath@WIDEPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbd5c4, 0x13864 bytes
    // win32kfull.sys .text:0x130218, 0x1596d bytes
    // win32kfull.sys .text:0x125ff0, 0x1659e bytes
    // win32kfull.sys .text:0x131158, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) b_grow_path;
    
    // [vAddPoint@WIDEPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbd84c, 0x13864 bytes
    // win32kfull.sys .text:0x13108c, 0x1596d bytes
    // win32kfull.sys .text:0x1266a8, 0x1659e bytes
    // win32kfull.sys .text:0x131fcc, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) v_add_point;
    
    // [vEndFigure@WIDEPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbd758, 0x13864 bytes
    // win32kfull.sys .text:0x13034c, 0x1596d bytes
    // win32kfull.sys .text:0x126124, 0x1659e bytes
    // win32kfull.sys .text:0x13128c, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) v_end_figure;
    
    // [vGrowPathAndAddPoint@WIDEPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2c9e40, 0x13864 bytes
    // win32kfull.sys .text:0x2ceeb4, 0x1596d bytes
    // win32kfull.sys .text:0x2d0358, 0x1659e bytes
    // win32kfull.sys .text:0x2cee24, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) v_grow_path_and_add_point;
    
    // [vPrependBeforeFigure@WIDEPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2c9f24, 0x13864 bytes
    // win32kfull.sys .text:0x1313b8, 0x1596d bytes
    // win32kfull.sys .text:0x123864, 0x1659e bytes
    // win32kfull.sys .text:0x1322f8, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) v_prepend_before_figure;
    
    // [vPrependBeforeSubpath@WIDEPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2c9f88, 0x13864 bytes
    // win32kfull.sys .text:0x2cefa8, 0x1596d bytes
    // win32kfull.sys .text:0x2d044c, 0x1659e bytes
    // win32kfull.sys .text:0x2cef18, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) v_prepend_before_subpath;
    
    // [vReverseConcatenate@WIDEPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbd6ac, 0x13864 bytes
    // win32kfull.sys .text:0x130fd4, 0x1596d bytes
    // win32kfull.sys .text:0x1265f0, 0x1659e bytes
    // win32kfull.sys .text:0x131f14, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) v_reverse_concatenate;
};
#include "magic/api.end.hpp"
