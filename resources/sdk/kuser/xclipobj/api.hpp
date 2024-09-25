#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::xclipobj
{
    // [bEnum@XCLIPOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x71c50, 0x13864 bytes
    // win32kfull.sys .text:0xd3d8, 0x1596d bytes
    // win32kfull.sys .text:0x61344, 0x1659e bytes
    // win32kfull.sys .text:0xd788, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) b_enum;
    
    // [bEnumLine@XCLIPOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ca1d4, 0x13864 bytes
    // win32kfull.sys .text:0x13a5b0, 0x1596d bytes
    // win32kfull.sys .text:0x136ec4, 0x1659e bytes
    // win32kfull.sys .text:0x13b4f0, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_enum_line;
    
    // [bEnumPath@XCLIPOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b67b8, 0x13864 bytes
    // win32kfull.sys .text:0x13a504, 0x1596d bytes
    // win32kfull.sys .text:0x136e10, 0x1659e bytes
    // win32kfull.sys .text:0x13b444, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_enum_path;
    
    // [bEnumStartLine@XCLIPOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ca34c, 0x13864 bytes
    // win32kfull.sys .text:0x13ab48, 0x1596d bytes
    // win32kfull.sys .text:0x137458, 0x1659e bytes
    // win32kfull.sys .text:0x13ba88, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) b_enum_start_line;
    
    // [bFindFirstScan@XCLIPOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ca45c, 0x13864 bytes
    // win32kfull.sys .text:0x13b484, 0x1596d bytes
    // win32kfull.sys .text:0x136970, 0x1659e bytes
    // win32kfull.sys .text:0x13c3c4, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) b_find_first_scan;
    
    // [bFindFirstSegment@XCLIPOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ca544, 0x13864 bytes
    // win32kfull.sys .text:0x13ae94, 0x1596d bytes
    // win32kfull.sys .text:0x1377a4, 0x1659e bytes
    // win32kfull.sys .text:0x13bdd4, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) b_find_first_segment;
    
    // [bFindNextScan@XCLIPOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ca814, 0x13864 bytes
    // win32kfull.sys .text:0x13a3b8, 0x1596d bytes
    // win32kfull.sys .text:0x136cc4, 0x1659e bytes
    // win32kfull.sys .text:0x13b2f8, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) b_find_next_scan;
    
    // [bFindNextSegment@XCLIPOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ca8a4, 0x13864 bytes
    // win32kfull.sys .text:0x13a44c, 0x1596d bytes
    // win32kfull.sys .text:0x136d58, 0x1659e bytes
    // win32kfull.sys .text:0x13b38c, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) b_find_next_segment;
    
    // [bGetLine@XCLIPOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b6894, 0x13864 bytes
    // win32kfull.sys .text:0x13a9b8, 0x1596d bytes
    // win32kfull.sys .text:0x1372c8, 0x1659e bytes
    // win32kfull.sys .text:0x13b8f8, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) b_get_line;
    
    // [bGetMorePoints@XCLIPOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b699c, 0x13864 bytes
    // win32kfull.sys .text:0x13b120, 0x1596d bytes
    // win32kfull.sys .text:0x137a3c, 0x1659e bytes
    // win32kfull.sys .text:0x13c060, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) b_get_more_points;
    
    // [bIntersectWall@XCLIPOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ca920, 0x13864 bytes
    // win32kfull.sys .text:0x13b7a4, 0x1596d bytes
    // win32kfull.sys .text:0x136848, 0x1659e bytes
    // win32kfull.sys .text:0x13c6e4, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) b_intersect_wall;
    
    // [bRecordRun@XCLIPOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ca974, 0x13864 bytes
    // win32kfull.sys .text:0x13b220, 0x1596d bytes
    // win32kfull.sys .text:0x136c3c, 0x1659e bytes
    // win32kfull.sys .text:0x13c160, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) b_record_run;
    
    // [bSetup@XCLIPOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ca9f4, 0x13864 bytes
    // win32kfull.sys .text:0x13a6fc, 0x1596d bytes
    // win32kfull.sys .text:0x137010, 0x1659e bytes
    // win32kfull.sys .text:0x13b63c, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) b_setup;
    
    // [cEnumStart@XCLIPOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x71e48, 0x13864 bytes
    // win32kfull.sys .text:0xd290, 0x1596d bytes
    // win32kfull.sys .text:0x61fd4, 0x1659e bytes
    // win32kfull.sys .text:0xd640, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) c_enum_start;
    
    // [ppoGetPath@XCLIPOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25a13c, 0x13864 bytes
    // win32kfull.sys .text:0x26ddd8, 0x1596d bytes
    // win32kfull.sys .text:0x26e008, 0x1659e bytes
    // win32kfull.sys .text:0x26dcf8, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) ppo_get_path;
    
    // [vEnumPathStart@XCLIPOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b6aec, 0x13864 bytes
    // win32kfull.sys .text:0x13b578, 0x1596d bytes
    // win32kfull.sys .text:0x1368a0, 0x1659e bytes
    // win32kfull.sys .text:0x13c4b8, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) v_enum_path_start;
    
    // [vFindScan@XCLIPOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x71be4, 0x13864 bytes
    // win32kfull.sys .text:0xd190, 0x1596d bytes
    // win32kfull.sys .text:0x61ed4, 0x1659e bytes
    // win32kfull.sys .text:0xd540, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) v_find_scan;
    
    // [vFindSegment@XCLIPOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x71b78, 0x13864 bytes
    // win32kfull.sys .text:0xd214, 0x1596d bytes
    // win32kfull.sys .text:0x61f58, 0x1659e bytes
    // win32kfull.sys .text:0xd5c4, 0x1596d bytes
    //
    _n7(sdk::unknown_ptr) v_find_segment;
    
    // [vIntersectScan@XCLIPOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2cade4, 0x13864 bytes
    // win32kfull.sys .text:0x13a4b4, 0x1596d bytes
    // win32kfull.sys .text:0x136dc0, 0x1659e bytes
    // win32kfull.sys .text:0x13b3f4, 0x1596d bytes
    //
    _n8(sdk::unknown_ptr) v_intersect_scan;
    
    // [vSetup@XCLIPOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5f0c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x495b0, 0x243e0 bytes
    // win32kbase.sys .text:0x2f8a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x312c0, 0x243e0 bytes
    //
    _n9(sdk::unknown_ptr) v_setup;
    
    // [vUpdateStyleState@XCLIPOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2cb0d0, 0x13864 bytes
    // win32kfull.sys .text:0x2cf2cc, 0x1596d bytes
    // win32kfull.sys .text:0x2d06e0, 0x1659e bytes
    // win32kfull.sys .text:0x2cf23c, 0x1596d bytes
    //
    _o0(sdk::unknown_ptr) v_update_style_state;
};
#include "magic/api.end.hpp"
