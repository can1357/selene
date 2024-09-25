#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::estrobj
{
    // [bTextToPath@ESTROBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x2b74ac, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) b_text_to_path;
    
    // [vCharPos_H2@ESTROBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x8bfc8, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) v_char_pos_h2;
    
    // [bLinkedGlyphs@ESTROBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x2989b0, 0x1596d bytes
    // win32kfull.sys .text:0x298920, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_linked_glyphs;
    
    // [bExtraRectsToPath@ESTROBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b6f98, 0x13864 bytes
    // win32kfull.sys .text:0x2bd370, 0x1596d bytes
    // win32kfull.sys .text:0x2be7b0, 0x1659e bytes
    // win32kfull.sys .text:0x2bd2e0, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) b_extra_rects_to_path;
    
    // [bLinkedTextToPath@ESTROBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b7294, 0x13864 bytes
    // win32kfull.sys .text:0x2bd764, 0x1596d bytes
    // win32kfull.sys .text:0x2bec00, 0x1659e bytes
    // win32kfull.sys .text:0x2bd6d4, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) b_linked_text_to_path;
    
    // [bOpaqueArea@ESTROBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8b7d0, 0x13864 bytes
    // win32kfull.sys .text:0x95cd8, 0x1596d bytes
    // win32kfull.sys .text:0x21990, 0x1659e bytes
    // win32kfull.sys .text:0x96848, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) b_opaque_area;
    
    // [bPartitionInit@ESTROBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8b1bc, 0x13864 bytes
    // win32kfull.sys .text:0x122abc, 0x1596d bytes
    // win32kfull.sys .text:0x1434a4, 0x1659e bytes
    // win32kfull.sys .text:0x1239fc, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) b_partition_init;
    
    // [bTextExtent@ESTROBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8b104, 0x13864 bytes
    // win32kfull.sys .text:0x1574f4, 0x1596d bytes
    // win32kfull.sys .text:0x14eac8, 0x1659e bytes
    // win32kfull.sys .text:0x158404, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) b_text_extent;
    
    // [bTextToPathWorkhorse@ESTROBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b74c0, 0x13864 bytes
    // win32kfull.sys .text:0x2bd988, 0x1596d bytes
    // win32kfull.sys .text:0x2bedfc, 0x1659e bytes
    // win32kfull.sys .text:0x2bd8f8, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) b_text_to_path_workhorse;
    
    // [??1ESTROBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8b928, 0x13864 bytes
    // win32kfull.sys .text:0x156428, 0x1596d bytes
    // win32kfull.sys .text:0x14e488, 0x1659e bytes
    // win32kfull.sys .text:0x157328, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) destroy_instance;
    
    // [GetLinkedRfontOnIndex@ESTROBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b6d44, 0x13864 bytes
    // win32kfull.sys .text:0x2bd0e8, 0x1596d bytes
    // win32kfull.sys .text:0x2be528, 0x1659e bytes
    // win32kfull.sys .text:0x2bd058, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) get_linked_rfont_on_index;
    
    // [ptlBaseLineAdjustSet@ESTROBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29a860, 0x13864 bytes
    // win32kfull.sys .text:0x2a7878, 0x1596d bytes
    // win32kfull.sys .text:0x2a8160, 0x1659e bytes
    // win32kfull.sys .text:0x2a77e8, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) ptl_base_line_adjust_set;
    
    // [vCharPos_G1@ESTROBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b7614, 0x13864 bytes
    // win32kfull.sys .text:0x2bdb18, 0x1596d bytes
    // win32kfull.sys .text:0x2bef7c, 0x1659e bytes
    // win32kfull.sys .text:0x2bda88, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) v_char_pos_g1;
    
    // [vCharPos_G2@ESTROBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b7830, 0x13864 bytes
    // win32kfull.sys .text:0x4be4, 0x1596d bytes
    // win32kfull.sys .text:0x2bf1e4, 0x1659e bytes
    // win32kfull.sys .text:0x4f94, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) v_char_pos_g2;
    
    // [vCharPos_G3@ESTROBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b7b98, 0x13864 bytes
    // win32kfull.sys .text:0x2bdd80, 0x1596d bytes
    // win32kfull.sys .text:0x2bf568, 0x1659e bytes
    // win32kfull.sys .text:0x2bdcf0, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) v_char_pos_g3;
    
    // [vCharPos_G4@ESTROBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b8058, 0x13864 bytes
    // win32kfull.sys .text:0x2be2a0, 0x1596d bytes
    // win32kfull.sys .text:0x2bfa88, 0x1659e bytes
    // win32kfull.sys .text:0x2be210, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) v_char_pos_g4;
    
    // [vCharPos_H1@ESTROBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8c0f4, 0x13864 bytes
    // win32kfull.sys .text:0x8d7e0, 0x1596d bytes
    // win32kfull.sys .text:0x21b00, 0x1659e bytes
    // win32kfull.sys .text:0x8e350, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) v_char_pos_h1;
    
    // [vCharPos_H3@ESTROBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8bb70, 0x13864 bytes
    // win32kfull.sys .text:0x68bac, 0x1596d bytes
    // win32kfull.sys .text:0x72ac8, 0x1659e bytes
    // win32kfull.sys .text:0x6971c, 0x1596d bytes
    //
    _n7(sdk::unknown_ptr) v_char_pos_h3;
    
    // [vCharPos_H4@ESTROBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x135824, 0x13864 bytes
    // win32kfull.sys .text:0x13e280, 0x1596d bytes
    // win32kfull.sys .text:0x12fa14, 0x1659e bytes
    // win32kfull.sys .text:0x13f1c0, 0x1596d bytes
    //
    _n8(sdk::unknown_ptr) v_char_pos_h4;
    
    // [vEudcOpaqueArea@ESTROBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8b95c, 0x13864 bytes
    // win32kfull.sys .text:0x67cc, 0x1596d bytes
    // win32kfull.sys .text:0x299764, 0x1659e bytes
    // win32kfull.sys .text:0x6b7c, 0x1596d bytes
    //
    _n9(sdk::unknown_ptr) v_eudc_opaque_area;
    
    // [vInit@ESTROBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8b274, 0x13864 bytes
    // win32kfull.sys .text:0x90260, 0x1596d bytes
    // win32kfull.sys .text:0x1e7b0, 0x1659e bytes
    // win32kfull.sys .text:0x90dd0, 0x1596d bytes
    //
    _o0(sdk::unknown_ptr) v_init;
    
    // [vInitSimple@ESTROBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b8620, 0x13864 bytes
    // win32kfull.sys .text:0x2be8dc, 0x1596d bytes
    // win32kfull.sys .text:0x2c00e4, 0x1659e bytes
    // win32kfull.sys .text:0x2be84c, 0x1596d bytes
    //
    _o1(sdk::unknown_ptr) v_init_simple;
};
#include "magic/api.end.hpp"
