#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::vidmm_export
{
    // [VidMmAsyncUnpinAllocation@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x219e0, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) vid_mm_async_unpin_allocation;
    
    // [VidMmBeginCPUAccess@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x8330, 0x60098 bytes
    //
    _m1(sdk::unknown_ptr) vid_mm_begin_cpu_access;
    
    // [VidMmCloseAllocation@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x8604, 0x60098 bytes
    //
    _m2(sdk::unknown_ptr) vid_mm_close_allocation;
    
    // [VidMmCreateContextAllocation@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x84ac, 0x60098 bytes
    //
    _m3(sdk::unknown_ptr) vid_mm_create_context_allocation;
    
    // [VidMmCreateDevice@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x8448, 0x60098 bytes
    //
    _m4(sdk::unknown_ptr) vid_mm_create_device;
    
    // [VidMmDestroyAllocation@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x868c, 0x60098 bytes
    //
    _m5(sdk::unknown_ptr) vid_mm_destroy_allocation;
    
    // [VidMmEndCPUAccess@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x83d0, 0x60098 bytes
    //
    _m6(sdk::unknown_ptr) vid_mm_end_cpu_access;
    
    // [VidMmEscape@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x24a9c, 0x60098 bytes
    //
    _m7(sdk::unknown_ptr) vid_mm_escape;
    
    // [VidMmEvictAllocation@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x21a40, 0x60098 bytes
    //
    _m8(sdk::unknown_ptr) vid_mm_evict_allocation;
    
    // [VidMmGetAllocationSection@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x20f70, 0x60098 bytes
    //
    _m9(sdk::unknown_ptr) vid_mm_get_allocation_section;
    
    // [VidMmGetTotalSegmentSize@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0xefa8, 0x60098 bytes
    //
    _n0(sdk::unknown_ptr) vid_mm_get_total_segment_size;
    
    // [VidMmInvalidateAllocation@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x8268, 0x60098 bytes
    //
    _n1(sdk::unknown_ptr) vid_mm_invalidate_allocation;
    
    // [VidMmInvalidateCache@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x4afbc, 0x84380 bytes
    //
    _n2(sdk::unknown_ptr) vid_mm_invalidate_cache;
    
    // [VidMmIsAllocationInPresentQueue@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x1eaa4, 0x60098 bytes
    //
    _n3(sdk::unknown_ptr) vid_mm_is_allocation_in_present_queue;
    
    // [VidMmLock@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x112e8, 0x60098 bytes
    //
    _n4(sdk::unknown_ptr) vid_mm_lock;
    
    // [VidMmOfferAllocation@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x11350, 0x60098 bytes
    //
    _n5(sdk::unknown_ptr) vid_mm_offer_allocation;
    
    // [VidMmPinAllocation@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x8770, 0x60098 bytes
    //
    _n6(sdk::unknown_ptr) vid_mm_pin_allocation;
    
    // [VidMmPurgeAllSegments@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0xeccc, 0x60098 bytes
    //
    _n7(sdk::unknown_ptr) vid_mm_purge_all_segments;
    
    // [VidMmQueryAllocationResidency@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x8710, 0x60098 bytes
    //
    _n8(sdk::unknown_ptr) vid_mm_query_allocation_residency;
    
    // [VidMmQueryProcessStatistics@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x20a7c, 0x60098 bytes
    //
    _n9(sdk::unknown_ptr) vid_mm_query_process_statistics;
    
    // [VidMmReclaimAllocation@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x113c4, 0x60098 bytes
    //
    _o0(sdk::unknown_ptr) vid_mm_reclaim_allocation;
    
    // [VidMmReferenceAllocationForTokenSubmission@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x25304, 0x60098 bytes
    //
    _o1(sdk::unknown_ptr) vid_mm_reference_allocation_for_token_submission;
    
    // [VidMmReferenceDmaBuffer@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x1cb58, 0x60098 bytes
    //
    _o2(sdk::unknown_ptr) vid_mm_reference_dma_buffer;
    
    // [VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x11278, 0x60098 bytes
    //
    _o3(sdk::unknown_ptr) vid_mm_reference_primary_allocation_for_submission;
    
    // [VidMmReportContextAllocList@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x212c8, 0x60098 bytes
    //
    _o4(sdk::unknown_ptr) vid_mm_report_context_alloc_list;
    
    // [VidMmReportMultiGlobalAlloc@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x21ab0, 0x60098 bytes
    //
    _o5(sdk::unknown_ptr) vid_mm_report_multi_global_alloc;
    
    // [VidMmSetAllocationPriority@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x20fd4, 0x60098 bytes
    //
    _o6(sdk::unknown_ptr) vid_mm_set_allocation_priority;
    
    // [VidMmSetPagingFenceObject@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x82c4, 0x60098 bytes
    //
    _o7(sdk::unknown_ptr) vid_mm_set_paging_fence_object;
    
    // [VidMmSetWorkingSetInformation@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x20afc, 0x60098 bytes
    //
    _o8(sdk::unknown_ptr) vid_mm_set_working_set_information;
    
    // [VidMmUnpinAllocation@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x85a8, 0x60098 bytes
    //
    _o9(sdk::unknown_ptr) vid_mm_unpin_allocation;
    
    // [VidMmUnreferenceDmaBuffer@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x25374, 0x60098 bytes
    //
    _p0(sdk::unknown_ptr) vid_mm_unreference_dma_buffer;
    
    // [VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x253c4, 0x60098 bytes
    //
    _p1(sdk::unknown_ptr) vid_mm_unreference_primary_allocation;
    
    // [VidMmETWAllocationHandle@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x166f8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7248, 0x84380 bytes
    // dxgkrnl.sys .text:0x16e88, 0x762b0 bytes
    //
    _p2(sdk::unknown_ptr) vid_mm_etw_allocation_handle;
    
    // [VidMmReleaseDmaBuffer@VIDMM_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3d05c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2e7ea, 0x84380 bytes
    // dxgkrnl.sys .text:0x3d24c, 0x762b0 bytes
    //
    _p3(sdk::unknown_ptr) vid_mm_release_dma_buffer;
};
#include "magic/api.end.hpp"
