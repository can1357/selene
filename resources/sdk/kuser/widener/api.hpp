#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::widener
{
    // [??1WIDENER@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1248d4, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [bMiterInLimit@WIDENER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbc7bc, 0x13864 bytes
    // win32kfull.sys .text:0x130608, 0x1596d bytes
    // win32kfull.sys .text:0x125a64, 0x1659e bytes
    // win32kfull.sys .text:0x131548, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_miter_in_limit;
    
    // [bValid@WIDENER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbca04, 0x13864 bytes
    // win32kfull.sys .text:0x130308, 0x1596d bytes
    // win32kfull.sys .text:0x1260e0, 0x1659e bytes
    // win32kfull.sys .text:0x131248, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_valid;
    
    // [bWiden@WIDENER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbc538, 0x13864 bytes
    // win32kfull.sys .text:0x12fd70, 0x1596d bytes
    // win32kfull.sys .text:0x125398, 0x1659e bytes
    // win32kfull.sys .text:0x130cb0, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) b_widen;
    
    // [??0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbc350, 0x13864 bytes
    // win32kfull.sys .text:0x12fb30, 0x1596d bytes
    // win32kfull.sys .text:0x12515c, 0x1659e bytes
    // win32kfull.sys .text:0x130a70, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) construct_instance;
    
    // [vAddEndCap@WIDENER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2c9748, 0x13864 bytes
    // win32kfull.sys .text:0x12ea58, 0x1596d bytes
    // win32kfull.sys .text:0x1238cc, 0x1659e bytes
    // win32kfull.sys .text:0x12f998, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) v_add_end_cap;
    
    // [vAddJoin@WIDENER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbc680, 0x13864 bytes
    // win32kfull.sys .text:0x130438, 0x1596d bytes
    // win32kfull.sys .text:0x125890, 0x1659e bytes
    // win32kfull.sys .text:0x131378, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) v_add_join;
    
    // [vAddLeft@WIDENER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbca4c, 0x13864 bytes
    // win32kfull.sys .text:0x13057c, 0x1596d bytes
    // win32kfull.sys .text:0x1259d8, 0x1659e bytes
    // win32kfull.sys .text:0x1314bc, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) v_add_left;
    
    // [vAddLeftNice@WIDENER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2c98b4, 0x13864 bytes
    // win32kfull.sys .text:0x2cea84, 0x1596d bytes
    // win32kfull.sys .text:0x2d00fc, 0x1659e bytes
    // win32kfull.sys .text:0x2ce9f4, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) v_add_left_nice;
    
    // [vAddRoundJoin@WIDENER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2c9aa0, 0x13864 bytes
    // win32kfull.sys .text:0x2cec8c, 0x1596d bytes
    // win32kfull.sys .text:0x2d0130, 0x1659e bytes
    // win32kfull.sys .text:0x2cebfc, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) v_add_round_join;
    
    // [vAddStartCap@WIDENER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2c9cd8, 0x13864 bytes
    // win32kfull.sys .text:0x12eae4, 0x1596d bytes
    // win32kfull.sys .text:0x123958, 0x1659e bytes
    // win32kfull.sys .text:0x12fa24, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) v_add_start_cap;
    
    // [vMakeItWide@WIDENER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbc2c0, 0x13864 bytes
    // win32kfull.sys .text:0x12eddc, 0x1596d bytes
    // win32kfull.sys .text:0x124924, 0x1659e bytes
    // win32kfull.sys .text:0x12fd1c, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) v_make_it_wide;
    
    // [vVecDrawCompute@WIDENER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbc994, 0x13864 bytes
    // win32kfull.sys .text:0x130cc0, 0x1596d bytes
    // win32kfull.sys .text:0x1262e0, 0x1659e bytes
    // win32kfull.sys .text:0x131c00, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) v_vec_draw_compute;
    
    // [vVecPerpCompute@WIDENER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbc81c, 0x13864 bytes
    // win32kfull.sys .text:0x130b44, 0x1596d bytes
    // win32kfull.sys .text:0x126174, 0x1659e bytes
    // win32kfull.sys .text:0x131a84, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) v_vec_perp_compute;
    
    // [vVecSquareCompute@WIDENER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ca0c4, 0x13864 bytes
    // win32kfull.sys .text:0x2cf0f4, 0x1596d bytes
    // win32kfull.sys .text:0x2d0598, 0x1659e bytes
    // win32kfull.sys .text:0x2cf064, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) v_vec_square_compute;
    
    // [vecInDraw@WIDENER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ca154, 0x13864 bytes
    // win32kfull.sys .text:0x2cf194, 0x1596d bytes
    // win32kfull.sys .text:0x15fa48, 0x1659e bytes
    // win32kfull.sys .text:0x2cf104, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) vec_in_draw;
    
    // [vecInPerp@WIDENER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbcaa8, 0x13864 bytes
    // win32kfull.sys .text:0x130ab8, 0x1596d bytes
    // win32kfull.sys .text:0x125f1c, 0x1659e bytes
    // win32kfull.sys .text:0x1319f8, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) vec_in_perp;
    
    // [vecOutDraw@WIDENER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ca194, 0x13864 bytes
    // win32kfull.sys .text:0x2cf1dc, 0x1596d bytes
    // win32kfull.sys .text:0x15fa8e, 0x1659e bytes
    // win32kfull.sys .text:0x2cf14c, 0x1596d bytes
    //
    _n7(sdk::unknown_ptr) vec_out_draw;
    
    // [vecOutPerp@WIDENER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbca68, 0x13864 bytes
    // win32kfull.sys .text:0x130a70, 0x1596d bytes
    // win32kfull.sys .text:0x125ed4, 0x1659e bytes
    // win32kfull.sys .text:0x1319b0, 0x1596d bytes
    //
    _n8(sdk::unknown_ptr) vec_out_perp;
};
#include "magic/api.end.hpp"
