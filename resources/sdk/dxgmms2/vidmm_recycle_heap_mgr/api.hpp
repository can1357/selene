#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_recycle_heap_mgr
{
    // [AllocateWithStore@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12fe4, 0x1c52 bytes
    // dxgmms2.sys .text:0x12e4, 0x20ba bytes
    // dxgmms2.sys .text:0x12fe4, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) allocate_with_store;
    
    // [FreeWithStore@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x357c, 0x1c52 bytes
    // dxgmms2.sys .text:0x11e4, 0x20ba bytes
    // dxgmms2.sys .text:0x357c, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) free_with_store;
    
    // [MarkNoZeroNeed@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x85470, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7cc30, 0x20ba bytes
    // dxgmms2.sys PAGE:0x85a60, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) mark_no_zero_need;
    
    // [UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x34cc, 0x1c52 bytes
    // dxgmms2.sys .text:0x1528, 0x20ba bytes
    // dxgmms2.sys .text:0x34cc, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) update_outstanding_decommit;
    
    // [UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3554, 0x1c52 bytes
    // dxgmms2.sys .text:0x1500, 0x20ba bytes
    // dxgmms2.sys .text:0x3554, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) update_outstanding_unlock;
    
    // [ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x78db0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x90530, 0x20ba bytes
    // dxgmms2.sys PAGE:0x793a0, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) zero_if_needed;
    
    // [AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x42818, 0x158b bytes
    // dxgmms2.sys PAGE:0x7a41c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x809a0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7aa0c, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) add_to_decommit_debounce;
    
    // [AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4277c, 0x158b bytes
    // dxgmms2.sys PAGE:0x7884c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8072c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x78e3c, 0x1c52 bytes
    //
    _m7(sdk::unknown_ptr) add_to_unlock_debounce;
    
    // [Allocate@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x42c50, 0x158b bytes
    // dxgmms2.sys PAGE:0x76c00, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7e7b0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x771f0, 0x1c52 bytes
    //
    _m8(sdk::unknown_ptr) allocate;
    
    // [??0VIDMM_RECYCLE_HEAP_MGR@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x43168, 0x158b bytes
    // dxgmms2.sys PAGE:0x74d58, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x81f34, 0x20ba bytes
    // dxgmms2.sys PAGE:0x75348, 0x1c52 bytes
    //
    _m9(sdk::unknown_ptr) construct_instance;
    
    // [CreateMultirange@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x42548, 0x158b bytes
    // dxgmms2.sys PAGE:0x838e0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7c9bc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x83ed0, 0x1c52 bytes
    //
    _n0(sdk::unknown_ptr) create_multirange;
    
    // [CreateRange@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4266c, 0x158b bytes
    // dxgmms2.sys PAGE:0x837b4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7c4fc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x83da4, 0x1c52 bytes
    //
    _n1(sdk::unknown_ptr) create_range;
    
    // [CurationThread@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x423e0, 0x158b bytes
    // dxgmms2.sys PAGE:0x793ac, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7e010, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7999c, 0x1c52 bytes
    //
    _n2(sdk::unknown_ptr) curation_thread;
    
    // [??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x42ef0, 0x158b bytes
    // dxgmms2.sys PAGE:0x74320, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x81224, 0x20ba bytes
    // dxgmms2.sys PAGE:0x74910, 0x1c52 bytes
    //
    _n3(sdk::unknown_ptr) destroy_instance;
    
    // [DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x424dc, 0x158b bytes
    // dxgmms2.sys PAGE:0x786b8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7d340, 0x20ba bytes
    // dxgmms2.sys PAGE:0x78ca8, 0x1c52 bytes
    //
    _n4(sdk::unknown_ptr) destroy_multirange;
    
    // [DestroyRange@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x425e4, 0x158b bytes
    // dxgmms2.sys PAGE:0x5e120, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7bce8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5e710, 0x1c52 bytes
    //
    _n5(sdk::unknown_ptr) destroy_range;
    
    // [FlushTransitions@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x428c0, 0x158b bytes
    // dxgmms2.sys PAGE:0x857e0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7bef0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x85dd0, 0x1c52 bytes
    //
    _n6(sdk::unknown_ptr) flush_transitions;
    
    // [Free@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x42240, 0x158b bytes
    // dxgmms2.sys PAGE:0x7a930, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7e460, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7af20, 0x1c52 bytes
    //
    _n7(sdk::unknown_ptr) free;
    
    // [GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x945f0, 0x158b bytes
    // dxgmms2.sys PAGE:0x854e0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7c570, 0x20ba bytes
    // dxgmms2.sys PAGE:0x85ad0, 0x1c52 bytes
    //
    _n8(sdk::unknown_ptr) get_backing_address;
    
    // [GetFullMDL@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x42980, 0x158b bytes
    // dxgmms2.sys PAGE:0x7a370, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x90470, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7a960, 0x1c52 bytes
    //
    _n9(sdk::unknown_ptr) get_full_mdl;
    
    // [GetMDLForRange@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x42910, 0x158b bytes
    // dxgmms2.sys PAGE:0x87860, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa4ec0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x87e50, 0x1c52 bytes
    //
    _o0(sdk::unknown_ptr) get_mdl_for_range;
    
    // [GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x10d8, 0x158b bytes
    // dxgmms2.sys .text:0x3520, 0x1c52 bytes
    // dxgmms2.sys .text:0x1550, 0x20ba bytes
    // dxgmms2.sys .text:0x3520, 0x1c52 bytes
    //
    _o1(sdk::unknown_ptr) get_small_allocation_block_size;
    
    // [GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x10b0, 0x158b bytes
    // dxgmms2.sys .text:0x13044, 0x1c52 bytes
    // dxgmms2.sys .text:0x1280, 0x20ba bytes
    // dxgmms2.sys .text:0x13044, 0x1c52 bytes
    //
    _o2(sdk::unknown_ptr) get_small_allocation_size;
    
    // [_GlobalHeapManagerListHead@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x36680, 0x158b bytes
    // dxgmms2.sys .data:0x517c0, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e880, 0x20ba bytes
    // dxgmms2.sys .data:0x517c8, 0x1c52 bytes
    //
    _o3(sdk::unknown_ptr) global_heap_manager_list_head;
    
    // [_GlobalHeapManagerListLock@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x364e8, 0x158b bytes
    // dxgmms2.sys .data:0x515d8, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e668, 0x20ba bytes
    // dxgmms2.sys .data:0x515d8, 0x1c52 bytes
    //
    _o4(sdk::unknown_ptr) global_heap_manager_list_lock;
    
    // [_GlobalOutstandingDebouncedDecommit@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x36500, 0x158b bytes
    // dxgmms2.sys .data:0x517a0, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e6b8, 0x20ba bytes
    // dxgmms2.sys .data:0x51618, 0x1c52 bytes
    //
    _o5(sdk::unknown_ptr) global_outstanding_debounced_decommit;
    
    // [_GlobalOutstandingDebouncedUnlock@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x364f8, 0x158b bytes
    // dxgmms2.sys .data:0x51798, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e6b0, 0x20ba bytes
    // dxgmms2.sys .data:0x51610, 0x1c52 bytes
    //
    _o6(sdk::unknown_ptr) global_outstanding_debounced_unlock;
    
    // [Init@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x42d80, 0x158b bytes
    // dxgmms2.sys PAGE:0x754b0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x826c0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x75aa0, 0x1c52 bytes
    //
    _o7(sdk::unknown_ptr) init;
    
    // [IsOverLimits@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1148, 0x158b bytes
    // dxgmms2.sys .text:0x35f4, 0x1c52 bytes
    // dxgmms2.sys .text:0x13c4, 0x20ba bytes
    // dxgmms2.sys .text:0x35f4, 0x1c52 bytes
    //
    _o8(sdk::unknown_ptr) is_over_limits;
    
    // [MapLocked@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x946c0, 0x158b bytes
    // dxgmms2.sys PAGE:0xc2240, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe6c10, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc2810, 0x1c52 bytes
    //
    _o9(sdk::unknown_ptr) map_locked;
    
    // [MapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x94a00, 0x158b bytes
    // dxgmms2.sys PAGE:0xc2670, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe7060, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc2c40, 0x1c52 bytes
    //
    _p0(sdk::unknown_ptr) map_view_of_allocation;
    
    // [MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x94a70, 0x158b bytes
    // dxgmms2.sys PAGE:0xc26f0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe70e0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc2cc0, 0x1c52 bytes
    //
    _p1(sdk::unknown_ptr) map_view_of_allocation_external;
    
    // [ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x42b90, 0x158b bytes
    // dxgmms2.sys PAGE:0x79170, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7d410, 0x20ba bytes
    // dxgmms2.sys PAGE:0x79760, 0x1c52 bytes
    //
    _p2(sdk::unknown_ptr) probe_and_lock_allocation;
    
    // [ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x422a0, 0x158b bytes
    // dxgmms2.sys PAGE:0x79250, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7e4ec, 0x20ba bytes
    // dxgmms2.sys PAGE:0x79840, 0x1c52 bytes
    //
    _p3(sdk::unknown_ptr) process_debounce_list;
    
    // [ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6884c, 0x158b bytes
    // dxgmms2.sys PAGE:0xc2798, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa6c64, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc2d68, 0x1c52 bytes
    //
    _p4(sdk::unknown_ptr) process_debounce_lists_globally;
    
    // [RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x426fc, 0x158b bytes
    // dxgmms2.sys PAGE:0x78638, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x806ac, 0x20ba bytes
    // dxgmms2.sys PAGE:0x78c28, 0x1c52 bytes
    //
    _p5(sdk::unknown_ptr) remove_from_debounce;
    
    // [ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x94c64, 0x158b bytes
    // dxgmms2.sys PAGE:0xc2a54, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe72e4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc3024, 0x1c52 bytes
    //
    _p6(sdk::unknown_ptr) report_heap_states;
    
    // [Reset@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x42aa0, 0x158b bytes
    // dxgmms2.sys PAGE:0x75890, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7cca0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x75e80, 0x1c52 bytes
    //
    _p7(sdk::unknown_ptr) reset;
    
    // [ResetUndo@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x401e0, 0x158b bytes
    // dxgmms2.sys PAGE:0xc2c90, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe7520, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc3260, 0x1c52 bytes
    //
    _p8(sdk::unknown_ptr) reset_undo;
    
    // [Rotate@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x65e30, 0x158b bytes
    // dxgmms2.sys PAGE:0xc2e90, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa54d0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc3460, 0x1c52 bytes
    //
    _p9(sdk::unknown_ptr) rotate;
    
    // [UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x42b10, 0x158b bytes
    // dxgmms2.sys PAGE:0x78770, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7d4d0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x78d60, 0x1c52 bytes
    //
    _q0(sdk::unknown_ptr) unlock_allocation;
    
    // [UnmapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x94e50, 0x158b bytes
    // dxgmms2.sys PAGE:0xc37b0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe7850, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc3d80, 0x1c52 bytes
    //
    _q1(sdk::unknown_ptr) unmap_view_of_allocation;
    
    // [UnmapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x94ea0, 0x158b bytes
    // dxgmms2.sys PAGE:0xc3800, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe78a0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc3dd0, 0x1c52 bytes
    //
    _q2(sdk::unknown_ptr) unmap_view_of_allocation_external;
};
#include "magic/api.end.hpp"
