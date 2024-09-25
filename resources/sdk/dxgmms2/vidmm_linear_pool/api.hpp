#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_linear_pool
{
    // [MarkBadMemoryBlocks@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x9e078, 0x158b bytes
    //
    _m0(sdk::unknown_ptr) mark_bad_memory_blocks;
    
    // [AllocateOutside@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xeeeb4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5e4fc, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) allocate_outside;
    
    // [CalculateCapacity@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xcf32c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xeefac, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcfacc, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) calculate_capacity;
    
    // [FindTemporarySegmentLocationForResource@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xcf9b8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xef5f0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd0158, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) find_temporary_segment_location_for_resource;
    
    // [FreeMemoryBlocks@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xcfb14, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xef73c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd02b4, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) free_memory_blocks;
    
    // [MarkMemoryBlocks@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xd0218, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xefd8c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd09b8, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) mark_memory_blocks;
    
    // [ReserveLocationOutsideRange@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9e3ec, 0x158b bytes
    // dxgmms2.sys PAGE:0xd05fc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd0d9c, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) reserve_location_outside_range;
    
    // [Allocate@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x48594, 0x158b bytes
    // dxgmms2.sys PAGE:0x61a10, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9eac4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x62000, 0x1c52 bytes
    //
    _m7(sdk::unknown_ptr) allocate;
    
    // [AllocateAt@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9d9e8, 0x158b bytes
    // dxgmms2.sys PAGE:0xcf2d4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xeee5c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcfa74, 0x1c52 bytes
    //
    _m8(sdk::unknown_ptr) allocate_at;
    
    // [AllocateBlock@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x47f80, 0x158b bytes
    // dxgmms2.sys PAGE:0x60f78, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9f314, 0x20ba bytes
    // dxgmms2.sys PAGE:0x61568, 0x1c52 bytes
    //
    _m9(sdk::unknown_ptr) allocate_block;
    
    // [ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x48308, 0x158b bytes
    // dxgmms2.sys PAGE:0x620b0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9f20c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x626a0, 0x1c52 bytes
    //
    _n0(sdk::unknown_ptr) apply_block_run_restrictions;
    
    // [??0VIDMM_LINEAR_POOL@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6d6a4, 0x158b bytes
    // dxgmms2.sys PAGE:0x8d494, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xad76c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8da84, 0x1c52 bytes
    //
    _n1(sdk::unknown_ptr) construct_instance;
    
    // [DefragmentRange@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9da3c, 0x158b bytes
    // dxgmms2.sys PAGE:0xcf370, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xeeff0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcfb10, 0x1c52 bytes
    //
    _n2(sdk::unknown_ptr) defragment_range;
    
    // [??1VIDMM_LINEAR_POOL@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9d904, 0x158b bytes
    // dxgmms2.sys PAGE:0xcf1a0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xeed28, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcf940, 0x1c52 bytes
    //
    _n3(sdk::unknown_ptr) destroy_instance;
    
    // [DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9dcf8, 0x158b bytes
    // dxgmms2.sys PAGE:0xcf780, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xef3b8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcff20, 0x1c52 bytes
    //
    _n4(sdk::unknown_ptr) directed_iterate_allocated_blocks_in_range;
    
    // [FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x47e84, 0x158b bytes
    // dxgmms2.sys PAGE:0x62298, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x98b0c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x62888, 0x1c52 bytes
    //
    _n5(sdk::unknown_ptr) find_adjacent_blocks_on_free_list;
    
    // [FindBestDefragmentRegion@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9ddc8, 0x158b bytes
    // dxgmms2.sys PAGE:0xcf858, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xef490, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcfff8, 0x1c52 bytes
    //
    _n6(sdk::unknown_ptr) find_best_defragment_region;
    
    // [FindBlockRun@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x47a70, 0x158b bytes
    // dxgmms2.sys PAGE:0x61e50, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9ef10, 0x20ba bytes
    // dxgmms2.sys PAGE:0x62440, 0x1c52 bytes
    //
    _n7(sdk::unknown_ptr) find_block_run;
    
    // [Free@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x48864, 0x158b bytes
    // dxgmms2.sys PAGE:0x83f40, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9f8b8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x84530, 0x1c52 bytes
    //
    _n8(sdk::unknown_ptr) free;
    
    // [FreeBlock@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x47f4c, 0x158b bytes
    // dxgmms2.sys PAGE:0x8415c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9fad0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8474c, 0x1c52 bytes
    //
    _n9(sdk::unknown_ptr) free_block;
    
    // [GetLargestGap@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9def0, 0x158b bytes
    // dxgmms2.sys PAGE:0xcfc0c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xef7f8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd03ac, 0x1c52 bytes
    //
    _o0(sdk::unknown_ptr) get_largest_gap;
    
    // [Init@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6d5dc, 0x158b bytes
    // dxgmms2.sys PAGE:0x8d3cc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xad6a4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8d9bc, 0x1c52 bytes
    //
    _o1(sdk::unknown_ptr) init;
    
    // [IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9dffc, 0x158b bytes
    // dxgmms2.sys PAGE:0xcfd30, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xef91c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd04d0, 0x1c52 bytes
    //
    _o2(sdk::unknown_ptr) iterate_allocated_blocks_in_range;
    
    // [MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9e170, 0x158b bytes
    // dxgmms2.sys PAGE:0xcfdb4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xef9a0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd0554, 0x1c52 bytes
    //
    _o3(sdk::unknown_ptr) mark_block_as_allocated_scrub_pending;
    
    // [MarkBlockForEviction@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x484b0, 0x158b bytes
    // dxgmms2.sys PAGE:0x621bc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x98a2c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x627ac, 0x1c52 bytes
    //
    _o4(sdk::unknown_ptr) mark_block_for_eviction;
    
    // [PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9e1c0, 0x158b bytes
    // dxgmms2.sys PAGE:0xd037c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xeff18, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd0b1c, 0x1c52 bytes
    //
    _o5(sdk::unknown_ptr) patch_gaps_with_free_blocks;
    
    // [ReclaimBlock@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x48440, 0x158b bytes
    // dxgmms2.sys PAGE:0x855ac, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa1608, 0x20ba bytes
    // dxgmms2.sys PAGE:0x85b9c, 0x1c52 bytes
    //
    _o6(sdk::unknown_ptr) reclaim_block;
    
    // [RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9e4ec, 0x158b bytes
    // dxgmms2.sys PAGE:0xd0944, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf0198, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd10e4, 0x1c52 bytes
    //
    _o7(sdk::unknown_ptr) rollback_placement_of_pending_resources;
    
    // [SplitBlock@VIDMM_LINEAR_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4809c, 0x158b bytes
    // dxgmms2.sys PAGE:0x61c28, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9ecdc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x62218, 0x1c52 bytes
    //
    _o8(sdk::unknown_ptr) split_block;
};
#include "magic/api.end.hpp"
