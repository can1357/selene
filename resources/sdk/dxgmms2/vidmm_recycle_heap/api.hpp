#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_recycle_heap
{
    // [LookupSufficientRange@VIDMM_RECYCLE_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 11
    // dxgmms2.sys PAGE:0x442dc, 0x158b bytes
    // dxgmms2.sys PAGE:0x80178, 0x20ba bytes
    //
    _m0(sdk::unknown_ptr) lookup_sufficient_range;
    
    // [RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 11
    // dxgmms2.sys PAGE:0x44084, 0x158b bytes
    // dxgmms2.sys PAGE:0x80048, 0x20ba bytes
    //
    _m1(sdk::unknown_ptr) remove_overlapping_multiranges_from_search;
    
    // [CreateBlockForType@VIDMM_RECYCLE_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x83a9c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7c050, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8408c, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) create_block_for_type;
    
    // [AddMultirangeToTree@VIDMM_RECYCLE_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x43530, 0x158b bytes
    // dxgmms2.sys PAGE:0x78244, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7fe70, 0x20ba bytes
    // dxgmms2.sys PAGE:0x78834, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) add_multirange_to_tree;
    
    // [AddRangeToTree@VIDMM_RECYCLE_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x93f78, 0x158b bytes
    // dxgmms2.sys PAGE:0xc1a78, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe659c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc2048, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) add_range_to_tree;
    
    // [Allocate@VIDMM_RECYCLE_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4367c, 0x158b bytes
    // dxgmms2.sys PAGE:0x76e20, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7e8f8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x77410, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) allocate;
    
    // [BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x940f0, 0x158b bytes
    // dxgmms2.sys PAGE:0xc1c18, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe671c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc21e8, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) build_idle_committed_multirange_for_range;
    
    // [BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x94298, 0x158b bytes
    // dxgmms2.sys PAGE:0xc1cec, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe67f0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc22bc, 0x1c52 bytes
    //
    _m7(sdk::unknown_ptr) build_idle_free_multirange_for_range;
    
    // [BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x94454, 0x158b bytes
    // dxgmms2.sys PAGE:0xc1d60, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe6864, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc2330, 0x1c52 bytes
    //
    _m8(sdk::unknown_ptr) build_idle_locked_multirange_for_range;
    
    // [CreateBlockAndRange@VIDMM_RECYCLE_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x441ac, 0x158b bytes
    // dxgmms2.sys PAGE:0x83690, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7c3d8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x83c80, 0x1c52 bytes
    //
    _m9(sdk::unknown_ptr) create_block_and_range;
    
    // [??1VIDMM_RECYCLE_HEAP@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x443d0, 0x158b bytes
    // dxgmms2.sys PAGE:0x74728, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8162c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x74d18, 0x1c52 bytes
    //
    _n0(sdk::unknown_ptr) destroy_instance;
    
    // [IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x43a70, 0x158b bytes
    // dxgmms2.sys PAGE:0x7abd0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7f090, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7b1c0, 0x1c52 bytes
    //
    _n1(sdk::unknown_ptr) integrate_multirange_into_trees;
    
    // [RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x43e90, 0x158b bytes
    // dxgmms2.sys PAGE:0x79cd0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7fdd8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7a2c0, 0x1c52 bytes
    //
    _n2(sdk::unknown_ptr) remove_multirange_from_tree;
    
    // [RemoveRangeFromTree@VIDMM_RECYCLE_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x94b10, 0x158b bytes
    // dxgmms2.sys PAGE:0xc28cc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe7188, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc2e9c, 0x1c52 bytes
    //
    _n3(sdk::unknown_ptr) remove_range_from_tree;
    
    // [ReportBlockStates@VIDMM_RECYCLE_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x94bbc, 0x158b bytes
    // dxgmms2.sys PAGE:0xc29a0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe7238, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc2f70, 0x1c52 bytes
    //
    _n4(sdk::unknown_ptr) report_block_states;
    
    // [ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x43f10, 0x158b bytes
    // dxgmms2.sys PAGE:0x784d0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7ef20, 0x20ba bytes
    // dxgmms2.sys PAGE:0x78ac0, 0x1c52 bytes
    //
    _n5(sdk::unknown_ptr) resize_multirange_to_exclude_overlap;
    
    // [ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x43848, 0x158b bytes
    // dxgmms2.sys PAGE:0x76634, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7ca34, 0x20ba bytes
    // dxgmms2.sys PAGE:0x76c24, 0x1c52 bytes
    //
    _n6(sdk::unknown_ptr) shift_tree_membership_on_debounced_state_change;
};
#include "magic/api.end.hpp"
