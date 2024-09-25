#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_dma_pool
{
    // [FlushPendingCPUAccess@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xbbb38, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe0794, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbc108, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) flush_pending_cpu_access;
    
    // [AcquireBuffer@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x61400, 0x158b bytes
    // dxgmms2.sys PAGE:0x63160, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x943a0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x63750, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) acquire_buffer;
    
    // [AddDmaBufferToPool@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x61768, 0x158b bytes
    // dxgmms2.sys PAGE:0x8871c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9da68, 0x20ba bytes
    // dxgmms2.sys PAGE:0x88d0c, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) add_dma_buffer_to_pool;
    
    // [BeginCPUAccess@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x71820, 0x158b bytes
    // dxgmms2.sys PAGE:0x73928, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9fe20, 0x20ba bytes
    // dxgmms2.sys PAGE:0x73f18, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) begin_cpu_access;
    
    // [CheckIfDmaInformationPresent@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x913a4, 0x158b bytes
    // dxgmms2.sys PAGE:0xbba6c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe06c8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbc03c, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) check_if_dma_information_present;
    
    // [??0VIDMM_DMA_POOL@@QEAA@PEAVVIDMM_GLOBAL@@KPEAVVIDMM_DEVICE@@PEAVDXGCONTEXT@@KKKKKH@Z]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6761c, 0x158b bytes
    // dxgmms2.sys PAGE:0x88e60, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa637c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x89450, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) construct_instance;
    
    // [_CriticalAllocationListBytes@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x364a0, 0x158b bytes
    // dxgmms2.sys .data:0x51590, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e620, 0x20ba bytes
    // dxgmms2.sys .data:0x51590, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) critical_allocation_list_bytes;
    
    // [_CriticalDmaBufferBytes@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x364c0, 0x158b bytes
    // dxgmms2.sys .data:0x515b0, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e640, 0x20ba bytes
    // dxgmms2.sys .data:0x515b0, 0x1c52 bytes
    //
    _m7(sdk::unknown_ptr) critical_dma_buffer_bytes;
    
    // [_CriticalPatchLocationListBytes@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x36480, 0x158b bytes
    // dxgmms2.sys .data:0x51570, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e600, 0x20ba bytes
    // dxgmms2.sys .data:0x51570, 0x1c52 bytes
    //
    _m8(sdk::unknown_ptr) critical_patch_location_list_bytes;
    
    // [??1VIDMM_DMA_POOL@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x67810, 0x158b bytes
    // dxgmms2.sys PAGE:0x87168, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa5e90, 0x20ba bytes
    // dxgmms2.sys PAGE:0x87758, 0x1c52 bytes
    //
    _m9(sdk::unknown_ptr) destroy_instance;
    
    // [_DmaBufferUniqueness@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x360d0, 0x158b bytes
    // dxgmms2.sys .data:0x510d0, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e108, 0x20ba bytes
    // dxgmms2.sys .data:0x510d0, 0x1c52 bytes
    //
    _n0(sdk::unknown_ptr) dma_buffer_uniqueness;
    
    // [_DmaPoolsAddRemoveLock@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x364d0, 0x158b bytes
    // dxgmms2.sys .data:0x515c0, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e650, 0x20ba bytes
    // dxgmms2.sys .data:0x515c0, 0x1c52 bytes
    //
    _n1(sdk::unknown_ptr) dma_pools_add_remove_lock;
    
    // [_DmaPoolsListHead@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x36698, 0x158b bytes
    // dxgmms2.sys .data:0x517f0, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e898, 0x20ba bytes
    // dxgmms2.sys .data:0x517f8, 0x1c52 bytes
    //
    _n2(sdk::unknown_ptr) dma_pools_list_head;
    
    // [EndCPUAccess@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x54220, 0x158b bytes
    // dxgmms2.sys PAGE:0x73520, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x83a10, 0x20ba bytes
    // dxgmms2.sys PAGE:0x73b10, 0x1c52 bytes
    //
    _n3(sdk::unknown_ptr) end_cpu_access;
    
    // [_FairAllocationListBytes@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x36438, 0x158b bytes
    // dxgmms2.sys .data:0x511a0, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e1d8, 0x20ba bytes
    // dxgmms2.sys .data:0x511a0, 0x1c52 bytes
    //
    _n4(sdk::unknown_ptr) fair_allocation_list_bytes;
    
    // [_FairDmaBufferBytes@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x36440, 0x158b bytes
    // dxgmms2.sys .data:0x511a8, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e1e0, 0x20ba bytes
    // dxgmms2.sys .data:0x511a8, 0x1c52 bytes
    //
    _n5(sdk::unknown_ptr) fair_dma_buffer_bytes;
    
    // [_FairPatchLocationListBytes@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x36430, 0x158b bytes
    // dxgmms2.sys .data:0x51198, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e1d0, 0x20ba bytes
    // dxgmms2.sys .data:0x51198, 0x1c52 bytes
    //
    _n6(sdk::unknown_ptr) fair_patch_location_list_bytes;
    
    // [GetNextBuffersContractedSize@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x91468, 0x158b bytes
    // dxgmms2.sys PAGE:0xbbb68, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe07c0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbc138, 0x1c52 bytes
    //
    _n7(sdk::unknown_ptr) get_next_buffers_contracted_size;
    
    // [_HighAllocationListBytes@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x36498, 0x158b bytes
    // dxgmms2.sys .data:0x51588, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e618, 0x20ba bytes
    // dxgmms2.sys .data:0x51588, 0x1c52 bytes
    //
    _n8(sdk::unknown_ptr) high_allocation_list_bytes;
    
    // [_HighDmaBufferBytes@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x364b8, 0x158b bytes
    // dxgmms2.sys .data:0x515a8, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e638, 0x20ba bytes
    // dxgmms2.sys .data:0x515a8, 0x1c52 bytes
    //
    _n9(sdk::unknown_ptr) high_dma_buffer_bytes;
    
    // [_HighPatchLocationListBytes@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x36478, 0x158b bytes
    // dxgmms2.sys .data:0x51568, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e5f8, 0x20ba bytes
    // dxgmms2.sys .data:0x51568, 0x1c52 bytes
    //
    _o0(sdk::unknown_ptr) high_patch_location_list_bytes;
    
    // [Init@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x67700, 0x158b bytes
    // dxgmms2.sys PAGE:0x88628, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa6164, 0x20ba bytes
    // dxgmms2.sys PAGE:0x88c18, 0x1c52 bytes
    //
    _o1(sdk::unknown_ptr) init;
    
    // [InitGlobals@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6fb10, 0x158b bytes
    // dxgmms2.sys PAGE:0x8dca4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb0644, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8e384, 0x1c52 bytes
    //
    _o2(sdk::unknown_ptr) init_globals;
    
    // [IsAllowedToGrow@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x612fc, 0x158b bytes
    // dxgmms2.sys PAGE:0x63338, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x94578, 0x20ba bytes
    // dxgmms2.sys PAGE:0x63928, 0x1c52 bytes
    //
    _o3(sdk::unknown_ptr) is_allowed_to_grow;
    
    // [LockAllPoolForAddRemove@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x658f8, 0x158b bytes
    // dxgmms2.sys PAGE:0x88db0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9e0c8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x893a0, 0x1c52 bytes
    //
    _o4(sdk::unknown_ptr) lock_all_pool_for_add_remove;
    
    // [_LowAllocationListBytes@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x36490, 0x158b bytes
    // dxgmms2.sys .data:0x51580, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e610, 0x20ba bytes
    // dxgmms2.sys .data:0x51580, 0x1c52 bytes
    //
    _o5(sdk::unknown_ptr) low_allocation_list_bytes;
    
    // [_LowDmaBufferBytes@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x364b0, 0x158b bytes
    // dxgmms2.sys .data:0x515a0, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e630, 0x20ba bytes
    // dxgmms2.sys .data:0x515a0, 0x1c52 bytes
    //
    _o6(sdk::unknown_ptr) low_dma_buffer_bytes;
    
    // [_LowPatchLocationListBytes@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x36470, 0x158b bytes
    // dxgmms2.sys .data:0x51560, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e5f0, 0x20ba bytes
    // dxgmms2.sys .data:0x51560, 0x1c52 bytes
    //
    _o7(sdk::unknown_ptr) low_patch_location_list_bytes;
    
    // [_MaxAllocationListBytes@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x364a8, 0x158b bytes
    // dxgmms2.sys .data:0x51598, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e628, 0x20ba bytes
    // dxgmms2.sys .data:0x51598, 0x1c52 bytes
    //
    _o8(sdk::unknown_ptr) max_allocation_list_bytes;
    
    // [_MaxDmaBufferBytes@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x364c8, 0x158b bytes
    // dxgmms2.sys .data:0x515b8, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e648, 0x20ba bytes
    // dxgmms2.sys .data:0x515b8, 0x1c52 bytes
    //
    _o9(sdk::unknown_ptr) max_dma_buffer_bytes;
    
    // [_MaxNbCddDmaBuffers@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x364dc, 0x158b bytes
    // dxgmms2.sys .data:0x515cc, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e65c, 0x20ba bytes
    // dxgmms2.sys .data:0x515cc, 0x1c52 bytes
    //
    _p0(sdk::unknown_ptr) max_nb_cdd_dma_buffers;
    
    // [_MaxNbDmaBuffers@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x364e0, 0x158b bytes
    // dxgmms2.sys .data:0x515d0, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e660, 0x20ba bytes
    // dxgmms2.sys .data:0x515d0, 0x1c52 bytes
    //
    _p1(sdk::unknown_ptr) max_nb_dma_buffers;
    
    // [_MaxPatchLocationListBytes@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x36488, 0x158b bytes
    // dxgmms2.sys .data:0x51578, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e608, 0x20ba bytes
    // dxgmms2.sys .data:0x51578, 0x1c52 bytes
    //
    _p2(sdk::unknown_ptr) max_patch_location_list_bytes;
    
    // [_NbActiveDmaPools@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x36690, 0x158b bytes
    // dxgmms2.sys .data:0x517e8, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e890, 0x20ba bytes
    // dxgmms2.sys .data:0x517f0, 0x1c52 bytes
    //
    _p3(sdk::unknown_ptr) nb_active_dma_pools;
    
    // [_NbDmaBufferLimitCompareWatermark@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x364d8, 0x158b bytes
    // dxgmms2.sys .data:0x515c8, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e658, 0x20ba bytes
    // dxgmms2.sys .data:0x515c8, 0x1c52 bytes
    //
    _p4(sdk::unknown_ptr) nb_dma_buffer_limit_compare_watermark;
    
    // [NeedToBeTrimmed@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x914dc, 0x158b bytes
    // dxgmms2.sys PAGE:0xbbbe0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe0838, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbc1b0, 0x1c52 bytes
    //
    _p5(sdk::unknown_ptr) need_to_be_trimmed;
    
    // [ReleaseBuffer@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2440, 0x158b bytes
    // dxgmms2.sys .text:0x2078, 0x1c52 bytes
    // dxgmms2.sys .text:0x18440, 0x20ba bytes
    // dxgmms2.sys .text:0x2078, 0x1c52 bytes
    //
    _p6(sdk::unknown_ptr) release_buffer;
    
    // [RemoveDmaBufferFromPool@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x678b4, 0x158b bytes
    // dxgmms2.sys PAGE:0x87210, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa5f38, 0x20ba bytes
    // dxgmms2.sys PAGE:0x87800, 0x1c52 bytes
    //
    _p7(sdk::unknown_ptr) remove_dma_buffer_from_pool;
    
    // [ReportState@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x915e8, 0x158b bytes
    // dxgmms2.sys PAGE:0xbbcec, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe097c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbc2bc, 0x1c52 bytes
    //
    _p8(sdk::unknown_ptr) report_state;
    
    // [ResizeBuffersInPool@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x919f0, 0x158b bytes
    // dxgmms2.sys PAGE:0xbc114, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe0da0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbc6e4, 0x1c52 bytes
    //
    _p9(sdk::unknown_ptr) resize_buffers_in_pool;
    
    // [SearchDmaBufferInAllPool@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x91b14, 0x158b bytes
    // dxgmms2.sys PAGE:0xbc248, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe0efc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbc818, 0x1c52 bytes
    //
    _q0(sdk::unknown_ptr) search_dma_buffer_in_all_pool;
    
    // [_TotalAllocationListBytes@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x36528, 0x158b bytes
    // dxgmms2.sys .data:0x517d8, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e6d8, 0x20ba bytes
    // dxgmms2.sys .data:0x517e0, 0x1c52 bytes
    //
    _q1(sdk::unknown_ptr) total_allocation_list_bytes;
    
    // [_TotalDmaBufferBytes@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x36530, 0x158b bytes
    // dxgmms2.sys .data:0x517e0, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e6e0, 0x20ba bytes
    // dxgmms2.sys .data:0x517e8, 0x1c52 bytes
    //
    _q2(sdk::unknown_ptr) total_dma_buffer_bytes;
    
    // [_TotalPatchLocationListBytes@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x36520, 0x158b bytes
    // dxgmms2.sys .data:0x517d0, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e6d0, 0x20ba bytes
    // dxgmms2.sys .data:0x517d8, 0x1c52 bytes
    //
    _q3(sdk::unknown_ptr) total_patch_location_list_bytes;
    
    // [TrimPool@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x91b6c, 0x158b bytes
    // dxgmms2.sys PAGE:0xbc2a8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe0f5c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbc878, 0x1c52 bytes
    //
    _q4(sdk::unknown_ptr) trim_pool;
    
    // [UpdateFairResourceUsage@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x67a94, 0x158b bytes
    // dxgmms2.sys PAGE:0x88de8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa625c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x893d8, 0x1c52 bytes
    //
    _q5(sdk::unknown_ptr) update_fair_resource_usage;
    
    // [WaitDmaBufferNotBusy@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x61614, 0x158b bytes
    // dxgmms2.sys PAGE:0x63448, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x94688, 0x20ba bytes
    // dxgmms2.sys PAGE:0x63a38, 0x1c52 bytes
    //
    _q6(sdk::unknown_ptr) wait_dma_buffer_not_busy;
    
    // [WriteDmaBufferToMinidump@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x91c34, 0x158b bytes
    // dxgmms2.sys PAGE:0xbc38c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe1024, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbc95c, 0x1c52 bytes
    //
    _q7(sdk::unknown_ptr) write_dma_buffer_to_minidump;
    
    // [WriteDmaHistoryToMinidump@VIDMM_DMA_POOL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x91fc8, 0x158b bytes
    // dxgmms2.sys PAGE:0xbc7b0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe1448, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbcd80, 0x1c52 bytes
    //
    _q8(sdk::unknown_ptr) write_dma_history_to_minidump;
};
#include "magic/api.end.hpp"
