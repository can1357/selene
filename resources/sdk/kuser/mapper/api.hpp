#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::mapper
{
    // [bCalcOrientation@MAPPER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7fe1c, 0x13864 bytes
    // win32kfull.sys .text:0x37614, 0x1596d bytes
    // win32kfull.sys .text:0x7ca9c, 0x1659e bytes
    // win32kfull.sys .text:0x37a24, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) b_calc_orientation;
    
    // [bCalculateWishCell@MAPPER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7fd94, 0x13864 bytes
    // win32kfull.sys .text:0x6694c, 0x1596d bytes
    // win32kfull.sys .text:0x7c3fc, 0x1659e bytes
    // win32kfull.sys .text:0x674bc, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_calculate_wish_cell;
    
    // [bFindBitmapFont@MAPPER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7fea8, 0x13864 bytes
    // win32kfull.sys .text:0x37530, 0x1596d bytes
    // win32kfull.sys .text:0x7c93c, 0x1659e bytes
    // win32kfull.sys .text:0x37940, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_find_bitmap_font;
    
    // [bFoundExactMatch@MAPPER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7ee70, 0x13864 bytes
    // win32kfull.sys .text:0x63570, 0x1596d bytes
    // win32kfull.sys .text:0x7ae30, 0x1659e bytes
    // win32kfull.sys .text:0x640e0, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) b_found_exact_match;
    
    // [bFoundForcedMatch@MAPPER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x286ad4, 0x13864 bytes
    // win32kfull.sys .text:0x13db34, 0x1596d bytes
    // win32kfull.sys .text:0x12eb7c, 0x1659e bytes
    // win32kfull.sys .text:0x13ea74, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) b_found_forced_match;
    
    // [bGetFaceName@MAPPER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7ff94, 0x13864 bytes
    // win32kfull.sys .text:0x37390, 0x1596d bytes
    // win32kfull.sys .text:0x7c79c, 0x1659e bytes
    // win32kfull.sys .text:0x377a0, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) b_get_face_name;
    
    // [bNearMatch@MAPPER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7f3ec, 0x13864 bytes
    // win32kfull.sys .text:0x63b10, 0x1596d bytes
    // win32kfull.sys .text:0x7b3c0, 0x1659e bytes
    // win32kfull.sys .text:0x64680, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) b_near_match;
    
    // [bNoMatch@MAPPER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7ed94, 0x13864 bytes
    // win32kfull.sys .text:0x66bec, 0x1596d bytes
    // win32kfull.sys .text:0x7c6a8, 0x1659e bytes
    // win32kfull.sys .text:0x6775c, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) b_no_match;
    
    // [bWin31BitmapHeightScaling@MAPPER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7ed60, 0x13864 bytes
    // win32kfull.sys .text:0x110754, 0x1596d bytes
    // win32kfull.sys .text:0x13d228, 0x1659e bytes
    // win32kfull.sys .text:0x111684, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) b_win31_bitmap_height_scaling;
    
    // [bWin31BitmapWidthScaling@MAPPER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14258c, 0x13864 bytes
    // win32kfull.sys .text:0x14f990, 0x1596d bytes
    // win32kfull.sys .text:0x294518, 0x1659e bytes
    // win32kfull.sys .text:0x1508d0, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) b_win31_bitmap_width_scaling;
    
    // [??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x800d8, 0x13864 bytes
    // win32kfull.sys .text:0x61090, 0x1596d bytes
    // win32kfull.sys .text:0x7be60, 0x1659e bytes
    // win32kfull.sys .text:0x61c00, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) construct_instance;
    
    // [DefaultCharset@MAPPER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x328678, 0x13864 bytes
    // win32kfull.sys .data:0x33a544, 0x1596d bytes
    // win32kfull.sys .data:0x338774, 0x1659e bytes
    // win32kfull.sys .data:0x33a584, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) default_charset;
    
    // [FaceNameTable@MAPPER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x3286b8, 0x13864 bytes
    // win32kfull.sys .data:0x33a580, 0x1596d bytes
    // win32kfull.sys .data:0x338778, 0x1659e bytes
    // win32kfull.sys .data:0x33a5c0, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) face_name_table;
    
    // [ppfeSynthesizeAMatch@MAPPER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7ede0, 0x13864 bytes
    // win32kfull.sys .text:0x107dd4, 0x1596d bytes
    // win32kfull.sys .text:0x7ca10, 0x1659e bytes
    // win32kfull.sys .text:0x108d04, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) ppfe_synthesize_a_match;
    
    // [SignatureTable@MAPPER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x3286b0, 0x13864 bytes
    // win32kfull.sys .data:0x33a578, 0x1596d bytes
    // win32kfull.sys .data:0x3387b0, 0x1659e bytes
    // win32kfull.sys .data:0x33a5b8, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) signature_table;
    
    // [vAttemptDeviceMatch@MAPPER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x286e9c, 0x13864 bytes
    // win32kfull.sys .text:0x2944ac, 0x1596d bytes
    // win32kfull.sys .text:0x2945a0, 0x1659e bytes
    // win32kfull.sys .text:0x29441c, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) v_attempt_device_match;
    
    // [vEmergency@MAPPER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x28703c, 0x13864 bytes
    // win32kfull.sys .text:0x294668, 0x1596d bytes
    // win32kfull.sys .text:0x29475c, 0x1659e bytes
    // win32kfull.sys .text:0x2945d8, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) v_emergency;
    
    // [vSetBest@MAPPER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1c23b8, 0x13864 bytes
    // win32kfull.sys .text:0x2947a4, 0x1596d bytes
    // win32kfull.sys .text:0x294898, 0x1659e bytes
    // win32kfull.sys .text:0x294714, 0x1596d bytes
    //
    _n7(sdk::unknown_ptr) v_set_best;
};
#include "magic/api.end.hpp"
