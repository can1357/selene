#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::bltrecord
{
    // [bRotated@BLTRECORD]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x28c5c4, 0x1596d bytes
    // win32kfull.sys .text:0x28c8d4, 0x1659e bytes
    // win32kfull.sys .text:0x28c534, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) b_rotated;
    
    // [bBitBlt@BLTRECORD]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x69850, 0x13864 bytes
    // win32kfull.sys .text:0x415a4, 0x1596d bytes
    // win32kfull.sys .text:0xb758, 0x1659e bytes
    // win32kfull.sys .text:0x419b4, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_bit_blt;
    
    // [bCreateRegion@BLTRECORD]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x27f3c8, 0x13864 bytes
    // win32kfull.sys .text:0x28b9cc, 0x1596d bytes
    // win32kfull.sys .text:0x28bc7c, 0x1659e bytes
    // win32kfull.sys .text:0x28b93c, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_create_region;
    
    // [bEqualExtents@BLTRECORD]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x69808, 0x13864 bytes
    // win32kfull.sys .text:0x43548, 0x1596d bytes
    // win32kfull.sys .text:0x63d04, 0x1659e bytes
    // win32kfull.sys .text:0x43958, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) b_equal_extents;
    
    // [bRotate@BLTRECORD]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x27f714, 0x13864 bytes
    // win32kfull.sys .text:0x28c3e0, 0x1596d bytes
    // win32kfull.sys .text:0x28c6f0, 0x1659e bytes
    // win32kfull.sys .text:0x28c350, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) b_rotate;
    
    // [bStretch@BLTRECORD]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2811f4, 0x13864 bytes
    // win32kfull.sys .text:0x290000, 0x1596d bytes
    // win32kfull.sys .text:0x290368, 0x1659e bytes
    // win32kfull.sys .text:0x28ff70, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) b_stretch;
    
    // [??1BLTRECORD@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x695d4, 0x13864 bytes
    // win32kfull.sys .text:0x42d28, 0x1596d bytes
    // win32kfull.sys .text:0x63c58, 0x1659e bytes
    // win32kfull.sys .text:0x43138, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) destroy_instance;
    
    // [Msk@BLTRECORD]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x286658, 0x13864 bytes
    // win32kfull.sys .text:0x293eb8, 0x1596d bytes
    // win32kfull.sys .text:0x294004, 0x1659e bytes
    // win32kfull.sys .text:0x293e28, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) msk;
    
    // [pSurfMskOut@BLTRECORD]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6a354, 0x13864 bytes
    // win32kfull.sys .text:0x44980, 0x1596d bytes
    // win32kfull.sys .text:0xbdc0, 0x1659e bytes
    // win32kfull.sys .text:0x44d90, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) p_surf_msk_out;
    
    // [Src@BLTRECORD]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x697cc, 0x13864 bytes
    // win32kfull.sys .text:0x113a0c, 0x1596d bytes
    // win32kfull.sys .text:0x631e4, 0x1659e bytes
    // win32kfull.sys .text:0x11493c, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) src;
    
    // [Trg@BLTRECORD]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6962c, 0x13864 bytes
    // win32kfull.sys .text:0x113f5c, 0x1596d bytes
    // win32kfull.sys .text:0x6319c, 0x1659e bytes
    // win32kfull.sys .text:0x114e8c, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) trg;
    
    // [TrgPlg@BLTRECORD]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2811ac, 0x13864 bytes
    // win32kfull.sys .text:0x28ffa0, 0x1596d bytes
    // win32kfull.sys .text:0x290308, 0x1659e bytes
    // win32kfull.sys .text:0x28ff10, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) trg_plg;
    
    // [vBound@BLTRECORD]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x147c, 0x13864 bytes
    // win32kfull.sys .text:0x28c644, 0x1596d bytes
    // win32kfull.sys .text:0x28c954, 0x1659e bytes
    // win32kfull.sys .text:0x28c5b4, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) v_bound;
    
    // [vExtrema@BLTRECORD]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x152c, 0x13864 bytes
    // win32kfull.sys .text:0x28c6c0, 0x1596d bytes
    // win32kfull.sys .text:0x28c9d0, 0x1659e bytes
    // win32kfull.sys .text:0x28c630, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) v_extrema;
    
    // [vMirror@BLTRECORD]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x69758, 0x13864 bytes
    // win32kfull.sys .text:0x4499c, 0x1596d bytes
    // win32kfull.sys .text:0xc4f0, 0x1659e bytes
    // win32kfull.sys .text:0x44dac, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) v_mirror;
    
    // [vOrder@BLTRECORD]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14e8, 0x13864 bytes
    // win32kfull.sys .text:0x290190, 0x1596d bytes
    // win32kfull.sys .text:0x2904fc, 0x1659e bytes
    // win32kfull.sys .text:0x290100, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) v_order;
    
    // [vOrderStupid@BLTRECORD]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x69788, 0x13864 bytes
    // win32kfull.sys .text:0x44938, 0x1596d bytes
    // win32kfull.sys .text:0xb710, 0x1659e bytes
    // win32kfull.sys .text:0x44d48, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) v_order_stupid;
};
#include "magic/api.end.hpp"
