#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::epathobj
{
    // [addpoints@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x74270, 0x1eb80 bytes
    // win32kbase.sys .text:0x9c51c, 0x243e0 bytes
    // win32kbase.sys .text:0xa433c, 0x27ef0 bytes
    // win32kbase.sys .text:0x8617c, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) addpoints;
    
    // [bAddPolygon@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x291684, 0x13864 bytes
    // win32kfull.sys .text:0x2bb77c, 0x1596d bytes
    // win32kfull.sys .text:0x2bcbec, 0x1659e bytes
    // win32kfull.sys .text:0x2bb6ec, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_add_polygon;
    
    // [bAllClosed@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc4420, 0x1eb80 bytes
    // win32kbase.sys .text:0x14eac0, 0x243e0 bytes
    // win32kbase.sys .text:0x181b90, 0x27ef0 bytes
    // win32kbase.sys .text:0x14c5f0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) b_all_closed;
    
    // [bAppend@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc4450, 0x1eb80 bytes
    // win32kbase.sys .text:0x14eaf0, 0x243e0 bytes
    // win32kbase.sys .text:0x181bc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x14c620, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) b_append;
    
    // [bClone@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc4550, 0x1eb80 bytes
    // win32kbase.sys .text:0xcbcd0, 0x243e0 bytes
    // win32kbase.sys .text:0xdc740, 0x27ef0 bytes
    // win32kbase.sys .text:0xca670, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) b_clone;
    
    // [bCloseFigure@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x739c0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa7350, 0x243e0 bytes
    // win32kbase.sys .text:0xa4240, 0x27ef0 bytes
    // win32kbase.sys .text:0x96410, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) b_close_figure;
    
    // [bComputeWidenedBounds@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbd91c, 0x13864 bytes
    // win32kfull.sys .text:0x130798, 0x1596d bytes
    // win32kfull.sys .text:0x125bfc, 0x1659e bytes
    // win32kfull.sys .text:0x1316d8, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) b_compute_widened_bounds;
    
    // [bEnum@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x73ea0, 0x1eb80 bytes
    // win32kbase.sys .text:0xcc210, 0x243e0 bytes
    // win32kbase.sys .text:0x9c750, 0x27ef0 bytes
    // win32kbase.sys .text:0xcabb0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) b_enum;
    
    // [bFlatten@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x73be0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9fc00, 0x243e0 bytes
    // win32kbase.sys .text:0xac170, 0x27ef0 bytes
    // win32kbase.sys .text:0x8e9f0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) b_flatten;
    
    // [bMoveTo@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x73d80, 0x1eb80 bytes
    // win32kbase.sys .text:0xa4ce0, 0x243e0 bytes
    // win32kbase.sys .text:0xa4280, 0x27ef0 bytes
    // win32kbase.sys .text:0x943c0, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) b_move_to;
    
    // [bPolyBezierTo@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x73ca0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9c470, 0x243e0 bytes
    // win32kbase.sys .text:0xa4120, 0x27ef0 bytes
    // win32kbase.sys .text:0x860d0, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) b_poly_bezier_to;
    
    // [bPolyLineTo@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x73d00, 0x1eb80 bytes
    // win32kbase.sys .text:0x9c4d0, 0x243e0 bytes
    // win32kbase.sys .text:0xa42f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x86130, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) b_poly_line_to;
    
    // [bPreComputedFill@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbe564, 0x13864 bytes
    // win32kfull.sys .text:0x137164, 0x1596d bytes
    // win32kfull.sys .text:0x129664, 0x1659e bytes
    // win32kfull.sys .text:0x1380a4, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) b_pre_computed_fill;
    
    // [bSimpleFill@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbe42c, 0x13864 bytes
    // win32kfull.sys .text:0x136c18, 0x1596d bytes
    // win32kfull.sys .text:0x129128, 0x1659e bytes
    // win32kfull.sys .text:0x137b58, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) b_simple_fill;
    
    // [bSimpleStroke@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbe188, 0x13864 bytes
    // win32kfull.sys .text:0x135b08, 0x1596d bytes
    // win32kfull.sys .text:0x1287e4, 0x1659e bytes
    // win32kfull.sys .text:0x136a48, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) b_simple_stroke;
    
    // [bSimpleStrokeAndFill@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8928, 0x13864 bytes
    // win32kfull.sys .text:0x14c3a8, 0x1596d bytes
    // win32kfull.sys .text:0x285798, 0x1659e bytes
    // win32kfull.sys .text:0x14d2e8, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) b_simple_stroke_and_fill;
    
    // [bStrokeAndOrFill@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbdbe4, 0x13864 bytes
    // win32kfull.sys .text:0x136504, 0x1596d bytes
    // win32kfull.sys .text:0x128ab8, 0x1659e bytes
    // win32kfull.sys .text:0x137444, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) b_stroke_and_or_fill;
    
    // [bTextOutSimpleFill@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x27aa34, 0x13864 bytes
    // win32kfull.sys .text:0x286a48, 0x1596d bytes
    // win32kfull.sys .text:0x285c58, 0x1659e bytes
    // win32kfull.sys .text:0x2869b8, 0x1596d bytes
    //
    _n7(sdk::unknown_ptr) b_text_out_simple_fill;
    
    // [bTextOutSimpleStroke1@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x27ab88, 0x13864 bytes
    // win32kfull.sys .text:0x286ba8, 0x1596d bytes
    // win32kfull.sys .text:0x285db8, 0x1659e bytes
    // win32kfull.sys .text:0x286b18, 0x1596d bytes
    //
    _n8(sdk::unknown_ptr) b_text_out_simple_stroke1;
    
    // [bWiden@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbd890, 0x13864 bytes
    // win32kfull.sys .text:0x12ed34, 0x1596d bytes
    // win32kfull.sys .text:0x124860, 0x1659e bytes
    // win32kfull.sys .text:0x12fc74, 0x1596d bytes
    //
    _n9(sdk::unknown_ptr) b_widen;
    
    // [cTotalCurves@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x74330, 0x1eb80 bytes
    // win32kbase.sys .text:0xcdcf0, 0x243e0 bytes
    // win32kbase.sys .text:0xdf360, 0x27ef0 bytes
    // win32kbase.sys .text:0xcc690, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) c_total_curves;
    
    // [cTotalPts@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc46d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x14ec10, 0x243e0 bytes
    // win32kbase.sys .text:0x181ce0, 0x27ef0 bytes
    // win32kbase.sys .text:0x14c740, 0x243e0 bytes
    //
    _o1(sdk::unknown_ptr) c_total_pts;
    
    // [cjSize@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc46f0, 0x1eb80 bytes
    // win32kbase.sys .text:0xcbee0, 0x243e0 bytes
    // win32kbase.sys .text:0xdcbb0, 0x27ef0 bytes
    // win32kbase.sys .text:0xca880, 0x243e0 bytes
    //
    _o2(sdk::unknown_ptr) cj_size;
    
    // [createrec@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x73ea8, 0x1eb80 bytes
    // win32kbase.sys .text:0x9c5e4, 0x243e0 bytes
    // win32kbase.sys .text:0xa4404, 0x27ef0 bytes
    // win32kbase.sys .text:0x86244, 0x243e0 bytes
    //
    _o3(sdk::unknown_ptr) createrec;
    
    // [growlastrec@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7420c, 0x1eb80 bytes
    // win32kbase.sys .text:0x9c96c, 0x243e0 bytes
    // win32kbase.sys .text:0xa49e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x865cc, 0x243e0 bytes
    //
    _o4(sdk::unknown_ptr) growlastrec;
    
    // [newpathrec@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x73c2c, 0x1eb80 bytes
    // win32kbase.sys .text:0xa0494, 0x243e0 bytes
    // win32kbase.sys .text:0xaca08, 0x27ef0 bytes
    // win32kbase.sys .text:0x8f284, 0x243e0 bytes
    //
    _o5(sdk::unknown_ptr) newpathrec;
    
    // [pprFlattenRec@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x739f8, 0x1eb80 bytes
    // win32kbase.sys .text:0x9fc50, 0x243e0 bytes
    // win32kbase.sys .text:0xac1c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8ea40, 0x243e0 bytes
    //
    _o6(sdk::unknown_ptr) ppr_flatten_rec;
    
    // [ptfxGetCurrent@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x27ad0c, 0x13864 bytes
    // win32kfull.sys .text:0x135620, 0x1596d bytes
    // win32kfull.sys .text:0x12c6ec, 0x1659e bytes
    // win32kfull.sys .text:0x136560, 0x1596d bytes
    //
    _o7(sdk::unknown_ptr) ptfx_get_current;
    
    // [reinit@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc4710, 0x1eb80 bytes
    // win32kbase.sys .text:0x14ec30, 0x243e0 bytes
    // win32kbase.sys .text:0x181d00, 0x27ef0 bytes
    // win32kbase.sys .text:0x14c760, 0x243e0 bytes
    //
    _o8(sdk::unknown_ptr) reinit;
    
    // [vCloseAllFigures@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x73d50, 0x1eb80 bytes
    // win32kbase.sys .text:0x427d0, 0x243e0 bytes
    // win32kbase.sys .text:0x9d5e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x39c00, 0x243e0 bytes
    //
    _o9(sdk::unknown_ptr) v_close_all_figures;
    
    // [vFreeBlocks@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x74400, 0x1eb80 bytes
    // win32kbase.sys .text:0xa0770, 0x243e0 bytes
    // win32kbase.sys .text:0x4fe20, 0x27ef0 bytes
    // win32kbase.sys .text:0x8f440, 0x243e0 bytes
    //
    _p0(sdk::unknown_ptr) v_free_blocks;
    
    // [vLock@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25a2ac, 0x13864 bytes
    // win32kfull.sys .text:0x135554, 0x1596d bytes
    // win32kfull.sys .text:0x12c684, 0x1659e bytes
    // win32kfull.sys .text:0x136494, 0x1596d bytes
    //
    _p1(sdk::unknown_ptr) v_lock;
    
    // [vOffset@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x73de0, 0x1eb80 bytes
    // win32kbase.sys .text:0xcb690, 0x243e0 bytes
    // win32kbase.sys .text:0xadaf0, 0x27ef0 bytes
    // win32kbase.sys .text:0xca030, 0x243e0 bytes
    //
    _p2(sdk::unknown_ptr) v_offset;
    
    // [vReComputeBounds@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2c9ff8, 0x13864 bytes
    // win32kfull.sys .text:0x2cf020, 0x1596d bytes
    // win32kfull.sys .text:0x2d04c4, 0x1659e bytes
    // win32kfull.sys .text:0x2cef90, 0x1596d bytes
    //
    _p3(sdk::unknown_ptr) v_re_compute_bounds;
    
    // [vUnlock@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x74370, 0x1eb80 bytes
    // win32kbase.sys .text:0xa06e0, 0x243e0 bytes
    // win32kbase.sys .text:0x4fd00, 0x27ef0 bytes
    // win32kbase.sys .text:0x8f3b0, 0x243e0 bytes
    //
    _p4(sdk::unknown_ptr) v_unlock;
    
    // [vUpdateCosmeticStyleState@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2caed4, 0x13864 bytes
    // win32kfull.sys .text:0x13b2a8, 0x1596d bytes
    // win32kfull.sys .text:0x136a64, 0x1659e bytes
    // win32kfull.sys .text:0x13c1e8, 0x1596d bytes
    //
    _p5(sdk::unknown_ptr) v_update_cosmetic_style_state;
    
    // [vWidenSetupForFrameRgn@EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12bd7c, 0x13864 bytes
    // win32kfull.sys .text:0x131420, 0x1596d bytes
    // win32kfull.sys .text:0x12476c, 0x1659e bytes
    // win32kfull.sys .text:0x132360, 0x1596d bytes
    //
    _p6(sdk::unknown_ptr) v_widen_setup_for_frame_rgn;
};
#include "magic/api.end.hpp"
