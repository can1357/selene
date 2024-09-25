#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_global
{
    // [AddMappedFenceGpuVa@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x61014, 0x158b bytes
    //
    _m00(sdk::unknown_ptr) add_mapped_fence_gpu_va;
    
    // [AllocatePhysical@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xd5418, 0x20ba bytes
    //
    _m01(sdk::unknown_ptr) allocate_physical;
    
    // [CheckForCpuVisibleMemorySegment@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0x86310, 0x20ba bytes
    //
    _m02(sdk::unknown_ptr) check_for_cpu_visible_memory_segment;
    
    // [CleanupVadReference@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xd5ba8, 0x20ba bytes
    //
    _m03(sdk::unknown_ptr) cleanup_vad_reference;
    
    // [DeInitPhysicalHeap@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xd5e74, 0x20ba bytes
    //
    _m04(sdk::unknown_ptr) de_init_physical_heap;
    
    // [EvictAllTemporaryAllocationsInList@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xd6e40, 0x20ba bytes
    //
    _m05(sdk::unknown_ptr) evict_all_temporary_allocations_in_list;
    
    // [EvictForDefragPass@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x89410, 0x158b bytes
    //
    _m06(sdk::unknown_ptr) evict_for_defrag_pass;
    
    // [FreePhysical@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xd7688, 0x20ba bytes
    //
    _m07(sdk::unknown_ptr) free_physical;
    
    // [GetAllocationSectionGlobal@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xd770c, 0x20ba bytes
    //
    _m08(sdk::unknown_ptr) get_allocation_section_global;
    
    // [InitPhysicalHeap@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xb059c, 0x20ba bytes
    //
    _m09(sdk::unknown_ptr) init_physical_heap;
    
    // [InitializePagingHistory@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xaef58, 0x20ba bytes
    //
    _m10(sdk::unknown_ptr) initialize_paging_history;
    
    // [KirEnabled@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v20H2
    // dxgmms2.sys .data:0x51191, 0x1c52 bytes
    //
    _m11(sdk::unknown_ptr) kir_enabled;
    
    // [LogTeardownTelemetry@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xd8540, 0x20ba bytes
    //
    _m12(sdk::unknown_ptr) log_teardown_telemetry;
    
    // [m_pPhysicalPool@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .data:0x6e1f8, 0x20ba bytes
    //
    _m13(sdk::unknown_ptr) m_p_physical_pool;
    
    // [m_PhysicalBlock@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .data:0x6e5d8, 0x20ba bytes
    //
    _m14(sdk::unknown_ptr) m_physical_block;
    
    // [m_PhysicalBlockHighestAddress@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .data:0x6e218, 0x20ba bytes
    //
    _m15(sdk::unknown_ptr) m_physical_block_highest_address;
    
    // [m_PhysicalBlockLowestAddress@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .data:0x6e210, 0x20ba bytes
    //
    _m16(sdk::unknown_ptr) m_physical_block_lowest_address;
    
    // [m_PhysicalBlockSize@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .data:0x6e200, 0x20ba bytes
    //
    _m17(sdk::unknown_ptr) m_physical_block_size;
    
    // [_QpcFrequency@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .data:0x6e8b0, 0x20ba bytes
    //
    _m18(sdk::unknown_ptr) qpc_frequency;
    
    // [RecordVaPagingHistoryFreeGpuVa@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x52cbc, 0x158b bytes
    //
    _m19(sdk::unknown_ptr) record_va_paging_history_free_gpu_va;
    
    // [RegisterSchLog@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x4744c, 0x20ba bytes
    //
    _m20(sdk::unknown_ptr) register_sch_log;
    
    // [RemoveAllocationFromOfferList@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x535a8, 0x158b bytes
    //
    _m21(sdk::unknown_ptr) remove_allocation_from_offer_list;
    
    // [RemoveMappedFenceGpuVa@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x60f98, 0x158b bytes
    //
    _m22(sdk::unknown_ptr) remove_mapped_fence_gpu_va;
    
    // [RemoveSchLog@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x47520, 0x20ba bytes
    //
    _m23(sdk::unknown_ptr) remove_sch_log;
    
    // [SendTrimWnf@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x53c48, 0x158b bytes
    //
    _m24(sdk::unknown_ptr) send_trim_wnf;
    
    // [SetDelayedEvictionTimerScheduled@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x2d970, 0x20ba bytes
    //
    _m25(sdk::unknown_ptr) set_delayed_eviction_timer_scheduled;
    
    // [UnlockInternal@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0x8e9b0, 0x20ba bytes
    //
    _m26(sdk::unknown_ptr) unlock_internal;
    
    // [VerifySupportedSegmentSet@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x5a040, 0x158b bytes
    //
    _m27(sdk::unknown_ptr) verify_supported_segment_set;
    
    // [VidMmGetAllocationPhysicalAddress@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xdc4a4, 0x20ba bytes
    //
    _m28(sdk::unknown_ptr) vid_mm_get_allocation_physical_address;
    
    // [VidMmMapAllocCpuVa@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xdc4f0, 0x20ba bytes
    //
    _m29(sdk::unknown_ptr) vid_mm_map_alloc_cpu_va;
    
    // [VidMmUnmapAllocCpuVa@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xdc4f0, 0x20ba bytes
    //
    _m30(sdk::unknown_ptr) vid_mm_unmap_alloc_cpu_va;
    
    // [AddGlobalAllocReferenceToDmaBuffer@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x7394c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x73f3c, 0x1c52 bytes
    //
    _m31(sdk::unknown_ptr) add_global_alloc_reference_to_dma_buffer;
    
    // [CreateWorkerThread@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x91c90, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x92370, 0x1c52 bytes
    //
    _m32(sdk::unknown_ptr) create_worker_thread;
    
    // [FlushAllTemporaryAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb0904, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb0ecc, 0x1c52 bytes
    //
    _m33(sdk::unknown_ptr) flush_all_temporary_allocation;
    
    // [RecommitTrimmedList@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb3cd0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb42a0, 0x1c52 bytes
    //
    _m34(sdk::unknown_ptr) recommit_trimmed_list;
    
    // [_AdapterListHead@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x51808, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e8c0, 0x20ba bytes
    // dxgmms2.sys .data:0x51810, 0x1c52 bytes
    //
    _m35(sdk::unknown_ptr) adapter_list_head;
    
    // [_AdapterListLock@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x51800, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e8b8, 0x20ba bytes
    // dxgmms2.sys .data:0x51808, 0x1c52 bytes
    //
    _m36(sdk::unknown_ptr) adapter_list_lock;
    
    // [AllocateCrossAdapterDataDpc@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x232f4, 0x1c52 bytes
    // dxgmms2.sys .text:0x2d16c, 0x20ba bytes
    // dxgmms2.sys .text:0x23274, 0x1c52 bytes
    //
    _m37(sdk::unknown_ptr) allocate_cross_adapter_data_dpc;
    
    // [BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xaec5c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd5494, 0x20ba bytes
    // dxgmms2.sys PAGE:0xaf210, 0x1c52 bytes
    //
    _m38(sdk::unknown_ptr) begin_virtual_copy_exclusive_access;
    
    // [BucketizeBudgetStateProcesses@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xcbfac, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xee66c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcc74c, 0x1c52 bytes
    //
    _m39(sdk::unknown_ptr) bucketize_budget_state_processes;
    
    // [BuildInitContextAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xaed14, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd554c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xaf2c8, 0x1c52 bytes
    //
    _m40(sdk::unknown_ptr) build_init_context_allocation;
    
    // [CalculateBudgetGroupTargetUsage@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xcc094, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xee754, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcc834, 0x1c52 bytes
    //
    _m41(sdk::unknown_ptr) calculate_budget_group_target_usage;
    
    // [CalculatePartitionAdapterBudgets@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x15974, 0x1c52 bytes
    // dxgmms2.sys .text:0x1c748, 0x20ba bytes
    // dxgmms2.sys .text:0x15974, 0x1c52 bytes
    //
    _m42(sdk::unknown_ptr) calculate_partition_adapter_budgets;
    
    // [CheckPrimaryAllocationReferences@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x234ac, 0x1c52 bytes
    // dxgmms2.sys .text:0x1dcae, 0x20ba bytes
    // dxgmms2.sys .text:0x2342c, 0x1c52 bytes
    //
    _m43(sdk::unknown_ptr) check_primary_allocation_references;
    
    // [CreateCrossAdapterAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xaf560, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd5bec, 0x20ba bytes
    // dxgmms2.sys PAGE:0xafb14, 0x1c52 bytes
    //
    _m44(sdk::unknown_ptr) create_cross_adapter_allocation;
    
    // [DeInitializePartitionForAllAdapters@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xaf7b8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd5ecc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xafd80, 0x1c52 bytes
    //
    _m45(sdk::unknown_ptr) de_initialize_partition_for_all_adapters;
    
    // [Defragment@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xafa64, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd615c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb002c, 0x1c52 bytes
    //
    _m46(sdk::unknown_ptr) defragment;
    
    // [DelayExecution@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xafcd4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd63b0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb029c, 0x1c52 bytes
    //
    _m47(sdk::unknown_ptr) delay_execution;
    
    // [DestroyCrossAdapterAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xafd64, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd6440, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb032c, 0x1c52 bytes
    //
    _m48(sdk::unknown_ptr) destroy_cross_adapter_allocation;
    
    // [DisableIoMmuIsolation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xafe8c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd6540, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb0454, 0x1c52 bytes
    //
    _m49(sdk::unknown_ptr) disable_io_mmu_isolation;
    
    // [DriverSegmentIdToAdapterSegmentIndex@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12904, 0x1c52 bytes
    // dxgmms2.sys .text:0x154dc, 0x20ba bytes
    // dxgmms2.sys .text:0x12904, 0x1c52 bytes
    //
    _m50(sdk::unknown_ptr) driver_segment_id_to_adapter_segment_index;
    
    // [EnableIoMmuIsolation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xaff9c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd65c0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb0564, 0x1c52 bytes
    //
    _m51(sdk::unknown_ptr) enable_io_mmu_isolation;
    
    // [EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x7301c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x95fd0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7360c, 0x1c52 bytes
    //
    _m52(sdk::unknown_ptr) end_preparation_on_physical_adapter;
    
    // [EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb01bc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd6784, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb0784, 0x1c52 bytes
    //
    _m53(sdk::unknown_ptr) end_virtual_copy_exclusive_access;
    
    // [EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb026c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd6834, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb0834, 0x1c52 bytes
    //
    _m54(sdk::unknown_ptr) ensure_flip_queues_suspended_for_move;
    
    // [EvictTemporaryAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x87fb8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa52dc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x885a8, 0x1c52 bytes
    //
    _m55(sdk::unknown_ptr) evict_temporary_allocation;
    
    // [EvictTemporaryResourceForCleanup@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x62dcc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa223c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x633bc, 0x1c52 bytes
    //
    _m56(sdk::unknown_ptr) evict_temporary_resource_for_cleanup;
    
    // [FillAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x73cd0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x82b14, 0x20ba bytes
    // dxgmms2.sys PAGE:0x742c0, 0x1c52 bytes
    //
    _m57(sdk::unknown_ptr) fill_allocation;
    
    // [FindNewAllocOwner@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x62d30, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x82a7c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x63320, 0x1c52 bytes
    //
    _m58(sdk::unknown_ptr) find_new_alloc_owner;
    
    // [ForceDecommitOffer@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb0b8c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd72d8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb1154, 0x1c52 bytes
    //
    _m59(sdk::unknown_ptr) force_decommit_offer;
    
    // [FreeCrossAdapterDataDpc@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x23700, 0x1c52 bytes
    // dxgmms2.sys .text:0x2d530, 0x20ba bytes
    // dxgmms2.sys .text:0x23680, 0x1c52 bytes
    //
    _m60(sdk::unknown_ptr) free_cross_adapter_data_dpc;
    
    // [GetAllocationPriority@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb0f50, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd76b8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb1518, 0x1c52 bytes
    //
    _m61(sdk::unknown_ptr) get_allocation_priority;
    
    // [GetDefragSegment@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb0f68, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd7740, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb1530, 0x1c52 bytes
    //
    _m62(sdk::unknown_ptr) get_defrag_segment;
    
    // [GetMemoryBudgetTarget@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb0fdc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd77b4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb15a4, 0x1c52 bytes
    //
    _m63(sdk::unknown_ptr) get_memory_budget_target;
    
    // [GetMoveableResourceCallback@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb10c8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd78a0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb1690, 0x1c52 bytes
    //
    _m64(sdk::unknown_ptr) get_moveable_resource_callback;
    
    // [GetSegmentGroupState@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x64824, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa159c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x64e14, 0x1c52 bytes
    //
    _m65(sdk::unknown_ptr) get_segment_group_state;
    
    // [GetSegmentGroupStateForPartition@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x85ce0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3b94, 0x20ba bytes
    // dxgmms2.sys PAGE:0x862d0, 0x1c52 bytes
    //
    _m66(sdk::unknown_ptr) get_segment_group_state_for_partition;
    
    // [InitSegments@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x91ee8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xae708, 0x20ba bytes
    // dxgmms2.sys PAGE:0x925c8, 0x1c52 bytes
    //
    _m67(sdk::unknown_ptr) init_segments;
    
    // [InitializePartitionForAllAdapters@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x93bac, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb4dec, 0x20ba bytes
    // dxgmms2.sys PAGE:0x9427c, 0x1c52 bytes
    //
    _m68(sdk::unknown_ptr) initialize_partition_for_all_adapters;
    
    // [InitializeSegmentGroupState@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x91b14, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xae250, 0x20ba bytes
    // dxgmms2.sys PAGE:0x921f4, 0x1c52 bytes
    //
    _m69(sdk::unknown_ptr) initialize_segment_group_state;
    
    // [IoMmuMapAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb1900, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd7b7c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb1ec8, 0x1c52 bytes
    //
    _m70(sdk::unknown_ptr) io_mmu_map_allocation;
    
    // [IoMmuUnmapAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb1998, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd7c24, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb1f60, 0x1c52 bytes
    //
    _m71(sdk::unknown_ptr) io_mmu_unmap_allocation;
    
    // [IsTdrPending@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6417c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x85a6c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6476c, 0x1c52 bytes
    //
    _m72(sdk::unknown_ptr) is_tdr_pending;
    
    // [MapVideoApertureSegment@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8a2d4, 0x158b bytes
    // dxgmms2.sys PAGE:0xb23ac, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb2974, 0x1c52 bytes
    //
    _m73(sdk::unknown_ptr) map_video_aperture_segment;
    
    // [MoveResourcesSysCommandHelper@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb2a64, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd89cc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb302c, 0x1c52 bytes
    //
    _m74(sdk::unknown_ptr) move_resources_sys_command_helper;
    
    // [NotifyShutdown@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb2d74, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd8cc8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb3344, 0x1c52 bytes
    //
    _m75(sdk::unknown_ptr) notify_shutdown;
    
    // [PerfCounterSetAdapterMemoryRegistered@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x511b2, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e5e2, 0x20ba bytes
    // dxgmms2.sys .data:0x511b2, 0x1c52 bytes
    //
    _m76(sdk::unknown_ptr) perf_counter_set_adapter_memory_registered;
    
    // [PerfCounterSetEngineRegistered@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x511b4, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e5e4, 0x20ba bytes
    // dxgmms2.sys .data:0x511b4, 0x1c52 bytes
    //
    _m77(sdk::unknown_ptr) perf_counter_set_engine_registered;
    
    // [PerfCounterSetLocalAdapterMemoryRegistered@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x511b1, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e5e1, 0x20ba bytes
    // dxgmms2.sys .data:0x511b1, 0x1c52 bytes
    //
    _m78(sdk::unknown_ptr) perf_counter_set_local_adapter_memory_registered;
    
    // [PerfCounterSetNonLocalAdapterMemoryRegistered@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x511b0, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e5e0, 0x20ba bytes
    // dxgmms2.sys .data:0x511b0, 0x1c52 bytes
    //
    _m79(sdk::unknown_ptr) perf_counter_set_non_local_adapter_memory_registered;
    
    // [PerfCounterSetProcessMemoryRegistered@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x511b3, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e5e3, 0x20ba bytes
    // dxgmms2.sys .data:0x511b3, 0x1c52 bytes
    //
    _m80(sdk::unknown_ptr) perf_counter_set_process_memory_registered;
    
    // [PinAllocationAt@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb30a8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd8fb8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb3678, 0x1c52 bytes
    //
    _m81(sdk::unknown_ptr) pin_allocation_at;
    
    // [QueueLazySystemCommandAndWait@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb3b54, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd95cc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb4124, 0x1c52 bytes
    //
    _m82(sdk::unknown_ptr) queue_lazy_system_command_and_wait;
    
    // [ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x925dc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xaefc0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x92cbc, 0x1c52 bytes
    //
    _m83(sdk::unknown_ptr) read_physical_adapter_configuration;
    
    // [RecordVaPagingHistoryCommit@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xbec8c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe323c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbf25c, 0x1c52 bytes
    //
    _m84(sdk::unknown_ptr) record_va_paging_history_commit;
    
    // [RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xbee1c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe33cc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbf3ec, 0x1c52 bytes
    //
    _m85(sdk::unknown_ptr) record_va_paging_history_flush_paging_buffer;
    
    // [RecordVaPagingHistoryFlushTlb@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xbefa0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe3550, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbf570, 0x1c52 bytes
    //
    _m86(sdk::unknown_ptr) record_va_paging_history_flush_tlb;
    
    // [RecordVaPagingHistoryReserveGpuVa@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x664d0, 0x158b bytes
    // dxgmms2.sys PAGE:0xbf5e8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xbfbb8, 0x1c52 bytes
    //
    _m87(sdk::unknown_ptr) record_va_paging_history_reserve_gpu_va;
    
    // [RecordVaPagingHistoryUncommit@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xbf74c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe3b98, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbfd1c, 0x1c52 bytes
    //
    _m88(sdk::unknown_ptr) record_va_paging_history_uncommit;
    
    // [RecordVaPagingHistoryUpdatePte@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xbfbbc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe4010, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc018c, 0x1c52 bytes
    //
    _m89(sdk::unknown_ptr) record_va_paging_history_update_pte;
    
    // [ReferencePrimaryAllocationForFlipping@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x23a50, 0x1c52 bytes
    // dxgmms2.sys .text:0x1dd46, 0x20ba bytes
    // dxgmms2.sys .text:0x239d0, 0x1c52 bytes
    //
    _m90(sdk::unknown_ptr) reference_primary_allocation_for_flipping;
    
    // [RegisterFenceGpuData@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x81234, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9bf00, 0x20ba bytes
    // dxgmms2.sys PAGE:0x81824, 0x1c52 bytes
    //
    _m91(sdk::unknown_ptr) register_fence_gpu_data;
    
    // [RemoveFenceGpuData@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x814c8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9c050, 0x20ba bytes
    // dxgmms2.sys PAGE:0x81ab8, 0x1c52 bytes
    //
    _m92(sdk::unknown_ptr) remove_fence_gpu_data;
    
    // [RemoveFromAdapterList@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb4054, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd9734, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb4624, 0x1c52 bytes
    //
    _m93(sdk::unknown_ptr) remove_from_adapter_list;
    
    // [ReportPagingProcessState@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb40bc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd979c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb468c, 0x1c52 bytes
    //
    _m94(sdk::unknown_ptr) report_paging_process_state;
    
    // [Rotate@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb468c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa58b8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb4c5c, 0x1c52 bytes
    //
    _m95(sdk::unknown_ptr) rotate;
    
    // [RunApertureCoherencyTest@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9981c, 0x158b bytes
    // dxgmms2.sys PAGE:0xcaebc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xcb65c, 0x1c52 bytes
    //
    _m96(sdk::unknown_ptr) run_aperture_coherency_test;
    
    // [SetExistingSysMemStore@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb4850, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd9ce4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb4e20, 0x1c52 bytes
    //
    _m97(sdk::unknown_ptr) set_existing_sys_mem_store;
    
    // [SetMemoryBudgetTarget@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb48a4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd9d54, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb4e74, 0x1c52 bytes
    //
    _m98(sdk::unknown_ptr) set_memory_budget_target;
    
    // [SignalMonitoredFence@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb4c44, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xda128, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb5214, 0x1c52 bytes
    //
    _m99(sdk::unknown_ptr) signal_monitored_fence;
    
    // [SuspendSchedulerDeviceForMove@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb4ed0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xda3b4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb54a0, 0x1c52 bytes
    //
    _n00(sdk::unknown_ptr) suspend_scheduler_device_for_move;
    
    // [TransferAllocationDecommit@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb4fb8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7b3ac, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb5588, 0x1c52 bytes
    //
    _n01(sdk::unknown_ptr) transfer_allocation_decommit;
    
    // [TransferAllocationOwnership@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x62e18, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa191c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x63408, 0x1c52 bytes
    //
    _n02(sdk::unknown_ptr) transfer_allocation_ownership;
    
    // [TransferOwnershipToProcess@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6289c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa19e8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x62e8c, 0x1c52 bytes
    //
    _n03(sdk::unknown_ptr) transfer_ownership_to_process;
    
    // [TransferOwnershipToSystemProcess@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5e348, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa1af4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5e938, 0x1c52 bytes
    //
    _n04(sdk::unknown_ptr) transfer_ownership_to_system_process;
    
    // [UnblockUEFIFrameBufferRanges@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb52d0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xda738, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb58a0, 0x1c52 bytes
    //
    _n05(sdk::unknown_ptr) unblock_uefi_frame_buffer_ranges;
    
    // [UnmapVideoApertureSegment@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8b860, 0x158b bytes
    // dxgmms2.sys PAGE:0xb5520, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb5af0, 0x1c52 bytes
    //
    _n06(sdk::unknown_ptr) unmap_video_aperture_segment;
    
    // [ValidateApertureCoherency@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x99b74, 0x158b bytes
    // dxgmms2.sys PAGE:0xcb2b0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xcba50, 0x1c52 bytes
    //
    _n07(sdk::unknown_ptr) validate_aperture_coherency;
    
    // [ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x99eb4, 0x158b bytes
    // dxgmms2.sys PAGE:0xcb604, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xcbda4, 0x1c52 bytes
    //
    _n08(sdk::unknown_ptr) validate_aperture_unmap_to_dummy_page;
    
    // [VerifyAllocationForSubmissionPhysical@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb6d58, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdbe88, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb7328, 0x1c52 bytes
    //
    _n09(sdk::unknown_ptr) verify_allocation_for_submission_physical;
    
    // [VerifyAllocationPagingOperationDone@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8c8dc, 0x158b bytes
    // dxgmms2.sys PAGE:0xb6de8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb73b8, 0x1c52 bytes
    //
    _n10(sdk::unknown_ptr) verify_allocation_paging_operation_done;
    
    // [VerifySegmentSetAny@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5a298, 0x158b bytes
    // dxgmms2.sys PAGE:0x84d18, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x85308, 0x1c52 bytes
    //
    _n11(sdk::unknown_ptr) verify_segment_set_any;
    
    // [VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6b7e0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8aba0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6bdd0, 0x1c52 bytes
    //
    _n12(sdk::unknown_ptr) verify_supported_segment_set_and_adjust_flags;
    
    // [AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x59250, 0x158b bytes
    // dxgmms2.sys PAGE:0x8331c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x869c8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8390c, 0x1c52 bytes
    //
    _n13(sdk::unknown_ptr) acquire_gpu_resources_from_preferred_segment_set;
    
    // [AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x59094, 0x158b bytes
    // dxgmms2.sys PAGE:0x834d0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa1d38, 0x20ba bytes
    // dxgmms2.sys PAGE:0x83ac0, 0x1c52 bytes
    //
    _n14(sdk::unknown_ptr) acquire_gpu_resources_from_segment_set;
    
    // [AdapterId@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5a380, 0x158b bytes
    // dxgmms2.sys PAGE:0x64168, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x85de0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x64758, 0x1c52 bytes
    //
    _n15(sdk::unknown_ptr) adapter_id;
    
    // [AdapterVerifierOption@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8e118, 0x158b bytes
    // dxgmms2.sys PAGE:0xb8bc4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdd76c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb9194, 0x1c52 bytes
    //
    _n16(sdk::unknown_ptr) adapter_verifier_option;
    
    // [AddDMAReferences@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x88ab0, 0x158b bytes
    // dxgmms2.sys PAGE:0xaeab0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd53b4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xaf064, 0x1c52 bytes
    //
    _n17(sdk::unknown_ptr) add_dma_references;
    
    // [AddPendingTermination@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1ce68, 0x158b bytes
    // dxgmms2.sys .text:0x2320c, 0x1c52 bytes
    // dxgmms2.sys .text:0x2d114, 0x20ba bytes
    // dxgmms2.sys .text:0x2318c, 0x1c52 bytes
    //
    _n18(sdk::unknown_ptr) add_pending_termination;
    
    // [AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x21fc, 0x158b bytes
    // dxgmms2.sys .text:0x23264, 0x1c52 bytes
    // dxgmms2.sys .text:0x17e60, 0x20ba bytes
    // dxgmms2.sys .text:0x231e4, 0x1c52 bytes
    //
    _n19(sdk::unknown_ptr) add_pending_termination_at_dpc_level;
    
    // [AddToPromotionCandidateList@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x99fe8, 0x158b bytes
    // dxgmms2.sys PAGE:0xcb754, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xede14, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcbef4, 0x1c52 bytes
    //
    _n20(sdk::unknown_ptr) add_to_promotion_candidate_list;
    
    // [AllocateFenceStorageSlot@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6232c, 0x158b bytes
    // dxgmms2.sys PAGE:0x7f598, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x96e8c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7fb88, 0x1c52 bytes
    //
    _n21(sdk::unknown_ptr) allocate_fence_storage_slot;
    
    // [AllocatePagingBufferResources@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6b6ec, 0x158b bytes
    // dxgmms2.sys PAGE:0x93c30, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb4d08, 0x20ba bytes
    // dxgmms2.sys PAGE:0x94300, 0x1c52 bytes
    //
    _n22(sdk::unknown_ptr) allocate_paging_buffer_resources;
    
    // [AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x570e8, 0x158b bytes
    // dxgmms2.sys PAGE:0x870d0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa4d6c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x876c0, 0x1c52 bytes
    //
    _n23(sdk::unknown_ptr) allocate_temporary_resources_for_allocation;
    
    // [ApertureCorruptionCheck@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d670, 0x158b bytes
    // dxgmms2.sys .text:0x233e0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2d29c, 0x20ba bytes
    // dxgmms2.sys .text:0x23360, 0x1c52 bytes
    //
    _n24(sdk::unknown_ptr) aperture_corruption_check;
    
    // [AssertVidMmWorkerThread@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x54220, 0x158b bytes
    // dxgmms2.sys PAGE:0x73520, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x83a10, 0x20ba bytes
    // dxgmms2.sys PAGE:0x73b10, 0x1c52 bytes
    //
    _n25(sdk::unknown_ptr) assert_vid_mm_worker_thread;
    
    // [AssignBudgets@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9a034, 0x158b bytes
    // dxgmms2.sys PAGE:0xcb7b8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xede78, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcbf58, 0x1c52 bytes
    //
    _n26(sdk::unknown_ptr) assign_budgets;
    
    // [AssignBudgetsWithinBand@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9a124, 0x158b bytes
    // dxgmms2.sys PAGE:0xcba0c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xee0cc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcc1ac, 0x1c52 bytes
    //
    _n27(sdk::unknown_ptr) assign_budgets_within_band;
    
    // [AssignMaximumBudgets@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9a4cc, 0x158b bytes
    // dxgmms2.sys PAGE:0xcbd74, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xee434, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcc514, 0x1c52 bytes
    //
    _n28(sdk::unknown_ptr) assign_maximum_budgets;
    
    // [AssignProcessBudget@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9a618, 0x158b bytes
    // dxgmms2.sys PAGE:0xcbe84, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xee544, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcc624, 0x1c52 bytes
    //
    _n29(sdk::unknown_ptr) assign_process_budget;
    
    // [AsyncUnpinAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x88b20, 0x158b bytes
    // dxgmms2.sys PAGE:0xaeb34, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa5aa0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xaf0e8, 0x1c52 bytes
    //
    _n30(sdk::unknown_ptr) async_unpin_allocation;
    
    // [BeginCPUAccess@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5ea58, 0x158b bytes
    // dxgmms2.sys PAGE:0x65fb0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x97d64, 0x20ba bytes
    // dxgmms2.sys PAGE:0x665a0, 0x1c52 bytes
    //
    _n31(sdk::unknown_ptr) begin_cpu_access;
    
    // [BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6b63c, 0x158b bytes
    // dxgmms2.sys PAGE:0xaeec0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd56ec, 0x20ba bytes
    // dxgmms2.sys PAGE:0xaf474, 0x1c52 bytes
    //
    _n32(sdk::unknown_ptr) build_mdl_for_alloc_in_cpu_host_aperture;
    
    // [CalculateLockData@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x87fc0, 0x158b bytes
    // dxgmms2.sys PAGE:0xaeff8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd582c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xaf5ac, 0x1c52 bytes
    //
    _n33(sdk::unknown_ptr) calculate_lock_data;
    
    // [CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x88c38, 0x158b bytes
    // dxgmms2.sys PAGE:0xaf0e0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd5910, 0x20ba bytes
    // dxgmms2.sys PAGE:0xaf694, 0x1c52 bytes
    //
    _n34(sdk::unknown_ptr) cancel_all_reclaimed_allocations_in_list;
    
    // [ChangeVideoMemoryReservation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x88cc4, 0x158b bytes
    // dxgmms2.sys PAGE:0xaf180, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd59ac, 0x20ba bytes
    // dxgmms2.sys PAGE:0xaf734, 0x1c52 bytes
    //
    _n35(sdk::unknown_ptr) change_video_memory_reservation;
    
    // [ChargePinnedBackingStore@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x55fa0, 0x158b bytes
    // dxgmms2.sys PAGE:0x60ef8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa2d64, 0x20ba bytes
    // dxgmms2.sys PAGE:0x614e8, 0x1c52 bytes
    //
    _n36(sdk::unknown_ptr) charge_pinned_backing_store;
    
    // [CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x59510, 0x158b bytes
    // dxgmms2.sys PAGE:0x5f3b8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x94f54, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5f9a8, 0x1c52 bytes
    //
    _n37(sdk::unknown_ptr) cleanup_marked_for_eviction_allocations_worker;
    
    // [CleanupPrimaryAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6b818, 0x158b bytes
    // dxgmms2.sys PAGE:0xaf244, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd5a64, 0x20ba bytes
    // dxgmms2.sys PAGE:0xaf7f8, 0x1c52 bytes
    //
    _n38(sdk::unknown_ptr) cleanup_primary_allocation;
    
    // [CloseAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5e95c, 0x158b bytes
    // dxgmms2.sys PAGE:0x67710, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8be24, 0x20ba bytes
    // dxgmms2.sys PAGE:0x67d00, 0x1c52 bytes
    //
    _n39(sdk::unknown_ptr) close_allocation;
    
    // [CloseLocalAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x59a04, 0x158b bytes
    // dxgmms2.sys PAGE:0xaf38c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8b3e4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xaf940, 0x1c52 bytes
    //
    _n40(sdk::unknown_ptr) close_local_allocation;
    
    // [CloseOneAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5c9c0, 0x158b bytes
    // dxgmms2.sys PAGE:0x67870, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8bf70, 0x20ba bytes
    // dxgmms2.sys PAGE:0x67e60, 0x1c52 bytes
    //
    _n41(sdk::unknown_ptr) close_one_allocation;
    
    // [CommitAllocationList@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x54338, 0x158b bytes
    // dxgmms2.sys PAGE:0x7167c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9a9bc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x71c6c, 0x1c52 bytes
    //
    _n42(sdk::unknown_ptr) commit_allocation_list;
    
    // [CommitGlobalBackingStore@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x53480, 0x158b bytes
    // dxgmms2.sys PAGE:0x6b444, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8ae3c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6ba34, 0x1c52 bytes
    //
    _n43(sdk::unknown_ptr) commit_global_backing_store;
    
    // [CommitLocalBackingStore@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x531d4, 0x158b bytes
    // dxgmms2.sys PAGE:0x6aee0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8c49c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6b4d0, 0x1c52 bytes
    //
    _n44(sdk::unknown_ptr) commit_local_backing_store;
    
    // [CommitVirtualAddressRange@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x54b48, 0x158b bytes
    // dxgmms2.sys PAGE:0x71da0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9a0b8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x72390, 0x1c52 bytes
    //
    _n45(sdk::unknown_ptr) commit_virtual_address_range;
    
    // [CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x54908, 0x158b bytes
    // dxgmms2.sys PAGE:0x71180, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8a940, 0x20ba bytes
    // dxgmms2.sys PAGE:0x71770, 0x1c52 bytes
    //
    _n46(sdk::unknown_ptr) commit_virtual_address_range_system_command;
    
    // [CompleteBuildPagingBufferIteration@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5600c, 0x158b bytes
    // dxgmms2.sys PAGE:0x7329c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x86374, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7388c, 0x1c52 bytes
    //
    _n47(sdk::unknown_ptr) complete_build_paging_buffer_iteration;
    
    // [_Config@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x36120, 0x158b bytes
    // dxgmms2.sys .data:0x511c0, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e220, 0x20ba bytes
    // dxgmms2.sys .data:0x511c0, 0x1c52 bytes
    //
    _n48(sdk::unknown_ptr) config;
    
    // [??0VIDMM_GLOBAL@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6cbd8, 0x158b bytes
    // dxgmms2.sys PAGE:0x92820, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xaf238, 0x20ba bytes
    // dxgmms2.sys PAGE:0x92f00, 0x1c52 bytes
    //
    _n49(sdk::unknown_ptr) construct_instance;
    
    // [CreateAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5e808, 0x158b bytes
    // dxgmms2.sys PAGE:0x66cf4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9fbd4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x672e4, 0x1c52 bytes
    //
    _n50(sdk::unknown_ptr) create_allocation;
    
    // [CreateContextAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5ffe8, 0x158b bytes
    // dxgmms2.sys PAGE:0x87488, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9a228, 0x20ba bytes
    // dxgmms2.sys PAGE:0x87a78, 0x1c52 bytes
    //
    _n51(sdk::unknown_ptr) create_context_allocation;
    
    // [CreateOneAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5db90, 0x158b bytes
    // dxgmms2.sys PAGE:0x69120, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8c960, 0x20ba bytes
    // dxgmms2.sys PAGE:0x69710, 0x1c52 bytes
    //
    _n52(sdk::unknown_ptr) create_one_allocation;
    
    // [CreatePagingFenceObjects@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6b74c, 0x158b bytes
    // dxgmms2.sys PAGE:0x93254, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb4484, 0x20ba bytes
    // dxgmms2.sys PAGE:0x9392c, 0x1c52 bytes
    //
    _n53(sdk::unknown_ptr) create_paging_fence_objects;
    
    // [DeInitGlobals@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x88d60, 0x158b bytes
    // dxgmms2.sys PAGE:0xaf694, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd5d4c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xafc48, 0x1c52 bytes
    //
    _n54(sdk::unknown_ptr) de_init_globals;
    
    // [DecommitGlobalAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x88de8, 0x158b bytes
    // dxgmms2.sys PAGE:0xaf83c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd5f50, 0x20ba bytes
    // dxgmms2.sys PAGE:0xafe04, 0x1c52 bytes
    //
    _n55(sdk::unknown_ptr) decommit_global_allocation;
    
    // [DestroyAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5e8c0, 0x158b bytes
    // dxgmms2.sys PAGE:0x66338, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x86e54, 0x20ba bytes
    // dxgmms2.sys PAGE:0x66928, 0x1c52 bytes
    //
    _n56(sdk::unknown_ptr) destroy_allocation;
    
    // [DestroyContextAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6027c, 0x158b bytes
    // dxgmms2.sys PAGE:0x88174, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa2de4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x88764, 0x1c52 bytes
    //
    _n57(sdk::unknown_ptr) destroy_context_allocation;
    
    // [??1VIDMM_GLOBAL@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x88854, 0x158b bytes
    // dxgmms2.sys PAGE:0xae690, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd4fd0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xaec70, 0x1c52 bytes
    //
    _n58(sdk::unknown_ptr) destroy_instance;
    
    // [DestroyOneAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5d870, 0x158b bytes
    // dxgmms2.sys PAGE:0x66350, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x879a0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x66940, 0x1c52 bytes
    //
    _n59(sdk::unknown_ptr) destroy_one_allocation;
    
    // [DestroyPagingFenceObjects@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x88f8c, 0x158b bytes
    // dxgmms2.sys PAGE:0xafdf4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd64a8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb03bc, 0x1c52 bytes
    //
    _n60(sdk::unknown_ptr) destroy_paging_fence_objects;
    
    // [DiscardAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x58058, 0x158b bytes
    // dxgmms2.sys PAGE:0x73d14, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8309c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x74304, 0x1c52 bytes
    //
    _n61(sdk::unknown_ptr) discard_allocation;
    
    // [DiscardOfferedAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5c020, 0x158b bytes
    // dxgmms2.sys PAGE:0x62998, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x83460, 0x20ba bytes
    // dxgmms2.sys PAGE:0x62f88, 0x1c52 bytes
    //
    _n62(sdk::unknown_ptr) discard_offered_allocation;
    
    // [DoDeferredUnlock@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6834c, 0x158b bytes
    // dxgmms2.sys PAGE:0xaff2c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa7d20, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb04f4, 0x1c52 bytes
    //
    _n63(sdk::unknown_ptr) do_deferred_unlock;
    
    // [EndCPUAccess@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5ec9c, 0x158b bytes
    // dxgmms2.sys PAGE:0x83070, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa2680, 0x20ba bytes
    // dxgmms2.sys PAGE:0x83660, 0x1c52 bytes
    //
    _n64(sdk::unknown_ptr) end_cpu_access;
    
    // [EndPreparation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x56360, 0x158b bytes
    // dxgmms2.sys PAGE:0x73fa8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x95eb0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x74598, 0x1c52 bytes
    //
    _n65(sdk::unknown_ptr) end_preparation;
    
    // [EnsureLockedPages@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8909c, 0x158b bytes
    // dxgmms2.sys PAGE:0xb02a0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd6868, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb0868, 0x1c52 bytes
    //
    _n66(sdk::unknown_ptr) ensure_locked_pages;
    
    // [Escape@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x891d4, 0x158b bytes
    // dxgmms2.sys PAGE:0xb0428, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd69fc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb09f0, 0x1c52 bytes
    //
    _n67(sdk::unknown_ptr) escape;
    
    // [ETWAllocationHandle@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x88fe0, 0x158b bytes
    // dxgmms2.sys PAGE:0x6bcc0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8e5e0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6c2b0, 0x1c52 bytes
    //
    _n68(sdk::unknown_ptr) etw_allocation_handle;
    
    // [Evict@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6071c, 0x158b bytes
    // dxgmms2.sys PAGE:0x740bc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9a618, 0x20ba bytes
    // dxgmms2.sys PAGE:0x746ac, 0x1c52 bytes
    //
    _n69(sdk::unknown_ptr) evict;
    
    // [EvictAllAllocationInList@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x59578, 0x158b bytes
    // dxgmms2.sys PAGE:0x8476c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa4e08, 0x20ba bytes
    // dxgmms2.sys PAGE:0x84d5c, 0x1c52 bytes
    //
    _n70(sdk::unknown_ptr) evict_all_allocation_in_list;
    
    // [EvictAllReclaimedAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x66f80, 0x158b bytes
    // dxgmms2.sys PAGE:0x8472c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd6d2c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x84d1c, 0x1c52 bytes
    //
    _n71(sdk::unknown_ptr) evict_all_reclaimed_allocation;
    
    // [EvictAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x66ea0, 0x158b bytes
    // dxgmms2.sys PAGE:0xb06cc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd6ed0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb0c94, 0x1c52 bytes
    //
    _n72(sdk::unknown_ptr) evict_allocation;
    
    // [EvictFromFaultedList@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8957c, 0x158b bytes
    // dxgmms2.sys PAGE:0xb07d0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd6fd8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb0d98, 0x1c52 bytes
    //
    _n73(sdk::unknown_ptr) evict_from_faulted_list;
    
    // [EvictOneAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x56f88, 0x158b bytes
    // dxgmms2.sys PAGE:0x82350, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x98220, 0x20ba bytes
    // dxgmms2.sys PAGE:0x82940, 0x1c52 bytes
    //
    _n74(sdk::unknown_ptr) evict_one_allocation;
    
    // [EvictTemporaryAllocations@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5961c, 0x158b bytes
    // dxgmms2.sys PAGE:0x847ac, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x86c90, 0x20ba bytes
    // dxgmms2.sys PAGE:0x84d9c, 0x1c52 bytes
    //
    _n75(sdk::unknown_ptr) evict_temporary_allocations;
    
    // [EvictionTest@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x89630, 0x158b bytes
    // dxgmms2.sys PAGE:0xb0890, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd7094, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb0e58, 0x1c52 bytes
    //
    _n76(sdk::unknown_ptr) eviction_test;
    
    // [FaultOneAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x544a4, 0x158b bytes
    // dxgmms2.sys PAGE:0x62bc8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x98380, 0x20ba bytes
    // dxgmms2.sys PAGE:0x631b8, 0x1c52 bytes
    //
    _n77(sdk::unknown_ptr) fault_one_allocation;
    
    // [FillAllocationInternal@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x584f8, 0x158b bytes
    // dxgmms2.sys PAGE:0x73c38, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x82b58, 0x20ba bytes
    // dxgmms2.sys PAGE:0x74228, 0x1c52 bytes
    //
    _n78(sdk::unknown_ptr) fill_allocation_internal;
    
    // [FillAllocationUsingGpuVa@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x58598, 0x158b bytes
    // dxgmms2.sys PAGE:0x7352c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x82bec, 0x20ba bytes
    // dxgmms2.sys PAGE:0x73b1c, 0x1c52 bytes
    //
    _n79(sdk::unknown_ptr) fill_allocation_using_gpu_va;
    
    // [FindResourcesForOneAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x59850, 0x158b bytes
    // dxgmms2.sys PAGE:0x8325c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x86d80, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8384c, 0x1c52 bytes
    //
    _n80(sdk::unknown_ptr) find_resources_for_one_allocation;
    
    // [FlushAllocationFromProcessorCache@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8969c, 0x158b bytes
    // dxgmms2.sys PAGE:0xb09c4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd7108, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb0f8c, 0x1c52 bytes
    //
    _n81(sdk::unknown_ptr) flush_allocation_from_processor_cache;
    
    // [FlushGpuVaTlb@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x54c60, 0x158b bytes
    // dxgmms2.sys PAGE:0x6fda0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x88720, 0x20ba bytes
    // dxgmms2.sys PAGE:0x70390, 0x1c52 bytes
    //
    _n82(sdk::unknown_ptr) flush_gpu_va_tlb;
    
    // [FlushHeapTransitions@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x60c9c, 0x158b bytes
    // dxgmms2.sys PAGE:0x856f0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3638, 0x20ba bytes
    // dxgmms2.sys PAGE:0x85ce0, 0x1c52 bytes
    //
    _n83(sdk::unknown_ptr) flush_heap_transitions;
    
    // [FlushPagingBuffer@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x57e58, 0x158b bytes
    // dxgmms2.sys PAGE:0x85834, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa39c8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x85e24, 0x1c52 bytes
    //
    _n84(sdk::unknown_ptr) flush_paging_buffer;
    
    // [FlushPagingBufferInternal@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x573c0, 0x158b bytes
    // dxgmms2.sys PAGE:0x657e0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x919c0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x65dd0, 0x1c52 bytes
    //
    _n85(sdk::unknown_ptr) flush_paging_buffer_internal;
    
    // [FlushPendingAllocationAccess@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x89754, 0x158b bytes
    // dxgmms2.sys PAGE:0xb0aa4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd71e8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb106c, 0x1c52 bytes
    //
    _n86(sdk::unknown_ptr) flush_pending_allocation_access;
    
    // [FlushScratchGpuVaRanges@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x57ecc, 0x158b bytes
    // dxgmms2.sys PAGE:0x86ffc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa4c98, 0x20ba bytes
    // dxgmms2.sys PAGE:0x875ec, 0x1c52 bytes
    //
    _n87(sdk::unknown_ptr) flush_scratch_gpu_va_ranges;
    
    // [ForceDiscardOffer@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x89830, 0x158b bytes
    // dxgmms2.sys PAGE:0xb0c3c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd7388, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb1204, 0x1c52 bytes
    //
    _n88(sdk::unknown_ptr) force_discard_offer;
    
    // [FreeDeferredMapping@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x89950, 0x158b bytes
    // dxgmms2.sys PAGE:0xb0d80, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd74b4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb1348, 0x1c52 bytes
    //
    _n89(sdk::unknown_ptr) free_deferred_mapping;
    
    // [FreeFenceStorageSlot@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x18e4, 0x158b bytes
    // dxgmms2.sys .text:0x13ff8, 0x1c52 bytes
    // dxgmms2.sys .text:0x179e8, 0x20ba bytes
    // dxgmms2.sys .text:0x13ff8, 0x1c52 bytes
    //
    _n90(sdk::unknown_ptr) free_fence_storage_slot;
    
    // [FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x55e20, 0x158b bytes
    // dxgmms2.sys PAGE:0x5e9f0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa0fe4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5efe0, 0x1c52 bytes
    //
    _n91(sdk::unknown_ptr) free_gpu_virtual_address_system_command;
    
    // [FreePagingBufferResources@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x89a7c, 0x158b bytes
    // dxgmms2.sys PAGE:0xb0ee8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd7620, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb14b0, 0x1c52 bytes
    //
    _n92(sdk::unknown_ptr) free_paging_buffer_resources;
    
    // [GetAllocationInstance@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x71840, 0x158b bytes
    // dxgmms2.sys PAGE:0x860d0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb5304, 0x20ba bytes
    // dxgmms2.sys PAGE:0x866c0, 0x1c52 bytes
    //
    _n93(sdk::unknown_ptr) get_allocation_instance;
    
    // [GetAllocationSection@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x89adc, 0x158b bytes
    // dxgmms2.sys PAGE:0x88300, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd76d0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x888f0, 0x1c52 bytes
    //
    _n94(sdk::unknown_ptr) get_allocation_section;
    
    // [GetMostPreferredSegment@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x880a4, 0x158b bytes
    // dxgmms2.sys PAGE:0xb1040, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd7818, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb1608, 0x1c52 bytes
    //
    _n95(sdk::unknown_ptr) get_most_preferred_segment;
    
    // [GetNextPendingTermination@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2358, 0x158b bytes
    // dxgmms2.sys .text:0x2f40, 0x1c52 bytes
    // dxgmms2.sys .text:0x20b0, 0x20ba bytes
    // dxgmms2.sys .text:0x2f40, 0x1c52 bytes
    //
    _n96(sdk::unknown_ptr) get_next_pending_termination;
    
    // [GetPinnedAllocationInfo@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5e9ac, 0x158b bytes
    // dxgmms2.sys PAGE:0xb1100, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa5d64, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb16c8, 0x1c52 bytes
    //
    _n97(sdk::unknown_ptr) get_pinned_allocation_info;
    
    // [GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9a744, 0x158b bytes
    // dxgmms2.sys PAGE:0x7ff90, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9c92c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x80580, 0x1c52 bytes
    //
    _n98(sdk::unknown_ptr) get_process_budget_band_and_visibility;
    
    // [GetTotalSegmentSize@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5e6d0, 0x158b bytes
    // dxgmms2.sys PAGE:0x60d2c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa1294, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6131c, 0x1c52 bytes
    //
    _n99(sdk::unknown_ptr) get_total_segment_size;
    
    // [HandlePromotionCandidates@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x611e0, 0x158b bytes
    // dxgmms2.sys PAGE:0x82ad0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9f470, 0x20ba bytes
    // dxgmms2.sys PAGE:0x830c0, 0x1c52 bytes
    //
    _o00(sdk::unknown_ptr) handle_promotion_candidates;
    
    // [HandleTrimWnf@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x53cf0, 0x158b bytes
    // dxgmms2.sys PAGE:0x5fb10, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x954c0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x60100, 0x1c52 bytes
    //
    _o01(sdk::unknown_ptr) handle_trim_wnf;
    
    // [Init@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6bb04, 0x158b bytes
    // dxgmms2.sys PAGE:0x91498, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xada04, 0x20ba bytes
    // dxgmms2.sys PAGE:0x91b78, 0x1c52 bytes
    //
    _o02(sdk::unknown_ptr) init;
    
    // [InitContextAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x581d0, 0x158b bytes
    // dxgmms2.sys PAGE:0x87cec, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa22e0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x882dc, 0x1c52 bytes
    //
    _o03(sdk::unknown_ptr) init_context_allocation;
    
    // [InitDmaPools@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6b9d8, 0x158b bytes
    // dxgmms2.sys PAGE:0x93328, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb4558, 0x20ba bytes
    // dxgmms2.sys PAGE:0x93a00, 0x1c52 bytes
    //
    _o04(sdk::unknown_ptr) init_dma_pools;
    
    // [InitGlobals@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6f9a8, 0x158b bytes
    // dxgmms2.sys PAGE:0x8d8cc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb0258, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8debc, 0x1c52 bytes
    //
    _o05(sdk::unknown_ptr) init_globals;
    
    // [InitPagingProcessVaSpace@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6b134, 0x158b bytes
    // dxgmms2.sys PAGE:0x931c4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb3fac, 0x20ba bytes
    // dxgmms2.sys PAGE:0x9389c, 0x1c52 bytes
    //
    _o06(sdk::unknown_ptr) init_paging_process_va_space;
    
    // [InitializeAdapterPowerManagement@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x71798, 0x158b bytes
    // dxgmms2.sys PAGE:0xb11bc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd78d8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb1784, 0x1c52 bytes
    //
    _o07(sdk::unknown_ptr) initialize_adapter_power_management;
    
    // [InitializeSegmentPowerManagement@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x89b08, 0x158b bytes
    // dxgmms2.sys PAGE:0xb16d0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd7918, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb1c98, 0x1c52 bytes
    //
    _o08(sdk::unknown_ptr) initialize_segment_power_management;
    
    // [InsertToPenaltyBox@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2154, 0x158b bytes
    // dxgmms2.sys .text:0x1344, 0x1c52 bytes
    // dxgmms2.sys .text:0x17470, 0x20ba bytes
    // dxgmms2.sys .text:0x1344, 0x1c52 bytes
    //
    _o09(sdk::unknown_ptr) insert_to_penalty_box;
    
    // [InvalidateAllVirtualAddresses@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x89bbc, 0x158b bytes
    // dxgmms2.sys PAGE:0xb17a0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd7a20, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb1d68, 0x1c52 bytes
    //
    _o10(sdk::unknown_ptr) invalidate_all_virtual_addresses;
    
    // [InvalidateAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6d0a4, 0x158b bytes
    // dxgmms2.sys PAGE:0xb17e4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd7a64, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb1dac, 0x1c52 bytes
    //
    _o11(sdk::unknown_ptr) invalidate_allocation;
    
    // [InvalidateCache@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x717d0, 0x158b bytes
    // dxgmms2.sys PAGE:0xb17fc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd7a7c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb1dc4, 0x1c52 bytes
    //
    _o12(sdk::unknown_ptr) invalidate_cache;
    
    // [InvalidateOneAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6b918, 0x158b bytes
    // dxgmms2.sys PAGE:0xb180c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd7a8c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb1dd4, 0x1c52 bytes
    //
    _o13(sdk::unknown_ptr) invalidate_one_allocation;
    
    // [IsAllocationAccessPending@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5ed1c, 0x158b bytes
    // dxgmms2.sys PAGE:0x850c4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa2f0c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x856b4, 0x1c52 bytes
    //
    _o14(sdk::unknown_ptr) is_allocation_access_pending;
    
    // [IsAllocationCPUVisible@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x717d8, 0x158b bytes
    // dxgmms2.sys PAGE:0xb1a04, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd7cb0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb1fcc, 0x1c52 bytes
    //
    _o15(sdk::unknown_ptr) is_allocation_cpu_visible;
    
    // [IsAllocationDecommitCandidate@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x89bf8, 0x158b bytes
    // dxgmms2.sys PAGE:0xb1a18, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd7cc4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb1fe0, 0x1c52 bytes
    //
    _o16(sdk::unknown_ptr) is_allocation_decommit_candidate;
    
    // [IsAllocationInPresentQueue@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x89c88, 0x158b bytes
    // dxgmms2.sys PAGE:0xb1ad0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa5e3c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb2098, 0x1c52 bytes
    //
    _o17(sdk::unknown_ptr) is_allocation_in_present_queue;
    
    // [IsAllocationRepurposed@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x89cc8, 0x158b bytes
    // dxgmms2.sys PAGE:0xb1b24, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd7d6c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb20ec, 0x1c52 bytes
    //
    _o18(sdk::unknown_ptr) is_allocation_repurposed;
    
    // [IsAllocationTerminated@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x89de4, 0x158b bytes
    // dxgmms2.sys PAGE:0xb1c64, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd7ea8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb222c, 0x1c52 bytes
    //
    _o19(sdk::unknown_ptr) is_allocation_terminated;
    
    // [IsPagingOperationPending@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x571a8, 0x158b bytes
    // dxgmms2.sys PAGE:0x73ea4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x83218, 0x20ba bytes
    // dxgmms2.sys PAGE:0x74494, 0x1c52 bytes
    //
    _o20(sdk::unknown_ptr) is_paging_operation_pending;
    
    // [IsPenaltyBoxEmpty@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1ce18, 0x158b bytes
    // dxgmms2.sys .text:0x24ee0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2eb98, 0x20ba bytes
    // dxgmms2.sys .text:0x24e60, 0x1c52 bytes
    //
    _o21(sdk::unknown_ptr) is_penalty_box_empty;
    
    // [Lock@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x60880, 0x158b bytes
    // dxgmms2.sys PAGE:0x66dd0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8b530, 0x20ba bytes
    // dxgmms2.sys PAGE:0x673c0, 0x1c52 bytes
    //
    _o22(sdk::unknown_ptr) lock;
    
    // [LockAllocInCpuHostAperture@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x89e4c, 0x158b bytes
    // dxgmms2.sys PAGE:0xb1cf0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd7f5c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb22b8, 0x1c52 bytes
    //
    _o23(sdk::unknown_ptr) lock_alloc_in_cpu_host_aperture;
    
    // [LockAllocInCpuVisibleSegment@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x89f5c, 0x158b bytes
    // dxgmms2.sys PAGE:0xb1e1c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd809c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb23e4, 0x1c52 bytes
    //
    _o24(sdk::unknown_ptr) lock_alloc_in_cpu_visible_segment;
    
    // [LockInAperture@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8a058, 0x158b bytes
    // dxgmms2.sys PAGE:0xb1f18, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd8194, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb24e0, 0x1c52 bytes
    //
    _o25(sdk::unknown_ptr) lock_in_aperture;
    
    // [LockInternal@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x54250, 0x158b bytes
    // dxgmms2.sys PAGE:0x67510, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8bca0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x67b00, 0x1c52 bytes
    //
    _o26(sdk::unknown_ptr) lock_internal;
    
    // [LogInformationToMinidump@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8a104, 0x158b bytes
    // dxgmms2.sys PAGE:0xb20d0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd8378, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb2698, 0x1c52 bytes
    //
    _o27(sdk::unknown_ptr) log_information_to_minidump;
    
    // [MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5454c, 0x158b bytes
    // dxgmms2.sys PAGE:0x6d9b4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x86704, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6dfa4, 0x1c52 bytes
    //
    _o28(sdk::unknown_ptr) make_one_virtual_address_range_not_resident;
    
    // [MakeResident@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x60378, 0x158b bytes
    // dxgmms2.sys PAGE:0x715e0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9a920, 0x20ba bytes
    // dxgmms2.sys PAGE:0x71bd0, 0x1c52 bytes
    //
    _o29(sdk::unknown_ptr) make_resident;
    
    // [MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x54720, 0x158b bytes
    // dxgmms2.sys PAGE:0x641f8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa7304, 0x20ba bytes
    // dxgmms2.sys PAGE:0x647e8, 0x1c52 bytes
    //
    _o30(sdk::unknown_ptr) make_virtual_address_range_not_resident;
    
    // [MapAllPagingBuffers@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x68140, 0x158b bytes
    // dxgmms2.sys PAGE:0xb2304, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa7a64, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb28cc, 0x1c52 bytes
    //
    _o31(sdk::unknown_ptr) map_all_paging_buffers;
    
    // [MapCpuVA@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x60b94, 0x158b bytes
    // dxgmms2.sys PAGE:0x84e48, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa1680, 0x20ba bytes
    // dxgmms2.sys PAGE:0x85438, 0x1c52 bytes
    //
    _o32(sdk::unknown_ptr) map_cpu_va;
    
    // [MapGpuVA@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x60c10, 0x158b bytes
    // dxgmms2.sys PAGE:0x8090c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x99868, 0x20ba bytes
    // dxgmms2.sys PAGE:0x80efc, 0x1c52 bytes
    //
    _o33(sdk::unknown_ptr) map_gpu_va;
    
    // [MapVideoApertureSegmentInternal@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8a32c, 0x158b bytes
    // dxgmms2.sys PAGE:0xb240c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa83fc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb29d4, 0x1c52 bytes
    //
    _o34(sdk::unknown_ptr) map_video_aperture_segment_internal;
    
    // [MarkGlobalAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x536e4, 0x158b bytes
    // dxgmms2.sys PAGE:0x5f4c0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x960fc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5fab0, 0x1c52 bytes
    //
    _o35(sdk::unknown_ptr) mark_global_allocation;
    
    // [MemoryTransfer@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x58fa4, 0x158b bytes
    // dxgmms2.sys PAGE:0x865cc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa421c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86bbc, 0x1c52 bytes
    //
    _o36(sdk::unknown_ptr) memory_transfer;
    
    // [MemoryTransferInternal@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x58e64, 0x158b bytes
    // dxgmms2.sys PAGE:0x866b4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa4334, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86ca4, 0x1c52 bytes
    //
    _o37(sdk::unknown_ptr) memory_transfer_internal;
    
    // [MemoryTransferUsingGpuVa@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8a4a4, 0x158b bytes
    // dxgmms2.sys PAGE:0xb25e8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd857c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb2bb0, 0x1c52 bytes
    //
    _o38(sdk::unknown_ptr) memory_transfer_using_gpu_va;
    
    // [MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x58890, 0x158b bytes
    // dxgmms2.sys PAGE:0x8680c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa448c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86dfc, 0x1c52 bytes
    //
    _o39(sdk::unknown_ptr) memory_transfer_using_gpu_va_worker;
    
    // [MoveResources@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8a738, 0x158b bytes
    // dxgmms2.sys PAGE:0xb282c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd87a8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb2df4, 0x1c52 bytes
    //
    _o40(sdk::unknown_ptr) move_resources;
    
    // [NeedsApertureForLock@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x54224, 0x158b bytes
    // dxgmms2.sys PAGE:0x62cf8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa22a8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x632e8, 0x1c52 bytes
    //
    _o41(sdk::unknown_ptr) needs_aperture_for_lock;
    
    // [NotifyAllocationEviction@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x59784, 0x158b bytes
    // dxgmms2.sys PAGE:0x6490c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x984ac, 0x20ba bytes
    // dxgmms2.sys PAGE:0x64efc, 0x1c52 bytes
    //
    _o42(sdk::unknown_ptr) notify_allocation_eviction;
    
    // [NotifyAllocationReclaimed@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x66fb8, 0x158b bytes
    // dxgmms2.sys PAGE:0xb2c9c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd8bf8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb326c, 0x1c52 bytes
    //
    _o43(sdk::unknown_ptr) notify_allocation_reclaimed;
    
    // [NotifyContextAllocationEviction@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x59758, 0x158b bytes
    // dxgmms2.sys PAGE:0x885e0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa2b4c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x88bd0, 0x1c52 bytes
    //
    _o44(sdk::unknown_ptr) notify_context_allocation_eviction;
    
    // [NotifyMemorySegmentActive@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d84c, 0x158b bytes
    // dxgmms2.sys .text:0x237c0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2d5fc, 0x20ba bytes
    // dxgmms2.sys .text:0x23740, 0x1c52 bytes
    //
    _o45(sdk::unknown_ptr) notify_memory_segment_active;
    
    // [NotifyMemorySegmentIdle@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d9c8, 0x158b bytes
    // dxgmms2.sys .text:0x2392c, 0x1c52 bytes
    // dxgmms2.sys .text:0x2d774, 0x20ba bytes
    // dxgmms2.sys .text:0x238ac, 0x1c52 bytes
    //
    _o46(sdk::unknown_ptr) notify_memory_segment_idle;
    
    // [NotifyOnFlip@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2270, 0x158b bytes
    // dxgmms2.sys .text:0xf598, 0x1c52 bytes
    // dxgmms2.sys .text:0x1bd3c, 0x20ba bytes
    // dxgmms2.sys .text:0xf598, 0x1c52 bytes
    //
    _o47(sdk::unknown_ptr) notify_on_flip;
    
    // [NotifyProcessStatusChange@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5e800, 0x158b bytes
    // dxgmms2.sys PAGE:0x7e554, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9ce18, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7eb44, 0x1c52 bytes
    //
    _o48(sdk::unknown_ptr) notify_process_status_change;
    
    // [NotifyResidency@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5838c, 0x158b bytes
    // dxgmms2.sys PAGE:0x87b88, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa2728, 0x20ba bytes
    // dxgmms2.sys PAGE:0x88178, 0x1c52 bytes
    //
    _o49(sdk::unknown_ptr) notify_residency;
    
    // [OfferAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x602fc, 0x158b bytes
    // dxgmms2.sys PAGE:0x7a248, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x81738, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7a838, 0x1c52 bytes
    //
    _o50(sdk::unknown_ptr) offer_allocation;
    
    // [OfferOneAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5c520, 0x158b bytes
    // dxgmms2.sys PAGE:0x7a4d0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8176c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7aac0, 0x1c52 bytes
    //
    _o51(sdk::unknown_ptr) offer_one_allocation;
    
    // [OpenAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5e8c8, 0x158b bytes
    // dxgmms2.sys PAGE:0x6768c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9fe44, 0x20ba bytes
    // dxgmms2.sys PAGE:0x67c7c, 0x1c52 bytes
    //
    _o52(sdk::unknown_ptr) open_allocation;
    
    // [OpenLocalAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x59b64, 0x158b bytes
    // dxgmms2.sys PAGE:0x68be0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8fa58, 0x20ba bytes
    // dxgmms2.sys PAGE:0x691d0, 0x1c52 bytes
    //
    _o53(sdk::unknown_ptr) open_local_allocation;
    
    // [OpenOneAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5cf80, 0x158b bytes
    // dxgmms2.sys PAGE:0x67f90, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8fc90, 0x20ba bytes
    // dxgmms2.sys PAGE:0x68580, 0x1c52 bytes
    //
    _o54(sdk::unknown_ptr) open_one_allocation;
    
    // [PageInDevice@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8a9c4, 0x158b bytes
    // dxgmms2.sys PAGE:0xb2d90, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd8ce0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb3360, 0x1c52 bytes
    //
    _o55(sdk::unknown_ptr) page_in_device;
    
    // [PageInDeviceInternal@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x565f0, 0x158b bytes
    // dxgmms2.sys PAGE:0x5e6cc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa0cac, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5ecbc, 0x1c52 bytes
    //
    _o56(sdk::unknown_ptr) page_in_device_internal;
    
    // [PageInFaultedAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x56814, 0x158b bytes
    // dxgmms2.sys PAGE:0x5e8b8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa0ea4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5eea8, 0x1c52 bytes
    //
    _o57(sdk::unknown_ptr) page_in_faulted_allocation;
    
    // [PageInFromFaultedList@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8aa28, 0x158b bytes
    // dxgmms2.sys PAGE:0xb2dfc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd8d4c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb33cc, 0x1c52 bytes
    //
    _o58(sdk::unknown_ptr) page_in_from_faulted_list;
    
    // [PageInOneAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x56970, 0x158b bytes
    // dxgmms2.sys PAGE:0x6d330, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x86e70, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6d920, 0x1c52 bytes
    //
    _o59(sdk::unknown_ptr) page_in_one_allocation;
    
    // [PerformDefragmentationEscape@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8aa80, 0x158b bytes
    // dxgmms2.sys PAGE:0xb2e64, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd8db4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb3434, 0x1c52 bytes
    //
    _o60(sdk::unknown_ptr) perform_defragmentation_escape;
    
    // [PinAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x67240, 0x158b bytes
    // dxgmms2.sys PAGE:0xb3068, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa645c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb3638, 0x1c52 bytes
    //
    _o61(sdk::unknown_ptr) pin_allocation;
    
    // [PinOneAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x67170, 0x158b bytes
    // dxgmms2.sys PAGE:0xb30d0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa64a0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb36a0, 0x1c52 bytes
    //
    _o62(sdk::unknown_ptr) pin_one_allocation;
    
    // [PrepareDmaBuffer@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8abe0, 0x158b bytes
    // dxgmms2.sys PAGE:0xb3224, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd8fe0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb37f4, 0x1c52 bytes
    //
    _o63(sdk::unknown_ptr) prepare_dma_buffer;
    
    // [PrepareMoveResources@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8ad58, 0x158b bytes
    // dxgmms2.sys PAGE:0xb3320, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd90d4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb38f0, 0x1c52 bytes
    //
    _o64(sdk::unknown_ptr) prepare_move_resources;
    
    // [ProbeAndLockAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x54174, 0x158b bytes
    // dxgmms2.sys PAGE:0x63774, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x85930, 0x20ba bytes
    // dxgmms2.sys PAGE:0x63d64, 0x1c52 bytes
    //
    _o65(sdk::unknown_ptr) probe_and_lock_allocation;
    
    // [ProcessDeferredCommand@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5a390, 0x158b bytes
    // dxgmms2.sys PAGE:0x64b40, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x907a0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x65130, 0x1c52 bytes
    //
    _o66(sdk::unknown_ptr) process_deferred_command;
    
    // [ProcessSystemCommand@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5b2b8, 0x158b bytes
    // dxgmms2.sys PAGE:0x72b64, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x84160, 0x20ba bytes
    // dxgmms2.sys PAGE:0x73154, 0x1c52 bytes
    //
    _o67(sdk::unknown_ptr) process_system_command;
    
    // [ProcessSystemMemoryOfferList@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x537b0, 0x158b bytes
    // dxgmms2.sys PAGE:0x5f620, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x94fc0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5fc10, 0x1c52 bytes
    //
    _o68(sdk::unknown_ptr) process_system_memory_offer_list;
    
    // [ProcessVerifierOption@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8e178, 0x158b bytes
    // dxgmms2.sys PAGE:0xb8c2c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdd7d4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb91fc, 0x1c52 bytes
    //
    _o69(sdk::unknown_ptr) process_verifier_option;
    
    // [PurgeAllSegments@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x68550, 0x158b bytes
    // dxgmms2.sys PAGE:0xb33c8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa6b70, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb3998, 0x1c52 bytes
    //
    _o70(sdk::unknown_ptr) purge_all_segments;
    
    // [PurgeAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x681dc, 0x158b bytes
    // dxgmms2.sys PAGE:0xb3524, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd917c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb3af4, 0x1c52 bytes
    //
    _o71(sdk::unknown_ptr) purge_allocation;
    
    // [PurgePageTables@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x68410, 0x158b bytes
    // dxgmms2.sys PAGE:0xb3680, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa7bcc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb3c50, 0x1c52 bytes
    //
    _o72(sdk::unknown_ptr) purge_page_tables;
    
    // [QueryAdapterStatistics@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1e5d4, 0x158b bytes
    // dxgmms2.sys .text:0x25230, 0x1c52 bytes
    // dxgmms2.sys .text:0x2eee8, 0x20ba bytes
    // dxgmms2.sys .text:0x251b0, 0x1c52 bytes
    //
    _o73(sdk::unknown_ptr) query_adapter_statistics;
    
    // [QueryAllocationResidency@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5e9a4, 0x158b bytes
    // dxgmms2.sys PAGE:0xb386c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd92d0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb3e3c, 0x1c52 bytes
    //
    _o74(sdk::unknown_ptr) query_allocation_residency;
    
    // [QueryAllocationSizeInSegment@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x717e8, 0x158b bytes
    // dxgmms2.sys PAGE:0xb3884, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd92e8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb3e54, 0x1c52 bytes
    //
    _o75(sdk::unknown_ptr) query_allocation_size_in_segment;
    
    // [QueryAllocationSizeInSystemMemory@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x717f4, 0x158b bytes
    // dxgmms2.sys PAGE:0x84318, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa1d1c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x84908, 0x1c52 bytes
    //
    _o76(sdk::unknown_ptr) query_allocation_size_in_system_memory;
    
    // [QueryLocalAllocationResidency@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5c968, 0x158b bytes
    // dxgmms2.sys PAGE:0xb3898, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd92fc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb3e68, 0x1c52 bytes
    //
    _o77(sdk::unknown_ptr) query_local_allocation_residency;
    
    // [QueryMultiAllocCount@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x71800, 0x158b bytes
    // dxgmms2.sys PAGE:0xb3a3c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd94c0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb400c, 0x1c52 bytes
    //
    _o78(sdk::unknown_ptr) query_multi_alloc_count;
    
    // [QueryProcessAdapterStatistics@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1eabc, 0x158b bytes
    // dxgmms2.sys .text:0x25730, 0x1c52 bytes
    // dxgmms2.sys .text:0x2f3e8, 0x20ba bytes
    // dxgmms2.sys .text:0x256b0, 0x1c52 bytes
    //
    _o79(sdk::unknown_ptr) query_process_adapter_statistics;
    
    // [QueryProcessSegmentGroupStatistics@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1ebe4, 0x158b bytes
    // dxgmms2.sys .text:0x258ac, 0x1c52 bytes
    // dxgmms2.sys .text:0x2f564, 0x20ba bytes
    // dxgmms2.sys .text:0x2582c, 0x1c52 bytes
    //
    _o80(sdk::unknown_ptr) query_process_segment_group_statistics;
    
    // [QueryProcessSegmentStatistics@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1eca4, 0x158b bytes
    // dxgmms2.sys .text:0x25988, 0x1c52 bytes
    // dxgmms2.sys .text:0x2f640, 0x20ba bytes
    // dxgmms2.sys .text:0x25908, 0x1c52 bytes
    //
    _o81(sdk::unknown_ptr) query_process_segment_statistics;
    
    // [QuerySegmentStatistics@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1eda0, 0x158b bytes
    // dxgmms2.sys .text:0x25a98, 0x1c52 bytes
    // dxgmms2.sys .text:0x2f750, 0x20ba bytes
    // dxgmms2.sys .text:0x25a18, 0x1c52 bytes
    //
    _o82(sdk::unknown_ptr) query_segment_statistics;
    
    // [QueryVideoMemoryInfo@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8adf4, 0x158b bytes
    // dxgmms2.sys PAGE:0xb3a4c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd94d0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb401c, 0x1c52 bytes
    //
    _o83(sdk::unknown_ptr) query_video_memory_info;
    
    // [QueueDeferredCommand@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5b0a0, 0x158b bytes
    // dxgmms2.sys PAGE:0x71eb4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9b700, 0x20ba bytes
    // dxgmms2.sys PAGE:0x724a4, 0x1c52 bytes
    //
    _o84(sdk::unknown_ptr) queue_deferred_command;
    
    // [QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5bd84, 0x158b bytes
    // dxgmms2.sys PAGE:0x726e4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9a1c8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x72cd4, 0x1c52 bytes
    //
    _o85(sdk::unknown_ptr) queue_system_cleanup_command_and_wait;
    
    // [QueueSystemCommandAndWait@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5bdd0, 0x158b bytes
    // dxgmms2.sys PAGE:0x85690, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9c300, 0x20ba bytes
    // dxgmms2.sys PAGE:0x85c80, 0x1c52 bytes
    //
    _o86(sdk::unknown_ptr) queue_system_command_and_wait;
    
    // [QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5bc30, 0x158b bytes
    // dxgmms2.sys PAGE:0x724c8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9b0bc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x72ab8, 0x1c52 bytes
    //
    _o87(sdk::unknown_ptr) queue_system_command_and_wait_internal;
    
    // [ReadBudgetConfiguration@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8e1f0, 0x158b bytes
    // dxgmms2.sys PAGE:0x8ebbc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb1730, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8f29c, 0x1c52 bytes
    //
    _o88(sdk::unknown_ptr) read_budget_configuration;
    
    // [ReadCommitLimitInformation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x712b4, 0x158b bytes
    // dxgmms2.sys PAGE:0x9105c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb3bd0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x9173c, 0x1c52 bytes
    //
    _o89(sdk::unknown_ptr) read_commit_limit_information;
    
    // [ReadConfiguration@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6fc64, 0x158b bytes
    // dxgmms2.sys PAGE:0x8de24, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb07c4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8e504, 0x1c52 bytes
    //
    _o90(sdk::unknown_ptr) read_configuration;
    
    // [ReadGpuVaConfiguration@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8e918, 0x158b bytes
    // dxgmms2.sys PAGE:0x8fe80, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb29f4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x90560, 0x1c52 bytes
    //
    _o91(sdk::unknown_ptr) read_gpu_va_configuration;
    
    // [ReadHeapConfiguration@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8ec30, 0x158b bytes
    // dxgmms2.sys PAGE:0x90288, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb2dfc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x90968, 0x1c52 bytes
    //
    _o92(sdk::unknown_ptr) read_heap_configuration;
    
    // [ReadPagingConfiguration@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8f06c, 0x158b bytes
    // dxgmms2.sys PAGE:0x8f8d8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb244c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8ffb8, 0x1c52 bytes
    //
    _o93(sdk::unknown_ptr) read_paging_configuration;
    
    // [ReadPowerConfiguration@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8f5b8, 0x158b bytes
    // dxgmms2.sys PAGE:0x9018c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb2d00, 0x20ba bytes
    // dxgmms2.sys PAGE:0x9086c, 0x1c52 bytes
    //
    _o94(sdk::unknown_ptr) read_power_configuration;
    
    // [ReadPreparationPeriodConfiguration@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x709f4, 0x158b bytes
    // dxgmms2.sys PAGE:0x9077c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb32f0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x90e5c, 0x1c52 bytes
    //
    _o95(sdk::unknown_ptr) read_preparation_period_configuration;
    
    // [ReadTestAndStagingConfiguration@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8f6ac, 0x158b bytes
    // dxgmms2.sys PAGE:0x8f558, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb20cc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8fc38, 0x1c52 bytes
    //
    _o96(sdk::unknown_ptr) read_test_and_staging_configuration;
    
    // [ReadUnusedAllocationConfiguration@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x70c08, 0x158b bytes
    // dxgmms2.sys PAGE:0x9099c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb3510, 0x20ba bytes
    // dxgmms2.sys PAGE:0x9107c, 0x1c52 bytes
    //
    _o97(sdk::unknown_ptr) read_unused_allocation_configuration;
    
    // [ReadVPRConfiguration@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8fa0c, 0x158b bytes
    // dxgmms2.sys PAGE:0x8f3a4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb1f18, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8fa84, 0x1c52 bytes
    //
    _o98(sdk::unknown_ptr) read_vpr_configuration;
    
    // [ReadWorkingSetConfiguration@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x711d4, 0x158b bytes
    // dxgmms2.sys PAGE:0x90f70, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb3ae4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x91650, 0x1c52 bytes
    //
    _o99(sdk::unknown_ptr) read_working_set_configuration;
    
    // [ReclaimAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x60324, 0x158b bytes
    // dxgmms2.sys PAGE:0x79d68, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x99c90, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7a358, 0x1c52 bytes
    //
    _p00(sdk::unknown_ptr) reclaim_allocation;
    
    // [ReclaimOneAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5c070, 0x158b bytes
    // dxgmms2.sys PAGE:0x79e00, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x99d30, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7a3f0, 0x1c52 bytes
    //
    _p01(sdk::unknown_ptr) reclaim_one_allocation;
    
    // [RecommitGpuVirtualAddresses@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x68394, 0x158b bytes
    // dxgmms2.sys PAGE:0xb3bb0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa6d98, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb4180, 0x1c52 bytes
    //
    _p02(sdk::unknown_ptr) recommit_gpu_virtual_addresses;
    
    // [RecordPageMappingHistory@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x535d4, 0x158b bytes
    // dxgmms2.sys PAGE:0xb3d44, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd962c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb4314, 0x1c52 bytes
    //
    _p03(sdk::unknown_ptr) record_page_mapping_history;
    
    // [RecordPagingOperation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x52b10, 0x158b bytes
    // dxgmms2.sys PAGE:0x73124, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x86544, 0x20ba bytes
    // dxgmms2.sys PAGE:0x73714, 0x1c52 bytes
    //
    _p04(sdk::unknown_ptr) record_paging_operation;
    
    // [RecordRotation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x66438, 0x158b bytes
    // dxgmms2.sys PAGE:0xc18a4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa580c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc1e74, 0x1c52 bytes
    //
    _p05(sdk::unknown_ptr) record_rotation;
    
    // [RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x60cdc, 0x158b bytes
    // dxgmms2.sys PAGE:0x641a4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x85d60, 0x20ba bytes
    // dxgmms2.sys PAGE:0x64794, 0x1c52 bytes
    //
    _p06(sdk::unknown_ptr) record_va_paging_history_evict_commit_alloc;
    
    // [RecordVaPagingHistoryMakeResident@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x52f94, 0x158b bytes
    // dxgmms2.sys PAGE:0xbf11c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe36cc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbf6ec, 0x1c52 bytes
    //
    _p07(sdk::unknown_ptr) record_va_paging_history_make_resident;
    
    // [RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x52df8, 0x158b bytes
    // dxgmms2.sys PAGE:0xbf2b0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe3860, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbf880, 0x1c52 bytes
    //
    _p08(sdk::unknown_ptr) record_va_paging_history_map_gpu_va;
    
    // [RecordVaPagingHistoryNotifyResidency@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x529a4, 0x158b bytes
    // dxgmms2.sys PAGE:0xbf468, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe3a18, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbfa38, 0x1c52 bytes
    //
    _p09(sdk::unknown_ptr) record_va_paging_history_notify_residency;
    
    // [RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x60e50, 0x158b bytes
    // dxgmms2.sys PAGE:0x85b20, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3a28, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86110, 0x1c52 bytes
    //
    _p10(sdk::unknown_ptr) record_va_paging_history_set_page_directory;
    
    // [RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x61098, 0x158b bytes
    // dxgmms2.sys PAGE:0x5ee68, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa0b4c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5f458, 0x1c52 bytes
    //
    _p11(sdk::unknown_ptr) record_va_paging_history_suspend_resume_device;
    
    // [RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x93910, 0x158b bytes
    // dxgmms2.sys PAGE:0xbf8b0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe3cfc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbfe80, 0x1c52 bytes
    //
    _p12(sdk::unknown_ptr) record_va_paging_history_update_gpu_va;
    
    // [RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x93a58, 0x158b bytes
    // dxgmms2.sys PAGE:0xbfa34, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe3e84, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc0004, 0x1c52 bytes
    //
    _p13(sdk::unknown_ptr) record_va_paging_history_update_gpu_va_op;
    
    // [RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x52820, 0x158b bytes
    // dxgmms2.sys PAGE:0xbfe34, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe4280, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc0404, 0x1c52 bytes
    //
    _p14(sdk::unknown_ptr) record_va_paging_history_virtual_fill;
    
    // [RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5269c, 0x158b bytes
    // dxgmms2.sys PAGE:0xbffc4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe4408, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc0594, 0x1c52 bytes
    //
    _p15(sdk::unknown_ptr) record_va_paging_history_virtual_transfer;
    
    // [ReferenceAllocationForPreparation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x598ec, 0x158b bytes
    // dxgmms2.sys PAGE:0x6d888, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x875dc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6de78, 0x1c52 bytes
    //
    _p16(sdk::unknown_ptr) reference_allocation_for_preparation;
    
    // [ReferenceAllocationForSubmission@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5be1c, 0x158b bytes
    // dxgmms2.sys PAGE:0x5e9c0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa0fb8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5efb0, 0x1c52 bytes
    //
    _p17(sdk::unknown_ptr) reference_allocation_for_submission;
    
    // [ReferenceAllocationForTokenSubmission@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8aed0, 0x158b bytes
    // dxgmms2.sys PAGE:0xb3e4c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa5cf0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb441c, 0x1c52 bytes
    //
    _p18(sdk::unknown_ptr) reference_allocation_for_token_submission;
    
    // [ReferenceDmaBuffer@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5f360, 0x158b bytes
    // dxgmms2.sys PAGE:0x6bda0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8d7e0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6c390, 0x1c52 bytes
    //
    _p19(sdk::unknown_ptr) reference_dma_buffer;
    
    // [ReferencePrimaryAllocationForSubmission@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5f2e0, 0x158b bytes
    // dxgmms2.sys PAGE:0x8425c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9fd98, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8484c, 0x1c52 bytes
    //
    _p20(sdk::unknown_ptr) reference_primary_allocation_for_submission;
    
    // [ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5705c, 0x158b bytes
    // dxgmms2.sys PAGE:0x86570, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa41c0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86b60, 0x1c52 bytes
    //
    _p21(sdk::unknown_ptr) release_temporary_resources_for_allocation;
    
    // [RemoveAllocationFromDecommitList@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8afa4, 0x158b bytes
    // dxgmms2.sys PAGE:0xb3f58, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7b2cc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb4528, 0x1c52 bytes
    //
    _p22(sdk::unknown_ptr) remove_allocation_from_decommit_list;
    
    // [RemoveDMAReferences@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1dadc, 0x158b bytes
    // dxgmms2.sys .text:0x23b78, 0x1c52 bytes
    // dxgmms2.sys .text:0x2d90c, 0x20ba bytes
    // dxgmms2.sys .text:0x23af8, 0x1c52 bytes
    //
    _p23(sdk::unknown_ptr) remove_dma_references;
    
    // [RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x21cc, 0x158b bytes
    // dxgmms2.sys .text:0x130c, 0x1c52 bytes
    // dxgmms2.sys .text:0x17514, 0x20ba bytes
    // dxgmms2.sys .text:0x130c, 0x1c52 bytes
    //
    _p24(sdk::unknown_ptr) remove_from_penalty_box_by_list_entry;
    
    // [ReportProcessAdapterBudget@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9a780, 0x158b bytes
    // dxgmms2.sys PAGE:0x7fe54, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9c7f0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x80444, 0x1c52 bytes
    //
    _p25(sdk::unknown_ptr) report_process_adapter_budget;
    
    // [ReportProcessStates@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8b054, 0x158b bytes
    // dxgmms2.sys PAGE:0xb4170, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd9850, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb4740, 0x1c52 bytes
    //
    _p26(sdk::unknown_ptr) report_process_states;
    
    // [ReportVidMmState@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8b0dc, 0x158b bytes
    // dxgmms2.sys PAGE:0xb4214, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd98f4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb47e4, 0x1c52 bytes
    //
    _p27(sdk::unknown_ptr) report_vid_mm_state;
    
    // [ReportVidMmStateWorker@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8b118, 0x158b bytes
    // dxgmms2.sys PAGE:0xb4258, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd9938, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb4828, 0x1c52 bytes
    //
    _p28(sdk::unknown_ptr) report_vid_mm_state_worker;
    
    // [RequestNewBudget@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x52650, 0x158b bytes
    // dxgmms2.sys PAGE:0x7e75c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9ce30, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7ed4c, 0x1c52 bytes
    //
    _p29(sdk::unknown_ptr) request_new_budget;
    
    // [ResetBackingStore@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5be44, 0x158b bytes
    // dxgmms2.sys PAGE:0x61370, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x83278, 0x20ba bytes
    // dxgmms2.sys PAGE:0x61960, 0x1c52 bytes
    //
    _p30(sdk::unknown_ptr) reset_backing_store;
    
    // [ResetCleanupCounters@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x53bf0, 0x158b bytes
    // dxgmms2.sys PAGE:0x857a4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3970, 0x20ba bytes
    // dxgmms2.sys PAGE:0x85d94, 0x1c52 bytes
    //
    _p31(sdk::unknown_ptr) reset_cleanup_counters;
    
    // [RestoreFromPurge@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x685d4, 0x158b bytes
    // dxgmms2.sys PAGE:0xb43c4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa79a8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb4994, 0x1c52 bytes
    //
    _p32(sdk::unknown_ptr) restore_from_purge;
    
    // [ResumeWorkerThread@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5e7f0, 0x158b bytes
    // dxgmms2.sys PAGE:0x858e4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa34f8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x85ed4, 0x1c52 bytes
    //
    _p33(sdk::unknown_ptr) resume_worker_thread;
    
    // [ReturnPinnedBackingStore@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x55f54, 0x158b bytes
    // dxgmms2.sys PAGE:0x85110, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa2fc0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x85700, 0x1c52 bytes
    //
    _p34(sdk::unknown_ptr) return_pinned_backing_store;
    
    // [_RotationHistory@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x36450, 0x158b bytes
    // dxgmms2.sys .data:0x51538, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e5b8, 0x20ba bytes
    // dxgmms2.sys .data:0x51538, 0x1c52 bytes
    //
    _p35(sdk::unknown_ptr) rotation_history;
    
    // [SendBudgetChangeNotifications@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9a9d0, 0x158b bytes
    // dxgmms2.sys PAGE:0xcc1d8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xee86c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcc978, 0x1c52 bytes
    //
    _p36(sdk::unknown_ptr) send_budget_change_notifications;
    
    // [SendWnfNotificationToProcess@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x62528, 0x158b bytes
    // dxgmms2.sys PAGE:0x602a4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x95d90, 0x20ba bytes
    // dxgmms2.sys PAGE:0x60894, 0x1c52 bytes
    //
    _p37(sdk::unknown_ptr) send_wnf_notification_to_process;
    
    // [SetAllocationPriority@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8b238, 0x158b bytes
    // dxgmms2.sys PAGE:0xb4838, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd9ccc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb4e08, 0x1c52 bytes
    //
    _p38(sdk::unknown_ptr) set_allocation_priority;
    
    // [SetOneAllocationPriority@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8b240, 0x158b bytes
    // dxgmms2.sys PAGE:0xb4924, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd9dd4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb4ef4, 0x1c52 bytes
    //
    _p39(sdk::unknown_ptr) set_one_allocation_priority;
    
    // [SetVPRPaging@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14f88, 0x158b bytes
    // dxgmms2.sys .text:0x28614, 0x1c52 bytes
    // dxgmms2.sys .text:0x327a4, 0x20ba bytes
    // dxgmms2.sys .text:0x28594, 0x1c52 bytes
    //
    _p40(sdk::unknown_ptr) set_vpr_paging;
    
    // [SetupAllocationForCPUAccess@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8b330, 0x158b bytes
    // dxgmms2.sys PAGE:0xb4a2c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd9ee0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb4ffc, 0x1c52 bytes
    //
    _p41(sdk::unknown_ptr) setup_allocation_for_cpu_access;
    
    // [SetupBudgetState@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9aa6c, 0x158b bytes
    // dxgmms2.sys PAGE:0xcc294, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xee948, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcca34, 0x1c52 bytes
    //
    _p42(sdk::unknown_ptr) setup_budget_state;
    
    // [SetupForBuildPagingBuffer@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x562f0, 0x158b bytes
    // dxgmms2.sys PAGE:0x739dc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x82ebc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x73fcc, 0x1c52 bytes
    //
    _p43(sdk::unknown_ptr) setup_for_build_paging_buffer;
    
    // [SetupForBuildPagingBufferIteration@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x561b8, 0x158b bytes
    // dxgmms2.sys PAGE:0x73800, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x82f44, 0x20ba bytes
    // dxgmms2.sys PAGE:0x73df0, 0x1c52 bytes
    //
    _p44(sdk::unknown_ptr) setup_for_build_paging_buffer_iteration;
    
    // [StartPreparation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x56524, 0x158b bytes
    // dxgmms2.sys PAGE:0x73f04, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x96064, 0x20ba bytes
    // dxgmms2.sys PAGE:0x744f4, 0x1c52 bytes
    //
    _p45(sdk::unknown_ptr) start_preparation;
    
    // [StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5657c, 0x158b bytes
    // dxgmms2.sys PAGE:0x730b0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x84924, 0x20ba bytes
    // dxgmms2.sys PAGE:0x736a0, 0x1c52 bytes
    //
    _p46(sdk::unknown_ptr) start_preparation_on_physical_adapter;
    
    // [SuspendMemorySegmentAccess@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8b508, 0x158b bytes
    // dxgmms2.sys PAGE:0xb4e84, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xda368, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb5454, 0x1c52 bytes
    //
    _p47(sdk::unknown_ptr) suspend_memory_segment_access;
    
    // [SuspendWorkerThread@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5e7b8, 0x158b bytes
    // dxgmms2.sys PAGE:0x858b0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa34bc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x85ea0, 0x1c52 bytes
    //
    _p48(sdk::unknown_ptr) suspend_worker_thread;
    
    // [TerminateAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5e944, 0x158b bytes
    // dxgmms2.sys PAGE:0x7bdb0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x81ba0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7c3a0, 0x1c52 bytes
    //
    _p49(sdk::unknown_ptr) terminate_allocation;
    
    // [TerminateOneAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5cd80, 0x158b bytes
    // dxgmms2.sys PAGE:0x84b9c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x81bc0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8518c, 0x1c52 bytes
    //
    _p50(sdk::unknown_ptr) terminate_one_allocation;
    
    // [TransferProbeAndLockToNewProcess@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8b548, 0x158b bytes
    // dxgmms2.sys PAGE:0x5f424, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa1c1c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5fa14, 0x1c52 bytes
    //
    _p51(sdk::unknown_ptr) transfer_probe_and_lock_to_new_process;
    
    // [TrimMarkedForEvictionAllocations@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8b620, 0x158b bytes
    // dxgmms2.sys PAGE:0xb5008, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xda490, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb55d8, 0x1c52 bytes
    //
    _p52(sdk::unknown_ptr) trim_marked_for_eviction_allocations;
    
    // [TrimOfferCommitmentInternal@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8b684, 0x158b bytes
    // dxgmms2.sys PAGE:0xb5074, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xda4fc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb5644, 0x1c52 bytes
    //
    _p53(sdk::unknown_ptr) trim_offer_commitment_internal;
    
    // [TryPageInDevice@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x568dc, 0x158b bytes
    // dxgmms2.sys PAGE:0x5e5e8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa0bc8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5ebd8, 0x1c52 bytes
    //
    _p54(sdk::unknown_ptr) try_page_in_device;
    
    // [UncommitGlobalBackingStore@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x53120, 0x158b bytes
    // dxgmms2.sys PAGE:0x85d24, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x87884, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86314, 0x1c52 bytes
    //
    _p55(sdk::unknown_ptr) uncommit_global_backing_store;
    
    // [UncommitLocalBackingStore@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5254c, 0x158b bytes
    // dxgmms2.sys PAGE:0x85e7c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8b1dc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8646c, 0x1c52 bytes
    //
    _p56(sdk::unknown_ptr) uncommit_local_backing_store;
    
    // [UncommitVirtualAddressRange@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x54878, 0x158b bytes
    // dxgmms2.sys PAGE:0x73430, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa1158, 0x20ba bytes
    // dxgmms2.sys PAGE:0x73a20, 0x1c52 bytes
    //
    _p57(sdk::unknown_ptr) uncommit_virtual_address_range;
    
    // [UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x547e8, 0x158b bytes
    // dxgmms2.sys PAGE:0x734c4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa11f0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x73ab4, 0x1c52 bytes
    //
    _p58(sdk::unknown_ptr) uncommit_virtual_address_range_system_command;
    
    // [UnderCleanupLimit@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x53c18, 0x158b bytes
    // dxgmms2.sys PAGE:0x60270, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x95d5c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x60860, 0x1c52 bytes
    //
    _p59(sdk::unknown_ptr) under_cleanup_limit;
    
    // [Unlock@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x60a80, 0x158b bytes
    // dxgmms2.sys PAGE:0x6ad80, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8e98c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6b370, 0x1c52 bytes
    //
    _p60(sdk::unknown_ptr) unlock;
    
    // [UnlockAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x540e4, 0x158b bytes
    // dxgmms2.sys PAGE:0x62fa0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x838d8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x63590, 0x1c52 bytes
    //
    _p61(sdk::unknown_ptr) unlock_allocation;
    
    // [UnmapAllPagingBuffers@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x680a8, 0x158b bytes
    // dxgmms2.sys PAGE:0xb5478, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa7b0c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb5a48, 0x1c52 bytes
    //
    _p62(sdk::unknown_ptr) unmap_all_paging_buffers;
    
    // [UnmapCpuVA@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4a4e4, 0x158b bytes
    // dxgmms2.sys PAGE:0x8516c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa1ef8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8575c, 0x1c52 bytes
    //
    _p63(sdk::unknown_ptr) unmap_cpu_va;
    
    // [UnmapGpuVA@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x60c88, 0x158b bytes
    // dxgmms2.sys PAGE:0x812d4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9c140, 0x20ba bytes
    // dxgmms2.sys PAGE:0x818c4, 0x1c52 bytes
    //
    _p64(sdk::unknown_ptr) unmap_gpu_va;
    
    // [UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8b8a8, 0x158b bytes
    // dxgmms2.sys PAGE:0xb556c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa771c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb5b3c, 0x1c52 bytes
    //
    _p65(sdk::unknown_ptr) unmap_video_aperture_segment_internal;
    
    // [UnpinAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6725c, 0x158b bytes
    // dxgmms2.sys PAGE:0xb5744, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa7bb0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb5d14, 0x1c52 bytes
    //
    _p66(sdk::unknown_ptr) unpin_allocation;
    
    // [UnpinOneAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6707c, 0x158b bytes
    // dxgmms2.sys PAGE:0xb5760, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa6798, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb5d30, 0x1c52 bytes
    //
    _p67(sdk::unknown_ptr) unpin_one_allocation;
    
    // [UnreferenceDmaBuffer@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1ceac, 0x158b bytes
    // dxgmms2.sys .text:0x23bf8, 0x1c52 bytes
    // dxgmms2.sys .text:0x2d980, 0x20ba bytes
    // dxgmms2.sys .text:0x23b78, 0x1c52 bytes
    //
    _p68(sdk::unknown_ptr) unreference_dma_buffer;
    
    // [UpdateAllocationPriority@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8ba04, 0x158b bytes
    // dxgmms2.sys PAGE:0xb58f0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xda90c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb5ec0, 0x1c52 bytes
    //
    _p69(sdk::unknown_ptr) update_allocation_priority;
    
    // [UpdateAllocationProperty@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8bb80, 0x158b bytes
    // dxgmms2.sys PAGE:0xb5a54, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdaa74, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb6024, 0x1c52 bytes
    //
    _p70(sdk::unknown_ptr) update_allocation_property;
    
    // [UpdateContextAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8bdd4, 0x158b bytes
    // dxgmms2.sys PAGE:0xb5ce0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdae84, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb62b0, 0x1c52 bytes
    //
    _p71(sdk::unknown_ptr) update_context_allocation;
    
    // [UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8bec4, 0x158b bytes
    // dxgmms2.sys PAGE:0xb5dec, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdaf90, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb63bc, 0x1c52 bytes
    //
    _p72(sdk::unknown_ptr) update_gpu_virtual_address_system_command;
    
    // [UpdatePageTable@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x55190, 0x158b bytes
    // dxgmms2.sys PAGE:0x701f0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x89ba0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x707e0, 0x1c52 bytes
    //
    _p73(sdk::unknown_ptr) update_page_table;
    
    // [ValidateHistoryBuffers@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8c840, 0x158b bytes
    // dxgmms2.sys PAGE:0xb6c9c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdbd90, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb726c, 0x1c52 bytes
    //
    _p74(sdk::unknown_ptr) validate_history_buffers;
    
    // [ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x59438, 0x158b bytes
    // dxgmms2.sys PAGE:0x6de1c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x86ba0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6e40c, 0x1c52 bytes
    //
    _p75(sdk::unknown_ptr) validate_segment_for_acquisition_of_resource;
    
    // [VerifyAllocationIsIdle@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8c8dc, 0x158b bytes
    // dxgmms2.sys PAGE:0xb6de8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa787c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb73b8, 0x1c52 bytes
    //
    _p76(sdk::unknown_ptr) verify_allocation_is_idle;
    
    // [VerifyBudgetGroups@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x59ec8, 0x158b bytes
    // dxgmms2.sys PAGE:0xb6e40, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8b030, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb7410, 0x1c52 bytes
    //
    _p77(sdk::unknown_ptr) verify_budget_groups;
    
    // [VerifyGlobalResidentLimit@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x536bc, 0x158b bytes
    // dxgmms2.sys PAGE:0x84700, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x85d34, 0x20ba bytes
    // dxgmms2.sys PAGE:0x84cf0, 0x1c52 bytes
    //
    _p78(sdk::unknown_ptr) verify_global_resident_limit;
    
    // [VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x88124, 0x158b bytes
    // dxgmms2.sys PAGE:0xb6f60, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdbf44, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb7530, 0x1c52 bytes
    //
    _p79(sdk::unknown_ptr) verify_preferred_segment_is_subset;
    
    // [VerifySegmentSet@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5a2ec, 0x158b bytes
    // dxgmms2.sys PAGE:0x84af0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa62d4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x850e0, 0x1c52 bytes
    //
    _p80(sdk::unknown_ptr) verify_segment_set;
    
    // [VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x88158, 0x158b bytes
    // dxgmms2.sys PAGE:0xb6f9c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdbf80, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb756c, 0x1c52 bytes
    //
    _p81(sdk::unknown_ptr) verify_segment_set_at_least_one_in_mask;
    
    // [VidMmCreateCompanionContext@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8c924, 0x158b bytes
    // dxgmms2.sys PAGE:0xb7044, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdc028, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb7614, 0x1c52 bytes
    //
    _p82(sdk::unknown_ptr) vid_mm_create_companion_context;
    
    // [VidMmEvictAllocation@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8c9c4, 0x158b bytes
    // dxgmms2.sys PAGE:0xb70f4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdc0d4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb76c4, 0x1c52 bytes
    //
    _p83(sdk::unknown_ptr) vid_mm_evict_allocation;
    
    // [VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5f214, 0x158b bytes
    // dxgmms2.sys PAGE:0x815c4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9bf7c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x81bb4, 0x1c52 bytes
    //
    _p84(sdk::unknown_ptr) vid_mm_free_gpu_virtual_address;
    
    // [VidMmGetAllocationFlipQueueReferencesPointer@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x71808, 0x158b bytes
    // dxgmms2.sys PAGE:0xb7460, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdc480, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb7a30, 0x1c52 bytes
    //
    _p85(sdk::unknown_ptr) vid_mm_get_allocation_flip_queue_references_pointer;
    
    // [VidMmGetAllocationGpuVirtualAddress@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5ea20, 0x158b bytes
    // dxgmms2.sys PAGE:0x8419c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9f63c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8478c, 0x1c52 bytes
    //
    _p86(sdk::unknown_ptr) vid_mm_get_allocation_gpu_virtual_address;
    
    // [VidMmInitializePagingProcess@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6d0ac, 0x158b bytes
    // dxgmms2.sys PAGE:0x93030, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb3e00, 0x20ba bytes
    // dxgmms2.sys PAGE:0x93708, 0x1c52 bytes
    //
    _p87(sdk::unknown_ptr) vid_mm_initialize_paging_process;
    
    // [VidMmMapContextAllocationCb@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8ccd4, 0x158b bytes
    // dxgmms2.sys PAGE:0xb7484, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9c3d0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb7a54, 0x1c52 bytes
    //
    _p88(sdk::unknown_ptr) vid_mm_map_context_allocation_cb;
    
    // [VidMmMapGpuVirtualAddress@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5f140, 0x158b bytes
    // dxgmms2.sys PAGE:0x723d0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9b31c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x729c0, 0x1c52 bytes
    //
    _p89(sdk::unknown_ptr) vid_mm_map_gpu_virtual_address;
    
    // [VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x55af0, 0x158b bytes
    // dxgmms2.sys PAGE:0x713e0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9b410, 0x20ba bytes
    // dxgmms2.sys PAGE:0x719d0, 0x1c52 bytes
    //
    _p90(sdk::unknown_ptr) vid_mm_map_gpu_virtual_address_internal;
    
    // [VidMmProbeForDecommit@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8cdc4, 0x158b bytes
    // dxgmms2.sys PAGE:0xb7580, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdc508, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb7b50, 0x1c52 bytes
    //
    _p91(sdk::unknown_ptr) vid_mm_probe_for_decommit;
    
    // [VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5ef60, 0x158b bytes
    // dxgmms2.sys PAGE:0x68ef0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8e720, 0x20ba bytes
    // dxgmms2.sys PAGE:0x694e0, 0x1c52 bytes
    //
    _p92(sdk::unknown_ptr) vid_mm_reference_written_primaries;
    
    // [VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6660c, 0x158b bytes
    // dxgmms2.sys PAGE:0xb769c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9e1dc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb7c6c, 0x1c52 bytes
    //
    _p93(sdk::unknown_ptr) vid_mm_reserve_gpu_virtual_address;
    
    // [VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5eda8, 0x158b bytes
    // dxgmms2.sys PAGE:0x80e18, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9c65c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x81408, 0x1c52 bytes
    //
    _p94(sdk::unknown_ptr) vid_mm_reserve_gpu_virtual_address_range_cb;
    
    // [VidMmSetAllocationFlipQueueReferencesPointer@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8cea8, 0x158b bytes
    // dxgmms2.sys PAGE:0xb78d0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdc624, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb7ea0, 0x1c52 bytes
    //
    _p95(sdk::unknown_ptr) vid_mm_set_allocation_flip_queue_references_pointer;
    
    // [VidMmTerminateCompanionContext@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8cf00, 0x158b bytes
    // dxgmms2.sys PAGE:0xb7938, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdc68c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb7f08, 0x1c52 bytes
    //
    _p96(sdk::unknown_ptr) vid_mm_terminate_companion_context;
    
    // [VidMmTrimOfferCommitment@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8cf08, 0x158b bytes
    // dxgmms2.sys PAGE:0xb798c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdc6e0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb7f5c, 0x1c52 bytes
    //
    _p97(sdk::unknown_ptr) vid_mm_trim_offer_commitment;
    
    // [VidMmUpdateContextAllocationCb@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8d060, 0x158b bytes
    // dxgmms2.sys PAGE:0xb7ad0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdc824, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb80a0, 0x1c52 bytes
    //
    _p98(sdk::unknown_ptr) vid_mm_update_context_allocation_cb;
    
    // [VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8d258, 0x158b bytes
    // dxgmms2.sys PAGE:0xb7cf0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdca74, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb82c0, 0x1c52 bytes
    //
    _p99(sdk::unknown_ptr) vid_mm_update_gpu_virtual_address;
    
    // [VidMmiOfferAllocationCallback@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x108e0, 0x158b bytes
    // dxgmms2.sys .text:0x6080, 0x1c52 bytes
    // dxgmms2.sys .text:0x15d0, 0x20ba bytes
    // dxgmms2.sys .text:0x6080, 0x1c52 bytes
    //
    _q00(sdk::unknown_ptr) vid_mmi_offer_allocation_callback;
    
    // [VidMmiUpdateGpuVirtualAddress@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8dd50, 0x158b bytes
    // dxgmms2.sys PAGE:0xb87f0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdd4f0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb8dc0, 0x1c52 bytes
    //
    _q01(sdk::unknown_ptr) vid_mmi_update_gpu_virtual_address;
    
    // [WaitForAllPagingEngines@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x572a0, 0x158b bytes
    // dxgmms2.sys PAGE:0x64ae8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x86254, 0x20ba bytes
    // dxgmms2.sys PAGE:0x650d8, 0x1c52 bytes
    //
    _q02(sdk::unknown_ptr) wait_for_all_paging_engines;
    
    // [WaitForAllPagingEnginesIdle@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x57268, 0x158b bytes
    // dxgmms2.sys PAGE:0x5e684, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa0c64, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5ec74, 0x1c52 bytes
    //
    _q03(sdk::unknown_ptr) wait_for_all_paging_engines_idle;
    
    // [WaitForFences@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x60410, 0x158b bytes
    // dxgmms2.sys PAGE:0x671e0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8b910, 0x20ba bytes
    // dxgmms2.sys PAGE:0x677d0, 0x1c52 bytes
    //
    _q04(sdk::unknown_ptr) wait_for_fences;
    
    // [WaitOnAllocForceSync@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x57360, 0x158b bytes
    // dxgmms2.sys PAGE:0x62658, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x971b4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x62c48, 0x1c52 bytes
    //
    _q05(sdk::unknown_ptr) wait_on_alloc_force_sync;
    
    // [WaitOnAllocationDmaReferences@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5ed38, 0x158b bytes
    // dxgmms2.sys PAGE:0x625e0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9713c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x62bd0, 0x1c52 bytes
    //
    _q06(sdk::unknown_ptr) wait_on_allocation_dma_references;
    
    // [WaitOnAllocationPresentQueue@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8dde4, 0x158b bytes
    // dxgmms2.sys PAGE:0xb8898, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa5bd0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb8e68, 0x1c52 bytes
    //
    _q07(sdk::unknown_ptr) wait_on_allocation_present_queue;
    
    // [WorkerHasQueuedPaging@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8df74, 0x158b bytes
    // dxgmms2.sys PAGE:0xb8a0c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdd5b4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb8fdc, 0x1c52 bytes
    //
    _q08(sdk::unknown_ptr) worker_has_queued_paging;
    
    // [WritePagingHistoryToMinidump@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x93e58, 0x158b bytes
    // dxgmms2.sys PAGE:0xc1950, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe6474, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc1f20, 0x1c52 bytes
    //
    _q09(sdk::unknown_ptr) write_paging_history_to_minidump;
    
    // [WriteSegmentInformationToMinidump@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8df84, 0x158b bytes
    // dxgmms2.sys PAGE:0xb8a24, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdd5cc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb8ff4, 0x1c52 bytes
    //
    _q10(sdk::unknown_ptr) write_segment_information_to_minidump;
    
    // [xWaitForAllPagingEngines@VIDMM_GLOBAL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x57204, 0x158b bytes
    // dxgmms2.sys PAGE:0x67140, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8b870, 0x20ba bytes
    // dxgmms2.sys PAGE:0x67730, 0x1c52 bytes
    //
    _q11(sdk::unknown_ptr) x_wait_for_all_paging_engines;
};
#include "magic/api.end.hpp"
