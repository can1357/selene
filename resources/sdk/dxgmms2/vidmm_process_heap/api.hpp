#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_process_heap
{
    // [MarkNoZeroNeed@VIDMM_PROCESS_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x145b0, 0x1c52 bytes
    // dxgmms2.sys .text:0x18db0, 0x20ba bytes
    // dxgmms2.sys .text:0x145b0, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) mark_no_zero_need;
    
    // [ZeroIfNeeded@VIDMM_PROCESS_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x145b0, 0x1c52 bytes
    // dxgmms2.sys .text:0x18db0, 0x20ba bytes
    // dxgmms2.sys .text:0x145b0, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) zero_if_needed;
    
    // [Allocate@VIDMM_PROCESS_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9b5a0, 0x158b bytes
    // dxgmms2.sys PAGE:0xcc920, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf0560, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcd0c0, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) allocate;
    
    // [AllocateBlock@VIDMM_PROCESS_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9bb84, 0x158b bytes
    // dxgmms2.sys PAGE:0xccf80, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf0c64, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcd720, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) allocate_block;
    
    // [AllocateSmallAllocation@VIDMM_PROCESS_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9c084, 0x158b bytes
    // dxgmms2.sys PAGE:0xcd510, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf12c4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcdcb0, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) allocate_small_allocation;
    
    // [??0VIDMM_PROCESS_HEAP@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9b364, 0x158b bytes
    // dxgmms2.sys PAGE:0xcc67c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf0310, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcce1c, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) construct_instance;
    
    // [??1VIDMM_PROCESS_HEAP@@UEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9b400, 0x158b bytes
    // dxgmms2.sys PAGE:0xcc728, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf03d4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xccec8, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) destroy_instance;
    
    // [FlushTransitions@VIDMM_PROCESS_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14fc0, 0x158b bytes
    // dxgmms2.sys .text:0x14620, 0x1c52 bytes
    // dxgmms2.sys .text:0x18e20, 0x20ba bytes
    // dxgmms2.sys .text:0x14620, 0x1c52 bytes
    //
    _m7(sdk::unknown_ptr) flush_transitions;
    
    // [Free@VIDMM_PROCESS_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9c4b0, 0x158b bytes
    // dxgmms2.sys PAGE:0xcd980, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf1760, 0x20ba bytes
    // dxgmms2.sys PAGE:0xce120, 0x1c52 bytes
    //
    _m8(sdk::unknown_ptr) free;
    
    // [FreeBlock@VIDMM_PROCESS_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9c6e0, 0x158b bytes
    // dxgmms2.sys PAGE:0xcdbd4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf1990, 0x20ba bytes
    // dxgmms2.sys PAGE:0xce374, 0x1c52 bytes
    //
    _m9(sdk::unknown_ptr) free_block;
    
    // [FreeSmallAllocation@VIDMM_PROCESS_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9c838, 0x158b bytes
    // dxgmms2.sys PAGE:0xcdd54, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf1b10, 0x20ba bytes
    // dxgmms2.sys PAGE:0xce4f4, 0x1c52 bytes
    //
    _n0(sdk::unknown_ptr) free_small_allocation;
    
    // [GetAllocationInfo@VIDMM_PROCESS_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9ca24, 0x158b bytes
    // dxgmms2.sys PAGE:0xcdf70, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf1d20, 0x20ba bytes
    // dxgmms2.sys PAGE:0xce710, 0x1c52 bytes
    //
    _n1(sdk::unknown_ptr) get_allocation_info;
    
    // [GetBackingAddress@VIDMM_PROCESS_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x71850, 0x158b bytes
    // dxgmms2.sys PAGE:0x860e0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3c20, 0x20ba bytes
    // dxgmms2.sys PAGE:0x866d0, 0x1c52 bytes
    //
    _n2(sdk::unknown_ptr) get_backing_address;
    
    // [GetBlockListHead@VIDMM_PROCESS_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9cb58, 0x158b bytes
    // dxgmms2.sys PAGE:0xce0ac, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf1e5c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xce84c, 0x1c52 bytes
    //
    _n3(sdk::unknown_ptr) get_block_list_head;
    
    // [GetFullMDL@VIDMM_PROCESS_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9cbb0, 0x158b bytes
    // dxgmms2.sys PAGE:0xce110, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf1ec0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xce8b0, 0x1c52 bytes
    //
    _n4(sdk::unknown_ptr) get_full_mdl;
    
    // [GetMDLForRange@VIDMM_PROCESS_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9cbc0, 0x158b bytes
    // dxgmms2.sys PAGE:0xce130, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf1ee0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xce8d0, 0x1c52 bytes
    //
    _n5(sdk::unknown_ptr) get_mdl_for_range;
    
    // [Init@VIDMM_PROCESS_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9cbd0, 0x158b bytes
    // dxgmms2.sys PAGE:0xce150, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3c40, 0x20ba bytes
    // dxgmms2.sys PAGE:0xce8f0, 0x1c52 bytes
    //
    _n6(sdk::unknown_ptr) init;
    
    // [MapLocked@VIDMM_PROCESS_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9cc50, 0x158b bytes
    // dxgmms2.sys PAGE:0xce1f0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf1f00, 0x20ba bytes
    // dxgmms2.sys PAGE:0xce990, 0x1c52 bytes
    //
    _n7(sdk::unknown_ptr) map_locked;
    
    // [MapViewOfAllocation@VIDMM_PROCESS_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9cc90, 0x158b bytes
    // dxgmms2.sys PAGE:0xce240, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf1f50, 0x20ba bytes
    // dxgmms2.sys PAGE:0xce9e0, 0x1c52 bytes
    //
    _n8(sdk::unknown_ptr) map_view_of_allocation;
    
    // [MapViewOfAllocationExternal@VIDMM_PROCESS_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9ce80, 0x158b bytes
    // dxgmms2.sys PAGE:0xce490, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf2200, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcec30, 0x1c52 bytes
    //
    _n9(sdk::unknown_ptr) map_view_of_allocation_external;
    
    // [ProbeAndLockAllocation@VIDMM_PROCESS_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9cfd0, 0x158b bytes
    // dxgmms2.sys PAGE:0xce640, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf23f0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcede0, 0x1c52 bytes
    //
    _o0(sdk::unknown_ptr) probe_and_lock_allocation;
    
    // [Reset@VIDMM_PROCESS_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9d040, 0x158b bytes
    // dxgmms2.sys PAGE:0xce6b0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf2460, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcee50, 0x1c52 bytes
    //
    _o1(sdk::unknown_ptr) reset;
    
    // [ResetUndo@VIDMM_PROCESS_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9d1f0, 0x158b bytes
    // dxgmms2.sys PAGE:0xce8b0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf2640, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcf050, 0x1c52 bytes
    //
    _o2(sdk::unknown_ptr) reset_undo;
    
    // [Rotate@VIDMM_PROCESS_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9d330, 0x158b bytes
    // dxgmms2.sys PAGE:0xcea20, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf2790, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcf1c0, 0x1c52 bytes
    //
    _o3(sdk::unknown_ptr) rotate;
    
    // [UnlockAllocation@VIDMM_PROCESS_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9d770, 0x158b bytes
    // dxgmms2.sys PAGE:0xcef90, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf2cb0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcf730, 0x1c52 bytes
    //
    _o4(sdk::unknown_ptr) unlock_allocation;
    
    // [UnmapViewOfAllocation@VIDMM_PROCESS_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9d790, 0x158b bytes
    // dxgmms2.sys PAGE:0xcefc0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf2ce0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcf760, 0x1c52 bytes
    //
    _o5(sdk::unknown_ptr) unmap_view_of_allocation;
    
    // [UnmapViewOfAllocationExternal@VIDMM_PROCESS_HEAP]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9d870, 0x158b bytes
    // dxgmms2.sys PAGE:0xcf0e0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf2e10, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcf880, 0x1c52 bytes
    //
    _o6(sdk::unknown_ptr) unmap_view_of_allocation_external;
};
#include "magic/api.end.hpp"
