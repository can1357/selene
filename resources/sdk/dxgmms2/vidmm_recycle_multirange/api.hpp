#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_recycle_multirange
{
    // [GetBackingAddress@VIDMM_RECYCLE_MULTIRANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x9463c, 0x158b bytes
    //
    _m0(sdk::unknown_ptr) get_backing_address;
    
    // [Commit@VIDMM_RECYCLE_MULTIRANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 11
    // dxgmms2.sys PAGE:0x42020, 0x158b bytes
    // dxgmms2.sys PAGE:0x7eb18, 0x20ba bytes
    //
    _m1(sdk::unknown_ptr) commit;
    
    // [Decommit@VIDMM_RECYCLE_MULTIRANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 11
    // dxgmms2.sys PAGE:0x41e1c, 0x158b bytes
    // dxgmms2.sys PAGE:0x7e64c, 0x20ba bytes
    //
    _m2(sdk::unknown_ptr) decommit;
    
    // [ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x78d38, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x807d4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x79328, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) zero_if_needed;
    
    // [GetFullMDL@VIDMM_RECYCLE_MULTIRANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x41840, 0x158b bytes
    // dxgmms2.sys PAGE:0x7a274, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x906b0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7a864, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) get_full_mdl;
    
    // [GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x41738, 0x158b bytes
    // dxgmms2.sys PAGE:0x878d0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa4f30, 0x20ba bytes
    // dxgmms2.sys PAGE:0x87ec0, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) get_mdl_for_range;
    
    // [Init@VIDMM_RECYCLE_MULTIRANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x42120, 0x158b bytes
    // dxgmms2.sys PAGE:0x83958, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7f690, 0x20ba bytes
    // dxgmms2.sys PAGE:0x83f48, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) init;
    
    // [IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x41b34, 0x158b bytes
    // dxgmms2.sys PAGE:0xc214c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9fd5c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc271c, 0x1c52 bytes
    //
    _m7(sdk::unknown_ptr) is_rotate_vad;
    
    // [Lock@VIDMM_RECYCLE_MULTIRANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x41c5c, 0x158b bytes
    // dxgmms2.sys PAGE:0x78a04, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7d6bc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x78ff4, 0x1c52 bytes
    //
    _m8(sdk::unknown_ptr) lock;
    
    // [Map@VIDMM_RECYCLE_MULTIRANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x67b04, 0x158b bytes
    // dxgmms2.sys PAGE:0xc2188, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe6b58, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc2758, 0x1c52 bytes
    //
    _m9(sdk::unknown_ptr) map;
    
    // [MapLocked@VIDMM_RECYCLE_MULTIRANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9470c, 0x158b bytes
    // dxgmms2.sys PAGE:0xc2290, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe6c60, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc2860, 0x1c52 bytes
    //
    _n0(sdk::unknown_ptr) map_locked;
    
    // [MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x416c8, 0x158b bytes
    // dxgmms2.sys PAGE:0x84334, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7ffd0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x84924, 0x1c52 bytes
    //
    _n1(sdk::unknown_ptr) mark_all_ranges_with_new_owner;
    
    // [MergeRanges@VIDMM_RECYCLE_MULTIRANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x40b88, 0x158b bytes
    // dxgmms2.sys PAGE:0x79640, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7da70, 0x20ba bytes
    // dxgmms2.sys PAGE:0x79c30, 0x1c52 bytes
    //
    _n2(sdk::unknown_ptr) merge_ranges;
    
    // [MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x41440, 0x158b bytes
    // dxgmms2.sys PAGE:0x78c20, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7edec, 0x20ba bytes
    // dxgmms2.sys PAGE:0x79210, 0x1c52 bytes
    //
    _n3(sdk::unknown_ptr) merge_subranges_where_possible;
    
    // [MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x40fb0, 0x158b bytes
    // dxgmms2.sys PAGE:0x7b470, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7f7e0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7ba60, 0x1c52 bytes
    //
    _n4(sdk::unknown_ptr) merge_with_neighbors_if_possible;
    
    // [Reset@VIDMM_RECYCLE_MULTIRANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x41924, 0x158b bytes
    // dxgmms2.sys PAGE:0x75938, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x80e68, 0x20ba bytes
    // dxgmms2.sys PAGE:0x75f28, 0x1c52 bytes
    //
    _n5(sdk::unknown_ptr) reset;
    
    // [ResetUndo@VIDMM_RECYCLE_MULTIRANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x40228, 0x158b bytes
    // dxgmms2.sys PAGE:0xc2d28, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe75b8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc32f8, 0x1c52 bytes
    //
    _n6(sdk::unknown_ptr) reset_undo;
    
    // [Rotate@VIDMM_RECYCLE_MULTIRANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x65edc, 0x158b bytes
    // dxgmms2.sys PAGE:0xc2f98, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa55a0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc3568, 0x1c52 bytes
    //
    _n7(sdk::unknown_ptr) rotate;
    
    // [ShrinkTo@VIDMM_RECYCLE_MULTIRANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x40ae8, 0x158b bytes
    // dxgmms2.sys PAGE:0x75fa4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x80604, 0x20ba bytes
    // dxgmms2.sys PAGE:0x76594, 0x1c52 bytes
    //
    _n8(sdk::unknown_ptr) shrink_to;
    
    // [SplitAt@VIDMM_RECYCLE_MULTIRANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x41540, 0x158b bytes
    // dxgmms2.sys PAGE:0x77a60, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7e12c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x78050, 0x1c52 bytes
    //
    _n9(sdk::unknown_ptr) split_at;
    
    // [Unlock@VIDMM_RECYCLE_MULTIRANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x41b64, 0x158b bytes
    // dxgmms2.sys PAGE:0x788f4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7d550, 0x20ba bytes
    // dxgmms2.sys PAGE:0x78ee4, 0x1c52 bytes
    //
    _o0(sdk::unknown_ptr) unlock;
    
    // [Unmap@VIDMM_RECYCLE_MULTIRANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x67bb4, 0x158b bytes
    // dxgmms2.sys PAGE:0xc36e8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe7778, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc3cb8, 0x1c52 bytes
    //
    _o1(sdk::unknown_ptr) unmap;
    
    // [ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x41ec4, 0x158b bytes
    // dxgmms2.sys PAGE:0x78fc0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9e338, 0x20ba bytes
    // dxgmms2.sys PAGE:0x795b0, 0x1c52 bytes
    //
    _o2(sdk::unknown_ptr) zero_multirange_memory;
};
#include "magic/api.end.hpp"
