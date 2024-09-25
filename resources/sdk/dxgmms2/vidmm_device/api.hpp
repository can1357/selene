#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_device
{
    // [CleanupAllocationCommitment@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x4ba20, 0x158b bytes
    //
    _m0(sdk::unknown_ptr) cleanup_allocation_commitment;
    
    // [UnfaultCommitment@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x4ca8c, 0x158b bytes
    //
    _m1(sdk::unknown_ptr) unfault_commitment;
    
    // [IncrementCurrentUsage@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb8fdc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa673c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb95ac, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) increment_current_usage;
    
    // [InsertPagingQueueList@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x122e4, 0x1c52 bytes
    // dxgmms2.sys .text:0x148cc, 0x20ba bytes
    // dxgmms2.sys .text:0x122e4, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) insert_paging_queue_list;
    
    // [MapPagingQueueGpuVAs@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb9118, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xddb74, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb96e8, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) map_paging_queue_gpu_v_as;
    
    // [ReportState@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb94e4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdddb4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb9ab4, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) report_state;
    
    // [UnmapPagingQueueGpuVAs@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb967c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xddf4c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb9c4c, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) unmap_paging_queue_gpu_v_as;
    
    // [AddCommitment@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x87ddc, 0x158b bytes
    // dxgmms2.sys PAGE:0x6dbc0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdd854, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6e1b0, 0x1c52 bytes
    //
    _m7(sdk::unknown_ptr) add_commitment;
    
    // [CanSuspendThisDevice@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8fbbc, 0x158b bytes
    // dxgmms2.sys PAGE:0xb9948, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xde0fc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb9f18, 0x1c52 bytes
    //
    _m8(sdk::unknown_ptr) can_suspend_this_device;
    
    // [??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4bfc0, 0x158b bytes
    // dxgmms2.sys PAGE:0x8079c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9d4e8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x80d8c, 0x1c52 bytes
    //
    _m9(sdk::unknown_ptr) construct_instance;
    
    // [CreatePagingQueue@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4c650, 0x158b bytes
    // dxgmms2.sys PAGE:0x7e8e0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9650c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7eed0, 0x1c52 bytes
    //
    _n0(sdk::unknown_ptr) create_paging_queue;
    
    // [DecrementCurrentUsage@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4b51c, 0x158b bytes
    // dxgmms2.sys PAGE:0x727b4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9a570, 0x20ba bytes
    // dxgmms2.sys PAGE:0x72da4, 0x1c52 bytes
    //
    _n1(sdk::unknown_ptr) decrement_current_usage;
    
    // [??1VIDMM_DEVICE@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4c41c, 0x158b bytes
    // dxgmms2.sys PAGE:0x7e960, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x961e0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7ef50, 0x1c52 bytes
    //
    _n2(sdk::unknown_ptr) destroy_instance;
    
    // [DestroyPagingQueue@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4c6cc, 0x158b bytes
    // dxgmms2.sys PAGE:0x7e8c0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x961c0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7eeb0, 0x1c52 bytes
    //
    _n3(sdk::unknown_ptr) destroy_paging_queue;
    
    // [EnsureSchedulable@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4c9c0, 0x158b bytes
    // dxgmms2.sys PAGE:0x7c910, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x92d40, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7cf00, 0x1c52 bytes
    //
    _n4(sdk::unknown_ptr) ensure_schedulable;
    
    // [FaultAllAllocations@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4b7e0, 0x158b bytes
    // dxgmms2.sys PAGE:0x62b40, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x982f8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x63130, 0x1c52 bytes
    //
    _n5(sdk::unknown_ptr) fault_all_allocations;
    
    // [FaultAllDemotableAllocations@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x91108, 0x158b bytes
    // dxgmms2.sys PAGE:0xb8cac, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdd944, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb927c, 0x1c52 bytes
    //
    _n6(sdk::unknown_ptr) fault_all_demotable_allocations;
    
    // [FaultCommitment@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4bb4c, 0x158b bytes
    // dxgmms2.sys PAGE:0x62c8c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x98440, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6327c, 0x1c52 bytes
    //
    _n7(sdk::unknown_ptr) fault_commitment;
    
    // [FullySuspend@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x68944, 0x158b bytes
    // dxgmms2.sys PAGE:0xb8e00, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa73a4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb93d0, 0x1c52 bytes
    //
    _n8(sdk::unknown_ptr) fully_suspend;
    
    // [GetBudgetAndVisibilityState@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x87ec0, 0x158b bytes
    // dxgmms2.sys PAGE:0xba240, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xded8c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xba810, 0x1c52 bytes
    //
    _n9(sdk::unknown_ptr) get_budget_and_visibility_state;
    
    // [IndefinitelySuspend@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4b690, 0x158b bytes
    // dxgmms2.sys PAGE:0x5eebc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa05bc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5f4ac, 0x1c52 bytes
    //
    _o0(sdk::unknown_ptr) indefinitely_suspend;
    
    // [Init@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4c0ec, 0x158b bytes
    // dxgmms2.sys PAGE:0x7ec8c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x96594, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7f27c, 0x1c52 bytes
    //
    _o1(sdk::unknown_ptr) init;
    
    // [IsBetterYieldCandidate@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x911fc, 0x158b bytes
    // dxgmms2.sys PAGE:0xb903c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdda98, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb960c, 0x1c52 bytes
    //
    _o2(sdk::unknown_ptr) is_better_yield_candidate;
    
    // [IsResumedRecently@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x90798, 0x158b bytes
    // dxgmms2.sys PAGE:0xba6dc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdf140, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbacac, 0x1c52 bytes
    //
    _o3(sdk::unknown_ptr) is_resumed_recently;
    
    // [MoveToPenaltyBoxBand@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x67268, 0x158b bytes
    // dxgmms2.sys PAGE:0xb9178, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xddbd4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb9748, 0x1c52 bytes
    //
    _o4(sdk::unknown_ptr) move_to_penalty_box_band;
    
    // [MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4c748, 0x158b bytes
    // dxgmms2.sys PAGE:0x5f018, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa0718, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5f608, 0x1c52 bytes
    //
    _o5(sdk::unknown_ptr) move_to_penalty_box_band_no_lock;
    
    // [NotifyAllocationClosed@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x87f60, 0x158b bytes
    // dxgmms2.sys PAGE:0xb91f4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xddc50, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb97c4, 0x1c52 bytes
    //
    _o6(sdk::unknown_ptr) notify_allocation_closed;
    
    // [NotifyAllocationEvicted@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4c790, 0x158b bytes
    // dxgmms2.sys PAGE:0x72740, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9a4f4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x72d30, 0x1c52 bytes
    //
    _o7(sdk::unknown_ptr) notify_allocation_evicted;
    
    // [NotifyAllocationResident@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x71530, 0x158b bytes
    // dxgmms2.sys PAGE:0xb9270, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa66c8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb9840, 0x1c52 bytes
    //
    _o8(sdk::unknown_ptr) notify_allocation_resident;
    
    // [PartiallySuspend@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x67470, 0x158b bytes
    // dxgmms2.sys PAGE:0xb92e4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xddccc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb98b4, 0x1c52 bytes
    //
    _o9(sdk::unknown_ptr) partially_suspend;
    
    // [ReferenceAllocationList@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4bbb0, 0x158b bytes
    // dxgmms2.sys PAGE:0x717f0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9aaf0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x71de0, 0x1c52 bytes
    //
    _p0(sdk::unknown_ptr) reference_allocation_list;
    
    // [ReferencePinnedAllocation@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x672c8, 0x158b bytes
    // dxgmms2.sys PAGE:0xb93cc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa65bc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb999c, 0x1c52 bytes
    //
    _p1(sdk::unknown_ptr) reference_pinned_allocation;
    
    // [RemoveCommitment@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4b56c, 0x158b bytes
    // dxgmms2.sys PAGE:0x6d074, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x98588, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6d664, 0x1c52 bytes
    //
    _p2(sdk::unknown_ptr) remove_commitment;
    
    // [RemovePagingQueueList@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1ca4, 0x158b bytes
    // dxgmms2.sys .text:0x12408, 0x1c52 bytes
    // dxgmms2.sys .text:0x153a8, 0x20ba bytes
    // dxgmms2.sys .text:0x12408, 0x1c52 bytes
    //
    _p3(sdk::unknown_ptr) remove_paging_queue_list;
    
    // [Resume@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4c7e8, 0x158b bytes
    // dxgmms2.sys PAGE:0x5ecb0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa03d8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5f2a0, 0x1c52 bytes
    //
    _p4(sdk::unknown_ptr) resume;
    
    // [ResumePagingQueues@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4b9a0, 0x158b bytes
    // dxgmms2.sys PAGE:0x5eb70, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa0768, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5f160, 0x1c52 bytes
    //
    _p5(sdk::unknown_ptr) resume_paging_queues;
    
    // [ResumeSchedulerDevice@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4b970, 0x158b bytes
    // dxgmms2.sys PAGE:0x5ee40, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa0ba0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5f430, 0x1c52 bytes
    //
    _p6(sdk::unknown_ptr) resume_scheduler_device;
    
    // [SuspendPagingQueues@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4b890, 0x158b bytes
    // dxgmms2.sys PAGE:0x5f064, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa08a8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5f654, 0x1c52 bytes
    //
    _p7(sdk::unknown_ptr) suspend_paging_queues;
    
    // [SuspendResume@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4c6e4, 0x158b bytes
    // dxgmms2.sys PAGE:0x85624, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9c364, 0x20ba bytes
    // dxgmms2.sys PAGE:0x85c14, 0x1c52 bytes
    //
    _p8(sdk::unknown_ptr) suspend_resume;
    
    // [SuspendSchedulerDevice@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4b868, 0x158b bytes
    // dxgmms2.sys PAGE:0x5f198, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa0b24, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5f788, 0x1c52 bytes
    //
    _p9(sdk::unknown_ptr) suspend_scheduler_device;
    
    // [UnreferenceAllocationList@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4bed8, 0x158b bytes
    // dxgmms2.sys PAGE:0x74210, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9a778, 0x20ba bytes
    // dxgmms2.sys PAGE:0x74800, 0x1c52 bytes
    //
    _q0(sdk::unknown_ptr) unreference_allocation_list;
    
    // [UnreferencePinnedAllocation@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6739c, 0x158b bytes
    // dxgmms2.sys PAGE:0xb96e8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa687c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb9cb8, 0x1c52 bytes
    //
    _q1(sdk::unknown_ptr) unreference_pinned_allocation;
    
    // [Yield@VIDMM_DEVICE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x91268, 0x158b bytes
    // dxgmms2.sys PAGE:0xb9804, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xddfb8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb9dd4, 0x1c52 bytes
    //
    _q2(sdk::unknown_ptr) yield;
};
#include "magic/api.end.hpp"
