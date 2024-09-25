#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::rgnobj
{
    // [bDeleteRGNOBJ@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xb8538, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) b_delete_rgnobj;
    
    // [bIsResizeRequiredBeforeCopyingRegion@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x53e48, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) b_is_resize_required_before_copying_region;
    
    // [vScale@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x14fc60, 0x243e0 bytes
    // win32kbase.sys .text:0x182bd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x14db00, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) v_scale;
    
    // [bContain@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6c69c, 0x13864 bytes
    // win32kfull.sys .text:0x1036d0, 0x1596d bytes
    // win32kfull.sys .text:0xfb4c0, 0x1659e bytes
    // win32kfull.sys .text:0x104600, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) b_contain;
    
    // [bCopy@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x53e90, 0x1eb80 bytes
    // win32kbase.sys .text:0x493e0, 0x243e0 bytes
    // win32kbase.sys .text:0x330d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x31160, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) b_copy;
    
    // [bCreate@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x85110, 0x1eb80 bytes
    // win32kbase.sys .text:0xcaa00, 0x243e0 bytes
    // win32kbase.sys .text:0xdbb20, 0x27ef0 bytes
    // win32kbase.sys .text:0xc93a0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) b_create;
    
    // [bEqual@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x53c50, 0x1eb80 bytes
    // win32kbase.sys .text:0xaa3c0, 0x243e0 bytes
    // win32kbase.sys .text:0x53eb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x9fbd0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) b_equal;
    
    // [bExpand@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x53de0, 0x1eb80 bytes
    // win32kbase.sys .text:0xae110, 0x243e0 bytes
    // win32kbase.sys .text:0xbc420, 0x27ef0 bytes
    // win32kbase.sys .text:0x8be60, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) b_expand;
    
    // [bInside@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x53d50, 0x1eb80 bytes
    // win32kbase.sys .text:0xa5060, 0x243e0 bytes
    // win32kbase.sys .text:0x53f00, 0x27ef0 bytes
    // win32kbase.sys .text:0x94500, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) b_inside;
    
    // [bMerge@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x53700, 0x1eb80 bytes
    // win32kbase.sys .text:0x522d0, 0x243e0 bytes
    // win32kbase.sys .text:0x39080, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c050, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) b_merge;
    
    // [bOffset@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x54140, 0x1eb80 bytes
    // win32kbase.sys .text:0x4c110, 0x243e0 bytes
    // win32kbase.sys .text:0x53be0, 0x27ef0 bytes
    // win32kbase.sys .text:0x335e0, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) b_offset;
    
    // [bOutline@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x84c2c, 0x1eb80 bytes
    // win32kbase.sys .text:0xcaa90, 0x243e0 bytes
    // win32kbase.sys .text:0xdbbb0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc9430, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) b_outline;
    
    // [bSet@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x53a58, 0x1eb80 bytes
    // win32kbase.sys .text:0x43144, 0x243e0 bytes
    // win32kbase.sys .text:0x2eee8, 0x27ef0 bytes
    // win32kbase.sys .text:0x38cbc, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) b_set;
    
    // [bSubtractComplex@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6c704, 0x13864 bytes
    // win32kfull.sys .text:0x452c4, 0x1596d bytes
    // win32kfull.sys .text:0x3c5ac, 0x1659e bytes
    // win32kfull.sys .text:0x456d4, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) b_subtract_complex;
    
    // [hrgnAssociate@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6c6cc, 0x13864 bytes
    // win32kfull.sys .text:0x71f04, 0x1596d bytes
    // win32kfull.sys .text:0x3aa74, 0x1659e bytes
    // win32kfull.sys .text:0x72a74, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) hrgn_associate;
    
    // [iCombine@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x53450, 0x1eb80 bytes
    // win32kbase.sys .text:0x491f0, 0x243e0 bytes
    // win32kbase.sys .text:0x32f00, 0x27ef0 bytes
    // win32kbase.sys .text:0x30f70, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) i_combine;
    
    // [iComplexity@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6c67c, 0x13864 bytes
    // win32kfull.sys .text:0x891b8, 0x1596d bytes
    // win32kfull.sys .text:0x17a18, 0x1659e bytes
    // win32kfull.sys .text:0x89d28, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) i_complexity;
    
    // [sizeSave@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x53410, 0x1eb80 bytes
    // win32kbase.sys .text:0x39a00, 0x243e0 bytes
    // win32kbase.sys .text:0xa6b90, 0x27ef0 bytes
    // win32kbase.sys .text:0x8c740, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) size_save;
    
    // [UpdateUserRgn@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x530e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x55f30, 0x243e0 bytes
    // win32kbase.sys .text:0x3be50, 0x27ef0 bytes
    // win32kbase.sys .text:0x21370, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) update_user_rgn;
    
    // [vComputeUncoveredSpriteRegion@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6cd94, 0x13864 bytes
    // win32kfull.sys .text:0xf0870, 0x1596d bytes
    // win32kfull.sys .text:0xf43a8, 0x1659e bytes
    // win32kfull.sys .text:0xf1690, 0x1596d bytes
    //
    _n9(sdk::unknown_ptr) v_compute_uncovered_sprite_region;
    
    // [vCopy@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x53f20, 0x1eb80 bytes
    // win32kbase.sys .text:0x483f0, 0x243e0 bytes
    // win32kbase.sys .text:0x39000, 0x27ef0 bytes
    // win32kbase.sys .text:0x8c070, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) v_copy;
    
    // [vDeleteRGNOBJ@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x54310, 0x1eb80 bytes
    // win32kbase.sys .text:0x1a7c0, 0x243e0 bytes
    // win32kbase.sys .text:0xa3610, 0x27ef0 bytes
    // win32kbase.sys .text:0x82840, 0x243e0 bytes
    //
    _o1(sdk::unknown_ptr) v_delete_rgnobj;
    
    // [vDownload@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x53390, 0x1eb80 bytes
    // win32kbase.sys .text:0x39a40, 0x243e0 bytes
    // win32kbase.sys .text:0xa6bd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8c780, 0x243e0 bytes
    //
    _o2(sdk::unknown_ptr) v_download;
    
    // [vGetSubRect@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x54120, 0x1eb80 bytes
    // win32kbase.sys .text:0xa7390, 0x243e0 bytes
    // win32kbase.sys .text:0x2e280, 0x27ef0 bytes
    // win32kbase.sys .text:0x96450, 0x243e0 bytes
    //
    _o3(sdk::unknown_ptr) v_get_sub_rect;
    
    // [vSet@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x53c00, 0x1eb80 bytes
    // win32kbase.sys .text:0x52290, 0x243e0 bytes
    // win32kbase.sys .text:0x37fd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1bfb0, 0x243e0 bytes
    //
    _o4(sdk::unknown_ptr) v_set;
    
    // [vSwap@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x53f70, 0x1eb80 bytes
    // win32kbase.sys .text:0x51d90, 0x243e0 bytes
    // win32kbase.sys .text:0x37940, 0x27ef0 bytes
    // win32kbase.sys .text:0x2f1b0, 0x243e0 bytes
    //
    _o5(sdk::unknown_ptr) v_swap;
    
    // [vTighten@RGNOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x532b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x426f0, 0x243e0 bytes
    // win32kbase.sys .text:0x9d4f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x39b20, 0x243e0 bytes
    //
    _o6(sdk::unknown_ptr) v_tighten;
};
#include "magic/api.end.hpp"
