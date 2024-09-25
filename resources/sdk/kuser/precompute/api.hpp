#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::precompute
{
    // [bAddPreComputedFastFillRects@PRECOMPUTE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2cb228, 0x13864 bytes
    // win32kfull.sys .text:0x2cf3ec, 0x1596d bytes
    // win32kfull.sys .text:0x2d0800, 0x1659e bytes
    // win32kfull.sys .text:0x2cf35c, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) b_add_pre_computed_fast_fill_rects;
    
    // [bAddPreComputedFastStrokeRects@PRECOMPUTE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2cb310, 0x13864 bytes
    // win32kfull.sys .text:0x2cf4e0, 0x1596d bytes
    // win32kfull.sys .text:0x2d08fc, 0x1659e bytes
    // win32kfull.sys .text:0x2cf450, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_add_pre_computed_fast_stroke_rects;
    
    // [bPreComputeFast@PRECOMPUTE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2cb604, 0x13864 bytes
    // win32kfull.sys .text:0x2cf824, 0x1596d bytes
    // win32kfull.sys .text:0x2d0c38, 0x1659e bytes
    // win32kfull.sys .text:0x2cf794, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_pre_compute_fast;
    
    // [??1PRECOMPUTE@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x139924, 0x13864 bytes
    // win32kfull.sys .text:0x1358e8, 0x1596d bytes
    // win32kfull.sys .text:0x12a690, 0x1659e bytes
    // win32kfull.sys .text:0x136828, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [vInit@PRECOMPUTE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1399fc, 0x13864 bytes
    // win32kfull.sys .text:0x149364, 0x1596d bytes
    // win32kfull.sys .text:0x13fc84, 0x1659e bytes
    // win32kfull.sys .text:0x14a2a4, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) v_init;
};
#include "magic/api.end.hpp"
