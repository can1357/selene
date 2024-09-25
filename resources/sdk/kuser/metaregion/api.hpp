#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::metaregion
{
    // [bIntersectMoveWithDirty@METAREGION]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2bb430, 0x13864 bytes
    // win32kfull.sys .text:0x2c0f5c, 0x1596d bytes
    // win32kfull.sys .text:0x2c2798, 0x1659e bytes
    // win32kfull.sys .text:0x2c0ecc, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) b_intersect_move_with_dirty;
    
    // [bTrimMoveWithRegion@METAREGION]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2bb608, 0x13864 bytes
    // win32kfull.sys .text:0x2c11cc, 0x1596d bytes
    // win32kfull.sys .text:0x2c2a08, 0x1659e bytes
    // win32kfull.sys .text:0x2c113c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_trim_move_with_region;
    
    // [TraceMoveRemovedMoveRegions@METAREGION]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2bb3c8, 0x13864 bytes
    // win32kfull.sys .text:0x2c0ed4, 0x1596d bytes
    // win32kfull.sys .text:0x2c2710, 0x1659e bytes
    // win32kfull.sys .text:0x2c0e44, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) trace_move_removed_move_regions;
    
    // [vAddRectToMoveRegionHelper@METAREGION]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2bb790, 0x13864 bytes
    // win32kfull.sys .text:0x2c13f8, 0x1596d bytes
    // win32kfull.sys .text:0x2c2c34, 0x1659e bytes
    // win32kfull.sys .text:0x2c1368, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) v_add_rect_to_move_region_helper;
    
    // [vApplyMoveData@METAREGION]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2bb894, 0x13864 bytes
    // win32kfull.sys .text:0x2c1558, 0x1596d bytes
    // win32kfull.sys .text:0x2c2d94, 0x1659e bytes
    // win32kfull.sys .text:0x2c14c8, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) v_apply_move_data;
    
    // [vCalculateNoMoveDirty@METAREGION]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x66c3c, 0x13864 bytes
    // win32kfull.sys .text:0x2c1898, 0x1596d bytes
    // win32kfull.sys .text:0x2c30d4, 0x1659e bytes
    // win32kfull.sys .text:0x2c1808, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) v_calculate_no_move_dirty;
    
    // [vClearMoveData@METAREGION]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x66be4, 0x13864 bytes
    // win32kfull.sys .text:0xce408, 0x1596d bytes
    // win32kfull.sys .text:0xb4564, 0x1659e bytes
    // win32kfull.sys .text:0xcf0c8, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) v_clear_move_data;
};
#include "magic/api.end.hpp"
