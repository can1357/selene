#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace vid
{
    // [VidMemFree]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4d560, 0x13864 bytes
    // win32kfull.sys .text:0x1291d0, 0x1596d bytes
    // win32kfull.sys .text:0x1198f0, 0x1659e bytes
    // win32kfull.sys .text:0x12a110, 0x1596d bytes
    //
    _m00(sdk::unknown_ptr) mem_free;
    
    // [VidSchQueryRequiredDmaQueueEntry]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x126bc, 0x60098 bytes
    //
    _m01(sdk::unknown_ptr) sch_query_required_dma_queue_entry;
    
    // [VidMmTerminateProcessX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x91510, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10c9b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1189e0, 0x762b0 bytes
    //
    _m02(sdk::unknown_ptr) mm_terminate_process_x;
    
    // [VidSchTerminateProcessX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x915c8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10ca54, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x118a84, 0x762b0 bytes
    //
    _m03(sdk::unknown_ptr) sch_terminate_process_x;
    
    // [VidSchSetPriorityClassProcessX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd2054, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x152554, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d7124, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd6de8, 0x762b0 bytes
    //
    _m04(sdk::unknown_ptr) sch_set_priority_class_process_x;
    
    // [VidMmChangeAllocationPinnedRefCount]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x14e70, 0x158b bytes
    //
    _m05(sdk::unknown_ptr) mm_change_allocation_pinned_ref_count;
    
    // [VidMmDelayedEvictionDpc]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x2da20, 0x20ba bytes
    //
    _m06(sdk::unknown_ptr) mm_delayed_eviction_dpc;
    
    // [VidMmGetAllocationPhysicalAddress]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x2c6a0, 0x20ba bytes
    //
    _m07(sdk::unknown_ptr) mm_get_allocation_physical_address;
    
    // [VidMmGetAllocationSectionGlobal]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x2c6e0, 0x20ba bytes
    //
    _m08(sdk::unknown_ptr) mm_get_allocation_section_global;
    
    // [VidMmMapAllocCpuVa]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x2c740, 0x20ba bytes
    //
    _m09(sdk::unknown_ptr) mm_map_alloc_cpu_va;
    
    // [VidMmUnmapAllocCpuVa]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x2c740, 0x20ba bytes
    //
    _m10(sdk::unknown_ptr) mm_unmap_alloc_cpu_va;
    
    // [VidMmiAddProbeAndLockReference]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0x857dc, 0x20ba bytes
    //
    _m11(sdk::unknown_ptr) mmi_add_probe_and_lock_reference;
    
    // [VidMmiGetLogicalAddress]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xe21bc, 0x20ba bytes
    //
    _m12(sdk::unknown_ptr) mmi_get_logical_address;
    
    // [VidMmiRemoveProbeAndLockReference]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0x839ec, 0x20ba bytes
    //
    _m13(sdk::unknown_ptr) mmi_remove_probe_and_lock_reference;
    
    // [VidMmiTickCountTo100ns]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xe21e0, 0x20ba bytes
    //
    _m14(sdk::unknown_ptr) mmi_tick_count_to100ns;
    
    // [VidSchBlockUntilNoUnorderedWaitsInContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x9f6c0, 0x158b bytes
    //
    _m15(sdk::unknown_ptr) sch_block_until_no_unordered_waits_in_context;
    
    // [VidSchCancelPresentAtFlips]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x3c230, 0x20ba bytes
    //
    _m16(sdk::unknown_ptr) sch_cancel_present_at_flips;
    
    // [VidSchGetProcessTelemetry]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xa3cd0, 0x20ba bytes
    //
    _m17(sdk::unknown_ptr) sch_get_process_telemetry;
    
    // [VidSchIncrementNumberOfMmIoFlipCommandPackets]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x10d08, 0x158b bytes
    //
    _m18(sdk::unknown_ptr) sch_increment_number_of_mm_io_flip_command_packets;
    
    // [VidSchLogWaitForVBlankRequest]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xa3da0, 0x20ba bytes
    //
    _m19(sdk::unknown_ptr) sch_log_wait_for_v_blank_request;
    
    // [VidSchOverlayPlaneAttributes]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x26680, 0x158b bytes
    //
    _m20(sdk::unknown_ptr) sch_overlay_plane_attributes;
    
    // [VidSchPresentDurationPlane]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x3d420, 0x20ba bytes
    //
    _m21(sdk::unknown_ptr) sch_present_duration_plane;
    
    // [VidSchUnreferenceDisplayingAllocationInternal]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x26c40, 0x158b bytes
    //
    _m22(sdk::unknown_ptr) sch_unreference_displaying_allocation_internal;
    
    // [VidSchiAbortSoftwarePacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x34068, 0x20ba bytes
    //
    _m23(sdk::unknown_ptr) schi_abort_software_packet;
    
    // [VidSchiAcceptDriverCallback]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x6f990, 0x158b bytes
    //
    _m24(sdk::unknown_ptr) schi_accept_driver_callback;
    
    // [VidSchiAcquireFlipFencesReference]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x75c0, 0x20ba bytes
    //
    _m25(sdk::unknown_ptr) schi_acquire_flip_fences_reference;
    
    // [VidSchiCancelHwQueuedFlips]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x4518c, 0x20ba bytes
    //
    _m26(sdk::unknown_ptr) schi_cancel_hw_queued_flips;
    
    // [VidSchiCancelQueuedFlips]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x453e8, 0x20ba bytes
    //
    _m27(sdk::unknown_ptr) schi_cancel_queued_flips;
    
    // [VidSchiCancelQueuedFlipsAtISR]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x454a0, 0x20ba bytes
    //
    _m28(sdk::unknown_ptr) schi_cancel_queued_flips_at_isr;
    
    // [VidSchiCancelQueuedIndependentFlips]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x342a8, 0x20ba bytes
    //
    _m29(sdk::unknown_ptr) schi_cancel_queued_independent_flips;
    
    // [VidSchiCheckHeadTimeout]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0xd110, 0x20ba bytes
    //
    _m30(sdk::unknown_ptr) schi_check_head_timeout;
    
    // [VidSchiCheckHwSchNodeProgress]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x3e8e8, 0x20ba bytes
    //
    _m31(sdk::unknown_ptr) schi_check_hw_sch_node_progress;
    
    // [VidSchiCheckPendingFlipsForThisEntry]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0xfec4, 0x20ba bytes
    //
    _m32(sdk::unknown_ptr) schi_check_pending_flips_for_this_entry;
    
    // [VidSchiDecrementPendingFlipsForFlipEntry]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x45570, 0x20ba bytes
    //
    _m33(sdk::unknown_ptr) schi_decrement_pending_flips_for_flip_entry;
    
    // [VidSchiEmptyAllHwQueues]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x66b98, 0x158b bytes
    //
    _m34(sdk::unknown_ptr) schi_empty_all_hw_queues;
    
    // [VidSchiEnsureHwFlipQueueLog]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xf630c, 0x20ba bytes
    //
    _m35(sdk::unknown_ptr) schi_ensure_hw_flip_queue_log;
    
    // [VidSchiExecutePostPresentAtPassiveLevel]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x23b30, 0x158b bytes
    //
    _m36(sdk::unknown_ptr) schi_execute_post_present_at_passive_level;
    
    // [VidSchiFindPriorityLevelToSchedule]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x23d34, 0x158b bytes
    //
    _m37(sdk::unknown_ptr) schi_find_priority_level_to_schedule;
    
    // [VidSchiFlipImmediateAndCompleteFlipEntry]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x11ef8, 0x158b bytes
    //
    _m38(sdk::unknown_ptr) schi_flip_immediate_and_complete_flip_entry;
    
    // [VidSchiGetCurrentVSyncPeriodQpc]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x6694, 0x20ba bytes
    //
    _m39(sdk::unknown_ptr) schi_get_current_v_sync_period_qpc;
    
    // [VidSchiIncrementPendingFlipsForFlipEntry]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x4572c, 0x20ba bytes
    //
    _m40(sdk::unknown_ptr) schi_increment_pending_flips_for_flip_entry;
    
    // [VidSchiIsExpectedVSyncCookie3]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x45850, 0x20ba bytes
    //
    _m41(sdk::unknown_ptr) schi_is_expected_v_sync_cookie3;
    
    // [VidSchiIsFlipQueuePacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x12b30, 0x158b bytes
    //
    _m42(sdk::unknown_ptr) schi_is_flip_queue_packet;
    
    // [VidSchiIsWaitingOnAsyncCompletion]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x1bd24, 0x20ba bytes
    //
    _m43(sdk::unknown_ptr) schi_is_waiting_on_async_completion;
    
    // [VidSchiLogAggregatedTelemetry]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x16cd4, 0x20ba bytes
    //
    _m44(sdk::unknown_ptr) schi_log_aggregated_telemetry;
    
    // [VidSchiProcessIsrVSyncMultiPlaneOverlay3]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x35004, 0x20ba bytes
    //
    _m45(sdk::unknown_ptr) schi_process_isr_v_sync_multi_plane_overlay3;
    
    // [VidSchiQueueAsyncOperation]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x3fe20, 0x20ba bytes
    //
    _m46(sdk::unknown_ptr) schi_queue_async_operation;
    
    // [VidSchiRecalculateInterruptTargetForFlipQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x459cc, 0x20ba bytes
    //
    _m47(sdk::unknown_ptr) schi_recalculate_interrupt_target_for_flip_queue;
    
    // [VidSchiReleaseFlipFencesReference]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x35160, 0x20ba bytes
    //
    _m48(sdk::unknown_ptr) schi_release_flip_fences_reference;
    
    // [VidSchiRundownUnorderedWaiterGlobal]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x3a00c, 0x20ba bytes
    //
    _m49(sdk::unknown_ptr) schi_rundown_unordered_waiter_global;
    
    // [VidSchiSelectDriverPresentDuration]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x113e0, 0x20ba bytes
    //
    _m50(sdk::unknown_ptr) schi_select_driver_present_duration;
    
    // [VidSchiSelectReadyNode]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x21860, 0x158b bytes
    //
    _m51(sdk::unknown_ptr) schi_select_ready_node;
    
    // [VidSchiSetInterruptTargetPresentId]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x45b10, 0x20ba bytes
    //
    _m52(sdk::unknown_ptr) schi_set_interrupt_target_present_id;
    
    // [VidSchiSetInterruptTargetPresentIdAtISR]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x45ce0, 0x20ba bytes
    //
    _m53(sdk::unknown_ptr) schi_set_interrupt_target_present_id_at_isr;
    
    // [VidSchiSetNextFlipEarliestIdealTime]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x45d24, 0x20ba bytes
    //
    _m54(sdk::unknown_ptr) schi_set_next_flip_earliest_ideal_time;
    
    // [VidSchiSignalRuntimeFenceForCompletedFlipEntry]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x4f90, 0x20ba bytes
    //
    _m55(sdk::unknown_ptr) schi_signal_runtime_fence_for_completed_flip_entry;
    
    // [VidSchiSkipXboxNodeTimeout]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x3a4a4, 0x20ba bytes
    //
    _m56(sdk::unknown_ptr) schi_skip_xbox_node_timeout;
    
    // [VidSchiSkipXboxVsyncTimeout]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x3a5c0, 0x20ba bytes
    //
    _m57(sdk::unknown_ptr) schi_skip_xbox_vsync_timeout;
    
    // [VidSchiStartExecutionTimeAtThisPriorityBand]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1070, 0x158b bytes
    //
    _m58(sdk::unknown_ptr) schi_start_execution_time_at_this_priority_band;
    
    // [VidSchiStartHwSchNodeProgressMonitoring]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x403e4, 0x20ba bytes
    //
    _m59(sdk::unknown_ptr) schi_start_hw_sch_node_progress_monitoring;
    
    // [VidSchiSubmitDeviceCommand]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x643a0, 0x158b bytes
    //
    _m60(sdk::unknown_ptr) schi_submit_device_command;
    
    // [VidSchiSuspend]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x66a58, 0x158b bytes
    //
    _m61(sdk::unknown_ptr) schi_suspend;
    
    // [VidSchiSynchronouslyCancelPendingFlips]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x45d9c, 0x20ba bytes
    //
    _m62(sdk::unknown_ptr) schi_synchronously_cancel_pending_flips;
    
    // [VidSchiTraceHwFlipQueueLogUpdate]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x35e90, 0x20ba bytes
    //
    _m63(sdk::unknown_ptr) schi_trace_hw_flip_queue_log_update;
    
    // [VidSchiUpdateFlipDeviceStatus]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1014c, 0x158b bytes
    //
    _m64(sdk::unknown_ptr) schi_update_flip_device_status;
    
    // [VidSchiUpdateFlipTelemetryStats]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x11a58, 0x20ba bytes
    //
    _m65(sdk::unknown_ptr) schi_update_flip_telemetry_stats;
    
    // [VidSchiUpdateLastPresentIdFromVSyncCookie]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x45f50, 0x20ba bytes
    //
    _m66(sdk::unknown_ptr) schi_update_last_present_id_from_v_sync_cookie;
    
    // [VidSchiUpdateVSyncMultiplier]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x1de7a, 0x20ba bytes
    //
    _m67(sdk::unknown_ptr) schi_update_v_sync_multiplier;
    
    // [VidSchiValidateHwFlipQueueCompletionTimestamp]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x46098, 0x20ba bytes
    //
    _m68(sdk::unknown_ptr) schi_validate_hw_flip_queue_completion_timestamp;
    
    // [VidSchiVirtualizeFlipInterval]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x122f0, 0x20ba bytes
    //
    _m69(sdk::unknown_ptr) schi_virtualize_flip_interval;
    
    // [VidSchSubmitPagingCommand]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x65e6c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x6645c, 0x1c52 bytes
    //
    _m70(sdk::unknown_ptr) sch_submit_paging_command;
    
    // [VidSchiFillPreemptCommandData]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys .text:0x13e9c, 0x1c52 bytes
    // dxgmms2.sys .text:0x13e9c, 0x1c52 bytes
    //
    _m71(sdk::unknown_ptr) schi_fill_preempt_command_data;
    
    // [VidMmAllocateVirtualMemory]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x76b90, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x80a48, 0x20ba bytes
    // dxgmms2.sys PAGE:0x77180, 0x1c52 bytes
    //
    _m72(sdk::unknown_ptr) mm_allocate_virtual_memory;
    
    // [VidMmCloseAdapter]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12560, 0x1c52 bytes
    // dxgmms2.sys .text:0x18bc0, 0x20ba bytes
    // dxgmms2.sys .text:0x12560, 0x1c52 bytes
    //
    _m73(sdk::unknown_ptr) mm_close_adapter;
    
    // [VidMmCreateCrossAdapterAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x22940, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cba0, 0x20ba bytes
    // dxgmms2.sys .text:0x228c0, 0x1c52 bytes
    //
    _m74(sdk::unknown_ptr) mm_create_cross_adapter_allocation;
    
    // [VidMmDelayExecution]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x22330, 0x1c52 bytes
    // dxgmms2.sys .text:0x2c590, 0x20ba bytes
    // dxgmms2.sys .text:0x222b0, 0x1c52 bytes
    //
    _m75(sdk::unknown_ptr) mm_delay_execution;
    
    // [VidMmDisableIoMmuIsolation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x22360, 0x1c52 bytes
    // dxgmms2.sys .text:0x2c5c0, 0x20ba bytes
    // dxgmms2.sys .text:0x222e0, 0x1c52 bytes
    //
    _m76(sdk::unknown_ptr) mm_disable_io_mmu_isolation;
    
    // [VidMmEnableIoMmuIsolation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x22380, 0x1c52 bytes
    // dxgmms2.sys .text:0x2c5e0, 0x20ba bytes
    // dxgmms2.sys .text:0x22300, 0x1c52 bytes
    //
    _m77(sdk::unknown_ptr) mm_enable_io_mmu_isolation;
    
    // [VidMmGetAllocationPriority]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x145e0, 0x1c52 bytes
    // dxgmms2.sys .text:0x18de0, 0x20ba bytes
    // dxgmms2.sys .text:0x145e0, 0x1c52 bytes
    //
    _m78(sdk::unknown_ptr) mm_get_allocation_priority;
    
    // [VidMmGetMemoryBudgetTarget]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x22440, 0x1c52 bytes
    // dxgmms2.sys .text:0x2c700, 0x20ba bytes
    // dxgmms2.sys .text:0x223c0, 0x1c52 bytes
    //
    _m79(sdk::unknown_ptr) mm_get_memory_budget_target;
    
    // [VidMmMapPagingProcessGpuVA]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12750, 0x1c52 bytes
    // dxgmms2.sys .text:0x15570, 0x20ba bytes
    // dxgmms2.sys .text:0x12750, 0x1c52 bytes
    //
    _m80(sdk::unknown_ptr) mm_map_paging_process_gpu_va;
    
    // [VidMmNotifyShutdown]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x22ab0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2ccb0, 0x20ba bytes
    // dxgmms2.sys .text:0x22a30, 0x1c52 bytes
    //
    _m81(sdk::unknown_ptr) mm_notify_shutdown;
    
    // [VidMmOpenAdapter]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12500, 0x1c52 bytes
    // dxgmms2.sys .text:0x18b90, 0x20ba bytes
    // dxgmms2.sys .text:0x12500, 0x1c52 bytes
    //
    _m82(sdk::unknown_ptr) mm_open_adapter;
    
    // [VidMmPinAllocationAt]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x22b00, 0x1c52 bytes
    // dxgmms2.sys .text:0x2ccd0, 0x20ba bytes
    // dxgmms2.sys .text:0x22a80, 0x1c52 bytes
    //
    _m83(sdk::unknown_ptr) mm_pin_allocation_at;
    
    // [VidMmSetExistingSysMemStore]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x22cf0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2ce30, 0x20ba bytes
    // dxgmms2.sys .text:0x22c70, 0x1c52 bytes
    //
    _m84(sdk::unknown_ptr) mm_set_existing_sys_mem_store;
    
    // [VidMmSetMemoryBudgetTarget]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x22660, 0x1c52 bytes
    // dxgmms2.sys .text:0x2c8c0, 0x20ba bytes
    // dxgmms2.sys .text:0x225e0, 0x1c52 bytes
    //
    _m85(sdk::unknown_ptr) mm_set_memory_budget_target;
    
    // [VidMmUnblockUEFIFrameBufferRanges]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x22db0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cef0, 0x20ba bytes
    // dxgmms2.sys .text:0x22d30, 0x1c52 bytes
    //
    _m86(sdk::unknown_ptr) mm_unblock_uefi_frame_buffer_ranges;
    
    // [VidMmUnmapPagingProcessGpuVA]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x22720, 0x1c52 bytes
    // dxgmms2.sys .text:0x2c980, 0x20ba bytes
    // dxgmms2.sys .text:0x226a0, 0x1c52 bytes
    //
    _m87(sdk::unknown_ptr) mm_unmap_paging_process_gpu_va;
    
    // [VidMmUnpinAllocAsync]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xbd280, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa5b74, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbd850, 0x1c52 bytes
    //
    _m88(sdk::unknown_ptr) mm_unpin_alloc_async;
    
    // [VidMmiCalculateNewOwnerOffset]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc075c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3b38, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc0d2c, 0x1c52 bytes
    //
    _m89(sdk::unknown_ptr) mmi_calculate_new_owner_offset;
    
    // [VidMmiClosePartition]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x27b0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2504, 0x20ba bytes
    // dxgmms2.sys .text:0x27b0, 0x1c52 bytes
    //
    _m90(sdk::unknown_ptr) mmi_close_partition;
    
    // [VidMmiClosePerfCounters]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x26df4, 0x1c52 bytes
    // dxgmms2.sys .text:0x30f2c, 0x20ba bytes
    // dxgmms2.sys .text:0x26d74, 0x1c52 bytes
    //
    _m91(sdk::unknown_ptr) mmi_close_perf_counters;
    
    // [VidMmiIsSaveableResource]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb87d0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdd4d0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb8da0, 0x1c52 bytes
    //
    _m92(sdk::unknown_ptr) mmi_is_saveable_resource;
    
    // [VidMmiLogEndVaRangeMapping]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc0788, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3b54, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc0d58, 0x1c52 bytes
    //
    _m93(sdk::unknown_ptr) mmi_log_end_va_range_mapping;
    
    // [VidMmiMoveAndFlipDisplayingAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc6f08, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe9cf8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc74d8, 0x1c52 bytes
    //
    _m94(sdk::unknown_ptr) mmi_move_and_flip_displaying_allocation;
    
    // [VidMmiOpenCurrentPartition]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x319c, 0x1c52 bytes
    // dxgmms2.sys .text:0x1d88, 0x20ba bytes
    // dxgmms2.sys .text:0x319c, 0x1c52 bytes
    //
    _m95(sdk::unknown_ptr) mmi_open_current_partition;
    
    // [VidMmiReferencePartition]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2b08, 0x1c52 bytes
    // dxgmms2.sys .text:0x27b8, 0x20ba bytes
    // dxgmms2.sys .text:0x2b08, 0x1c52 bytes
    //
    _m96(sdk::unknown_ptr) mmi_reference_partition;
    
    // [VidMmiTestUpdatePageData]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x54220, 0x158b bytes
    // dxgmms2.sys PAGE:0x73520, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x73b10, 0x1c52 bytes
    //
    _m97(sdk::unknown_ptr) mmi_test_update_page_data;
    
    // [VidSchBlockUntilNoUnorderedWaitsInDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xd2170, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf4220, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd2910, 0x1c52 bytes
    //
    _m98(sdk::unknown_ptr) sch_block_until_no_unordered_waits_in_device;
    
    // [VidSchCalculatePeriodicMonitoredFenceTimerDueTime]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x32c7c, 0x1c52 bytes
    // dxgmms2.sys .text:0x3b2ec, 0x20ba bytes
    // dxgmms2.sys .text:0x32bfc, 0x1c52 bytes
    //
    _m99(sdk::unknown_ptr) sch_calculate_periodic_monitored_fence_timer_due_time;
    
    // [VidSchCaptureLogs]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xd2210, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf42c0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd29b0, 0x1c52 bytes
    //
    _n00(sdk::unknown_ptr) sch_capture_logs;
    
    // [VidSchCreateHwContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xd44b0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf5f50, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd4c50, 0x1c52 bytes
    //
    _n01(sdk::unknown_ptr) sch_create_hw_context;
    
    // [VidSchCreateHwQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x39c00, 0x1c52 bytes
    // dxgmms2.sys .text:0x41410, 0x20ba bytes
    // dxgmms2.sys .text:0x39b80, 0x1c52 bytes
    //
    _n02(sdk::unknown_ptr) sch_create_hw_queue;
    
    // [VidSchCreatePeriodicFrameNotification]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x33c60, 0x1c52 bytes
    // dxgmms2.sys .text:0x3c4f0, 0x20ba bytes
    // dxgmms2.sys .text:0x33be0, 0x1c52 bytes
    //
    _n03(sdk::unknown_ptr) sch_create_periodic_frame_notification;
    
    // [VidSchCreateSchedulingLogs]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x93154, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb3f3c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x9382c, 0x1c52 bytes
    //
    _n04(sdk::unknown_ptr) sch_create_scheduling_logs;
    
    // [VidSchDestroyPeriodicFrameNotification]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x340e0, 0x1c52 bytes
    // dxgmms2.sys .text:0x3c9e0, 0x20ba bytes
    // dxgmms2.sys .text:0x34060, 0x1c52 bytes
    //
    _n05(sdk::unknown_ptr) sch_destroy_periodic_frame_notification;
    
    // [VidSchFlushHwQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x34de0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf4660, 0x20ba bytes
    // dxgmms2.sys .text:0x34d60, 0x1c52 bytes
    //
    _n06(sdk::unknown_ptr) sch_flush_hw_queue;
    
    // [VidSchFlushPresentReferencesAndDisableOverlays]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xd2b50, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa81a0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd32f0, 0x1c52 bytes
    //
    _n07(sdk::unknown_ptr) sch_flush_present_references_and_disable_overlays;
    
    // [VidSchFlushQueuePacketsInternal]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x151ac, 0x1c52 bytes
    // dxgmms2.sys .text:0x1a72c, 0x20ba bytes
    // dxgmms2.sys .text:0x151ac, 0x1c52 bytes
    //
    _n08(sdk::unknown_ptr) sch_flush_queue_packets_internal;
    
    // [VidSchGetContextRunningTime]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x86120, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3c70, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86710, 0x1c52 bytes
    //
    _n09(sdk::unknown_ptr) sch_get_context_running_time;
    
    // [VidSchGetDriverPagingHwQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x34e84, 0x1c52 bytes
    // dxgmms2.sys .text:0x3cfe0, 0x20ba bytes
    // dxgmms2.sys .text:0x34e04, 0x1c52 bytes
    //
    _n10(sdk::unknown_ptr) sch_get_driver_paging_hw_queue;
    
    // [VidSchGetHwContextRunningTime]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x86150, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3ca0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86740, 0x1c52 bytes
    //
    _n11(sdk::unknown_ptr) sch_get_hw_context_running_time;
    
    // [VidSchGetInProcessPriorityHwContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x86260, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3e10, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86850, 0x1c52 bytes
    //
    _n12(sdk::unknown_ptr) sch_get_in_process_priority_hw_context;
    
    // [VidSchGetNumUnorderedWaitsInDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x862e0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa4ea0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x868d0, 0x1c52 bytes
    //
    _n13(sdk::unknown_ptr) sch_get_num_unordered_waits_in_device;
    
    // [VidSchGetYieldPercentage]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x34ec0, 0x1c52 bytes
    // dxgmms2.sys .text:0x3d020, 0x20ba bytes
    // dxgmms2.sys .text:0x34e40, 0x1c52 bytes
    //
    _n14(sdk::unknown_ptr) sch_get_yield_percentage;
    
    // [VidSchInvalidateHwContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x39f40, 0x1c52 bytes
    // dxgmms2.sys .text:0x41730, 0x20ba bytes
    // dxgmms2.sys .text:0x39ec0, 0x1c52 bytes
    //
    _n15(sdk::unknown_ptr) sch_invalidate_hw_context;
    
    // [VidSchPeriodicMonitoredFenceTimerCallback]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x32d20, 0x1c52 bytes
    // dxgmms2.sys .text:0x3b390, 0x20ba bytes
    // dxgmms2.sys .text:0x32ca0, 0x1c52 bytes
    //
    _n16(sdk::unknown_ptr) sch_periodic_monitored_fence_timer_callback;
    
    // [VidSchReportHwQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xd4500, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf5fa0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd4ca0, 0x1c52 bytes
    //
    _n17(sdk::unknown_ptr) sch_report_hw_queue;
    
    // [VidSchResumeSchedulerForSource]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xd3920, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa8220, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd40c0, 0x1c52 bytes
    //
    _n18(sdk::unknown_ptr) sch_resume_scheduler_for_source;
    
    // [VidSchSetAbsolutePriorityContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xd3940, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf55a0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd40e0, 0x1c52 bytes
    //
    _n19(sdk::unknown_ptr) sch_set_absolute_priority_context;
    
    // [VidSchSetAbsolutePriorityHwContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xd4560, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf6000, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd4d00, 0x1c52 bytes
    //
    _n20(sdk::unknown_ptr) sch_set_absolute_priority_hw_context;
    
    // [VidSchSetHwQueueProgressFenceObject]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xd4690, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf6170, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd4e30, 0x1c52 bytes
    //
    _n21(sdk::unknown_ptr) sch_set_hw_queue_progress_fence_object;
    
    // [VidSchSetInProcessPriorityHwContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xd46d0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf61b0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd4e70, 0x1c52 bytes
    //
    _n22(sdk::unknown_ptr) sch_set_in_process_priority_hw_context;
    
    // [VidSchSetPriorityHwContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xd4770, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf6260, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd4f10, 0x1c52 bytes
    //
    _n23(sdk::unknown_ptr) sch_set_priority_hw_context;
    
    // [VidSchSetVidPnSourceAddressWithMultiPlaneOverlay3]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xd3c30, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf5710, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd43d0, 0x1c52 bytes
    //
    _n24(sdk::unknown_ptr) sch_set_vid_pn_source_address_with_multi_plane_overlay3;
    
    // [VidSchSetYieldPercentage]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x35750, 0x1c52 bytes
    // dxgmms2.sys .text:0x3da90, 0x20ba bytes
    // dxgmms2.sys .text:0x356d0, 0x1c52 bytes
    //
    _n25(sdk::unknown_ptr) sch_set_yield_percentage;
    
    // [VidSchSubmitCommandContextless]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x358c0, 0x1c52 bytes
    // dxgmms2.sys .text:0x3dc50, 0x20ba bytes
    // dxgmms2.sys .text:0x35840, 0x1c52 bytes
    //
    _n26(sdk::unknown_ptr) sch_submit_command_contextless;
    
    // [VidSchSubmitCommandToHwQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3a0b0, 0x1c52 bytes
    // dxgmms2.sys .text:0x418b0, 0x20ba bytes
    // dxgmms2.sys .text:0x3a030, 0x1c52 bytes
    //
    _n27(sdk::unknown_ptr) sch_submit_command_to_hw_queue;
    
    // [VidSchSubmitGlobalCommand]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x88484, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa2c88, 0x20ba bytes
    // dxgmms2.sys PAGE:0x88a74, 0x1c52 bytes
    //
    _n28(sdk::unknown_ptr) sch_submit_global_command;
    
    // [VidSchSubmitSignalToHwQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3a400, 0x1c52 bytes
    // dxgmms2.sys .text:0x41ce0, 0x20ba bytes
    // dxgmms2.sys .text:0x3a380, 0x1c52 bytes
    //
    _n29(sdk::unknown_ptr) sch_submit_signal_to_hw_queue;
    
    // [VidSchSubmitWaitToHwQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3a9d0, 0x1c52 bytes
    // dxgmms2.sys .text:0x422d0, 0x20ba bytes
    // dxgmms2.sys .text:0x3a950, 0x1c52 bytes
    //
    _n30(sdk::unknown_ptr) sch_submit_wait_to_hw_queue;
    
    // [VidSchTerminateHwContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3ab60, 0x1c52 bytes
    // dxgmms2.sys .text:0x42490, 0x20ba bytes
    // dxgmms2.sys .text:0x3aae0, 0x1c52 bytes
    //
    _n31(sdk::unknown_ptr) sch_terminate_hw_context;
    
    // [VidSchTerminateHwQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3ac80, 0x1c52 bytes
    // dxgmms2.sys .text:0x42600, 0x20ba bytes
    // dxgmms2.sys .text:0x3ac00, 0x1c52 bytes
    //
    _n32(sdk::unknown_ptr) sch_terminate_hw_queue;
    
    // [VidSchUnregisterCompletionEvent]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xd4350, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf5dec, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd4af0, 0x1c52 bytes
    //
    _n33(sdk::unknown_ptr) sch_unregister_completion_event;
    
    // [VidSchUpdatePostCompositionAttributes]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x35a60, 0x1c52 bytes
    // dxgmms2.sys .text:0x3de30, 0x20ba bytes
    // dxgmms2.sys .text:0x359e0, 0x1c52 bytes
    //
    _n34(sdk::unknown_ptr) sch_update_post_composition_attributes;
    
    // [VidSchValidatePresentFlags]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x60d0, 0x1c52 bytes
    // dxgmms2.sys .text:0x5634, 0x20ba bytes
    // dxgmms2.sys .text:0x60d0, 0x1c52 bytes
    //
    _n35(sdk::unknown_ptr) sch_validate_present_flags;
    
    // [VidSchiAbortMmIoFlipPacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x33168, 0x1c52 bytes
    // dxgmms2.sys .text:0x34008, 0x20ba bytes
    // dxgmms2.sys .text:0x330e8, 0x1c52 bytes
    //
    _n36(sdk::unknown_ptr) schi_abort_mm_io_flip_packet;
    
    // [VidSchiAcceptsIncomingWork]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x9c58, 0x1c52 bytes
    // dxgmms2.sys .text:0x8e60, 0x20ba bytes
    // dxgmms2.sys .text:0x9c58, 0x1c52 bytes
    //
    _n37(sdk::unknown_ptr) schi_accepts_incoming_work;
    
    // [VidSchiAcquirePrivateDataReference]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x79d4, 0x1c52 bytes
    // dxgmms2.sys .text:0x7570, 0x20ba bytes
    // dxgmms2.sys .text:0x79d4, 0x1c52 bytes
    //
    _n38(sdk::unknown_ptr) schi_acquire_private_data_reference;
    
    // [VidSchiAcquireSyncObjectForHwQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x361f0, 0x1c52 bytes
    // dxgmms2.sys .text:0x3e574, 0x20ba bytes
    // dxgmms2.sys .text:0x36170, 0x1c52 bytes
    //
    _n39(sdk::unknown_ptr) schi_acquire_sync_object_for_hw_queue;
    
    // [VidSchiAddSyncObjectToAdapterList]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2efe8, 0x1c52 bytes
    // dxgmms2.sys .text:0x382ec, 0x20ba bytes
    // dxgmms2.sys .text:0x2ef68, 0x1c52 bytes
    //
    _n40(sdk::unknown_ptr) schi_add_sync_object_to_adapter_list;
    
    // [VidSchiAdjustWorkerThreadPriority]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12970, 0x1c52 bytes
    // dxgmms2.sys .text:0x15a00, 0x20ba bytes
    // dxgmms2.sys .text:0x12970, 0x1c52 bytes
    //
    _n41(sdk::unknown_ptr) schi_adjust_worker_thread_priority;
    
    // [VidSchiAllocateHwQueuePacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xd480c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb532a, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd4fac, 0x1c52 bytes
    //
    _n42(sdk::unknown_ptr) schi_allocate_hw_queue_packet;
    
    // [VidSchiAsyncReCreateSchedulingLog]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x36460, 0x1c52 bytes
    // dxgmms2.sys .text:0x3e8a8, 0x20ba bytes
    // dxgmms2.sys .text:0x363e0, 0x1c52 bytes
    //
    _n43(sdk::unknown_ptr) schi_async_re_create_scheduling_log;
    
    // [VidSchiBindFlipPhysicalAddress]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2a5c8, 0x1c52 bytes
    // dxgmms2.sys .text:0x11658, 0x20ba bytes
    // dxgmms2.sys .text:0x2a548, 0x1c52 bytes
    //
    _n44(sdk::unknown_ptr) schi_bind_flip_physical_address;
    
    // [VidSchiCalculatePeriodicTargetFrameNumber]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2f0e0, 0x1c52 bytes
    // dxgmms2.sys .text:0x38400, 0x20ba bytes
    // dxgmms2.sys .text:0x2f060, 0x1c52 bytes
    //
    _n45(sdk::unknown_ptr) schi_calculate_periodic_target_frame_number;
    
    // [VidSchiCalibrateHwClock]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x364f4, 0x1c52 bytes
    // dxgmms2.sys .text:0x1e154, 0x20ba bytes
    // dxgmms2.sys .text:0x36474, 0x1c52 bytes
    //
    _n46(sdk::unknown_ptr) schi_calibrate_hw_clock;
    
    // [VidSchiCaptureRunningProcess]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2a694, 0x1c52 bytes
    // dxgmms2.sys .text:0x3454c, 0x20ba bytes
    // dxgmms2.sys .text:0x2a614, 0x1c52 bytes
    //
    _n47(sdk::unknown_ptr) schi_capture_running_process;
    
    // [VidSchiCleanupPacket_PriorityTable]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xd5778, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf7070, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd5f18, 0x1c52 bytes
    //
    _n48(sdk::unknown_ptr) schi_cleanup_packet_priority_table;
    
    // [VidSchiClearPeriodicFrameNotifications]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2f2a0, 0x1c52 bytes
    // dxgmms2.sys .text:0x1b3d4, 0x20ba bytes
    // dxgmms2.sys .text:0x2f220, 0x1c52 bytes
    //
    _n49(sdk::unknown_ptr) schi_clear_periodic_frame_notifications;
    
    // [VidSchiCompleteAllWaitsPacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2a908, 0x1c52 bytes
    // dxgmms2.sys .text:0x3460c, 0x20ba bytes
    // dxgmms2.sys .text:0x2a888, 0x1c52 bytes
    //
    _n50(sdk::unknown_ptr) schi_complete_all_waits_packet;
    
    // [VidSchiCompleteHwQueuePacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x36608, 0x1c52 bytes
    // dxgmms2.sys .text:0x3e958, 0x20ba bytes
    // dxgmms2.sys .text:0x36588, 0x1c52 bytes
    //
    _n51(sdk::unknown_ptr) schi_complete_hw_queue_packet;
    
    // [VidSchiCompleteHwQueueSignalPacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x36dc4, 0x1c52 bytes
    // dxgmms2.sys .text:0x3f218, 0x20ba bytes
    // dxgmms2.sys .text:0x36d44, 0x1c52 bytes
    //
    _n52(sdk::unknown_ptr) schi_complete_hw_queue_signal_packet;
    
    // [VidSchiCompleteHwQueueWaitPacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x36f58, 0x1c52 bytes
    // dxgmms2.sys .text:0x1e268, 0x20ba bytes
    // dxgmms2.sys .text:0x36ed8, 0x1c52 bytes
    //
    _n53(sdk::unknown_ptr) schi_complete_hw_queue_wait_packet;
    
    // [VidSchiCompletePendingFlipOnPlane]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3ce98, 0x1c52 bytes
    // dxgmms2.sys .text:0x1acc8, 0x20ba bytes
    // dxgmms2.sys .text:0x3ce18, 0x1c52 bytes
    //
    _n54(sdk::unknown_ptr) schi_complete_pending_flip_on_plane;
    
    // [VidSchiComputeFlipEntryStatusAfterFlip]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2f384, 0x1c52 bytes
    // dxgmms2.sys .text:0x11a08, 0x20ba bytes
    // dxgmms2.sys .text:0x2f304, 0x1c52 bytes
    //
    _n55(sdk::unknown_ptr) schi_compute_flip_entry_status_after_flip;
    
    // [VidSchiControlIndependentVidPnVSyncThread]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2a958, 0x1c52 bytes
    // dxgmms2.sys .text:0x3465c, 0x20ba bytes
    // dxgmms2.sys .text:0x2a8d8, 0x1c52 bytes
    //
    _n56(sdk::unknown_ptr) schi_control_independent_vid_pn_v_sync_thread;
    
    // [VidSchiConvertGpuTimeStampToSchedulerUnits]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x36f98, 0x1c52 bytes
    // dxgmms2.sys .text:0x1e2bc, 0x20ba bytes
    // dxgmms2.sys .text:0x36f18, 0x1c52 bytes
    //
    _n57(sdk::unknown_ptr) schi_convert_gpu_time_stamp_to_scheduler_units;
    
    // [VidSchiCreateHwContextInternal]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x37018, 0x1c52 bytes
    // dxgmms2.sys .text:0x3f3ac, 0x20ba bytes
    // dxgmms2.sys .text:0x36f98, 0x1c52 bytes
    //
    _n58(sdk::unknown_ptr) schi_create_hw_context_internal;
    
    // [VidSchiCreateNodeSchedulingLog]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3acf0, 0x1c52 bytes
    // dxgmms2.sys .text:0x42670, 0x20ba bytes
    // dxgmms2.sys .text:0x3ac70, 0x1c52 bytes
    //
    _n59(sdk::unknown_ptr) schi_create_node_scheduling_log;
    
    // [VidSchiDecrementHwContextReference]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x374f0, 0x1c52 bytes
    // dxgmms2.sys .text:0x3f898, 0x20ba bytes
    // dxgmms2.sys .text:0x37470, 0x1c52 bytes
    //
    _n60(sdk::unknown_ptr) schi_decrement_hw_context_reference;
    
    // [VidSchiDecrementHwQueueReference]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x37690, 0x1c52 bytes
    // dxgmms2.sys .text:0x3fa30, 0x20ba bytes
    // dxgmms2.sys .text:0x37610, 0x1c52 bytes
    //
    _n61(sdk::unknown_ptr) schi_decrement_hw_queue_reference;
    
    // [VidSchiDestroyNodeSchedulingLog]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x37840, 0x1c52 bytes
    // dxgmms2.sys .text:0x3fbdc, 0x20ba bytes
    // dxgmms2.sys .text:0x377c0, 0x1c52 bytes
    //
    _n62(sdk::unknown_ptr) schi_destroy_node_scheduling_log;
    
    // [VidSchiDrainFlipQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xd1010, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa6960, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd17b0, 0x1c52 bytes
    //
    _n63(sdk::unknown_ptr) schi_drain_flip_queue;
    
    // [VidSchiEnsureRootPageTableUpdated]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xd49bc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb54d8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd515c, 0x1c52 bytes
    //
    _n64(sdk::unknown_ptr) schi_ensure_root_page_table_updated;
    
    // [VidSchiEnsureVSyncEnabled]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x7cb60, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x92f90, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7d150, 0x1c52 bytes
    //
    _n65(sdk::unknown_ptr) schi_ensure_v_sync_enabled;
    
    // [VidSchiForceTdr]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3cf8c, 0x1c52 bytes
    // dxgmms2.sys .text:0x4465c, 0x20ba bytes
    // dxgmms2.sys .text:0x3cf0c, 0x1c52 bytes
    //
    _n66(sdk::unknown_ptr) schi_force_tdr;
    
    // [VidSchiFreeCompletedHwQueuePacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x37930, 0x1c52 bytes
    // dxgmms2.sys .text:0x1e33c, 0x20ba bytes
    // dxgmms2.sys .text:0x378b0, 0x1c52 bytes
    //
    _n67(sdk::unknown_ptr) schi_free_completed_hw_queue_packet;
    
    // [VidSchiGetNumFlipAllocAttribs]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xd58c0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf71d0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd6060, 0x1c52 bytes
    //
    _n68(sdk::unknown_ptr) schi_get_num_flip_alloc_attribs;
    
    // [VidSchiGetSoftwareOnlyNodeForDriverEngine]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14500, 0x1c52 bytes
    // dxgmms2.sys .text:0x18cc8, 0x20ba bytes
    // dxgmms2.sys .text:0x14500, 0x1c52 bytes
    //
    _n69(sdk::unknown_ptr) schi_get_software_only_node_for_driver_engine;
    
    // [VidSchiGetVSyncSuspended]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3ae8, 0x1c52 bytes
    // dxgmms2.sys .text:0x1323c, 0x20ba bytes
    // dxgmms2.sys .text:0x3ae8, 0x1c52 bytes
    //
    _n70(sdk::unknown_ptr) schi_get_v_sync_suspended;
    
    // [VidSchiHwQueueFull]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x37b9c, 0x1c52 bytes
    // dxgmms2.sys .text:0x3fccc, 0x20ba bytes
    // dxgmms2.sys .text:0x37b1c, 0x1c52 bytes
    //
    _n71(sdk::unknown_ptr) schi_hw_queue_full;
    
    // [VidSchiIncrementHwContextReference]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x37bf4, 0x1c52 bytes
    // dxgmms2.sys .text:0x3fd24, 0x20ba bytes
    // dxgmms2.sys .text:0x37b74, 0x1c52 bytes
    //
    _n72(sdk::unknown_ptr) schi_increment_hw_context_reference;
    
    // [VidSchiIndependentVidPnAdaptiveVSync]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2b08c, 0x1c52 bytes
    // dxgmms2.sys .text:0x3491c, 0x20ba bytes
    // dxgmms2.sys .text:0x2b00c, 0x1c52 bytes
    //
    _n73(sdk::unknown_ptr) schi_independent_vid_pn_adaptive_v_sync;
    
    // [VidSchiInsertCommandToHwQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x37c18, 0x1c52 bytes
    // dxgmms2.sys .text:0x1e59a, 0x20ba bytes
    // dxgmms2.sys .text:0x37b98, 0x1c52 bytes
    //
    _n74(sdk::unknown_ptr) schi_insert_command_to_hw_queue;
    
    // [VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3dadc, 0x1c52 bytes
    // dxgmms2.sys .text:0x1f138, 0x20ba bytes
    // dxgmms2.sys .text:0x3da5c, 0x1c52 bytes
    //
    _n75(sdk::unknown_ptr) schi_interlocked_remove_head_list_if_exist_and_more_than_specified;
    
    // [VidSchiIsDeviceSuspended]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x37df8, 0x1c52 bytes
    // dxgmms2.sys .text:0x3fd48, 0x20ba bytes
    // dxgmms2.sys .text:0x37d78, 0x1c52 bytes
    //
    _n76(sdk::unknown_ptr) schi_is_device_suspended;
    
    // [VidSchiIsFocusHwContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x37e64, 0x1c52 bytes
    // dxgmms2.sys .text:0x1e74a, 0x20ba bytes
    // dxgmms2.sys .text:0x37de4, 0x1c52 bytes
    //
    _n77(sdk::unknown_ptr) schi_is_focus_hw_context;
    
    // [VidSchiIsHardwareCompletedDependingCommandForFlip]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x45bc, 0x1c52 bytes
    // dxgmms2.sys .text:0x385dc, 0x20ba bytes
    // dxgmms2.sys .text:0x45bc, 0x1c52 bytes
    //
    _n78(sdk::unknown_ptr) schi_is_hardware_completed_depending_command_for_flip;
    
    // [VidSchiLogMmIoFlipMultiPlaneOverlay3]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2b268, 0x1c52 bytes
    // dxgmms2.sys .text:0x116f0, 0x20ba bytes
    // dxgmms2.sys .text:0x2b1e8, 0x1c52 bytes
    //
    _n79(sdk::unknown_ptr) schi_log_mm_io_flip_multi_plane_overlay3;
    
    // [VidSchiMonitorRefreshPeriodFromNode]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x135bc, 0x1c52 bytes
    // dxgmms2.sys .text:0x1838c, 0x20ba bytes
    // dxgmms2.sys .text:0x135bc, 0x1c52 bytes
    //
    _n80(sdk::unknown_ptr) schi_monitor_refresh_period_from_node;
    
    // [VidSchiNotifyReadyQueueAdded]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x37e90, 0x1c52 bytes
    // dxgmms2.sys .text:0x1e776, 0x20ba bytes
    // dxgmms2.sys .text:0x37e10, 0x1c52 bytes
    //
    _n81(sdk::unknown_ptr) schi_notify_ready_queue_added;
    
    // [VidSchiNotifyReadyQueueRemoved]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x37f50, 0x1c52 bytes
    // dxgmms2.sys .text:0x1e85c, 0x20ba bytes
    // dxgmms2.sys .text:0x37ed0, 0x1c52 bytes
    //
    _n82(sdk::unknown_ptr) schi_notify_ready_queue_removed;
    
    // [VidSchiPacketBlockedOnWaitCondition]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x38010, 0x1c52 bytes
    // dxgmms2.sys .text:0x1e90e, 0x20ba bytes
    // dxgmms2.sys .text:0x37f90, 0x1c52 bytes
    //
    _n83(sdk::unknown_ptr) schi_packet_blocked_on_wait_condition;
    
    // [VidSchiProcessAsyncOperation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x38180, 0x1c52 bytes
    // dxgmms2.sys .text:0x3fdc0, 0x20ba bytes
    // dxgmms2.sys .text:0x38100, 0x1c52 bytes
    //
    _n84(sdk::unknown_ptr) schi_process_async_operation;
    
    // [VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x331c8, 0x1c52 bytes
    // dxgmms2.sys .text:0x3b804, 0x20ba bytes
    // dxgmms2.sys .text:0x33148, 0x1c52 bytes
    //
    _n85(sdk::unknown_ptr) schi_process_cross_adapter_signaled_sync_objects_from_passive_level;
    
    // [VidSchiProcessGpuEngineTimeoutDpc]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3af20, 0x1c52 bytes
    // dxgmms2.sys .text:0x428a0, 0x20ba bytes
    // dxgmms2.sys .text:0x3aea0, 0x1c52 bytes
    //
    _n86(sdk::unknown_ptr) schi_process_gpu_engine_timeout_dpc;
    
    // [VidSchiProcessHwQueuePageFaultedDpc]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3af88, 0x1c52 bytes
    // dxgmms2.sys .text:0x42908, 0x20ba bytes
    // dxgmms2.sys .text:0x3af08, 0x1c52 bytes
    //
    _n87(sdk::unknown_ptr) schi_process_hw_queue_page_faulted_dpc;
    
    // [VidSchiProcessIsrGpuEngineTimeout]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3b420, 0x1c52 bytes
    // dxgmms2.sys .text:0x42d9c, 0x20ba bytes
    // dxgmms2.sys .text:0x3b3a0, 0x1c52 bytes
    //
    _n88(sdk::unknown_ptr) schi_process_isr_gpu_engine_timeout;
    
    // [VidSchiProcessIsrHwQueuePageFaulted]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3b4a4, 0x1c52 bytes
    // dxgmms2.sys .text:0x42e58, 0x20ba bytes
    // dxgmms2.sys .text:0x3b424, 0x1c52 bytes
    //
    _n89(sdk::unknown_ptr) schi_process_isr_hw_queue_page_faulted;
    
    // [VidSchiProcessIsrMonitoredFenceSignaled]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3b628, 0x1c52 bytes
    // dxgmms2.sys .text:0x1ee86, 0x20ba bytes
    // dxgmms2.sys .text:0x3b5a8, 0x1c52 bytes
    //
    _n90(sdk::unknown_ptr) schi_process_isr_monitored_fence_signaled;
    
    // [VidSchiProcessIsrSchedulingLogFull]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3b6ac, 0x1c52 bytes
    // dxgmms2.sys .text:0x42fe4, 0x20ba bytes
    // dxgmms2.sys .text:0x3b62c, 0x1c52 bytes
    //
    _n91(sdk::unknown_ptr) schi_process_isr_scheduling_log_full;
    
    // [VidSchiProcessIsrSuspendContextCompleted]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3b730, 0x1c52 bytes
    // dxgmms2.sys .text:0x430a0, 0x20ba bytes
    // dxgmms2.sys .text:0x3b6b0, 0x1c52 bytes
    //
    _n92(sdk::unknown_ptr) schi_process_isr_suspend_context_completed;
    
    // [VidSchiProcessMonitoredFenceSignaledDpc]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3b840, 0x1c52 bytes
    // dxgmms2.sys .text:0x1ef40, 0x20ba bytes
    // dxgmms2.sys .text:0x3b7c0, 0x1c52 bytes
    //
    _n93(sdk::unknown_ptr) schi_process_monitored_fence_signaled_dpc;
    
    // [VidSchiProcessPeriodicNotificationCookie]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x304d4, 0x1c52 bytes
    // dxgmms2.sys .text:0x38b8c, 0x20ba bytes
    // dxgmms2.sys .text:0x30454, 0x1c52 bytes
    //
    _n94(sdk::unknown_ptr) schi_process_periodic_notification_cookie;
    
    // [VidSchiProcessSuspendContextCompletedDpc]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3b8ec, 0x1c52 bytes
    // dxgmms2.sys .text:0x431d8, 0x20ba bytes
    // dxgmms2.sys .text:0x3b86c, 0x1c52 bytes
    //
    _n95(sdk::unknown_ptr) schi_process_suspend_context_completed_dpc;
    
    // [VidSchiRedirectedFlipWaitOnSyncObject]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x30930, 0x1c52 bytes
    // dxgmms2.sys .text:0x390bc, 0x20ba bytes
    // dxgmms2.sys .text:0x308b0, 0x1c52 bytes
    //
    _n96(sdk::unknown_ptr) schi_redirected_flip_wait_on_sync_object;
    
    // [VidSchiReferenceDisplayingAllocationsForThisEntry]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x5960, 0x1c52 bytes
    // dxgmms2.sys .text:0x50e0, 0x20ba bytes
    // dxgmms2.sys .text:0x5960, 0x1c52 bytes
    //
    _n97(sdk::unknown_ptr) schi_reference_displaying_allocations_for_this_entry;
    
    // [VidSchiReleasePacketToGpu]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x381e0, 0x1c52 bytes
    // dxgmms2.sys .text:0x1ea6e, 0x20ba bytes
    // dxgmms2.sys .text:0x38160, 0x1c52 bytes
    //
    _n98(sdk::unknown_ptr) schi_release_packet_to_gpu;
    
    // [VidSchiReleasePrivateDataReference]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x13dc8, 0x1c52 bytes
    // dxgmms2.sys .text:0x169f4, 0x20ba bytes
    // dxgmms2.sys .text:0x13dc8, 0x1c52 bytes
    //
    _n99(sdk::unknown_ptr) schi_release_private_data_reference;
    
    // [VidSchiRemoveHwQueueFromSyncPoints]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x38304, 0x1c52 bytes
    // dxgmms2.sys .text:0x3ff18, 0x20ba bytes
    // dxgmms2.sys .text:0x38284, 0x1c52 bytes
    //
    _o00(sdk::unknown_ptr) schi_remove_hw_queue_from_sync_points;
    
    // [VidSchiResetHwEngine]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3ba60, 0x1c52 bytes
    // dxgmms2.sys .text:0x43350, 0x20ba bytes
    // dxgmms2.sys .text:0x3b9e0, 0x1c52 bytes
    //
    _o01(sdk::unknown_ptr) schi_reset_hw_engine;
    
    // [VidSchiResume]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xd16b8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf3964, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd1e58, 0x1c52 bytes
    //
    _o02(sdk::unknown_ptr) schi_resume;
    
    // [VidSchiRundownHardwareContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x383b4, 0x1c52 bytes
    // dxgmms2.sys .text:0x3ffc8, 0x20ba bytes
    // dxgmms2.sys .text:0x38334, 0x1c52 bytes
    //
    _o03(sdk::unknown_ptr) schi_rundown_hardware_context;
    
    // [VidSchiRundownHardwarePacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x38470, 0x1c52 bytes
    // dxgmms2.sys .text:0x4011c, 0x20ba bytes
    // dxgmms2.sys .text:0x383f0, 0x1c52 bytes
    //
    _o04(sdk::unknown_ptr) schi_rundown_hardware_packet;
    
    // [VidSchiRundownHardwareScheduledContexts]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x38578, 0x1c52 bytes
    // dxgmms2.sys .text:0x401dc, 0x20ba bytes
    // dxgmms2.sys .text:0x384f8, 0x1c52 bytes
    //
    _o05(sdk::unknown_ptr) schi_rundown_hardware_scheduled_contexts;
    
    // [VidSchiRundownUnorderedWaiterHwQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3323c, 0x1c52 bytes
    // dxgmms2.sys .text:0x3b878, 0x20ba bytes
    // dxgmms2.sys .text:0x331bc, 0x1c52 bytes
    //
    _o06(sdk::unknown_ptr) schi_rundown_unordered_waiter_hw_queue;
    
    // [VidSchiRundownUnorderedWaiterPacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2bda4, 0x1c52 bytes
    // dxgmms2.sys .text:0x35268, 0x20ba bytes
    // dxgmms2.sys .text:0x2bd24, 0x1c52 bytes
    //
    _o07(sdk::unknown_ptr) schi_rundown_unordered_waiter_packet;
    
    // [VidSchiSelectPresentAtFlip]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2be10, 0x1c52 bytes
    // dxgmms2.sys .text:0x352d4, 0x20ba bytes
    // dxgmms2.sys .text:0x2bd90, 0x1c52 bytes
    //
    _o08(sdk::unknown_ptr) schi_select_present_at_flip;
    
    // [VidSchiSerializeSchedulingLog]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xd4b24, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf6418, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd52c4, 0x1c52 bytes
    //
    _o09(sdk::unknown_ptr) schi_serialize_scheduling_log;
    
    // [VidSchiSetHwNodeResettingStateAtISR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x38610, 0x1c52 bytes
    // dxgmms2.sys .text:0x40270, 0x20ba bytes
    // dxgmms2.sys .text:0x38590, 0x1c52 bytes
    //
    _o10(sdk::unknown_ptr) schi_set_hw_node_resetting_state_at_isr;
    
    // [VidSchiSetHwQueueState]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x38650, 0x1c52 bytes
    // dxgmms2.sys .text:0x402b0, 0x20ba bytes
    // dxgmms2.sys .text:0x385d0, 0x1c52 bytes
    //
    _o11(sdk::unknown_ptr) schi_set_hw_queue_state;
    
    // [VidSchiSetPagingHwContextPageDirectory]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xd440c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf5ea8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd4bac, 0x1c52 bytes
    //
    _o12(sdk::unknown_ptr) schi_set_paging_hw_context_page_directory;
    
    // [VidSchiSetVSyncSuspended]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x13a54, 0x1c52 bytes
    // dxgmms2.sys .text:0x124f8, 0x20ba bytes
    // dxgmms2.sys .text:0x13a54, 0x1c52 bytes
    //
    _o13(sdk::unknown_ptr) schi_set_v_sync_suspended;
    
    // [VidSchiSetupMmIoFlipMultiPlaneOverlay3]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x31910, 0x1c52 bytes
    // dxgmms2.sys .text:0x10ea0, 0x20ba bytes
    // dxgmms2.sys .text:0x31890, 0x1c52 bytes
    //
    _o14(sdk::unknown_ptr) schi_setup_mm_io_flip_multi_plane_overlay3;
    
    // [VidSchiSignalFlipEvents]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys .text:0xf404, 0x158b bytes
    // dxgmms2.sys .text:0x54c0, 0x1c52 bytes
    // dxgmms2.sys .text:0x54c0, 0x1c52 bytes
    //
    _o15(sdk::unknown_ptr) schi_signal_flip_events;
    
    // [VidSchiSignalSyncObjectsFromCpu]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x33288, 0x1c52 bytes
    // dxgmms2.sys .text:0x3b8c4, 0x20ba bytes
    // dxgmms2.sys .text:0x33208, 0x1c52 bytes
    //
    _o16(sdk::unknown_ptr) schi_signal_sync_objects_from_cpu;
    
    // [VidSchiSimulateProgressFenceCompletion]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x386b8, 0x1c52 bytes
    // dxgmms2.sys .text:0x40318, 0x20ba bytes
    // dxgmms2.sys .text:0x38638, 0x1c52 bytes
    //
    _o17(sdk::unknown_ptr) schi_simulate_progress_fence_completion;
    
    // [VidSchiSubmitCommandPacketToHwQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3c114, 0x1c52 bytes
    // dxgmms2.sys .text:0x1efea, 0x20ba bytes
    // dxgmms2.sys .text:0x3c094, 0x1c52 bytes
    //
    _o18(sdk::unknown_ptr) schi_submit_command_packet_to_hw_queue;
    
    // [VidSchiSubmitDisablePlanesFlip]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2c1f0, 0x1c52 bytes
    // dxgmms2.sys .text:0x1b438, 0x20ba bytes
    // dxgmms2.sys .text:0x2c170, 0x1c52 bytes
    //
    _o19(sdk::unknown_ptr) schi_submit_disable_planes_flip;
    
    // [VidSchiSubmitHwPagingCommand]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xd4c2c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf6520, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd53cc, 0x1c52 bytes
    //
    _o20(sdk::unknown_ptr) schi_submit_hw_paging_command;
    
    // [VidSchiSubmitHwQueueMmIoFlipCommand]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x38784, 0x1c52 bytes
    // dxgmms2.sys .text:0x40444, 0x20ba bytes
    // dxgmms2.sys .text:0x38704, 0x1c52 bytes
    //
    _o21(sdk::unknown_ptr) schi_submit_hw_queue_mm_io_flip_command;
    
    // [VidSchiSuspendResumeHwContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3c238, 0x1c52 bytes
    // dxgmms2.sys .text:0x439f4, 0x20ba bytes
    // dxgmms2.sys .text:0x3c1b8, 0x1c52 bytes
    //
    _o22(sdk::unknown_ptr) schi_suspend_resume_hw_context;
    
    // [VidSchiSuspendResumeHwContexts]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x17c8, 0x1c52 bytes
    // dxgmms2.sys .text:0x14474, 0x20ba bytes
    // dxgmms2.sys .text:0x17c8, 0x1c52 bytes
    //
    _o23(sdk::unknown_ptr) schi_suspend_resume_hw_contexts;
    
    // [VidSchiSwitchFromSuspendedDevices]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14d40, 0x1c52 bytes
    // dxgmms2.sys .text:0x137a0, 0x20ba bytes
    // dxgmms2.sys .text:0x14d40, 0x1c52 bytes
    //
    _o24(sdk::unknown_ptr) schi_switch_from_suspended_devices;
    
    // [VidSchiTryCompleteHwQueuePacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3943c, 0x1c52 bytes
    // dxgmms2.sys .text:0x1eb84, 0x20ba bytes
    // dxgmms2.sys .text:0x393bc, 0x1c52 bytes
    //
    _o25(sdk::unknown_ptr) schi_try_complete_hw_queue_packet;
    
    // [VidSchiUnlinkCrossAdapterSyncObjects]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x320cc, 0x1c52 bytes
    // dxgmms2.sys .text:0x3a8b8, 0x20ba bytes
    // dxgmms2.sys .text:0x3204c, 0x1c52 bytes
    //
    _o26(sdk::unknown_ptr) schi_unlink_cross_adapter_sync_objects;
    
    // [VidSchiUnreferenceDisplayingAllocationsForThisEntry]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3218c, 0x1c52 bytes
    // dxgmms2.sys .text:0x3c74, 0x20ba bytes
    // dxgmms2.sys .text:0x3210c, 0x1c52 bytes
    //
    _o27(sdk::unknown_ptr) schi_unreference_displaying_allocations_for_this_entry;
    
    // [VidSchiUnwaitNodeHwQueueProgress]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3958c, 0x1c52 bytes
    // dxgmms2.sys .text:0x1ec9a, 0x20ba bytes
    // dxgmms2.sys .text:0x3950c, 0x1c52 bytes
    //
    _o28(sdk::unknown_ptr) schi_unwait_node_hw_queue_progress;
    
    // [VidSchiUpdateDdiHwContextPriority]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xd4cfc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf65f0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd549c, 0x1c52 bytes
    //
    _o29(sdk::unknown_ptr) schi_update_ddi_hw_context_priority;
    
    // [VidSchiUpdateFlipQueueHistory]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x10e90, 0x1c52 bytes
    // dxgmms2.sys .text:0x13258, 0x20ba bytes
    // dxgmms2.sys .text:0x10e90, 0x1c52 bytes
    //
    _o30(sdk::unknown_ptr) schi_update_flip_queue_history;
    
    // [VidSchiUpdateHwSchRunningTime]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x39768, 0x1c52 bytes
    // dxgmms2.sys .text:0x40f74, 0x20ba bytes
    // dxgmms2.sys .text:0x396e8, 0x1c52 bytes
    //
    _o31(sdk::unknown_ptr) schi_update_hw_sch_running_time;
    
    // [VidSchiUpdateNodeYieldStatus]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x13424, 0x1c52 bytes
    // dxgmms2.sys .text:0x181f8, 0x20ba bytes
    // dxgmms2.sys .text:0x13424, 0x1c52 bytes
    //
    _o32(sdk::unknown_ptr) schi_update_node_yield_status;
    
    // [VidSchiUpdateReadyBitsInNewPriority]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2cedc, 0x1c52 bytes
    // dxgmms2.sys .text:0x1054, 0x20ba bytes
    // dxgmms2.sys .text:0x2ce5c, 0x1c52 bytes
    //
    _o33(sdk::unknown_ptr) schi_update_ready_bits_in_new_priority;
    
    // [VidSchiValidatePageFaultFlags]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x39988, 0x1c52 bytes
    // dxgmms2.sys .text:0x411c8, 0x20ba bytes
    // dxgmms2.sys .text:0x39908, 0x1c52 bytes
    //
    _o34(sdk::unknown_ptr) schi_validate_page_fault_flags;
    
    // [VidMmAcquireDmaBuffer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x24c0, 0x158b bytes
    // dxgmms2.sys .text:0x20e0, 0x1c52 bytes
    // dxgmms2.sys .text:0x13b80, 0x20ba bytes
    // dxgmms2.sys .text:0x20e0, 0x1c52 bytes
    //
    _o35(sdk::unknown_ptr) mm_acquire_dma_buffer;
    
    // [VidMmAdapterVerifierOption]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d140, 0x158b bytes
    // dxgmms2.sys .text:0x22310, 0x1c52 bytes
    // dxgmms2.sys .text:0x2c570, 0x20ba bytes
    // dxgmms2.sys .text:0x22290, 0x1c52 bytes
    //
    _o36(sdk::unknown_ptr) mm_adapter_verifier_option;
    
    // [VidMmAllocateFenceStorageSlot]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3290, 0x158b bytes
    // dxgmms2.sys .text:0x12130, 0x1c52 bytes
    // dxgmms2.sys .text:0x146d0, 0x20ba bytes
    // dxgmms2.sys .text:0x12130, 0x1c52 bytes
    //
    _o37(sdk::unknown_ptr) mm_allocate_fence_storage_slot;
    
    // [VidMmAsyncUnpinAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d380, 0x158b bytes
    // dxgmms2.sys .text:0x228e0, 0x1c52 bytes
    // dxgmms2.sys .text:0x1a250, 0x20ba bytes
    // dxgmms2.sys .text:0x22860, 0x1c52 bytes
    //
    _o38(sdk::unknown_ptr) mm_async_unpin_allocation;
    
    // [VidMmBeginCPUAccess]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11a10, 0x158b bytes
    // dxgmms2.sys .text:0x2740, 0x1c52 bytes
    // dxgmms2.sys .text:0x15480, 0x20ba bytes
    // dxgmms2.sys .text:0x2740, 0x1c52 bytes
    //
    _o39(sdk::unknown_ptr) mm_begin_cpu_access;
    
    // [VidMmBeginDmaBufferCPUAccess]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14e50, 0x158b bytes
    // dxgmms2.sys .text:0x3050, 0x1c52 bytes
    // dxgmms2.sys .text:0x16fc0, 0x20ba bytes
    // dxgmms2.sys .text:0x3050, 0x1c52 bytes
    //
    _o40(sdk::unknown_ptr) mm_begin_dma_buffer_cpu_access;
    
    // [VidMmChangeVideoMemoryReservation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d390, 0x158b bytes
    // dxgmms2.sys .text:0x22900, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cb60, 0x20ba bytes
    // dxgmms2.sys .text:0x22880, 0x1c52 bytes
    //
    _o41(sdk::unknown_ptr) mm_change_video_memory_reservation;
    
    // [VidMmCloseAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2670, 0x158b bytes
    // dxgmms2.sys .text:0x28a0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2930, 0x20ba bytes
    // dxgmms2.sys .text:0x28a0, 0x1c52 bytes
    //
    _o42(sdk::unknown_ptr) mm_close_allocation;
    
    // [VidMmCompareForInsertAlignedRange]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x44428, 0x158b bytes
    // dxgmms2.sys PAGE:0x82a90, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9f67c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x83080, 0x1c52 bytes
    //
    _o43(sdk::unknown_ptr) mm_compare_for_insert_aligned_range;
    
    // [VidMmCompleteAsyncUnpin]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x922c4, 0x158b bytes
    // dxgmms2.sys PAGE:0xbce60, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa5974, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbd430, 0x1c52 bytes
    //
    _o44(sdk::unknown_ptr) mm_complete_async_unpin;
    
    // [VidMmCreateAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x26a0, 0x158b bytes
    // dxgmms2.sys .text:0x2810, 0x1c52 bytes
    // dxgmms2.sys .text:0x16ed0, 0x20ba bytes
    // dxgmms2.sys .text:0x2810, 0x1c52 bytes
    //
    _o45(sdk::unknown_ptr) mm_create_allocation;
    
    // [VidMmCreateCompanionContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d3a0, 0x158b bytes
    // dxgmms2.sys .text:0x22920, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cb80, 0x20ba bytes
    // dxgmms2.sys .text:0x228a0, 0x1c52 bytes
    //
    _o46(sdk::unknown_ptr) mm_create_companion_context;
    
    // [VidMmCreateContextAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x117f0, 0x158b bytes
    // dxgmms2.sys .text:0x14bf0, 0x1c52 bytes
    // dxgmms2.sys .text:0x15600, 0x20ba bytes
    // dxgmms2.sys .text:0x14bf0, 0x1c52 bytes
    //
    _o47(sdk::unknown_ptr) mm_create_context_allocation;
    
    // [VidMmCreateDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14e0, 0x158b bytes
    // dxgmms2.sys .text:0x12700, 0x1c52 bytes
    // dxgmms2.sys .text:0x15880, 0x20ba bytes
    // dxgmms2.sys .text:0x12700, 0x1c52 bytes
    //
    _o48(sdk::unknown_ptr) mm_create_device;
    
    // [VidMmCreateDmaPool]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12a50, 0x158b bytes
    // dxgmms2.sys .text:0x14c90, 0x1c52 bytes
    // dxgmms2.sys .text:0x1ab60, 0x20ba bytes
    // dxgmms2.sys .text:0x14c90, 0x1c52 bytes
    //
    _o49(sdk::unknown_ptr) mm_create_dma_pool;
    
    // [VidMmCreatePagingQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1610, 0x158b bytes
    // dxgmms2.sys .text:0x12070, 0x1c52 bytes
    // dxgmms2.sys .text:0x146b0, 0x20ba bytes
    // dxgmms2.sys .text:0x12070, 0x1c52 bytes
    //
    _o50(sdk::unknown_ptr) mm_create_paging_queue;
    
    // [VidMmCreateProcess]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1a00, 0x158b bytes
    // dxgmms2.sys .text:0x3130, 0x1c52 bytes
    // dxgmms2.sys .text:0x1d10, 0x20ba bytes
    // dxgmms2.sys .text:0x3130, 0x1c52 bytes
    //
    _o51(sdk::unknown_ptr) mm_create_process;
    
    // [VidMmDeInitGlobals]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d3b0, 0x158b bytes
    // dxgmms2.sys .text:0x22960, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cbc0, 0x20ba bytes
    // dxgmms2.sys .text:0x228e0, 0x1c52 bytes
    //
    _o52(sdk::unknown_ptr) mm_de_init_globals;
    
    // [VidMmDereferenceObjectAsync]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x40428, 0x158b bytes
    // dxgmms2.sys PAGE:0x6045c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7bb98, 0x20ba bytes
    // dxgmms2.sys PAGE:0x60a4c, 0x1c52 bytes
    //
    _o53(sdk::unknown_ptr) mm_dereference_object_async;
    
    // [VidMmDestoryDmaPool]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12a20, 0x158b bytes
    // dxgmms2.sys .text:0x14ba0, 0x1c52 bytes
    // dxgmms2.sys .text:0x1aac0, 0x20ba bytes
    // dxgmms2.sys .text:0x14ba0, 0x1c52 bytes
    //
    _o54(sdk::unknown_ptr) mm_destory_dma_pool;
    
    // [VidMmDestroyAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2710, 0x158b bytes
    // dxgmms2.sys .text:0x2780, 0x1c52 bytes
    // dxgmms2.sys .text:0x24b0, 0x20ba bytes
    // dxgmms2.sys .text:0x2780, 0x1c52 bytes
    //
    _o55(sdk::unknown_ptr) mm_destroy_allocation;
    
    // [VidMmDestroyContextAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11c40, 0x158b bytes
    // dxgmms2.sys .text:0x14ed0, 0x1c52 bytes
    // dxgmms2.sys .text:0x18170, 0x20ba bytes
    // dxgmms2.sys .text:0x14ed0, 0x1c52 bytes
    //
    _o56(sdk::unknown_ptr) mm_destroy_context_allocation;
    
    // [VidMmDestroyPagingQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1600, 0x158b bytes
    // dxgmms2.sys .text:0x12000, 0x1c52 bytes
    // dxgmms2.sys .text:0x145c0, 0x20ba bytes
    // dxgmms2.sys .text:0x12000, 0x1c52 bytes
    //
    _o57(sdk::unknown_ptr) mm_destroy_paging_queue;
    
    // [VidMmEndCPUAccess]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11ba0, 0x158b bytes
    // dxgmms2.sys .text:0x12fa0, 0x1c52 bytes
    // dxgmms2.sys .text:0x18010, 0x20ba bytes
    // dxgmms2.sys .text:0x12fa0, 0x1c52 bytes
    //
    _o58(sdk::unknown_ptr) mm_end_cpu_access;
    
    // [VidMmEndDmaBufferCPUAccess]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14e80, 0x158b bytes
    // dxgmms2.sys .text:0x14590, 0x1c52 bytes
    // dxgmms2.sys .text:0x18d90, 0x20ba bytes
    // dxgmms2.sys .text:0x14590, 0x1c52 bytes
    //
    _o59(sdk::unknown_ptr) mm_end_dma_buffer_cpu_access;
    
    // [VidMmEscape]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d3d0, 0x158b bytes
    // dxgmms2.sys .text:0x22980, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cbe0, 0x20ba bytes
    // dxgmms2.sys .text:0x22900, 0x1c52 bytes
    //
    _o60(sdk::unknown_ptr) mm_escape;
    
    // [VidMmETWAllocationHandle]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d3c0, 0x158b bytes
    // dxgmms2.sys .text:0x2ba0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2d60, 0x20ba bytes
    // dxgmms2.sys .text:0x2ba0, 0x1c52 bytes
    //
    _o61(sdk::unknown_ptr) mm_etw_allocation_handle;
    
    // [VidMmEvict]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11a20, 0x158b bytes
    // dxgmms2.sys .text:0x3080, 0x1c52 bytes
    // dxgmms2.sys .text:0x156a0, 0x20ba bytes
    // dxgmms2.sys .text:0x3080, 0x1c52 bytes
    //
    _o62(sdk::unknown_ptr) mm_evict;
    
    // [VidMmEvictAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d150, 0x158b bytes
    // dxgmms2.sys .text:0x223a0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2c600, 0x20ba bytes
    // dxgmms2.sys .text:0x22320, 0x1c52 bytes
    //
    _o63(sdk::unknown_ptr) mm_evict_allocation;
    
    // [VidMmEvictionTest]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d160, 0x158b bytes
    // dxgmms2.sys .text:0x223c0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2c620, 0x20ba bytes
    // dxgmms2.sys .text:0x22340, 0x1c52 bytes
    //
    _o64(sdk::unknown_ptr) mm_eviction_test;
    
    // [VidMmFindAlignedRange]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x44460, 0x158b bytes
    // dxgmms2.sys PAGE:0x82f50, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9fcd8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x83540, 0x1c52 bytes
    //
    _o65(sdk::unknown_ptr) mm_find_aligned_range;
    
    // [VidMmFlushAsyncOperations]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d170, 0x158b bytes
    // dxgmms2.sys .text:0x223e0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2c640, 0x20ba bytes
    // dxgmms2.sys .text:0x22360, 0x1c52 bytes
    //
    _o66(sdk::unknown_ptr) mm_flush_async_operations;
    
    // [VidMmFlushCpuCacheWorker]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8cb88, 0x158b bytes
    // dxgmms2.sys PAGE:0xb72d4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdc2ac, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb78a4, 0x1c52 bytes
    //
    _o67(sdk::unknown_ptr) mm_flush_cpu_cache_worker;
    
    // [VidMmFlushHeapTransitions]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11c60, 0x158b bytes
    // dxgmms2.sys .text:0x14270, 0x1c52 bytes
    // dxgmms2.sys .text:0x18770, 0x20ba bytes
    // dxgmms2.sys .text:0x14270, 0x1c52 bytes
    //
    _o68(sdk::unknown_ptr) mm_flush_heap_transitions;
    
    // [VidMmFlushPagingQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14a0, 0x158b bytes
    // dxgmms2.sys .text:0x12670, 0x1c52 bytes
    // dxgmms2.sys .text:0x18cb0, 0x20ba bytes
    // dxgmms2.sys .text:0x12670, 0x1c52 bytes
    //
    _o69(sdk::unknown_ptr) mm_flush_paging_queue;
    
    // [VidMmFreeDeferredDmaBufferMapping]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14770, 0x158b bytes
    // dxgmms2.sys .text:0x145b0, 0x1c52 bytes
    // dxgmms2.sys .text:0x18db0, 0x20ba bytes
    // dxgmms2.sys .text:0x145b0, 0x1c52 bytes
    //
    _o70(sdk::unknown_ptr) mm_free_deferred_dma_buffer_mapping;
    
    // [VidMmFreeDeferredMapping]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d3e0, 0x158b bytes
    // dxgmms2.sys .text:0x229a0, 0x1c52 bytes
    // dxgmms2.sys .text:0x1dc10, 0x20ba bytes
    // dxgmms2.sys .text:0x22920, 0x1c52 bytes
    //
    _o71(sdk::unknown_ptr) mm_free_deferred_mapping;
    
    // [VidMmFreeFenceStorageSlot]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x18a0, 0x158b bytes
    // dxgmms2.sys .text:0x13fe0, 0x1c52 bytes
    // dxgmms2.sys .text:0x179d0, 0x20ba bytes
    // dxgmms2.sys .text:0x13fe0, 0x1c52 bytes
    //
    _o72(sdk::unknown_ptr) mm_free_fence_storage_slot;
    
    // [VidMmFreeGpuVirtualAddress]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12380, 0x158b bytes
    // dxgmms2.sys .text:0x128b0, 0x1c52 bytes
    // dxgmms2.sys .text:0x1a6a0, 0x20ba bytes
    // dxgmms2.sys .text:0x128b0, 0x1c52 bytes
    //
    _o73(sdk::unknown_ptr) mm_free_gpu_virtual_address;
    
    // [VidMmFreeRangeNode]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x54220, 0x158b bytes
    // dxgmms2.sys PAGE:0x73520, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x83a10, 0x20ba bytes
    // dxgmms2.sys PAGE:0x73b10, 0x1c52 bytes
    //
    _o74(sdk::unknown_ptr) mm_free_range_node;
    
    // [VidMmGetAllocationFlipQueueReferencesPointer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14e00, 0x158b bytes
    // dxgmms2.sys .text:0x22420, 0x1c52 bytes
    // dxgmms2.sys .text:0x2c680, 0x20ba bytes
    // dxgmms2.sys .text:0x223a0, 0x1c52 bytes
    //
    _o75(sdk::unknown_ptr) mm_get_allocation_flip_queue_references_pointer;
    
    // [VidMmGetAllocationGpuVirtualAddress]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x24b0, 0x158b bytes
    // dxgmms2.sys .text:0x13110, 0x1c52 bytes
    // dxgmms2.sys .text:0x16d90, 0x20ba bytes
    // dxgmms2.sys .text:0x13110, 0x1c52 bytes
    //
    _o76(sdk::unknown_ptr) mm_get_allocation_gpu_virtual_address;
    
    // [VidMmGetAllocationInstance]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14e90, 0x158b bytes
    // dxgmms2.sys .text:0x145c0, 0x1c52 bytes
    // dxgmms2.sys .text:0x18dc0, 0x20ba bytes
    // dxgmms2.sys .text:0x145c0, 0x1c52 bytes
    //
    _o77(sdk::unknown_ptr) mm_get_allocation_instance;
    
    // [VidMmGetAllocationSection]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d1a0, 0x158b bytes
    // dxgmms2.sys .text:0x14ef0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2c6c0, 0x20ba bytes
    // dxgmms2.sys .text:0x14ef0, 0x1c52 bytes
    //
    _o78(sdk::unknown_ptr) mm_get_allocation_section;
    
    // [VidMmGetDevicePagingQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14e10, 0x158b bytes
    // dxgmms2.sys .text:0x14540, 0x1c52 bytes
    // dxgmms2.sys .text:0x18d10, 0x20ba bytes
    // dxgmms2.sys .text:0x14540, 0x1c52 bytes
    //
    _o79(sdk::unknown_ptr) mm_get_device_paging_queue;
    
    // [VidMmGetDmaAllocationList]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14ea0, 0x158b bytes
    // dxgmms2.sys .text:0x14600, 0x1c52 bytes
    // dxgmms2.sys .text:0x18e00, 0x20ba bytes
    // dxgmms2.sys .text:0x14600, 0x1c52 bytes
    //
    _o80(sdk::unknown_ptr) mm_get_dma_allocation_list;
    
    // [VidMmGetDmaBufferLength]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14eb0, 0x158b bytes
    // dxgmms2.sys .text:0x14610, 0x1c52 bytes
    // dxgmms2.sys .text:0x18e10, 0x20ba bytes
    // dxgmms2.sys .text:0x14610, 0x1c52 bytes
    //
    _o81(sdk::unknown_ptr) mm_get_dma_buffer_length;
    
    // [VidMmGetDmaGpuVirtualAddress]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14fc0, 0x158b bytes
    // dxgmms2.sys .text:0x14620, 0x1c52 bytes
    // dxgmms2.sys .text:0x18e20, 0x20ba bytes
    // dxgmms2.sys .text:0x14620, 0x1c52 bytes
    //
    _o82(sdk::unknown_ptr) mm_get_dma_gpu_virtual_address;
    
    // [VidMmGetDmaPatchLocationList]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14ec0, 0x158b bytes
    // dxgmms2.sys .text:0x14630, 0x1c52 bytes
    // dxgmms2.sys .text:0x18e30, 0x20ba bytes
    // dxgmms2.sys .text:0x14630, 0x1c52 bytes
    //
    _o83(sdk::unknown_ptr) mm_get_dma_patch_location_list;
    
    // [VidMmGetDmaPatchLocationListLength]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14ed0, 0x158b bytes
    // dxgmms2.sys .text:0x14640, 0x1c52 bytes
    // dxgmms2.sys .text:0x18e40, 0x20ba bytes
    // dxgmms2.sys .text:0x14640, 0x1c52 bytes
    //
    _o84(sdk::unknown_ptr) mm_get_dma_patch_location_list_length;
    
    // [VidMmGetDmaPrivateData]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14ee0, 0x158b bytes
    // dxgmms2.sys .text:0x14650, 0x1c52 bytes
    // dxgmms2.sys .text:0x18e50, 0x20ba bytes
    // dxgmms2.sys .text:0x14650, 0x1c52 bytes
    //
    _o85(sdk::unknown_ptr) mm_get_dma_private_data;
    
    // [VidMmGetFullMDL]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x405d4, 0x158b bytes
    // dxgmms2.sys PAGE:0x84640, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x862a8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x84c30, 0x1c52 bytes
    //
    _o86(sdk::unknown_ptr) mm_get_full_mdl;
    
    // [VidMmGetMDLForRange]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x404e4, 0x158b bytes
    // dxgmms2.sys PAGE:0x86fa8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa4c44, 0x20ba bytes
    // dxgmms2.sys PAGE:0x87598, 0x1c52 bytes
    //
    _o87(sdk::unknown_ptr) mm_get_mdl_for_range;
    
    // [VidMmGetNextBuffersContractedSize]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d3f0, 0x158b bytes
    // dxgmms2.sys .text:0x229c0, 0x1c52 bytes
    // dxgmms2.sys .text:0x1dc30, 0x20ba bytes
    // dxgmms2.sys .text:0x22940, 0x1c52 bytes
    //
    _o88(sdk::unknown_ptr) mm_get_next_buffers_contracted_size;
    
    // [VidMmGetPinnedAllocationInfo]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2570, 0x158b bytes
    // dxgmms2.sys .text:0x229e0, 0x1c52 bytes
    // dxgmms2.sys .text:0x1a650, 0x20ba bytes
    // dxgmms2.sys .text:0x22960, 0x1c52 bytes
    //
    _o89(sdk::unknown_ptr) mm_get_pinned_allocation_info;
    
    // [VidMmGetProcessAdapterInfo]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14ef0, 0x158b bytes
    // dxgmms2.sys .text:0x14660, 0x1c52 bytes
    // dxgmms2.sys .text:0x18e60, 0x20ba bytes
    // dxgmms2.sys .text:0x14660, 0x1c52 bytes
    //
    _o90(sdk::unknown_ptr) mm_get_process_adapter_info;
    
    // [VidMmGetTotalSegmentSize]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11b60, 0x158b bytes
    // dxgmms2.sys .text:0x1f30, 0x1c52 bytes
    // dxgmms2.sys .text:0x17830, 0x20ba bytes
    // dxgmms2.sys .text:0x1f30, 0x1c52 bytes
    //
    _o91(sdk::unknown_ptr) mm_get_total_segment_size;
    
    // [VidMmInitDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14d0, 0x158b bytes
    // dxgmms2.sys .text:0x12050, 0x1c52 bytes
    // dxgmms2.sys .text:0x13ef0, 0x20ba bytes
    // dxgmms2.sys .text:0x12050, 0x1c52 bytes
    //
    _o92(sdk::unknown_ptr) mm_init_device;
    
    // [VidMmInitDmaPool]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12a40, 0x158b bytes
    // dxgmms2.sys .text:0x15170, 0x1c52 bytes
    // dxgmms2.sys .text:0x1ab10, 0x20ba bytes
    // dxgmms2.sys .text:0x15170, 0x1c52 bytes
    //
    _o93(sdk::unknown_ptr) mm_init_dma_pool;
    
    // [VidMmInitGlobals]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x13010, 0x158b bytes
    // dxgmms2.sys .text:0x15730, 0x1c52 bytes
    // dxgmms2.sys .text:0x1c870, 0x20ba bytes
    // dxgmms2.sys .text:0x15730, 0x1c52 bytes
    //
    _o94(sdk::unknown_ptr) mm_init_globals;
    
    // [VidMmInitializeAdapter]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12e70, 0x158b bytes
    // dxgmms2.sys .text:0x157c0, 0x1c52 bytes
    // dxgmms2.sys .text:0x1c560, 0x20ba bytes
    // dxgmms2.sys .text:0x157c0, 0x1c52 bytes
    //
    _o95(sdk::unknown_ptr) mm_initialize_adapter;
    
    // [VidMmInitializeAdapterPowerManagement]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14e40, 0x158b bytes
    // dxgmms2.sys .text:0x14570, 0x1c52 bytes
    // dxgmms2.sys .text:0x18d40, 0x20ba bytes
    // dxgmms2.sys .text:0x14570, 0x1c52 bytes
    //
    _o96(sdk::unknown_ptr) mm_initialize_adapter_power_management;
    
    // [VidMmInitializePagingProcess]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12ee0, 0x158b bytes
    // dxgmms2.sys .text:0x15b00, 0x1c52 bytes
    // dxgmms2.sys .text:0x1c900, 0x20ba bytes
    // dxgmms2.sys .text:0x15b00, 0x1c52 bytes
    //
    _o97(sdk::unknown_ptr) mm_initialize_paging_process;
    
    // [VidMmInitializeSegmentPowerManagement]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d1b0, 0x158b bytes
    // dxgmms2.sys .text:0x22460, 0x1c52 bytes
    // dxgmms2.sys .text:0x2c720, 0x20ba bytes
    // dxgmms2.sys .text:0x223e0, 0x1c52 bytes
    //
    _o98(sdk::unknown_ptr) mm_initialize_segment_power_management;
    
    // [VidMmInterface]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29790, 0x158b bytes
    // dxgmms2.sys .rdata:0x3f8e0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x488b0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x3f8e0, 0x1c52 bytes
    //
    _o99(sdk::unknown_ptr) mm_interface;
    
    // [VidMmInvalidateAllVirtualAddresses]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d400, 0x158b bytes
    // dxgmms2.sys .text:0x22a00, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cc00, 0x20ba bytes
    // dxgmms2.sys .text:0x22980, 0x1c52 bytes
    //
    _p00(sdk::unknown_ptr) mm_invalidate_all_virtual_addresses;
    
    // [VidMmInvalidateAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12ef0, 0x158b bytes
    // dxgmms2.sys .text:0x22a20, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cc20, 0x20ba bytes
    // dxgmms2.sys .text:0x229a0, 0x1c52 bytes
    //
    _p01(sdk::unknown_ptr) mm_invalidate_allocation;
    
    // [VidMmInvalidateCache]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14f00, 0x158b bytes
    // dxgmms2.sys .text:0x14680, 0x1c52 bytes
    // dxgmms2.sys .text:0x18d60, 0x20ba bytes
    // dxgmms2.sys .text:0x14680, 0x1c52 bytes
    //
    _p02(sdk::unknown_ptr) mm_invalidate_cache;
    
    // [VidMmIsAllocationAccessPending]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11a30, 0x158b bytes
    // dxgmms2.sys .text:0x140d0, 0x1c52 bytes
    // dxgmms2.sys .text:0x181e0, 0x20ba bytes
    // dxgmms2.sys .text:0x140d0, 0x1c52 bytes
    //
    _p03(sdk::unknown_ptr) mm_is_allocation_access_pending;
    
    // [VidMmIsAllocationCPUVisible]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14f10, 0x158b bytes
    // dxgmms2.sys .text:0x146a0, 0x1c52 bytes
    // dxgmms2.sys .text:0x18e80, 0x20ba bytes
    // dxgmms2.sys .text:0x146a0, 0x1c52 bytes
    //
    _p04(sdk::unknown_ptr) mm_is_allocation_cpu_visible;
    
    // [VidMmIsAllocationInPresentQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d410, 0x158b bytes
    // dxgmms2.sys .text:0x22a40, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cc40, 0x20ba bytes
    // dxgmms2.sys .text:0x229c0, 0x1c52 bytes
    //
    _p05(sdk::unknown_ptr) mm_is_allocation_in_present_queue;
    
    // [VidMmIsAllocationTerminated]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d420, 0x158b bytes
    // dxgmms2.sys .text:0x22a60, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cc60, 0x20ba bytes
    // dxgmms2.sys .text:0x229e0, 0x1c52 bytes
    //
    _p06(sdk::unknown_ptr) mm_is_allocation_terminated;
    
    // [VidMmLock]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2410, 0x158b bytes
    // dxgmms2.sys .text:0x28d0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2980, 0x20ba bytes
    // dxgmms2.sys .text:0x28d0, 0x1c52 bytes
    //
    _p07(sdk::unknown_ptr) mm_lock;
    
    // [VidMmLogInformationToMinidump]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d430, 0x158b bytes
    // dxgmms2.sys .text:0x22a80, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cc80, 0x20ba bytes
    // dxgmms2.sys .text:0x22a00, 0x1c52 bytes
    //
    _p08(sdk::unknown_ptr) mm_log_information_to_minidump;
    
    // [VidMmMakeResident]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2750, 0x158b bytes
    // dxgmms2.sys .text:0x2ed0, 0x1c52 bytes
    // dxgmms2.sys .text:0x156d0, 0x20ba bytes
    // dxgmms2.sys .text:0x2ed0, 0x1c52 bytes
    //
    _p09(sdk::unknown_ptr) mm_make_resident;
    
    // [VidMmMapContextAllocationCb]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d1c0, 0x158b bytes
    // dxgmms2.sys .text:0x22480, 0x1c52 bytes
    // dxgmms2.sys .text:0x15800, 0x20ba bytes
    // dxgmms2.sys .text:0x22400, 0x1c52 bytes
    //
    _p10(sdk::unknown_ptr) mm_map_context_allocation_cb;
    
    // [VidMmMapCpuVA]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3280, 0x158b bytes
    // dxgmms2.sys .text:0x13f10, 0x1c52 bytes
    // dxgmms2.sys .text:0x179b0, 0x20ba bytes
    // dxgmms2.sys .text:0x13f10, 0x1c52 bytes
    //
    _p11(sdk::unknown_ptr) mm_map_cpu_va;
    
    // [VidMmMapGpuVA]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x32a0, 0x158b bytes
    // dxgmms2.sys .text:0x12790, 0x1c52 bytes
    // dxgmms2.sys .text:0x155b0, 0x20ba bytes
    // dxgmms2.sys .text:0x12790, 0x1c52 bytes
    //
    _p12(sdk::unknown_ptr) mm_map_gpu_va;
    
    // [VidMmMapGpuVirtualAddress]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2690, 0x158b bytes
    // dxgmms2.sys .text:0x2f10, 0x1c52 bytes
    // dxgmms2.sys .text:0x15710, 0x20ba bytes
    // dxgmms2.sys .text:0x2f10, 0x1c52 bytes
    //
    _p13(sdk::unknown_ptr) mm_map_gpu_virtual_address;
    
    // [VidMmMapViewOfAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x49818, 0x158b bytes
    // dxgmms2.sys PAGE:0x605e8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7b964, 0x20ba bytes
    // dxgmms2.sys PAGE:0x60bd8, 0x1c52 bytes
    //
    _p14(sdk::unknown_ptr) mm_map_view_of_allocation;
    
    // [VidMmNbSegment]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14f20, 0x158b bytes
    // dxgmms2.sys .text:0x146c0, 0x1c52 bytes
    // dxgmms2.sys .text:0x18ea0, 0x20ba bytes
    // dxgmms2.sys .text:0x146c0, 0x1c52 bytes
    //
    _p15(sdk::unknown_ptr) mm_nb_segment;
    
    // [VidMmNotifyProcessStatusChange]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11b50, 0x158b bytes
    // dxgmms2.sys .text:0x11f90, 0x1c52 bytes
    // dxgmms2.sys .text:0x15840, 0x20ba bytes
    // dxgmms2.sys .text:0x11f90, 0x1c52 bytes
    //
    _p16(sdk::unknown_ptr) mm_notify_process_status_change;
    
    // [VidMmOfferAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2590, 0x158b bytes
    // dxgmms2.sys .text:0x6060, 0x1c52 bytes
    // dxgmms2.sys .text:0x15b0, 0x20ba bytes
    // dxgmms2.sys .text:0x6060, 0x1c52 bytes
    //
    _p17(sdk::unknown_ptr) mm_offer_allocation;
    
    // [VidMmOpenAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2610, 0x158b bytes
    // dxgmms2.sys .text:0x29d0, 0x1c52 bytes
    // dxgmms2.sys .text:0x16ff0, 0x20ba bytes
    // dxgmms2.sys .text:0x29d0, 0x1c52 bytes
    //
    _p18(sdk::unknown_ptr) mm_open_allocation;
    
    // [VidMmPageInDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d1d0, 0x158b bytes
    // dxgmms2.sys .text:0x224a0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2c760, 0x20ba bytes
    // dxgmms2.sys .text:0x22420, 0x1c52 bytes
    //
    _p19(sdk::unknown_ptr) mm_page_in_device;
    
    // [VidMmPinAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12a10, 0x158b bytes
    // dxgmms2.sys .text:0x22ad0, 0x1c52 bytes
    // dxgmms2.sys .text:0x1ac10, 0x20ba bytes
    // dxgmms2.sys .text:0x22a50, 0x1c52 bytes
    //
    _p20(sdk::unknown_ptr) mm_pin_allocation;
    
    // [VidMmProbeForDecommit]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d1e0, 0x158b bytes
    // dxgmms2.sys .text:0x224c0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2c780, 0x20ba bytes
    // dxgmms2.sys .text:0x22440, 0x1c52 bytes
    //
    _p21(sdk::unknown_ptr) mm_probe_for_decommit;
    
    // [VidMmProcessAsyncOperation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x65480, 0x158b bytes
    // dxgmms2.sys PAGE:0x84d90, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa24f0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x85380, 0x1c52 bytes
    //
    _p22(sdk::unknown_ptr) mm_process_async_operation;
    
    // [VidMmProcessVerifierOption]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d200, 0x158b bytes
    // dxgmms2.sys .text:0x224f0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2c7b0, 0x20ba bytes
    // dxgmms2.sys .text:0x22470, 0x1c52 bytes
    //
    _p23(sdk::unknown_ptr) mm_process_verifier_option;
    
    // [VidMmPurgeAllSegments]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12b60, 0x158b bytes
    // dxgmms2.sys .text:0x22b20, 0x1c52 bytes
    // dxgmms2.sys .text:0x1b420, 0x20ba bytes
    // dxgmms2.sys .text:0x22aa0, 0x1c52 bytes
    //
    _p24(sdk::unknown_ptr) mm_purge_all_segments;
    
    // [VidMmQueryAdapterStatistics]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d210, 0x158b bytes
    // dxgmms2.sys .text:0x22510, 0x1c52 bytes
    // dxgmms2.sys .text:0x1dbb0, 0x20ba bytes
    // dxgmms2.sys .text:0x22490, 0x1c52 bytes
    //
    _p25(sdk::unknown_ptr) mm_query_adapter_statistics;
    
    // [VidMmQueryAllocationResidency]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11ef0, 0x158b bytes
    // dxgmms2.sys .text:0x22b40, 0x1c52 bytes
    // dxgmms2.sys .text:0x2ccf0, 0x20ba bytes
    // dxgmms2.sys .text:0x22ac0, 0x1c52 bytes
    //
    _p26(sdk::unknown_ptr) mm_query_allocation_residency;
    
    // [VidMmQueryAllocationSizeInSegment]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14f30, 0x158b bytes
    // dxgmms2.sys .text:0x146d0, 0x1c52 bytes
    // dxgmms2.sys .text:0x18eb0, 0x20ba bytes
    // dxgmms2.sys .text:0x146d0, 0x1c52 bytes
    //
    _p27(sdk::unknown_ptr) mm_query_allocation_size_in_segment;
    
    // [VidMmQueryAllocationSizeInSystemMemory]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14f40, 0x158b bytes
    // dxgmms2.sys .text:0x13150, 0x1c52 bytes
    // dxgmms2.sys .text:0x17be0, 0x20ba bytes
    // dxgmms2.sys .text:0x13150, 0x1c52 bytes
    //
    _p28(sdk::unknown_ptr) mm_query_allocation_size_in_system_memory;
    
    // [VidMmQueryMultiAllocCount]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14f50, 0x158b bytes
    // dxgmms2.sys .text:0x146f0, 0x1c52 bytes
    // dxgmms2.sys .text:0x18ed0, 0x20ba bytes
    // dxgmms2.sys .text:0x146f0, 0x1c52 bytes
    //
    _p29(sdk::unknown_ptr) mm_query_multi_alloc_count;
    
    // [VidMmQueryProcessAdapterStatistics]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d220, 0x158b bytes
    // dxgmms2.sys .text:0x22530, 0x1c52 bytes
    // dxgmms2.sys .text:0x2c7d0, 0x20ba bytes
    // dxgmms2.sys .text:0x224b0, 0x1c52 bytes
    //
    _p30(sdk::unknown_ptr) mm_query_process_adapter_statistics;
    
    // [VidMmQueryProcessSegmentGroupStatistics]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d230, 0x158b bytes
    // dxgmms2.sys .text:0x22550, 0x1c52 bytes
    // dxgmms2.sys .text:0x2c7f0, 0x20ba bytes
    // dxgmms2.sys .text:0x224d0, 0x1c52 bytes
    //
    _p31(sdk::unknown_ptr) mm_query_process_segment_group_statistics;
    
    // [VidMmQueryProcessSegmentStatistics]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d240, 0x158b bytes
    // dxgmms2.sys .text:0x22570, 0x1c52 bytes
    // dxgmms2.sys .text:0x1dbd0, 0x20ba bytes
    // dxgmms2.sys .text:0x224f0, 0x1c52 bytes
    //
    _p32(sdk::unknown_ptr) mm_query_process_segment_statistics;
    
    // [VidMmQueryProcessStatistics]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d250, 0x158b bytes
    // dxgmms2.sys .text:0x22590, 0x1c52 bytes
    // dxgmms2.sys .text:0x2c810, 0x20ba bytes
    // dxgmms2.sys .text:0x22510, 0x1c52 bytes
    //
    _p33(sdk::unknown_ptr) mm_query_process_statistics;
    
    // [VidMmQuerySegmentStatistics]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d2b0, 0x158b bytes
    // dxgmms2.sys .text:0x22620, 0x1c52 bytes
    // dxgmms2.sys .text:0x1dbf0, 0x20ba bytes
    // dxgmms2.sys .text:0x225a0, 0x1c52 bytes
    //
    _p34(sdk::unknown_ptr) mm_query_segment_statistics;
    
    // [VidMmQueryVideoMemoryInfo]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d440, 0x158b bytes
    // dxgmms2.sys .text:0x22b60, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cd10, 0x20ba bytes
    // dxgmms2.sys .text:0x22ae0, 0x1c52 bytes
    //
    _p35(sdk::unknown_ptr) mm_query_video_memory_info;
    
    // [VidMmQueueAsyncOperation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x40464, 0x158b bytes
    // dxgmms2.sys PAGE:0x604b0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7bbec, 0x20ba bytes
    // dxgmms2.sys PAGE:0x60aa0, 0x1c52 bytes
    //
    _p36(sdk::unknown_ptr) mm_queue_async_operation;
    
    // [VidMmRangeCurationDpc]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11440, 0x158b bytes
    // dxgmms2.sys .text:0x13e60, 0x1c52 bytes
    // dxgmms2.sys .text:0x17da0, 0x20ba bytes
    // dxgmms2.sys .text:0x13e60, 0x1c52 bytes
    //
    _p37(sdk::unknown_ptr) mm_range_curation_dpc;
    
    // [VidMmRangeCurationThread]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x40620, 0x158b bytes
    // dxgmms2.sys PAGE:0x79230, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7dff0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x79820, 0x1c52 bytes
    //
    _p38(sdk::unknown_ptr) mm_range_curation_thread;
    
    // [VidMmReclaimAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x25a0, 0x158b bytes
    // dxgmms2.sys .text:0x6040, 0x1c52 bytes
    // dxgmms2.sys .text:0x155e0, 0x20ba bytes
    // dxgmms2.sys .text:0x6040, 0x1c52 bytes
    //
    _p39(sdk::unknown_ptr) mm_reclaim_allocation;
    
    // [VidMmRecordAlloc]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d98, 0x158b bytes
    // dxgmms2.sys .text:0x2314, 0x1c52 bytes
    // dxgmms2.sys .text:0x22f8, 0x20ba bytes
    // dxgmms2.sys .text:0x2314, 0x1c52 bytes
    //
    _p40(sdk::unknown_ptr) mm_record_alloc;
    
    // [VidMmRecordEviction]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x13dc, 0x158b bytes
    // dxgmms2.sys .text:0x22bc, 0x1c52 bytes
    // dxgmms2.sys .text:0x2458, 0x20ba bytes
    // dxgmms2.sys .text:0x22bc, 0x1c52 bytes
    //
    _p41(sdk::unknown_ptr) mm_record_eviction;
    
    // [VidMmRecordLock]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x20fc, 0x158b bytes
    // dxgmms2.sys .text:0x296c, 0x1c52 bytes
    // dxgmms2.sys .text:0x29a0, 0x20ba bytes
    // dxgmms2.sys .text:0x296c, 0x1c52 bytes
    //
    _p42(sdk::unknown_ptr) mm_record_lock;
    
    // [VidMmRecordTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1146c, 0x158b bytes
    // dxgmms2.sys .text:0x2fec, 0x1c52 bytes
    // dxgmms2.sys .text:0x2058, 0x20ba bytes
    // dxgmms2.sys .text:0x2fec, 0x1c52 bytes
    //
    _p43(sdk::unknown_ptr) mm_record_transfer;
    
    // [VidMmRecycleHeapMapSection]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x40310, 0x158b bytes
    // dxgmms2.sys PAGE:0xc38a4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe794c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc3e74, 0x1c52 bytes
    //
    _p44(sdk::unknown_ptr) mm_recycle_heap_map_section;
    
    // [VidMmReferenceAllocationForTokenSubmission]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d480, 0x158b bytes
    // dxgmms2.sys .text:0x22bb0, 0x1c52 bytes
    // dxgmms2.sys .text:0x1a630, 0x20ba bytes
    // dxgmms2.sys .text:0x22b30, 0x1c52 bytes
    //
    _p45(sdk::unknown_ptr) mm_reference_allocation_for_token_submission;
    
    // [VidMmReferenceDmaBuffer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x24e0, 0x158b bytes
    // dxgmms2.sys .text:0x2bc0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cd0, 0x20ba bytes
    // dxgmms2.sys .text:0x2bc0, 0x1c52 bytes
    //
    _p46(sdk::unknown_ptr) mm_reference_dma_buffer;
    
    // [VidMmReferencePrimaryAllocationForSubmission]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2580, 0x158b bytes
    // dxgmms2.sys .text:0x13130, 0x1c52 bytes
    // dxgmms2.sys .text:0x16fa0, 0x20ba bytes
    // dxgmms2.sys .text:0x13130, 0x1c52 bytes
    //
    _p47(sdk::unknown_ptr) mm_reference_primary_allocation_for_submission;
    
    // [VidMmReferenceWrittenPrimaries]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2400, 0x158b bytes
    // dxgmms2.sys .text:0x2a60, 0x1c52 bytes
    // dxgmms2.sys .text:0x2d80, 0x20ba bytes
    // dxgmms2.sys .text:0x2a60, 0x1c52 bytes
    //
    _p48(sdk::unknown_ptr) mm_reference_written_primaries;
    
    // [VidMmReleaseDmaBuffer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d490, 0x158b bytes
    // dxgmms2.sys .text:0x22bd0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cd60, 0x20ba bytes
    // dxgmms2.sys .text:0x22b50, 0x1c52 bytes
    //
    _p49(sdk::unknown_ptr) mm_release_dma_buffer;
    
    // [VidMmReportContextAllocList]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x92890, 0x158b bytes
    // dxgmms2.sys PAGE:0xbd520, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe2200, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbdaf0, 0x1c52 bytes
    //
    _p50(sdk::unknown_ptr) mm_report_context_alloc_list;
    
    // [VidMmReportDmaPoolState]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d4b0, 0x158b bytes
    // dxgmms2.sys .text:0x22c00, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cd90, 0x20ba bytes
    // dxgmms2.sys .text:0x22b80, 0x1c52 bytes
    //
    _p51(sdk::unknown_ptr) mm_report_dma_pool_state;
    
    // [VidMmReportGlobalAlloc]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x923d4, 0x158b bytes
    // dxgmms2.sys PAGE:0xbcf8c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe1c8c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbd55c, 0x1c52 bytes
    //
    _p52(sdk::unknown_ptr) mm_report_global_alloc;
    
    // [VidMmReportMultiAlloc]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x929a0, 0x158b bytes
    // dxgmms2.sys PAGE:0xbd630, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe2320, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbdc00, 0x1c52 bytes
    //
    _p53(sdk::unknown_ptr) mm_report_multi_alloc;
    
    // [VidMmReportMultiGlobalAlloc]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x92ac0, 0x158b bytes
    // dxgmms2.sys PAGE:0xbd760, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb5310, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbdd30, 0x1c52 bytes
    //
    _p54(sdk::unknown_ptr) mm_report_multi_global_alloc;
    
    // [VidMmReportVidMmDeviceState]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14770, 0x158b bytes
    // dxgmms2.sys .text:0x22c20, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cdb0, 0x20ba bytes
    // dxgmms2.sys .text:0x22ba0, 0x1c52 bytes
    //
    _p55(sdk::unknown_ptr) mm_report_vid_mm_device_state;
    
    // [VidMmReportVidMmState]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d4c0, 0x158b bytes
    // dxgmms2.sys .text:0x22c40, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cdd0, 0x20ba bytes
    // dxgmms2.sys .text:0x22bc0, 0x1c52 bytes
    //
    _p56(sdk::unknown_ptr) mm_report_vid_mm_state;
    
    // [VidMmReserveGpuVirtualAddress]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12320, 0x158b bytes
    // dxgmms2.sys .text:0x22c60, 0x1c52 bytes
    // dxgmms2.sys .text:0x159d0, 0x20ba bytes
    // dxgmms2.sys .text:0x22be0, 0x1c52 bytes
    //
    _p57(sdk::unknown_ptr) mm_reserve_gpu_virtual_address;
    
    // [VidMmReserveGpuVirtualAddressRangeCb]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11c50, 0x158b bytes
    // dxgmms2.sys .text:0x127c0, 0x1c52 bytes
    // dxgmms2.sys .text:0x15820, 0x20ba bytes
    // dxgmms2.sys .text:0x127c0, 0x1c52 bytes
    //
    _p58(sdk::unknown_ptr) mm_reserve_gpu_virtual_address_range_cb;
    
    // [VidMmResizeBuffersInPool]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d4d0, 0x158b bytes
    // dxgmms2.sys .text:0x22c90, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cdf0, 0x20ba bytes
    // dxgmms2.sys .text:0x22c10, 0x1c52 bytes
    //
    _p59(sdk::unknown_ptr) mm_resize_buffers_in_pool;
    
    // [VidMmRestoreFromPurge]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12b50, 0x158b bytes
    // dxgmms2.sys .text:0x22cb0, 0x1c52 bytes
    // dxgmms2.sys .text:0x1c000, 0x20ba bytes
    // dxgmms2.sys .text:0x22c30, 0x1c52 bytes
    //
    _p60(sdk::unknown_ptr) mm_restore_from_purge;
    
    // [VidMmResumeMemorySegmentAccess]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14fc0, 0x158b bytes
    // dxgmms2.sys .text:0x14620, 0x1c52 bytes
    // dxgmms2.sys .text:0x18e20, 0x20ba bytes
    // dxgmms2.sys .text:0x14620, 0x1c52 bytes
    //
    _p61(sdk::unknown_ptr) mm_resume_memory_segment_access;
    
    // [VidMmResumeWorkerThread]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11c70, 0x158b bytes
    // dxgmms2.sys .text:0x143c0, 0x1c52 bytes
    // dxgmms2.sys .text:0x18730, 0x20ba bytes
    // dxgmms2.sys .text:0x143c0, 0x1c52 bytes
    //
    _p62(sdk::unknown_ptr) mm_resume_worker_thread;
    
    // [VidMmSetAllocationFlipQueueReferencesPointer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d2c0, 0x158b bytes
    // dxgmms2.sys .text:0x22640, 0x1c52 bytes
    // dxgmms2.sys .text:0x2c8a0, 0x20ba bytes
    // dxgmms2.sys .text:0x225c0, 0x1c52 bytes
    //
    _p63(sdk::unknown_ptr) mm_set_allocation_flip_queue_references_pointer;
    
    // [VidMmSetAllocationPriority]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d4e0, 0x158b bytes
    // dxgmms2.sys .text:0x22cd0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2ce10, 0x20ba bytes
    // dxgmms2.sys .text:0x22c50, 0x1c52 bytes
    //
    _p64(sdk::unknown_ptr) mm_set_allocation_priority;
    
    // [VidMmSetPagingFenceObject]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14f60, 0x158b bytes
    // dxgmms2.sys .text:0x14710, 0x1c52 bytes
    // dxgmms2.sys .text:0x18ef0, 0x20ba bytes
    // dxgmms2.sys .text:0x14710, 0x1c52 bytes
    //
    _p65(sdk::unknown_ptr) mm_set_paging_fence_object;
    
    // [VidMmSetSegmentPowerState]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d2d0, 0x158b bytes
    // dxgmms2.sys .text:0x22680, 0x1c52 bytes
    // dxgmms2.sys .text:0x2c8e0, 0x20ba bytes
    // dxgmms2.sys .text:0x22600, 0x1c52 bytes
    //
    _p66(sdk::unknown_ptr) mm_set_segment_power_state;
    
    // [VidMmSetVidSchDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14f70, 0x158b bytes
    // dxgmms2.sys .text:0x14730, 0x1c52 bytes
    // dxgmms2.sys .text:0x18f10, 0x20ba bytes
    // dxgmms2.sys .text:0x14730, 0x1c52 bytes
    //
    _p67(sdk::unknown_ptr) mm_set_vid_sch_device;
    
    // [VidMmSetWorkingSetInformation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d4f0, 0x158b bytes
    // dxgmms2.sys .text:0x22d10, 0x1c52 bytes
    // dxgmms2.sys .text:0x2ce50, 0x20ba bytes
    // dxgmms2.sys .text:0x22c90, 0x1c52 bytes
    //
    _p68(sdk::unknown_ptr) mm_set_working_set_information;
    
    // [VidMmSuspendMemorySegmentAccess]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d500, 0x158b bytes
    // dxgmms2.sys .text:0x22d30, 0x1c52 bytes
    // dxgmms2.sys .text:0x2ce70, 0x20ba bytes
    // dxgmms2.sys .text:0x22cb0, 0x1c52 bytes
    //
    _p69(sdk::unknown_ptr) mm_suspend_memory_segment_access;
    
    // [VidMmSuspendResumeDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1480, 0x158b bytes
    // dxgmms2.sys .text:0x14250, 0x1c52 bytes
    // dxgmms2.sys .text:0x157e0, 0x20ba bytes
    // dxgmms2.sys .text:0x14250, 0x1c52 bytes
    //
    _p70(sdk::unknown_ptr) mm_suspend_resume_device;
    
    // [VidMmSuspendWorkerThread]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11c80, 0x158b bytes
    // dxgmms2.sys .text:0x143a0, 0x1c52 bytes
    // dxgmms2.sys .text:0x18710, 0x20ba bytes
    // dxgmms2.sys .text:0x143a0, 0x1c52 bytes
    //
    _p71(sdk::unknown_ptr) mm_suspend_worker_thread;
    
    // [VidMmTerminateAdapter]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d510, 0x158b bytes
    // dxgmms2.sys .text:0x22d50, 0x1c52 bytes
    // dxgmms2.sys .text:0x2ce90, 0x20ba bytes
    // dxgmms2.sys .text:0x22cd0, 0x1c52 bytes
    //
    _p72(sdk::unknown_ptr) mm_terminate_adapter;
    
    // [VidMmTerminateAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2730, 0x158b bytes
    // dxgmms2.sys .text:0x6960, 0x1c52 bytes
    // dxgmms2.sys .text:0x1620, 0x20ba bytes
    // dxgmms2.sys .text:0x6960, 0x1c52 bytes
    //
    _p73(sdk::unknown_ptr) mm_terminate_allocation;
    
    // [VidMmTerminateCompanionContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d530, 0x158b bytes
    // dxgmms2.sys .text:0x22d70, 0x1c52 bytes
    // dxgmms2.sys .text:0x2ceb0, 0x20ba bytes
    // dxgmms2.sys .text:0x22cf0, 0x1c52 bytes
    //
    _p74(sdk::unknown_ptr) mm_terminate_companion_context;
    
    // [VidMmTerminateDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14b0, 0x158b bytes
    // dxgmms2.sys .text:0x11fb0, 0x1c52 bytes
    // dxgmms2.sys .text:0x13cb0, 0x20ba bytes
    // dxgmms2.sys .text:0x11fb0, 0x1c52 bytes
    //
    _p75(sdk::unknown_ptr) mm_terminate_device;
    
    // [VidMmTerminateProcess]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x19c0, 0x158b bytes
    // dxgmms2.sys .text:0x3100, 0x1c52 bytes
    // dxgmms2.sys .text:0x17f00, 0x20ba bytes
    // dxgmms2.sys .text:0x3100, 0x1c52 bytes
    //
    _p76(sdk::unknown_ptr) mm_terminate_process;
    
    // [VidMmTrimDmaPoolToMinimum]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d540, 0x158b bytes
    // dxgmms2.sys .text:0x22d90, 0x1c52 bytes
    // dxgmms2.sys .text:0x2ced0, 0x20ba bytes
    // dxgmms2.sys .text:0x22d10, 0x1c52 bytes
    //
    _p77(sdk::unknown_ptr) mm_trim_dma_pool_to_minimum;
    
    // [VidMmTrimOfferCommitment]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d320, 0x158b bytes
    // dxgmms2.sys .text:0x226e0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2c940, 0x20ba bytes
    // dxgmms2.sys .text:0x22660, 0x1c52 bytes
    //
    _p78(sdk::unknown_ptr) mm_trim_offer_commitment;
    
    // [VidMmTryCloseAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11680, 0x158b bytes
    // dxgmms2.sys .text:0x14170, 0x1c52 bytes
    // dxgmms2.sys .text:0x18610, 0x20ba bytes
    // dxgmms2.sys .text:0x14170, 0x1c52 bytes
    //
    _p79(sdk::unknown_ptr) mm_try_close_allocation;
    
    // [VidMmUnlock]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2420, 0x158b bytes
    // dxgmms2.sys .text:0x2a90, 0x1c52 bytes
    // dxgmms2.sys .text:0x2db0, 0x20ba bytes
    // dxgmms2.sys .text:0x2a90, 0x1c52 bytes
    //
    _p80(sdk::unknown_ptr) mm_unlock;
    
    // [VidMmUnmapCpuVA]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x18b0, 0x158b bytes
    // dxgmms2.sys .text:0x14110, 0x1c52 bytes
    // dxgmms2.sys .text:0x17c00, 0x20ba bytes
    // dxgmms2.sys .text:0x14110, 0x1c52 bytes
    //
    _p81(sdk::unknown_ptr) mm_unmap_cpu_va;
    
    // [VidMmUnmapGpuVA]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x32b0, 0x158b bytes
    // dxgmms2.sys .text:0x127e0, 0x1c52 bytes
    // dxgmms2.sys .text:0x157c0, 0x20ba bytes
    // dxgmms2.sys .text:0x127e0, 0x1c52 bytes
    //
    _p82(sdk::unknown_ptr) mm_unmap_gpu_va;
    
    // [VidMmUnmapViewAsync]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x67c30, 0x158b bytes
    // dxgmms2.sys PAGE:0x603c0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7baec, 0x20ba bytes
    // dxgmms2.sys PAGE:0x609b0, 0x1c52 bytes
    //
    _p83(sdk::unknown_ptr) mm_unmap_view_async;
    
    // [VidMmUnmapViewOfAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4972c, 0x158b bytes
    // dxgmms2.sys PAGE:0x609a4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7b820, 0x20ba bytes
    // dxgmms2.sys PAGE:0x60f94, 0x1c52 bytes
    //
    _p84(sdk::unknown_ptr) mm_unmap_view_of_allocation;
    
    // [VidMmUnpinAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12a00, 0x158b bytes
    // dxgmms2.sys .text:0x22dd0, 0x1c52 bytes
    // dxgmms2.sys .text:0x1c020, 0x20ba bytes
    // dxgmms2.sys .text:0x22d50, 0x1c52 bytes
    //
    _p85(sdk::unknown_ptr) mm_unpin_allocation;
    
    // [VidMmUnreferenceDmaBuffer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d550, 0x158b bytes
    // dxgmms2.sys .text:0x22df0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cf10, 0x20ba bytes
    // dxgmms2.sys .text:0x22d70, 0x1c52 bytes
    //
    _p86(sdk::unknown_ptr) mm_unreference_dma_buffer;
    
    // [VidMmUnreferencePrimaryAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d570, 0x158b bytes
    // dxgmms2.sys .text:0x22e20, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cf40, 0x20ba bytes
    // dxgmms2.sys .text:0x22da0, 0x1c52 bytes
    //
    _p87(sdk::unknown_ptr) mm_unreference_primary_allocation;
    
    // [VidMmUpdateAllocationProperty]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d360, 0x158b bytes
    // dxgmms2.sys .text:0x22750, 0x1c52 bytes
    // dxgmms2.sys .text:0x2c9b0, 0x20ba bytes
    // dxgmms2.sys .text:0x226d0, 0x1c52 bytes
    //
    _p88(sdk::unknown_ptr) mm_update_allocation_property;
    
    // [VidMmUpdateContextAllocationCb]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d370, 0x158b bytes
    // dxgmms2.sys .text:0x22770, 0x1c52 bytes
    // dxgmms2.sys .text:0x2c9d0, 0x20ba bytes
    // dxgmms2.sys .text:0x226f0, 0x1c52 bytes
    //
    _p89(sdk::unknown_ptr) mm_update_context_allocation_cb;
    
    // [VidMmUpdateGpuVirtualAddress]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d590, 0x158b bytes
    // dxgmms2.sys .text:0x22e50, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cf70, 0x20ba bytes
    // dxgmms2.sys .text:0x22dd0, 0x1c52 bytes
    //
    _p90(sdk::unknown_ptr) mm_update_gpu_virtual_address;
    
    // [VidMmUseDirectFlip]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14f80, 0x158b bytes
    // dxgmms2.sys .text:0x14740, 0x1c52 bytes
    // dxgmms2.sys .text:0x18f20, 0x20ba bytes
    // dxgmms2.sys .text:0x14740, 0x1c52 bytes
    //
    _p91(sdk::unknown_ptr) mm_use_direct_flip;
    
    // [VidMmValidateHistoryBuffers]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d5a0, 0x158b bytes
    // dxgmms2.sys .text:0x22e90, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cfb0, 0x20ba bytes
    // dxgmms2.sys .text:0x22e10, 0x1c52 bytes
    //
    _p92(sdk::unknown_ptr) mm_validate_history_buffers;
    
    // [VidMmWaitForFences]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x134a0, 0x158b bytes
    // dxgmms2.sys .text:0x22790, 0x1c52 bytes
    // dxgmms2.sys .text:0x2c9f0, 0x20ba bytes
    // dxgmms2.sys .text:0x22710, 0x1c52 bytes
    //
    _p93(sdk::unknown_ptr) mm_wait_for_fences;
    
    // [VidMmWaitOnAllocationDmaReferences]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2950, 0x158b bytes
    // dxgmms2.sys .text:0x1fe0, 0x1c52 bytes
    // dxgmms2.sys .text:0x14a80, 0x20ba bytes
    // dxgmms2.sys .text:0x1fe0, 0x1c52 bytes
    //
    _p94(sdk::unknown_ptr) mm_wait_on_allocation_dma_references;
    
    // [VidMmWaitOnAllocationPresentQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d5b0, 0x158b bytes
    // dxgmms2.sys .text:0x22eb0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cfd0, 0x20ba bytes
    // dxgmms2.sys .text:0x22e30, 0x1c52 bytes
    //
    _p95(sdk::unknown_ptr) mm_wait_on_allocation_present_queue;
    
    // [VidMmWorkerHasQueuedPaging]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d5c0, 0x158b bytes
    // dxgmms2.sys .text:0x22ed0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cff0, 0x20ba bytes
    // dxgmms2.sys .text:0x22e50, 0x1c52 bytes
    //
    _p96(sdk::unknown_ptr) mm_worker_has_queued_paging;
    
    // [VidMmWorkerThreadProc]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6db60, 0x158b bytes
    // dxgmms2.sys PAGE:0x93d00, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb4f20, 0x20ba bytes
    // dxgmms2.sys PAGE:0x943d0, 0x1c52 bytes
    //
    _p97(sdk::unknown_ptr) mm_worker_thread_proc;
    
    // [VidMmWorkerThreadWake]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b3d0, 0x158b bytes
    // dxgmms2.sys .rdata:0x44410, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4ef30, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44410, 0x1c52 bytes
    //
    _p98(sdk::unknown_ptr) mm_worker_thread_wake;
    
    // [VidMmiAllocateMdl]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4979c, 0x158b bytes
    // dxgmms2.sys PAGE:0x60920, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7b8e0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x60f10, 0x1c52 bytes
    //
    _p99(sdk::unknown_ptr) mmi_allocate_mdl;
    
    // [VidMmiAllocationMeetsCriteria]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8dd18, 0x158b bytes
    // dxgmms2.sys PAGE:0xb8798, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdd494, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb8d68, 0x1c52 bytes
    //
    _q00(sdk::unknown_ptr) mmi_allocation_meets_criteria;
    
    // [VidMmiBuildMdlForContiguousMmIo]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x92698, 0x158b bytes
    // dxgmms2.sys PAGE:0xbd2dc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe1f6c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbd8ac, 0x1c52 bytes
    //
    _q01(sdk::unknown_ptr) mmi_build_mdl_for_contiguous_mm_io;
    
    // [VidMmiBuildMdlFromMdl]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x92740, 0x158b bytes
    // dxgmms2.sys PAGE:0xbd3a0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe2030, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbd970, 0x1c52 bytes
    //
    _q02(sdk::unknown_ptr) mmi_build_mdl_from_mdl;
    
    // [VidMmiEnsureVirtualAddressRangeValid]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x92808, 0x158b bytes
    // dxgmms2.sys PAGE:0xbd470, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe2100, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbda40, 0x1c52 bytes
    //
    _q03(sdk::unknown_ptr) mmi_ensure_virtual_address_range_valid;
    
    // [VidMmiFreeQuerySegmentInfo]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6a6f4, 0x158b bytes
    // dxgmms2.sys PAGE:0x9146c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xad9d8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x91b4c, 0x1c52 bytes
    //
    _q04(sdk::unknown_ptr) mmi_free_query_segment_info;
    
    // [VidMmiInit]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6a544, 0x158b bytes
    // dxgmms2.sys PAGE:0x91294, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xad818, 0x20ba bytes
    // dxgmms2.sys PAGE:0x91974, 0x1c52 bytes
    //
    _q05(sdk::unknown_ptr) mmi_init;
    
    // [VidMmiProbeAndLockAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x49560, 0x158b bytes
    // dxgmms2.sys PAGE:0x60b28, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7b5e0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x61118, 0x1c52 bytes
    //
    _q06(sdk::unknown_ptr) mmi_probe_and_lock_allocation;
    
    // [VidMmiQuerySegmentInfo4]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6a340, 0x158b bytes
    // dxgmms2.sys PAGE:0x92ea8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xaf8b0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x93580, 0x1c52 bytes
    //
    _q07(sdk::unknown_ptr) mmi_query_segment_info4;
    
    // [VidMmiSetPriorityForMemoryPages]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4052c, 0x158b bytes
    // dxgmms2.sys PAGE:0x75afc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x81018, 0x20ba bytes
    // dxgmms2.sys PAGE:0x760ec, 0x1c52 bytes
    //
    _q08(sdk::unknown_ptr) mmi_set_priority_for_memory_pages;
    
    // [VidMmiUnlockAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x65860, 0x158b bytes
    // dxgmms2.sys PAGE:0x60564, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa2f3c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x60b54, 0x1c52 bytes
    //
    _q09(sdk::unknown_ptr) mmi_unlock_allocation;
    
    // [VidSchCancelDeferredVidPnSourceVisibility]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x71880, 0x158b bytes
    // dxgmms2.sys PAGE:0x86100, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3c50, 0x20ba bytes
    // dxgmms2.sys PAGE:0x866f0, 0x1c52 bytes
    //
    _q10(sdk::unknown_ptr) sch_cancel_deferred_vid_pn_source_visibility;
    
    // [VidSchCancelDeviceCommand]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x25de0, 0x158b bytes
    // dxgmms2.sys .text:0x33a84, 0x1c52 bytes
    // dxgmms2.sys .text:0x1806c, 0x20ba bytes
    // dxgmms2.sys .text:0x33a04, 0x1c52 bytes
    //
    _q11(sdk::unknown_ptr) sch_cancel_device_command;
    
    // [VidSchCheckSurfaceIndependentFlipAssignment]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x10e00, 0x158b bytes
    // dxgmms2.sys .text:0x147c0, 0x1c52 bytes
    // dxgmms2.sys .text:0x17050, 0x20ba bytes
    // dxgmms2.sys .text:0x147c0, 0x1c52 bytes
    //
    _q12(sdk::unknown_ptr) sch_check_surface_independent_flip_assignment;
    
    // [VidSchCollectDbgInfo]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xa0a60, 0x158b bytes
    // dxgmms2.sys PAGE:0xd4dd0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf66d0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd5570, 0x1c52 bytes
    //
    _q13(sdk::unknown_ptr) sch_collect_dbg_info;
    
    // [VidSchConfirmToken]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x25ea0, 0x158b bytes
    // dxgmms2.sys .text:0x33b50, 0x1c52 bytes
    // dxgmms2.sys .text:0x3c3e0, 0x20ba bytes
    // dxgmms2.sys .text:0x33ad0, 0x1c52 bytes
    //
    _q14(sdk::unknown_ptr) sch_confirm_token;
    
    // [VidSchControlVSyncAdapter]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x64f80, 0x158b bytes
    // dxgmms2.sys PAGE:0x80620, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa31c0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x80c10, 0x1c52 bytes
    //
    _q15(sdk::unknown_ptr) sch_control_v_sync_adapter;
    
    // [VidSchControlVSyncDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x64ec0, 0x158b bytes
    // dxgmms2.sys PAGE:0x804d0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3030, 0x20ba bytes
    // dxgmms2.sys PAGE:0x80ac0, 0x1c52 bytes
    //
    _q16(sdk::unknown_ptr) sch_control_v_sync_device;
    
    // [VidSchCreateContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x64250, 0x158b bytes
    // dxgmms2.sys PAGE:0x7dae0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x947d0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7e0d0, 0x1c52 bytes
    //
    _q17(sdk::unknown_ptr) sch_create_context;
    
    // [VidSchCreateDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x64990, 0x158b bytes
    // dxgmms2.sys PAGE:0x7dfb0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x94ca0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7e5a0, 0x1c52 bytes
    //
    _q18(sdk::unknown_ptr) sch_create_device;
    
    // [VidSchCreateProcess]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4af60, 0x158b bytes
    // dxgmms2.sys PAGE:0x74a20, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x82930, 0x20ba bytes
    // dxgmms2.sys PAGE:0x75010, 0x1c52 bytes
    //
    _q19(sdk::unknown_ptr) sch_create_process;
    
    // [VidSchCreateSyncObject]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x498b0, 0x158b bytes
    // dxgmms2.sys PAGE:0x7f2e0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x96be0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7f8d0, 0x1c52 bytes
    //
    _q20(sdk::unknown_ptr) sch_create_sync_object;
    
    // [VidSchCreateSystemDevices]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6d734, 0x158b bytes
    // dxgmms2.sys PAGE:0x93458, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb4694, 0x20ba bytes
    // dxgmms2.sys PAGE:0x93b30, 0x1c52 bytes
    //
    _q21(sdk::unknown_ptr) sch_create_system_devices;
    
    // [VidSchDdiNotifyDpc]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x70c0, 0x158b bytes
    // dxgmms2.sys .text:0x7410, 0x1c52 bytes
    // dxgmms2.sys .text:0x6ff0, 0x20ba bytes
    // dxgmms2.sys .text:0x7410, 0x1c52 bytes
    //
    _q22(sdk::unknown_ptr) sch_ddi_notify_dpc;
    
    // [VidSchDdiNotifyDpcWorker]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x236f0, 0x158b bytes
    // dxgmms2.sys .text:0x2ee50, 0x1c52 bytes
    // dxgmms2.sys .text:0x38154, 0x20ba bytes
    // dxgmms2.sys .text:0x2edd0, 0x1c52 bytes
    //
    _q23(sdk::unknown_ptr) sch_ddi_notify_dpc_worker;
    
    // [VidSchDdiNotifyInterrupt]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xc020, 0x158b bytes
    // dxgmms2.sys .text:0xe300, 0x1c52 bytes
    // dxgmms2.sys .text:0xe1c0, 0x20ba bytes
    // dxgmms2.sys .text:0xe300, 0x1c52 bytes
    //
    _q24(sdk::unknown_ptr) sch_ddi_notify_interrupt;
    
    // [VidSchDdiNotifyInterruptWorker]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xc100, 0x158b bytes
    // dxgmms2.sys .text:0xe410, 0x1c52 bytes
    // dxgmms2.sys .text:0xe2d0, 0x20ba bytes
    // dxgmms2.sys .text:0xe410, 0x1c52 bytes
    //
    _q25(sdk::unknown_ptr) sch_ddi_notify_interrupt_worker;
    
    // [VidSchDestroyDeviceSyncObject]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xee80, 0x158b bytes
    // dxgmms2.sys .text:0x1bd0, 0x1c52 bytes
    // dxgmms2.sys .text:0x14ca0, 0x20ba bytes
    // dxgmms2.sys .text:0x1bd0, 0x1c52 bytes
    //
    _q26(sdk::unknown_ptr) sch_destroy_device_sync_object;
    
    // [VidSchDestroySyncObject]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x63fe0, 0x158b bytes
    // dxgmms2.sys PAGE:0x7f0d0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x969d0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7f6c0, 0x1c52 bytes
    //
    _q27(sdk::unknown_ptr) sch_destroy_sync_object;
    
    // [VidSchDeviceQueuesNotEmpty]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x144c, 0x158b bytes
    // dxgmms2.sys .text:0x13c4, 0x1c52 bytes
    // dxgmms2.sys .text:0x174e4, 0x20ba bytes
    // dxgmms2.sys .text:0x13c4, 0x1c52 bytes
    //
    _q28(sdk::unknown_ptr) sch_device_queues_not_empty;
    
    // [VidSchEnableLatencyToleranceTimer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x13580, 0x158b bytes
    // dxgmms2.sys .text:0x34310, 0x1c52 bytes
    // dxgmms2.sys .text:0x120b0, 0x20ba bytes
    // dxgmms2.sys .text:0x34290, 0x1c52 bytes
    //
    _q29(sdk::unknown_ptr) sch_enable_latency_tolerance_timer;
    
    // [VidSchEnqueueCpuEvent]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x40000, 0x158b bytes
    // dxgmms2.sys PAGE:0xd22b0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7b010, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd2a50, 0x1c52 bytes
    //
    _q30(sdk::unknown_ptr) sch_enqueue_cpu_event;
    
    // [VidSchEnterIndependentFlip]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x25f70, 0x158b bytes
    // dxgmms2.sys .text:0x34410, 0x1c52 bytes
    // dxgmms2.sys .text:0x192c0, 0x20ba bytes
    // dxgmms2.sys .text:0x34390, 0x1c52 bytes
    //
    _q31(sdk::unknown_ptr) sch_enter_independent_flip;
    
    // [VidSchEscape]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9f760, 0x158b bytes
    // dxgmms2.sys PAGE:0xd2620, 0x1c52 bytes
    // dxgmms2.sys .text:0x3ccd0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd2dc0, 0x1c52 bytes
    //
    _q32(sdk::unknown_ptr) sch_escape;
    
    // [VidSchExitIndependentFlip]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x26170, 0x158b bytes
    // dxgmms2.sys .text:0x348a0, 0x1c52 bytes
    // dxgmms2.sys .text:0x191c0, 0x20ba bytes
    // dxgmms2.sys .text:0x34820, 0x1c52 bytes
    //
    _q33(sdk::unknown_ptr) sch_exit_independent_flip;
    
    // [VidSchExitIndependentFlipInternal]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x26284, 0x158b bytes
    // dxgmms2.sys .text:0x3499c, 0x1c52 bytes
    // dxgmms2.sys .text:0x19630, 0x20ba bytes
    // dxgmms2.sys .text:0x3491c, 0x1c52 bytes
    //
    _q34(sdk::unknown_ptr) sch_exit_independent_flip_internal;
    
    // [VidSchFlushAdapter]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9f820, 0x158b bytes
    // dxgmms2.sys PAGE:0xd2790, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf4360, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd2f30, 0x1c52 bytes
    //
    _q35(sdk::unknown_ptr) sch_flush_adapter;
    
    // [VidSchFlushContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x49b50, 0x158b bytes
    // dxgmms2.sys PAGE:0x5f310, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x97440, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5f900, 0x1c52 bytes
    //
    _q36(sdk::unknown_ptr) sch_flush_context;
    
    // [VidSchFlushDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4ad60, 0x158b bytes
    // dxgmms2.sys PAGE:0x626c0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x97220, 0x20ba bytes
    // dxgmms2.sys PAGE:0x62cb0, 0x1c52 bytes
    //
    _q37(sdk::unknown_ptr) sch_flush_device;
    
    // [VidSchFlushPendingCommand]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9fae0, 0x158b bytes
    // dxgmms2.sys PAGE:0xd2a50, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf4710, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd31f0, 0x1c52 bytes
    //
    _q38(sdk::unknown_ptr) sch_flush_pending_command;
    
    // [VidSchFlushQueuePackets]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xf550, 0x158b bytes
    // dxgmms2.sys .text:0x15190, 0x1c52 bytes
    // dxgmms2.sys .text:0x1a710, 0x20ba bytes
    // dxgmms2.sys .text:0x15190, 0x1c52 bytes
    //
    _q39(sdk::unknown_ptr) sch_flush_queue_packets;
    
    // [VidSchGetDeviceError]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x65140, 0x158b bytes
    // dxgmms2.sys PAGE:0x83160, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9fb10, 0x20ba bytes
    // dxgmms2.sys PAGE:0x83750, 0x1c52 bytes
    //
    _q40(sdk::unknown_ptr) sch_get_device_error;
    
    // [VidSchGetDeviceFlipMode]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x65170, 0x158b bytes
    // dxgmms2.sys PAGE:0x831a0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9f6b0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x83790, 0x1c52 bytes
    //
    _q41(sdk::unknown_ptr) sch_get_device_flip_mode;
    
    // [VidSchGetDevicePageFaultInformation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x718a0, 0x158b bytes
    // dxgmms2.sys PAGE:0x86130, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3c80, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86720, 0x1c52 bytes
    //
    _q42(sdk::unknown_ptr) sch_get_device_page_fault_information;
    
    // [VidSchGetDriverPagingContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9fbc0, 0x158b bytes
    // dxgmms2.sys PAGE:0x73a44, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf4820, 0x20ba bytes
    // dxgmms2.sys PAGE:0x74034, 0x1c52 bytes
    //
    _q43(sdk::unknown_ptr) sch_get_driver_paging_context;
    
    // [VidSchGetDxgContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9fbf0, 0x158b bytes
    // dxgmms2.sys PAGE:0xd2bd0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf4860, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd3370, 0x1c52 bytes
    //
    _q44(sdk::unknown_ptr) sch_get_dxg_context;
    
    // [VidSchGetInProcessPriorityContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x718c0, 0x158b bytes
    // dxgmms2.sys PAGE:0x86160, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3cb0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86750, 0x1c52 bytes
    //
    _q45(sdk::unknown_ptr) sch_get_in_process_priority_context;
    
    // [VidSchGetMonitorPowerState]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x659c0, 0x158b bytes
    // dxgmms2.sys PAGE:0x86280, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3e30, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86870, 0x1c52 bytes
    //
    _q46(sdk::unknown_ptr) sch_get_monitor_power_state;
    
    // [VidSchGetNewSubmissionFenceId]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x64820, 0x158b bytes
    // dxgmms2.sys PAGE:0x88138, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa039c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x88728, 0x1c52 bytes
    //
    _q47(sdk::unknown_ptr) sch_get_new_submission_fence_id;
    
    // [VidSchGetNodeOrdinal]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x65428, 0x158b bytes
    // dxgmms2.sys PAGE:0x65f88, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x91994, 0x20ba bytes
    // dxgmms2.sys PAGE:0x66578, 0x1c52 bytes
    //
    _q48(sdk::unknown_ptr) sch_get_node_ordinal;
    
    // [VidSchGetPagingContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14fd4, 0x158b bytes
    // dxgmms2.sys .text:0x34ea0, 0x1c52 bytes
    // dxgmms2.sys .text:0x3cffc, 0x20ba bytes
    // dxgmms2.sys .text:0x34e20, 0x1c52 bytes
    //
    _q49(sdk::unknown_ptr) sch_get_paging_context;
    
    // [VidSchGetPriorityClassProcess]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9fc10, 0x158b bytes
    // dxgmms2.sys PAGE:0xd2bf0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf4880, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd3390, 0x1c52 bytes
    //
    _q50(sdk::unknown_ptr) sch_get_priority_class_process;
    
    // [VidSchGetPriorityContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9fc50, 0x158b bytes
    // dxgmms2.sys PAGE:0xd2c40, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf48f0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd33e0, 0x1c52 bytes
    //
    _q51(sdk::unknown_ptr) sch_get_priority_context;
    
    // [VidSchGetProcessInterferenceCount]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x718d0, 0x158b bytes
    // dxgmms2.sys PAGE:0x86170, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3cc0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86760, 0x1c52 bytes
    //
    _q52(sdk::unknown_ptr) sch_get_process_interference_count;
    
    // [VidSchGetQueuedPacketCount]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x718e0, 0x158b bytes
    // dxgmms2.sys PAGE:0x86180, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3d10, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86770, 0x1c52 bytes
    //
    _q53(sdk::unknown_ptr) sch_get_queued_packet_count;
    
    // [VidSchGetQueuedPresentLimit]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x65400, 0x158b bytes
    // dxgmms2.sys PAGE:0x86300, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa4e70, 0x20ba bytes
    // dxgmms2.sys PAGE:0x868f0, 0x1c52 bytes
    //
    _q54(sdk::unknown_ptr) sch_get_queued_present_limit;
    
    // [VidSchGetRunEvent]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x718f0, 0x158b bytes
    // dxgmms2.sys PAGE:0x86190, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3d20, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86780, 0x1c52 bytes
    //
    _q55(sdk::unknown_ptr) sch_get_run_event;
    
    // [VidSchHasReadyPackets]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x26450, 0x158b bytes
    // dxgmms2.sys .text:0x34f30, 0x1c52 bytes
    // dxgmms2.sys .text:0x3d0a0, 0x20ba bytes
    // dxgmms2.sys .text:0x34eb0, 0x1c52 bytes
    //
    _q56(sdk::unknown_ptr) sch_has_ready_packets;
    
    // [VidSchInitializeAdapter]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x68d90, 0x158b bytes
    // dxgmms2.sys PAGE:0x8ada0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xaaa20, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8b390, 0x1c52 bytes
    //
    _q57(sdk::unknown_ptr) sch_initialize_adapter;
    
    // [VidSchInitializeAdapterPowerManagement]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x71900, 0x158b bytes
    // dxgmms2.sys PAGE:0x861a0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3d30, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86790, 0x1c52 bytes
    //
    _q58(sdk::unknown_ptr) sch_initialize_adapter_power_management;
    
    // [VidSchInitializeComponentPowerManagement]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9fc90, 0x158b bytes
    // dxgmms2.sys PAGE:0xd2c90, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb4ca0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd3430, 0x1c52 bytes
    //
    _q59(sdk::unknown_ptr) sch_initialize_component_power_management;
    
    // [VidSchInsertContextAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6551c, 0x158b bytes
    // dxgmms2.sys PAGE:0x87738, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9bb94, 0x20ba bytes
    // dxgmms2.sys PAGE:0x87d28, 0x1c52 bytes
    //
    _q60(sdk::unknown_ptr) sch_insert_context_allocation;
    
    // [VidSchInterface]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29450, 0x158b bytes
    // dxgmms2.sys .rdata:0x3f4d0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x48480, 0x20ba bytes
    // dxgmms2.sys .rdata:0x3f4d0, 0x1c52 bytes
    //
    _q61(sdk::unknown_ptr) sch_interface;
    
    // [VidSchIsContextFlushable]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9fd10, 0x158b bytes
    // dxgmms2.sys PAGE:0xd2d20, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf4960, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd34c0, 0x1c52 bytes
    //
    _q62(sdk::unknown_ptr) sch_is_context_flushable;
    
    // [VidSchIsDeviceBusy]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x108b8, 0x158b bytes
    // dxgmms2.sys .text:0x140e8, 0x1c52 bytes
    // dxgmms2.sys .text:0x19a0, 0x20ba bytes
    // dxgmms2.sys .text:0x140e8, 0x1c52 bytes
    //
    _q63(sdk::unknown_ptr) sch_is_device_busy;
    
    // [VidSchIsFlipQueueDeviceOwner]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9fd40, 0x158b bytes
    // dxgmms2.sys PAGE:0xd2d50, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf4990, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd34f0, 0x1c52 bytes
    //
    _q64(sdk::unknown_ptr) sch_is_flip_queue_device_owner;
    
    // [VidSchIsGpuAccessBlocked]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x64d90, 0x158b bytes
    // dxgmms2.sys PAGE:0x7de70, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x94b60, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7e460, 0x1c52 bytes
    //
    _q65(sdk::unknown_ptr) sch_is_gpu_access_blocked;
    
    // [VidSchIsMonitoredFenceSignaled]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x25a8, 0x158b bytes
    // dxgmms2.sys .text:0x28f0, 0x1c52 bytes
    // dxgmms2.sys .text:0x29fc, 0x20ba bytes
    // dxgmms2.sys .text:0x28f0, 0x1c52 bytes
    //
    _q66(sdk::unknown_ptr) sch_is_monitored_fence_signaled;
    
    // [VidSchIsSyncObjectSignaled]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x264e0, 0x158b bytes
    // dxgmms2.sys .text:0x35010, 0x1c52 bytes
    // dxgmms2.sys .text:0x3d1b0, 0x20ba bytes
    // dxgmms2.sys .text:0x34f90, 0x1c52 bytes
    //
    _q67(sdk::unknown_ptr) sch_is_sync_object_signaled;
    
    // [VidSchIsSyncObjectWaitUnordered]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x65220, 0x158b bytes
    // dxgmms2.sys PAGE:0x842e0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9fb50, 0x20ba bytes
    // dxgmms2.sys PAGE:0x848d0, 0x1c52 bytes
    //
    _q68(sdk::unknown_ptr) sch_is_sync_object_wait_unordered;
    
    // [VidSchIsTDRFaultingDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x71960, 0x158b bytes
    // dxgmms2.sys PAGE:0x86200, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3d90, 0x20ba bytes
    // dxgmms2.sys PAGE:0x867f0, 0x1c52 bytes
    //
    _q69(sdk::unknown_ptr) sch_is_tdr_faulting_device;
    
    // [VidSchIsTDRPending]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xa970, 0x158b bytes
    // dxgmms2.sys .text:0xc7a0, 0x1c52 bytes
    // dxgmms2.sys .text:0xc8a0, 0x20ba bytes
    // dxgmms2.sys .text:0xc7a0, 0x1c52 bytes
    //
    _q70(sdk::unknown_ptr) sch_is_tdr_pending;
    
    // [VidSchIsVSyncAvailable]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x650d0, 0x158b bytes
    // dxgmms2.sys PAGE:0xd2dc0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa6a60, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd3560, 0x1c52 bytes
    //
    _q71(sdk::unknown_ptr) sch_is_v_sync_available;
    
    // [VidSchIsVSyncEnabled]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x623d0, 0x158b bytes
    // dxgmms2.sys PAGE:0x794e0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x93bc0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x79ad0, 0x1c52 bytes
    //
    _q72(sdk::unknown_ptr) sch_is_v_sync_enabled;
    
    // [VidSchIsWorkerThread]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2930, 0x158b bytes
    // dxgmms2.sys .text:0x22a0, 0x1c52 bytes
    // dxgmms2.sys .text:0x13bb0, 0x20ba bytes
    // dxgmms2.sys .text:0x22a0, 0x1c52 bytes
    //
    _q73(sdk::unknown_ptr) sch_is_worker_thread;
    
    // [VidSchMarkDeviceAsError]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x26580, 0x158b bytes
    // dxgmms2.sys .text:0x1240, 0x1c52 bytes
    // dxgmms2.sys .text:0x18790, 0x20ba bytes
    // dxgmms2.sys .text:0x1240, 0x1c52 bytes
    //
    _q74(sdk::unknown_ptr) sch_mark_device_as_error;
    
    // [VidSchNotifyDeviceRemoved]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x26590, 0x158b bytes
    // dxgmms2.sys .text:0x350d0, 0x1c52 bytes
    // dxgmms2.sys .text:0x3d2a0, 0x20ba bytes
    // dxgmms2.sys .text:0x35050, 0x1c52 bytes
    //
    _q75(sdk::unknown_ptr) sch_notify_device_removed;
    
    // [VidSchPostSignalCrossAdapter]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x25900, 0x158b bytes
    // dxgmms2.sys .text:0x32ed0, 0x1c52 bytes
    // dxgmms2.sys .text:0x3b550, 0x20ba bytes
    // dxgmms2.sys .text:0x32e50, 0x1c52 bytes
    //
    _q76(sdk::unknown_ptr) sch_post_signal_cross_adapter;
    
    // [VidSchPrepareForRecovery]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xa1160, 0x158b bytes
    // dxgmms2.sys PAGE:0xd5500, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf6e10, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd5ca0, 0x1c52 bytes
    //
    _q77(sdk::unknown_ptr) sch_prepare_for_recovery;
    
    // [VidSchQueryAdapterStatistics]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x71970, 0x158b bytes
    // dxgmms2.sys PAGE:0xd2e60, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf4a00, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd3600, 0x1c52 bytes
    //
    _q78(sdk::unknown_ptr) sch_query_adapter_statistics;
    
    // [VidSchQueryDmaData]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xa1184, 0x158b bytes
    // dxgmms2.sys PAGE:0xd552c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf6e3c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd5ccc, 0x1c52 bytes
    //
    _q79(sdk::unknown_ptr) sch_query_dma_data;
    
    // [VidSchQueryDmaHeader]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xa1258, 0x158b bytes
    // dxgmms2.sys PAGE:0xd5620, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf6f30, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd5dc0, 0x1c52 bytes
    //
    _q80(sdk::unknown_ptr) sch_query_dma_header;
    
    // [VidSchQueryFlipQueueInfo]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x65a10, 0x158b bytes
    // dxgmms2.sys PAGE:0x87440, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa5480, 0x20ba bytes
    // dxgmms2.sys PAGE:0x87a30, 0x1c52 bytes
    //
    _q81(sdk::unknown_ptr) sch_query_flip_queue_info;
    
    // [VidSchQueryLastCompletedPresentId]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x26830, 0x158b bytes
    // dxgmms2.sys .text:0x13170, 0x1c52 bytes
    // dxgmms2.sys .text:0x3d620, 0x20ba bytes
    // dxgmms2.sys .text:0x13170, 0x1c52 bytes
    //
    _q82(sdk::unknown_ptr) sch_query_last_completed_present_id;
    
    // [VidSchQueryLastCompletedPresentIdDWM]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x10bc0, 0x158b bytes
    // dxgmms2.sys .text:0x12e70, 0x1c52 bytes
    // dxgmms2.sys .text:0x16060, 0x20ba bytes
    // dxgmms2.sys .text:0x12e70, 0x1c52 bytes
    //
    _q83(sdk::unknown_ptr) sch_query_last_completed_present_id_dwm;
    
    // [VidSchQueryLastCompletedPresentIdDWMInternal]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x259b8, 0x158b bytes
    // dxgmms2.sys .text:0x32fa0, 0x1c52 bytes
    // dxgmms2.sys .text:0x3b630, 0x20ba bytes
    // dxgmms2.sys .text:0x32f20, 0x1c52 bytes
    //
    _q84(sdk::unknown_ptr) sch_query_last_completed_present_id_dwm_internal;
    
    // [VidSchQueryLastCompletedVidPnSourcePresentIdDWM]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x268f0, 0x158b bytes
    // dxgmms2.sys .text:0x35200, 0x1c52 bytes
    // dxgmms2.sys .text:0x3d760, 0x20ba bytes
    // dxgmms2.sys .text:0x35180, 0x1c52 bytes
    //
    _q85(sdk::unknown_ptr) sch_query_last_completed_vid_pn_source_present_id_dwm;
    
    // [VidSchQueryNodeStatistics]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9fda0, 0x158b bytes
    // dxgmms2.sys PAGE:0xd2ec0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf4a60, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd3660, 0x1c52 bytes
    //
    _q86(sdk::unknown_ptr) sch_query_node_statistics;
    
    // [VidSchQueryProcessAdapterStatistics]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9fe10, 0x158b bytes
    // dxgmms2.sys PAGE:0xd2f60, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf4b00, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd3700, 0x1c52 bytes
    //
    _q87(sdk::unknown_ptr) sch_query_process_adapter_statistics;
    
    // [VidSchQueryProcessNodeStatistics]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9fe50, 0x158b bytes
    // dxgmms2.sys PAGE:0xd2fa0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf4bd0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd3740, 0x1c52 bytes
    //
    _q88(sdk::unknown_ptr) sch_query_process_node_statistics;
    
    // [VidSchQueryProcessStatistics]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x719a0, 0x158b bytes
    // dxgmms2.sys PAGE:0x86210, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3dc0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86800, 0x1c52 bytes
    //
    _q89(sdk::unknown_ptr) sch_query_process_statistics;
    
    // [VidSchQueryProcessVidPnSourceStatistics]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9fe90, 0x158b bytes
    // dxgmms2.sys PAGE:0xd3010, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf4c40, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd37b0, 0x1c52 bytes
    //
    _q90(sdk::unknown_ptr) sch_query_process_vid_pn_source_statistics;
    
    // [VidSchQueryVidPnSourceStatistics]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x269c0, 0x158b bytes
    // dxgmms2.sys .text:0x35300, 0x1c52 bytes
    // dxgmms2.sys .text:0x3d8f0, 0x20ba bytes
    // dxgmms2.sys .text:0x35280, 0x1c52 bytes
    //
    _q91(sdk::unknown_ptr) sch_query_vid_pn_source_statistics;
    
    // [VidSchRegisterAsDwm]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x71770, 0x158b bytes
    // dxgmms2.sys PAGE:0x88fc0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa8650, 0x20ba bytes
    // dxgmms2.sys PAGE:0x895b0, 0x1c52 bytes
    //
    _q92(sdk::unknown_ptr) sch_register_as_dwm;
    
    // [VidSchRegisterCompletionEvent]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x62260, 0x158b bytes
    // dxgmms2.sys PAGE:0x636b0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x915a0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x63ca0, 0x1c52 bytes
    //
    _q93(sdk::unknown_ptr) sch_register_completion_event;
    
    // [VidSchRegisterSignalOnErrorDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11620, 0x158b bytes
    // dxgmms2.sys .text:0x141d0, 0x1c52 bytes
    // dxgmms2.sys .text:0x17de0, 0x20ba bytes
    // dxgmms2.sys .text:0x141d0, 0x1c52 bytes
    //
    _q94(sdk::unknown_ptr) sch_register_signal_on_error_device;
    
    // [VidSchRemoveContextAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x65714, 0x158b bytes
    // dxgmms2.sys PAGE:0x881f8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa2e68, 0x20ba bytes
    // dxgmms2.sys PAGE:0x887e8, 0x1c52 bytes
    //
    _q95(sdk::unknown_ptr) sch_remove_context_allocation;
    
    // [VidSchReportAdapter]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9fef0, 0x158b bytes
    // dxgmms2.sys PAGE:0xd3070, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf4ca0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd3810, 0x1c52 bytes
    //
    _q96(sdk::unknown_ptr) sch_report_adapter;
    
    // [VidSchReportContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xa0290, 0x158b bytes
    // dxgmms2.sys PAGE:0xd3590, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf51d0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd3d30, 0x1c52 bytes
    //
    _q97(sdk::unknown_ptr) sch_report_context;
    
    // [VidSchReportDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xa0300, 0x158b bytes
    // dxgmms2.sys PAGE:0xd3610, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf5270, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd3db0, 0x1c52 bytes
    //
    _q98(sdk::unknown_ptr) sch_report_device;
    
    // [VidSchRequestDeferredVidPnSourceVisibility]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x719c0, 0x158b bytes
    // dxgmms2.sys PAGE:0x86230, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3de0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86820, 0x1c52 bytes
    //
    _q99(sdk::unknown_ptr) sch_request_deferred_vid_pn_source_visibility;
    
    // [VidSchResetAdapter]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14770, 0x158b bytes
    // dxgmms2.sys .text:0x145b0, 0x1c52 bytes
    // dxgmms2.sys .text:0x18db0, 0x20ba bytes
    // dxgmms2.sys .text:0x145b0, 0x1c52 bytes
    //
    _r00(sdk::unknown_ptr) sch_reset_adapter;
    
    // [VidSchResetFlipQueueTimeout]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9e6d0, 0x158b bytes
    // dxgmms2.sys PAGE:0xd0abc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf2ec4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd125c, 0x1c52 bytes
    //
    _r01(sdk::unknown_ptr) sch_reset_flip_queue_timeout;
    
    // [VidSchResetGPUTimeout]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9e714, 0x158b bytes
    // dxgmms2.sys PAGE:0xd0b14, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf2f2c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd12b4, 0x1c52 bytes
    //
    _r02(sdk::unknown_ptr) sch_reset_gpu_timeout;
    
    // [VidSchRestartAdapter]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xa0480, 0x158b bytes
    // dxgmms2.sys PAGE:0xd37a0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf5420, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd3f40, 0x1c52 bytes
    //
    _r03(sdk::unknown_ptr) sch_restart_adapter;
    
    // [VidSchResumeAdapter]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x64860, 0x158b bytes
    // dxgmms2.sys PAGE:0x81480, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3af0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x81a70, 0x1c52 bytes
    //
    _r04(sdk::unknown_ptr) sch_resume_adapter;
    
    // [VidSchRundownUnorderedWaiterGlobal]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x25a74, 0x158b bytes
    // dxgmms2.sys .text:0x33098, 0x1c52 bytes
    // dxgmms2.sys .text:0x3b734, 0x20ba bytes
    // dxgmms2.sys .text:0x33018, 0x1c52 bytes
    //
    _r05(sdk::unknown_ptr) sch_rundown_unordered_waiter_global;
    
    // [VidSchSetCrossAdapterData]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x719e0, 0x158b bytes
    // dxgmms2.sys PAGE:0x86250, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3e00, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86840, 0x1c52 bytes
    //
    _r06(sdk::unknown_ptr) sch_set_cross_adapter_data;
    
    // [VidSchSetInProcessPriorityContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x658c0, 0x158b bytes
    // dxgmms2.sys PAGE:0x85ae0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3860, 0x20ba bytes
    // dxgmms2.sys PAGE:0x860d0, 0x1c52 bytes
    //
    _r07(sdk::unknown_ptr) sch_set_in_process_priority_context;
    
    // [VidSchSetMonitorPowerState]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x71650, 0x158b bytes
    // dxgmms2.sys .text:0x35380, 0x1c52 bytes
    // dxgmms2.sys .text:0x1ae40, 0x20ba bytes
    // dxgmms2.sys .text:0x35300, 0x1c52 bytes
    //
    _r08(sdk::unknown_ptr) sch_set_monitor_power_state;
    
    // [VidSchSetNodePowerState]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x134c0, 0x158b bytes
    // dxgmms2.sys .text:0x35590, 0x1c52 bytes
    // dxgmms2.sys .text:0x13930, 0x20ba bytes
    // dxgmms2.sys .text:0x35510, 0x1c52 bytes
    //
    _r09(sdk::unknown_ptr) sch_set_node_power_state;
    
    // [VidSchSetPagingNodePageDirectory]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12cdc, 0x158b bytes
    // dxgmms2.sys PAGE:0xd3a70, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb4a24, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd4210, 0x1c52 bytes
    //
    _r10(sdk::unknown_ptr) sch_set_paging_node_page_directory;
    
    // [VidSchSetPriorityClassProcess]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x71700, 0x158b bytes
    // dxgmms2.sys PAGE:0x88f50, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa85e0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x89540, 0x1c52 bytes
    //
    _r11(sdk::unknown_ptr) sch_set_priority_class_process;
    
    // [VidSchSetPriorityContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x64020, 0x158b bytes
    // dxgmms2.sys PAGE:0x7d990, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x93d20, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7df80, 0x1c52 bytes
    //
    _r12(sdk::unknown_ptr) sch_set_priority_context;
    
    // [VidSchSetQueuedPresentLimit]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x64dc0, 0x158b bytes
    // dxgmms2.sys PAGE:0x7dea0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x94b90, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7e490, 0x1c52 bytes
    //
    _r13(sdk::unknown_ptr) sch_set_queued_present_limit;
    
    // [VidSchSetRecoveryThread]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x719f0, 0x158b bytes
    // dxgmms2.sys PAGE:0x86270, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3e20, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86860, 0x1c52 bytes
    //
    _r14(sdk::unknown_ptr) sch_set_recovery_thread;
    
    // [VidSchSetVidPnSourceAddress]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x67da0, 0x158b bytes
    // dxgmms2.sys PAGE:0xd3b90, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa5dd0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd4330, 0x1c52 bytes
    //
    _r15(sdk::unknown_ptr) sch_set_vid_pn_source_address;
    
    // [VidSchSignalPagingFences]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x68b98, 0x158b bytes
    // dxgmms2.sys PAGE:0x72f94, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa7c98, 0x20ba bytes
    // dxgmms2.sys PAGE:0x73584, 0x1c52 bytes
    //
    _r16(sdk::unknown_ptr) sch_signal_paging_fences;
    
    // [VidSchSignalSyncObjectsFromCpu]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x26a20, 0x158b bytes
    // dxgmms2.sys .text:0x357d0, 0x1c52 bytes
    // dxgmms2.sys .text:0x3db20, 0x20ba bytes
    // dxgmms2.sys .text:0x35750, 0x1c52 bytes
    //
    _r17(sdk::unknown_ptr) sch_signal_sync_objects_from_cpu;
    
    // [VidSchSignalSyncObjectsFromGpu]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x7960, 0x158b bytes
    // dxgmms2.sys .text:0x8520, 0x1c52 bytes
    // dxgmms2.sys .text:0x77c0, 0x20ba bytes
    // dxgmms2.sys .text:0x8520, 0x1c52 bytes
    //
    _r18(sdk::unknown_ptr) sch_signal_sync_objects_from_gpu;
    
    // [VidSchSubmitCommand]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x62900, 0x158b bytes
    // dxgmms2.sys PAGE:0x7c3c0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x92750, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7c9b0, 0x1c52 bytes
    //
    _r19(sdk::unknown_ptr) sch_submit_command;
    
    // [VidSchSubmitDeviceCommand]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x102a0, 0x158b bytes
    // dxgmms2.sys .text:0x6a90, 0x1c52 bytes
    // dxgmms2.sys .text:0x1640, 0x20ba bytes
    // dxgmms2.sys .text:0x6a90, 0x1c52 bytes
    //
    _r20(sdk::unknown_ptr) sch_submit_device_command;
    
    // [VidSchSubmitWaitFromCpu]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xd2a0, 0x158b bytes
    // dxgmms2.sys .text:0x2480, 0x1c52 bytes
    // dxgmms2.sys .text:0x2a90, 0x20ba bytes
    // dxgmms2.sys .text:0x2480, 0x1c52 bytes
    //
    _r21(sdk::unknown_ptr) sch_submit_wait_from_cpu;
    
    // [VidSchSuspendAdapter]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x65050, 0x158b bytes
    // dxgmms2.sys PAGE:0x85bc0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa2950, 0x20ba bytes
    // dxgmms2.sys PAGE:0x861b0, 0x1c52 bytes
    //
    _r22(sdk::unknown_ptr) sch_suspend_adapter;
    
    // [VidSchSuspendResumeDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xf930, 0x158b bytes
    // dxgmms2.sys .text:0x1490, 0x1c52 bytes
    // dxgmms2.sys .text:0x140f0, 0x20ba bytes
    // dxgmms2.sys .text:0x1490, 0x1c52 bytes
    //
    _r23(sdk::unknown_ptr) sch_suspend_resume_device;
    
    // [VidSchSwitchFromContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x648a0, 0x158b bytes
    // dxgmms2.sys PAGE:0x883a0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa2a50, 0x20ba bytes
    // dxgmms2.sys PAGE:0x88990, 0x1c52 bytes
    //
    _r24(sdk::unknown_ptr) sch_switch_from_context;
    
    // [VidSchSwitchFromDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x643f0, 0x158b bytes
    // dxgmms2.sys PAGE:0xd3cd0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa2bb0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd4470, 0x1c52 bytes
    //
    _r25(sdk::unknown_ptr) sch_switch_from_device;
    
    // [VidSchSyncPriorityDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x65830, 0x158b bytes
    // dxgmms2.sys PAGE:0x85570, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3330, 0x20ba bytes
    // dxgmms2.sys PAGE:0x85b60, 0x1c52 bytes
    //
    _r26(sdk::unknown_ptr) sch_sync_priority_device;
    
    // [VidSchTerminateAdapter]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xa0630, 0x158b bytes
    // dxgmms2.sys PAGE:0xd3da0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf5810, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd4540, 0x1c52 bytes
    //
    _r27(sdk::unknown_ptr) sch_terminate_adapter;
    
    // [VidSchTerminateContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x642e0, 0x158b bytes
    // dxgmms2.sys PAGE:0x5f1c0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x94e10, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5f7b0, 0x1c52 bytes
    //
    _r28(sdk::unknown_ptr) sch_terminate_context;
    
    // [VidSchTerminateDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x644a0, 0x158b bytes
    // dxgmms2.sys PAGE:0x7dff0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x94ce0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7e5e0, 0x1c52 bytes
    //
    _r29(sdk::unknown_ptr) sch_terminate_device;
    
    // [VidSchTerminateProcess]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4d710, 0x158b bytes
    // dxgmms2.sys PAGE:0x74cc0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x855e0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x752b0, 0x1c52 bytes
    //
    _r30(sdk::unknown_ptr) sch_terminate_process;
    
    // [VidSchTimeoutSyncObject]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11da0, 0x158b bytes
    // dxgmms2.sys .text:0x150cc, 0x1c52 bytes
    // dxgmms2.sys .text:0x19f40, 0x20ba bytes
    // dxgmms2.sys .text:0x150cc, 0x1c52 bytes
    //
    _r31(sdk::unknown_ptr) sch_timeout_sync_object;
    
    // [VidSchUnreferenceDmaBuffer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xa0980, 0x158b bytes
    // dxgmms2.sys PAGE:0xd42e0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf5d7c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd4a80, 0x1c52 bytes
    //
    _r32(sdk::unknown_ptr) sch_unreference_dma_buffer;
    
    // [VidSchUnwaitFlipQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x5e90, 0x158b bytes
    // dxgmms2.sys .text:0xdda0, 0x1c52 bytes
    // dxgmms2.sys .text:0xd8e0, 0x20ba bytes
    // dxgmms2.sys .text:0xdda0, 0x1c52 bytes
    //
    _r33(sdk::unknown_ptr) sch_unwait_flip_queue;
    
    // [VidSchUpdateOverlayPlaneAttributes]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x26cb0, 0x158b bytes
    // dxgmms2.sys .text:0x35960, 0x1c52 bytes
    // dxgmms2.sys .text:0x3dd20, 0x20ba bytes
    // dxgmms2.sys .text:0x358e0, 0x1c52 bytes
    //
    _r34(sdk::unknown_ptr) sch_update_overlay_plane_attributes;
    
    // [VidSchWaitForCompletionEvent]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x620c4, 0x158b bytes
    // dxgmms2.sys PAGE:0x63590, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x90178, 0x20ba bytes
    // dxgmms2.sys PAGE:0x63b80, 0x1c52 bytes
    //
    _r35(sdk::unknown_ptr) sch_wait_for_completion_event;
    
    // [VidSchWaitForEvents]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x276c, 0x158b bytes
    // dxgmms2.sys .text:0x2104, 0x1c52 bytes
    // dxgmms2.sys .text:0x32c0, 0x20ba bytes
    // dxgmms2.sys .text:0x2104, 0x1c52 bytes
    //
    _r36(sdk::unknown_ptr) sch_wait_for_events;
    
    // [VidSchWaitForPagingFence]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xa09e4, 0x158b bytes
    // dxgmms2.sys PAGE:0xd4370, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf5e0c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd4b10, 0x1c52 bytes
    //
    _r37(sdk::unknown_ptr) sch_wait_for_paging_fence;
    
    // [VidSchWaitForQueuedPresentLimit]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x61fb0, 0x158b bytes
    // dxgmms2.sys PAGE:0x63050, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x90350, 0x20ba bytes
    // dxgmms2.sys PAGE:0x63640, 0x1c52 bytes
    //
    _r38(sdk::unknown_ptr) sch_wait_for_queued_present_limit;
    
    // [VidSchWaitForSingleSyncObject]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x6b60, 0x158b bytes
    // dxgmms2.sys .text:0x6e50, 0x1c52 bytes
    // dxgmms2.sys .text:0x6920, 0x20ba bytes
    // dxgmms2.sys .text:0x6e50, 0x1c52 bytes
    //
    _r39(sdk::unknown_ptr) sch_wait_for_single_sync_object;
    
    // [VidSchiAcquireSyncObject]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x6f00, 0x158b bytes
    // dxgmms2.sys .text:0x7220, 0x1c52 bytes
    // dxgmms2.sys .text:0x6d20, 0x20ba bytes
    // dxgmms2.sys .text:0x7220, 0x1c52 bytes
    //
    _r40(sdk::unknown_ptr) schi_acquire_sync_object;
    
    // [VidSchiAddGpuWorkEntry]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11334, 0x158b bytes
    // dxgmms2.sys .text:0x1024c, 0x1c52 bytes
    // dxgmms2.sys .text:0x178d4, 0x20ba bytes
    // dxgmms2.sys .text:0x1024c, 0x1c52 bytes
    //
    _r41(sdk::unknown_ptr) schi_add_gpu_work_entry;
    
    // [VidSchiAddPendingCommandToSyncPointList]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x106cc, 0x158b bytes
    // dxgmms2.sys .text:0x5cbc, 0x1c52 bytes
    // dxgmms2.sys .text:0x19c4, 0x20ba bytes
    // dxgmms2.sys .text:0x5cbc, 0x1c52 bytes
    //
    _r42(sdk::unknown_ptr) schi_add_pending_command_to_sync_point_list;
    
    // [VidSchiAddSyncObjectToCrossAdapterInfo]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x237f0, 0x158b bytes
    // dxgmms2.sys .text:0x2f060, 0x1c52 bytes
    // dxgmms2.sys .text:0x38374, 0x20ba bytes
    // dxgmms2.sys .text:0x2efe0, 0x1c52 bytes
    //
    _r43(sdk::unknown_ptr) schi_add_sync_object_to_cross_adapter_info;
    
    // [VidSchiAdvanceContextSubmissionId]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x20330, 0x158b bytes
    // dxgmms2.sys .text:0x2a238, 0x1c52 bytes
    // dxgmms2.sys .text:0x3408c, 0x20ba bytes
    // dxgmms2.sys .text:0x2a1b8, 0x1c52 bytes
    //
    _r44(sdk::unknown_ptr) schi_advance_context_submission_id;
    
    // [VidSchiAllocateDmaPacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x64788, 0x158b bytes
    // dxgmms2.sys PAGE:0x849ec, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa02f8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x84fdc, 0x1c52 bytes
    //
    _r45(sdk::unknown_ptr) schi_allocate_dma_packet;
    
    // [VidSchiAllocateHistoryBufferStorage]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9e748, 0x158b bytes
    // dxgmms2.sys PAGE:0xd0b78, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf2fa4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd1318, 0x1c52 bytes
    //
    _r46(sdk::unknown_ptr) schi_allocate_history_buffer_storage;
    
    // [VidSchiAllocatePacketFromGuaranteedPacketPool]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x20470, 0x158b bytes
    // dxgmms2.sys .text:0x2a3c4, 0x1c52 bytes
    // dxgmms2.sys .text:0x1bf08, 0x20ba bytes
    // dxgmms2.sys .text:0x2a344, 0x1c52 bytes
    //
    _r47(sdk::unknown_ptr) schi_allocate_packet_from_guaranteed_packet_pool;
    
    // [VidSchiAllocateQueuePacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x62e90, 0x158b bytes
    // dxgmms2.sys PAGE:0x7ca20, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x92e60, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7d010, 0x1c52 bytes
    //
    _r48(sdk::unknown_ptr) schi_allocate_queue_packet;
    
    // [VidSchiAllowToDebugPageFault]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x20578, 0x158b bytes
    // dxgmms2.sys .text:0x2a4ec, 0x1c52 bytes
    // dxgmms2.sys .text:0x341cc, 0x20ba bytes
    // dxgmms2.sys .text:0x2a46c, 0x1c52 bytes
    //
    _r49(sdk::unknown_ptr) schi_allow_to_debug_page_fault;
    
    // [VidSchiBlockDriverCallback]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xa132c, 0x158b bytes
    // dxgmms2.sys PAGE:0xd5704, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf6ffc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd5ea4, 0x1c52 bytes
    //
    _r50(sdk::unknown_ptr) schi_block_driver_callback;
    
    // [VidSchiBlockInterruptCallbackAtISR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x26d30, 0x158b bytes
    // dxgmms2.sys .text:0x3c710, 0x1c52 bytes
    // dxgmms2.sys .text:0x43f10, 0x20ba bytes
    // dxgmms2.sys .text:0x3c690, 0x1c52 bytes
    //
    _r51(sdk::unknown_ptr) schi_block_interrupt_callback_at_isr;
    
    // [VidSchiCallNotifyInterruptAtISR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x26d60, 0x158b bytes
    // dxgmms2.sys .text:0x3c740, 0x1c52 bytes
    // dxgmms2.sys .text:0x43f40, 0x20ba bytes
    // dxgmms2.sys .text:0x3c6c0, 0x1c52 bytes
    //
    _r52(sdk::unknown_ptr) schi_call_notify_interrupt_at_isr;
    
    // [VidSchiCancelDelayTimerContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x16e8, 0x158b bytes
    // dxgmms2.sys .text:0x1d64, 0x1c52 bytes
    // dxgmms2.sys .text:0x14aec, 0x20ba bytes
    // dxgmms2.sys .text:0x1d64, 0x1c52 bytes
    //
    _r53(sdk::unknown_ptr) schi_cancel_delay_timer_context;
    
    // [VidSchiCancelDelayTimerDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9e814, 0x158b bytes
    // dxgmms2.sys PAGE:0xd0c70, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf30c8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd1410, 0x1c52 bytes
    //
    _r54(sdk::unknown_ptr) schi_cancel_delay_timer_device;
    
    // [VidSchiCancelIndependentFlips]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x23858, 0x158b bytes
    // dxgmms2.sys .text:0x2f1f0, 0x1c52 bytes
    // dxgmms2.sys .text:0x19a28, 0x20ba bytes
    // dxgmms2.sys .text:0x2f170, 0x1c52 bytes
    //
    _r55(sdk::unknown_ptr) schi_cancel_independent_flips;
    
    // [VidSchiCaptureProcessName]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x26e04, 0x158b bytes
    // dxgmms2.sys .text:0x3c868, 0x1c52 bytes
    // dxgmms2.sys .text:0x440ec, 0x20ba bytes
    // dxgmms2.sys .text:0x3c7e8, 0x1c52 bytes
    //
    _r56(sdk::unknown_ptr) schi_capture_process_name;
    
    // [VidSchiCheckConditionDeviceCommand]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x10890, 0x158b bytes
    // dxgmms2.sys .text:0x13b38, 0x1c52 bytes
    // dxgmms2.sys .text:0x1968, 0x20ba bytes
    // dxgmms2.sys .text:0x13b38, 0x1c52 bytes
    //
    _r57(sdk::unknown_ptr) schi_check_condition_device_command;
    
    // [VidSchiCheckFlipQueueTimeout]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xa980, 0x158b bytes
    // dxgmms2.sys .text:0xc7c0, 0x1c52 bytes
    // dxgmms2.sys .text:0xc8c0, 0x20ba bytes
    // dxgmms2.sys .text:0xc7c0, 0x1c52 bytes
    //
    _r58(sdk::unknown_ptr) schi_check_flip_queue_timeout;
    
    // [VidSchiCheckGPUTimeout]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9e844, 0x158b bytes
    // dxgmms2.sys PAGE:0xd0ca8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf3100, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd1448, 0x1c52 bytes
    //
    _r59(sdk::unknown_ptr) schi_check_gpu_timeout;
    
    // [VidSchiCheckHwProgress]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x63840, 0x158b bytes
    // dxgmms2.sys PAGE:0x7d0f0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x935c0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7d6e0, 0x1c52 bytes
    //
    _r60(sdk::unknown_ptr) schi_check_hw_progress;
    
    // [VidSchiCheckNodeTimeout]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x639d0, 0x158b bytes
    // dxgmms2.sys PAGE:0x7d2c0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x93820, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7d8b0, 0x1c52 bytes
    //
    _r61(sdk::unknown_ptr) schi_check_node_timeout;
    
    // [VidSchiCheckPendingDeviceCommand]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xe79c, 0x158b bytes
    // dxgmms2.sys .text:0xb3a0, 0x1c52 bytes
    // dxgmms2.sys .text:0xb300, 0x20ba bytes
    // dxgmms2.sys .text:0xb3a0, 0x1c52 bytes
    //
    _r62(sdk::unknown_ptr) schi_check_pending_device_command;
    
    // [VidSchiCheckPlaneIndependentFlipCondition]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11cac, 0x158b bytes
    // dxgmms2.sys .text:0x2a754, 0x1c52 bytes
    // dxgmms2.sys .text:0x1a0f4, 0x20ba bytes
    // dxgmms2.sys .text:0x2a6d4, 0x1c52 bytes
    //
    _r63(sdk::unknown_ptr) schi_check_plane_independent_flip_condition;
    
    // [VidSchiCheckPreemptionPolicy]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x7540, 0x158b bytes
    // dxgmms2.sys .text:0xd630, 0x1c52 bytes
    // dxgmms2.sys .text:0x8ac0, 0x20ba bytes
    // dxgmms2.sys .text:0xd630, 0x1c52 bytes
    //
    _r64(sdk::unknown_ptr) schi_check_preemption_policy;
    
    // [VidSchiCheckTimeoutForced]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xab50, 0x158b bytes
    // dxgmms2.sys .text:0xc9e0, 0x1c52 bytes
    // dxgmms2.sys .text:0xc9b0, 0x20ba bytes
    // dxgmms2.sys .text:0xc9e0, 0x1c52 bytes
    //
    _r65(sdk::unknown_ptr) schi_check_timeout_forced;
    
    // [VidSchiCheckTokenIndependentFlipCondition]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2062c, 0x158b bytes
    // dxgmms2.sys .text:0x2a7d0, 0x1c52 bytes
    // dxgmms2.sys .text:0x1a1c4, 0x20ba bytes
    // dxgmms2.sys .text:0x2a750, 0x1c52 bytes
    //
    _r66(sdk::unknown_ptr) schi_check_token_independent_flip_condition;
    
    // [VidSchiCheckYieldExitCondition]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1127c, 0x158b bytes
    // dxgmms2.sys .text:0x13778, 0x1c52 bytes
    // dxgmms2.sys .text:0x17618, 0x20ba bytes
    // dxgmms2.sys .text:0x13778, 0x1c52 bytes
    //
    _r67(sdk::unknown_ptr) schi_check_yield_exit_condition;
    
    // [VidSchiCleanupDeferredWaiterContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x17b8, 0x158b bytes
    // dxgmms2.sys .text:0x1b4c, 0x1c52 bytes
    // dxgmms2.sys .text:0x14c1c, 0x20ba bytes
    // dxgmms2.sys .text:0x1b4c, 0x1c52 bytes
    //
    _r68(sdk::unknown_ptr) schi_cleanup_deferred_waiter_context;
    
    // [VidSchiCleanupQueuedCommand]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xa1384, 0x158b bytes
    // dxgmms2.sys .text:0x3c908, 0x1c52 bytes
    // dxgmms2.sys .text:0x44188, 0x20ba bytes
    // dxgmms2.sys .text:0x3c888, 0x1c52 bytes
    //
    _r69(sdk::unknown_ptr) schi_cleanup_queued_command;
    
    // [VidSchiClearFlipDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x345c, 0x158b bytes
    // dxgmms2.sys .text:0x1e40, 0x1c52 bytes
    // dxgmms2.sys .text:0x14e88, 0x20ba bytes
    // dxgmms2.sys .text:0x1e40, 0x1c52 bytes
    //
    _r70(sdk::unknown_ptr) schi_clear_flip_device;
    
    // [VidSchiCloseProcessAdapterInfo]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x64590, 0x158b bytes
    // dxgmms2.sys PAGE:0x7d468, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x93e68, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7da58, 0x1c52 bytes
    //
    _r71(sdk::unknown_ptr) schi_close_process_adapter_info;
    
    // [VidSchiCompleteAllPendingCommand]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x26e90, 0x158b bytes
    // dxgmms2.sys .text:0x3c970, 0x1c52 bytes
    // dxgmms2.sys .text:0x441f0, 0x20ba bytes
    // dxgmms2.sys .text:0x3c8f0, 0x1c52 bytes
    //
    _r72(sdk::unknown_ptr) schi_complete_all_pending_command;
    
    // [VidSchiCompleteFlipEntry]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x43e0, 0x158b bytes
    // dxgmms2.sys .text:0x4d00, 0x1c52 bytes
    // dxgmms2.sys .text:0x4450, 0x20ba bytes
    // dxgmms2.sys .text:0x4d00, 0x1c52 bytes
    //
    _r73(sdk::unknown_ptr) schi_complete_flip_entry;
    
    // [VidSchiCompletePendingCommandInNodeHwQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x27014, 0x158b bytes
    // dxgmms2.sys .text:0x3cb38, 0x1c52 bytes
    // dxgmms2.sys .text:0x443c8, 0x20ba bytes
    // dxgmms2.sys .text:0x3cab8, 0x1c52 bytes
    //
    _r74(sdk::unknown_ptr) schi_complete_pending_command_in_node_hw_queue;
    
    // [VidSchiCompletePendingFlip]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11ab0, 0x158b bytes
    // dxgmms2.sys .text:0x3ce00, 0x1c52 bytes
    // dxgmms2.sys .text:0x1ac3c, 0x20ba bytes
    // dxgmms2.sys .text:0x3cd80, 0x1c52 bytes
    //
    _r75(sdk::unknown_ptr) schi_complete_pending_flip;
    
    // [VidSchiCompletePreemption]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x23900, 0x158b bytes
    // dxgmms2.sys .text:0x2f364, 0x1c52 bytes
    // dxgmms2.sys .text:0x38510, 0x20ba bytes
    // dxgmms2.sys .text:0x2f2e4, 0x1c52 bytes
    //
    _r76(sdk::unknown_ptr) schi_complete_preemption;
    
    // [VidSchiCompleteRewindPacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xdacc, 0x158b bytes
    // dxgmms2.sys .text:0x106e4, 0x1c52 bytes
    // dxgmms2.sys .text:0x10188, 0x20ba bytes
    // dxgmms2.sys .text:0x106e4, 0x1c52 bytes
    //
    _r77(sdk::unknown_ptr) schi_complete_rewind_packet;
    
    // [VidSchiCompleteSignalCommmand]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xe884, 0x158b bytes
    // dxgmms2.sys .text:0x14a2c, 0x1c52 bytes
    // dxgmms2.sys .text:0x18fb8, 0x20ba bytes
    // dxgmms2.sys .text:0x14a2c, 0x1c52 bytes
    //
    _r78(sdk::unknown_ptr) schi_complete_signal_commmand;
    
    // [VidSchiCompleteSignalSyncObject]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xb2d0, 0x158b bytes
    // dxgmms2.sys .text:0xd0e0, 0x1c52 bytes
    // dxgmms2.sys .text:0xd330, 0x20ba bytes
    // dxgmms2.sys .text:0xd0e0, 0x1c52 bytes
    //
    _r79(sdk::unknown_ptr) schi_complete_signal_sync_object;
    
    // [VidSchiComputePriority]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x640a4, 0x158b bytes
    // dxgmms2.sys PAGE:0x7da1c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x93db0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7e00c, 0x1c52 bytes
    //
    _r80(sdk::unknown_ptr) schi_compute_priority;
    
    // [VidSchiControlVSync]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x61e44, 0x158b bytes
    // dxgmms2.sys PAGE:0x84474, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x939d0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x84a64, 0x1c52 bytes
    //
    _r81(sdk::unknown_ptr) schi_control_v_sync;
    
    // [VidSchiControlVSyncThread]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2960, 0x158b bytes
    // dxgmms2.sys .text:0x138d0, 0x1c52 bytes
    // dxgmms2.sys .text:0x12360, 0x20ba bytes
    // dxgmms2.sys .text:0x138d0, 0x1c52 bytes
    //
    _r82(sdk::unknown_ptr) schi_control_v_sync_thread;
    
    // [VidSchiConvertDeferredWaits]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x110b0, 0x158b bytes
    // dxgmms2.sys .text:0x14f08, 0x1c52 bytes
    // dxgmms2.sys .text:0x17f30, 0x20ba bytes
    // dxgmms2.sys .text:0x14f08, 0x1c52 bytes
    //
    _r83(sdk::unknown_ptr) schi_convert_deferred_waits;
    
    // [VidSchiCreateContextInternal]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xef18, 0x158b bytes
    // dxgmms2.sys .text:0x11030, 0x1c52 bytes
    // dxgmms2.sys .text:0x11a90, 0x20ba bytes
    // dxgmms2.sys .text:0x11030, 0x1c52 bytes
    //
    _r84(sdk::unknown_ptr) schi_create_context_internal;
    
    // [VidSchiCreateDeviceInternal]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x649c4, 0x158b bytes
    // dxgmms2.sys PAGE:0x7db80, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x94874, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7e170, 0x1c52 bytes
    //
    _r85(sdk::unknown_ptr) schi_create_device_internal;
    
    // [VidSchiCreateNode]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x69518, 0x158b bytes
    // dxgmms2.sys PAGE:0x8bc4c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xabc88, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8c23c, 0x1c52 bytes
    //
    _r86(sdk::unknown_ptr) schi_create_node;
    
    // [VidSchiDecrementContextReference]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xfe40, 0x158b bytes
    // dxgmms2.sys .text:0x1910, 0x1c52 bytes
    // dxgmms2.sys .text:0x13cd0, 0x20ba bytes
    // dxgmms2.sys .text:0x1910, 0x1c52 bytes
    //
    _r87(sdk::unknown_ptr) schi_decrement_context_reference;
    
    // [VidSchiDecrementDeviceReference]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xf890, 0x158b bytes
    // dxgmms2.sys .text:0x11ec8, 0x1c52 bytes
    // dxgmms2.sys .text:0x14028, 0x20ba bytes
    // dxgmms2.sys .text:0x11ec8, 0x1c52 bytes
    //
    _r88(sdk::unknown_ptr) schi_decrement_device_reference;
    
    // [VidSchiDeferredVisibilityThread]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12bd0, 0x158b bytes
    // dxgmms2.sys .text:0x2f3e0, 0x1c52 bytes
    // dxgmms2.sys .text:0x1c1b0, 0x20ba bytes
    // dxgmms2.sys .text:0x2f360, 0x1c52 bytes
    //
    _r89(sdk::unknown_ptr) schi_deferred_visibility_thread;
    
    // [VidSchiDelayReadyRoutine]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1740, 0x158b bytes
    // dxgmms2.sys .text:0x1de0, 0x1c52 bytes
    // dxgmms2.sys .text:0x14b60, 0x20ba bytes
    // dxgmms2.sys .text:0x1de0, 0x1c52 bytes
    //
    _r90(sdk::unknown_ptr) schi_delay_ready_routine;
    
    // [VidSchiDiscardQueuePacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9e8b0, 0x158b bytes
    // dxgmms2.sys PAGE:0xd0d44, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf319c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd14e4, 0x1c52 bytes
    //
    _r91(sdk::unknown_ptr) schi_discard_queue_packet;
    
    // [VidSchiDrainContextFromWorkerThread]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x23918, 0x158b bytes
    // dxgmms2.sys .text:0x2f5b4, 0x1c52 bytes
    // dxgmms2.sys .text:0x38530, 0x20ba bytes
    // dxgmms2.sys .text:0x2f534, 0x1c52 bytes
    //
    _r92(sdk::unknown_ptr) schi_drain_context_from_worker_thread;
    
    // [VidSchiDriverNodeEngineToSchedulerNode]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xffb8, 0x158b bytes
    // dxgmms2.sys .text:0x11de0, 0x1c52 bytes
    // dxgmms2.sys .text:0x13bcc, 0x20ba bytes
    // dxgmms2.sys .text:0x11de0, 0x1c52 bytes
    //
    _r93(sdk::unknown_ptr) schi_driver_node_engine_to_scheduler_node;
    
    // [VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x20720, 0x158b bytes
    // dxgmms2.sys .text:0x2aaf4, 0x1c52 bytes
    // dxgmms2.sys .text:0x1bd88, 0x20ba bytes
    // dxgmms2.sys .text:0x2aa74, 0x1c52 bytes
    //
    _r94(sdk::unknown_ptr) schi_enqueue_device_command_to_worker_thread_at_dpc;
    
    // [VidSchiExecuteMmIoFlip]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x35d0, 0x158b bytes
    // dxgmms2.sys .text:0xf060, 0x1c52 bytes
    // dxgmms2.sys .text:0xf6d0, 0x20ba bytes
    // dxgmms2.sys .text:0xf060, 0x1c52 bytes
    //
    _r95(sdk::unknown_ptr) schi_execute_mm_io_flip;
    
    // [VidSchiExecuteMmIoFlipAtISR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x10ef0, 0x158b bytes
    // dxgmms2.sys .text:0x13a80, 0x1c52 bytes
    // dxgmms2.sys .text:0x17410, 0x20ba bytes
    // dxgmms2.sys .text:0x13a80, 0x1c52 bytes
    //
    _r96(sdk::unknown_ptr) schi_execute_mm_io_flip_at_isr;
    
    // [VidSchiExecuteMmIoFlipAtPassiveLevel]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x23970, 0x158b bytes
    // dxgmms2.sys .text:0x2f620, 0x1c52 bytes
    // dxgmms2.sys .text:0x1b9d0, 0x20ba bytes
    // dxgmms2.sys .text:0x2f5a0, 0x1c52 bytes
    //
    _r97(sdk::unknown_ptr) schi_execute_mm_io_flip_at_passive_level;
    
    // [VidSchiExecuteMmIoFlipMultiPlaneOverlay3]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x208d8, 0x158b bytes
    // dxgmms2.sys .text:0x2ac4c, 0x1c52 bytes
    // dxgmms2.sys .text:0x10c60, 0x20ba bytes
    // dxgmms2.sys .text:0x2abcc, 0x1c52 bytes
    //
    _r98(sdk::unknown_ptr) schi_execute_mm_io_flip_multi_plane_overlay3;
    
    // [VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x20f60, 0x158b bytes
    // dxgmms2.sys .text:0x2afe0, 0x1c52 bytes
    // dxgmms2.sys .text:0x34870, 0x20ba bytes
    // dxgmms2.sys .text:0x2af60, 0x1c52 bytes
    //
    _r99(sdk::unknown_ptr) schi_execute_mm_io_flip_multi_plane_overlay_at_isr;
    
    // [VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR2]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x20ee0, 0x158b bytes
    // dxgmms2.sys .text:0x2af40, 0x1c52 bytes
    // dxgmms2.sys .text:0x34820, 0x20ba bytes
    // dxgmms2.sys .text:0x2aec0, 0x1c52 bytes
    //
    _s00(sdk::unknown_ptr) schi_execute_mm_io_flip_multi_plane_overlay_at_isr2;
    
    // [VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR3]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x20f20, 0x158b bytes
    // dxgmms2.sys .text:0x2af90, 0x1c52 bytes
    // dxgmms2.sys .text:0x18190, 0x20ba bytes
    // dxgmms2.sys .text:0x2af10, 0x1c52 bytes
    //
    _s01(sdk::unknown_ptr) schi_execute_mm_io_flip_multi_plane_overlay_at_isr3;
    
    // [VidSchiExecuteNextFlipQueueEntry]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x32b8, 0x158b bytes
    // dxgmms2.sys .text:0x109b4, 0x1c52 bytes
    // dxgmms2.sys .text:0x12170, 0x20ba bytes
    // dxgmms2.sys .text:0x109b4, 0x1c52 bytes
    //
    _s02(sdk::unknown_ptr) schi_execute_next_flip_queue_entry;
    
    // [VidSchiFillSubmitCommandData]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x116a0, 0x158b bytes
    // dxgmms2.sys .text:0x14f68, 0x1c52 bytes
    // dxgmms2.sys .text:0x1849c, 0x20ba bytes
    // dxgmms2.sys .text:0x14f68, 0x1c52 bytes
    //
    _s03(sdk::unknown_ptr) schi_fill_submit_command_data;
    
    // [VidSchiFillSubmitCommandDataVirtual]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x73e0, 0x158b bytes
    // dxgmms2.sys .text:0x77e0, 0x1c52 bytes
    // dxgmms2.sys .text:0x7400, 0x20ba bytes
    // dxgmms2.sys .text:0x77e0, 0x1c52 bytes
    //
    _s04(sdk::unknown_ptr) schi_fill_submit_command_data_virtual;
    
    // [VidSchiFinishMeasuringPreemptionTime]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xec9c, 0x158b bytes
    // dxgmms2.sys .text:0x103b8, 0x1c52 bytes
    // dxgmms2.sys .text:0x11924, 0x20ba bytes
    // dxgmms2.sys .text:0x103b8, 0x1c52 bytes
    //
    _s05(sdk::unknown_ptr) schi_finish_measuring_preemption_time;
    
    // [VidSchiFlushGpuWorkEntries]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x20fa0, 0x158b bytes
    // dxgmms2.sys .text:0x13f4, 0x1c52 bytes
    // dxgmms2.sys .text:0x17950, 0x20ba bytes
    // dxgmms2.sys .text:0x13f4, 0x1c52 bytes
    //
    _s06(sdk::unknown_ptr) schi_flush_gpu_work_entries;
    
    // [VidSchiFlushPendingFlips]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x65914, 0x158b bytes
    // dxgmms2.sys PAGE:0xd1038, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa6ad4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd17d8, 0x1c52 bytes
    //
    _s07(sdk::unknown_ptr) schi_flush_pending_flips;
    
    // [VidSchiFlushPendingHWSubmittedFlips]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x23e78, 0x158b bytes
    // dxgmms2.sys .text:0x2fa94, 0x1c52 bytes
    // dxgmms2.sys .text:0x1c0ac, 0x20ba bytes
    // dxgmms2.sys .text:0x2fa14, 0x1c52 bytes
    //
    _s08(sdk::unknown_ptr) schi_flush_pending_hw_submitted_flips;
    
    // [VidSchiFlushPendingTokenList]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x23f38, 0x158b bytes
    // dxgmms2.sys .text:0x2fb58, 0x1c52 bytes
    // dxgmms2.sys .text:0x19998, 0x20ba bytes
    // dxgmms2.sys .text:0x2fad8, 0x1c52 bytes
    //
    _s09(sdk::unknown_ptr) schi_flush_pending_token_list;
    
    // [VidSchiFlushQueuePacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x23fcc, 0x158b bytes
    // dxgmms2.sys .text:0x2fccc, 0x1c52 bytes
    // dxgmms2.sys .text:0x38590, 0x20ba bytes
    // dxgmms2.sys .text:0x2fc4c, 0x1c52 bytes
    //
    _s10(sdk::unknown_ptr) schi_flush_queue_packet;
    
    // [VidSchiFreeHistoryBufferStorage]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x20ffc, 0x158b bytes
    // dxgmms2.sys .text:0x2b024, 0x1c52 bytes
    // dxgmms2.sys .text:0x348b4, 0x20ba bytes
    // dxgmms2.sys .text:0x2afa4, 0x1c52 bytes
    //
    _s11(sdk::unknown_ptr) schi_free_history_buffer_storage;
    
    // [VidSchiFreeQueuePacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xeab0, 0x158b bytes
    // dxgmms2.sys .text:0x11988, 0x1c52 bytes
    // dxgmms2.sys .text:0x1096c, 0x20ba bytes
    // dxgmms2.sys .text:0x11988, 0x1c52 bytes
    //
    _s12(sdk::unknown_ptr) schi_free_queue_packet;
    
    // [VidSchiGetNumFlipQueueEntriesUsed]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x27a40, 0x158b bytes
    // dxgmms2.sys .text:0x3d94c, 0x1c52 bytes
    // dxgmms2.sys .text:0x46160, 0x20ba bytes
    // dxgmms2.sys .text:0x3d8cc, 0x1c52 bytes
    //
    _s13(sdk::unknown_ptr) schi_get_num_flip_queue_entries_used;
    
    // [VidSchiGetNumHistoryLayersUsed]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x27aa4, 0x158b bytes
    // dxgmms2.sys .text:0x3d9d4, 0x1c52 bytes
    // dxgmms2.sys .text:0x461d8, 0x20ba bytes
    // dxgmms2.sys .text:0x3d954, 0x1c52 bytes
    //
    _s14(sdk::unknown_ptr) schi_get_num_history_layers_used;
    
    // [VidSchiGetNumOverlayPlanesUsed]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x27b40, 0x158b bytes
    // dxgmms2.sys .text:0x3da84, 0x1c52 bytes
    // dxgmms2.sys .text:0x46288, 0x20ba bytes
    // dxgmms2.sys .text:0x3da04, 0x1c52 bytes
    //
    _s15(sdk::unknown_ptr) schi_get_num_overlay_planes_used;
    
    // [VidSchiGetSchedulerStatus]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x8768, 0x158b bytes
    // dxgmms2.sys .text:0x1452c, 0x1c52 bytes
    // dxgmms2.sys .text:0x18cf4, 0x20ba bytes
    // dxgmms2.sys .text:0x1452c, 0x1c52 bytes
    //
    _s16(sdk::unknown_ptr) schi_get_scheduler_status;
    
    // [VidSchiGetVSyncState]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x26de4, 0x158b bytes
    // dxgmms2.sys .text:0x3c818, 0x1c52 bytes
    // dxgmms2.sys .text:0x44018, 0x20ba bytes
    // dxgmms2.sys .text:0x3c798, 0x1c52 bytes
    //
    _s17(sdk::unknown_ptr) schi_get_v_sync_state;
    
    // [VidSchiHandleControlEvent]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x669fc, 0x158b bytes
    // dxgmms2.sys PAGE:0xd1108, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf344c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd18a8, 0x1c52 bytes
    //
    _s18(sdk::unknown_ptr) schi_handle_control_event;
    
    // [VidSchiIncrementContextReference]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xff80, 0x158b bytes
    // dxgmms2.sys .text:0x11da0, 0x1c52 bytes
    // dxgmms2.sys .text:0x13760, 0x20ba bytes
    // dxgmms2.sys .text:0x11da0, 0x1c52 bytes
    //
    _s19(sdk::unknown_ptr) schi_increment_context_reference;
    
    // [VidSchiIncrementDeviceReference]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1092c, 0x158b bytes
    // dxgmms2.sys .text:0x11df4, 0x1c52 bytes
    // dxgmms2.sys .text:0x13be0, 0x20ba bytes
    // dxgmms2.sys .text:0x11df4, 0x1c52 bytes
    //
    _s20(sdk::unknown_ptr) schi_increment_device_reference;
    
    // [VidSchiInitializeNode]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x69470, 0x158b bytes
    // dxgmms2.sys PAGE:0x8bb08, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xabb6c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8c0f8, 0x1c52 bytes
    //
    _s21(sdk::unknown_ptr) schi_initialize_node;
    
    // [VidSchiInsertCommandToSoftwareQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xb030, 0x158b bytes
    // dxgmms2.sys .text:0x9170, 0x1c52 bytes
    // dxgmms2.sys .text:0x8800, 0x20ba bytes
    // dxgmms2.sys .text:0x9170, 0x1c52 bytes
    //
    _s22(sdk::unknown_ptr) schi_insert_command_to_software_queue;
    
    // [VidSchiInterlockedInsertTailList]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x7890, 0x158b bytes
    // dxgmms2.sys .text:0x8410, 0x1c52 bytes
    // dxgmms2.sys .text:0x7690, 0x20ba bytes
    // dxgmms2.sys .text:0x8410, 0x1c52 bytes
    //
    _s23(sdk::unknown_ptr) schi_interlocked_insert_tail_list;
    
    // [VidSchiInterlockedReadUlong]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x178c, 0x158b bytes
    // dxgmms2.sys .text:0x1ec4, 0x1c52 bytes
    // dxgmms2.sys .text:0x14bd0, 0x20ba bytes
    // dxgmms2.sys .text:0x1ec4, 0x1c52 bytes
    //
    _s24(sdk::unknown_ptr) schi_interlocked_read_ulong;
    
    // [VidSchiInterlockedRemoveEntryList]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xec38, 0x158b bytes
    // dxgmms2.sys .text:0x133ac, 0x1c52 bytes
    // dxgmms2.sys .text:0x16e44, 0x20ba bytes
    // dxgmms2.sys .text:0x133ac, 0x1c52 bytes
    //
    _s25(sdk::unknown_ptr) schi_interlocked_remove_entry_list;
    
    // [VidSchiInterlockedRemoveHeadListIfExist]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x78f0, 0x158b bytes
    // dxgmms2.sys .text:0x8490, 0x1c52 bytes
    // dxgmms2.sys .text:0x7720, 0x20ba bytes
    // dxgmms2.sys .text:0x8490, 0x1c52 bytes
    //
    _s26(sdk::unknown_ptr) schi_interlocked_remove_head_list_if_exist;
    
    // [VidSchiIsExpectedVSyncCookie]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x5774, 0x158b bytes
    // dxgmms2.sys .text:0x494c, 0x1c52 bytes
    // dxgmms2.sys .text:0x5408, 0x20ba bytes
    // dxgmms2.sys .text:0x494c, 0x1c52 bytes
    //
    _s27(sdk::unknown_ptr) schi_is_expected_v_sync_cookie;
    
    // [VidSchiIsExpectedVSyncCookie2]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x21054, 0x158b bytes
    // dxgmms2.sys .text:0x2b1a4, 0x1c52 bytes
    // dxgmms2.sys .text:0x17c18, 0x20ba bytes
    // dxgmms2.sys .text:0x2b124, 0x1c52 bytes
    //
    _s28(sdk::unknown_ptr) schi_is_expected_v_sync_cookie2;
    
    // [VidSchiIsFlipQueueBusy]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xb9d0, 0x158b bytes
    // dxgmms2.sys .text:0x7950, 0x1c52 bytes
    // dxgmms2.sys .text:0x6f50, 0x20ba bytes
    // dxgmms2.sys .text:0x7950, 0x1c52 bytes
    //
    _s29(sdk::unknown_ptr) schi_is_flip_queue_busy;
    
    // [VidSchiIsMmIoFlipPending]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12988, 0x158b bytes
    // dxgmms2.sys .text:0x13844, 0x1c52 bytes
    // dxgmms2.sys .text:0x1adb0, 0x20ba bytes
    // dxgmms2.sys .text:0x13844, 0x1c52 bytes
    //
    _s30(sdk::unknown_ptr) schi_is_mm_io_flip_pending;
    
    // [VidSchiIsQuantumLeft]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xd160, 0x158b bytes
    // dxgmms2.sys .text:0x13218, 0x1c52 bytes
    // dxgmms2.sys .text:0x15d5c, 0x20ba bytes
    // dxgmms2.sys .text:0x13218, 0x1c52 bytes
    //
    _s31(sdk::unknown_ptr) schi_is_quantum_left;
    
    // [VidSchiLogInterrupt]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xc380, 0x158b bytes
    // dxgmms2.sys .text:0xe700, 0x1c52 bytes
    // dxgmms2.sys .text:0xe5d0, 0x20ba bytes
    // dxgmms2.sys .text:0xe700, 0x1c52 bytes
    //
    _s32(sdk::unknown_ptr) schi_log_interrupt;
    
    // [VidSchiMarkDeviceAsError]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11884, 0x158b bytes
    // dxgmms2.sys .text:0x103c, 0x1c52 bytes
    // dxgmms2.sys .text:0x18820, 0x20ba bytes
    // dxgmms2.sys .text:0x103c, 0x1c52 bytes
    //
    _s33(sdk::unknown_ptr) schi_mark_device_as_error;
    
    // [VidSchiMarkDevicesInError]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9eb64, 0x158b bytes
    // dxgmms2.sys PAGE:0xd1170, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf34b4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd1910, 0x1c52 bytes
    //
    _s34(sdk::unknown_ptr) schi_mark_devices_in_error;
    
    // [VidSchiMarkFlipQueuesRunningStateOnPresentInfo]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x24004, 0x158b bytes
    // dxgmms2.sys .text:0x2fd18, 0x1c52 bytes
    // dxgmms2.sys .text:0x1c110, 0x20ba bytes
    // dxgmms2.sys .text:0x2fc98, 0x1c52 bytes
    //
    _s35(sdk::unknown_ptr) schi_mark_flip_queues_running_state_on_present_info;
    
    // [VidSchiMarkTdrFaultingDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xa141c, 0x158b bytes
    // dxgmms2.sys PAGE:0xd57ac, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf70a4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd5f4c, 0x1c52 bytes
    //
    _s36(sdk::unknown_ptr) schi_mark_tdr_faulting_device;
    
    // [VidSchiNeedToForcePreemptNode]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x10934, 0x158b bytes
    // dxgmms2.sys .text:0x13f28, 0x1c52 bytes
    // dxgmms2.sys .text:0x17acc, 0x20ba bytes
    // dxgmms2.sys .text:0x13f28, 0x1c52 bytes
    //
    _s37(sdk::unknown_ptr) schi_need_to_force_preempt_node;
    
    // [VidSchiNotifyDeviceRemoved]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x27264, 0x158b bytes
    // dxgmms2.sys .text:0x3d048, 0x1c52 bytes
    // dxgmms2.sys .text:0x44728, 0x20ba bytes
    // dxgmms2.sys .text:0x3cfc8, 0x1c52 bytes
    //
    _s38(sdk::unknown_ptr) schi_notify_device_removed;
    
    // [VidSchiOpenProcessAdapterInfo]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x64c28, 0x158b bytes
    // dxgmms2.sys PAGE:0x7d624, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x94020, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7dc14, 0x1c52 bytes
    //
    _s39(sdk::unknown_ptr) schi_open_process_adapter_info;
    
    // [VidSchiPostponePresentHistoryToken]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x21114, 0x158b bytes
    // dxgmms2.sys .text:0x2b6f4, 0x1c52 bytes
    // dxgmms2.sys .text:0x34a2c, 0x20ba bytes
    // dxgmms2.sys .text:0x2b674, 0x1c52 bytes
    //
    _s40(sdk::unknown_ptr) schi_postpone_present_history_token;
    
    // [VidSchiPreemptEngineNodes]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x66ca8, 0x158b bytes
    // dxgmms2.sys PAGE:0xd12cc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf35a0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd1a6c, 0x1c52 bytes
    //
    _s41(sdk::unknown_ptr) schi_preempt_engine_nodes;
    
    // [VidSchiPrepareToResetEngine]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9ecb8, 0x158b bytes
    // dxgmms2.sys PAGE:0xd141c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf36ec, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd1bbc, 0x1c52 bytes
    //
    _s42(sdk::unknown_ptr) schi_prepare_to_reset_engine;
    
    // [VidSchiProcessCompletedQueuePacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x10278, 0x158b bytes
    // dxgmms2.sys .text:0x1514c, 0x1c52 bytes
    // dxgmms2.sys .text:0x18748, 0x20ba bytes
    // dxgmms2.sys .text:0x1514c, 0x1c52 bytes
    //
    _s43(sdk::unknown_ptr) schi_process_completed_queue_packet;
    
    // [VidSchiProcessCompletedQueuePacketInternal]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x93c0, 0x158b bytes
    // dxgmms2.sys .text:0xa720, 0x1c52 bytes
    // dxgmms2.sys .text:0xa300, 0x20ba bytes
    // dxgmms2.sys .text:0xa720, 0x1c52 bytes
    //
    _s44(sdk::unknown_ptr) schi_process_completed_queue_packet_internal;
    
    // [VidSchiProcessCrossAdapterSignaledSyncObjects]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x21250, 0x158b bytes
    // dxgmms2.sys .text:0x2fddc, 0x1c52 bytes
    // dxgmms2.sys .text:0x38718, 0x20ba bytes
    // dxgmms2.sys .text:0x2fd5c, 0x1c52 bytes
    //
    _s45(sdk::unknown_ptr) schi_process_cross_adapter_signaled_sync_objects;
    
    // [VidSchiProcessDpcCompletedPacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x8770, 0x158b bytes
    // dxgmms2.sys .text:0x9c70, 0x1c52 bytes
    // dxgmms2.sys .text:0x9760, 0x20ba bytes
    // dxgmms2.sys .text:0x9c70, 0x1c52 bytes
    //
    _s46(sdk::unknown_ptr) schi_process_dpc_completed_packet;
    
    // [VidSchiProcessDpcDmaPacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x24044, 0x158b bytes
    // dxgmms2.sys .text:0x2ffe4, 0x1c52 bytes
    // dxgmms2.sys .text:0x7230, 0x20ba bytes
    // dxgmms2.sys .text:0x2ff64, 0x1c52 bytes
    //
    _s47(sdk::unknown_ptr) schi_process_dpc_dma_packet;
    
    // [VidSchiProcessDpcPreemptedPacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xded4, 0x158b bytes
    // dxgmms2.sys .text:0xfe68, 0x1c52 bytes
    // dxgmms2.sys .text:0x2e1c, 0x20ba bytes
    // dxgmms2.sys .text:0xfe68, 0x1c52 bytes
    //
    _s48(sdk::unknown_ptr) schi_process_dpc_preempted_packet;
    
    // [VidSchiProcessDpcSystemRequest]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xe284, 0x158b bytes
    // dxgmms2.sys .text:0xf8f0, 0x1c52 bytes
    // dxgmms2.sys .text:0x3cc4, 0x20ba bytes
    // dxgmms2.sys .text:0xf8f0, 0x1c52 bytes
    //
    _s49(sdk::unknown_ptr) schi_process_dpc_system_request;
    
    // [VidSchiProcessDpcVSyncCookie]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x6290, 0x158b bytes
    // dxgmms2.sys .text:0x6180, 0x1c52 bytes
    // dxgmms2.sys .text:0x56f0, 0x20ba bytes
    // dxgmms2.sys .text:0x6180, 0x1c52 bytes
    //
    _s50(sdk::unknown_ptr) schi_process_dpc_v_sync_cookie;
    
    // [VidSchiProcessFlipPendingContextList]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x101d8, 0x158b bytes
    // dxgmms2.sys .text:0x3018c, 0x1c52 bytes
    // dxgmms2.sys .text:0x1df02, 0x20ba bytes
    // dxgmms2.sys .text:0x3010c, 0x1c52 bytes
    //
    _s51(sdk::unknown_ptr) schi_process_flip_pending_context_list;
    
    // [VidSchiProcessHistoryBuffer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2145c, 0x158b bytes
    // dxgmms2.sys .text:0x2b8c4, 0x1c52 bytes
    // dxgmms2.sys .text:0x34bd8, 0x20ba bytes
    // dxgmms2.sys .text:0x2b844, 0x1c52 bytes
    //
    _s52(sdk::unknown_ptr) schi_process_history_buffer;
    
    // [VidSchiProcessIsrCompletedPacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xc4a0, 0x158b bytes
    // dxgmms2.sys .text:0xe900, 0x1c52 bytes
    // dxgmms2.sys .text:0xe790, 0x20ba bytes
    // dxgmms2.sys .text:0xe900, 0x1c52 bytes
    //
    _s53(sdk::unknown_ptr) schi_process_isr_completed_packet;
    
    // [VidSchiProcessIsrFaultedPacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x241c8, 0x158b bytes
    // dxgmms2.sys .text:0x30260, 0x1c52 bytes
    // dxgmms2.sys .text:0x38930, 0x20ba bytes
    // dxgmms2.sys .text:0x301e0, 0x1c52 bytes
    //
    _s54(sdk::unknown_ptr) schi_process_isr_faulted_packet;
    
    // [VidSchiProcessIsrPreemptedPacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xd588, 0x158b bytes
    // dxgmms2.sys .text:0xf6f0, 0x1c52 bytes
    // dxgmms2.sys .text:0xff98, 0x20ba bytes
    // dxgmms2.sys .text:0xf6f0, 0x1c52 bytes
    //
    _s55(sdk::unknown_ptr) schi_process_isr_preempted_packet;
    
    // [VidSchiProcessIsrVSync]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xc920, 0x158b bytes
    // dxgmms2.sys .text:0xedd0, 0x1c52 bytes
    // dxgmms2.sys .text:0xf3c0, 0x20ba bytes
    // dxgmms2.sys .text:0xedd0, 0x1c52 bytes
    //
    _s56(sdk::unknown_ptr) schi_process_isr_v_sync;
    
    // [VidSchiProcessIsrVSyncMultiPlaneOverlay2]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x21748, 0x158b bytes
    // dxgmms2.sys .text:0x2bc08, 0x1c52 bytes
    // dxgmms2.sys .text:0x10ba0, 0x20ba bytes
    // dxgmms2.sys .text:0x2bb88, 0x1c52 bytes
    //
    _s57(sdk::unknown_ptr) schi_process_isr_v_sync_multi_plane_overlay2;
    
    // [VidSchiProcessPresentHistoryToken]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x10a80, 0x158b bytes
    // dxgmms2.sys .text:0x3770, 0x1c52 bytes
    // dxgmms2.sys .text:0x164e0, 0x20ba bytes
    // dxgmms2.sys .text:0x3770, 0x1c52 bytes
    //
    _s58(sdk::unknown_ptr) schi_process_present_history_token;
    
    // [VidSchiProcessPrimariesTerminationList]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x24400, 0x158b bytes
    // dxgmms2.sys .text:0x306f8, 0x1c52 bytes
    // dxgmms2.sys .text:0x38e58, 0x20ba bytes
    // dxgmms2.sys .text:0x30678, 0x1c52 bytes
    //
    _s59(sdk::unknown_ptr) schi_process_primaries_termination_list;
    
    // [VidSchiProcessVsyncCompletedFlipEntry]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x4f70, 0x158b bytes
    // dxgmms2.sys .text:0x49f0, 0x1c52 bytes
    // dxgmms2.sys .text:0x37e0, 0x20ba bytes
    // dxgmms2.sys .text:0x49f0, 0x1c52 bytes
    //
    _s60(sdk::unknown_ptr) schi_process_vsync_completed_flip_entry;
    
    // [VidSchiProfilePerformanceTick]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xa660, 0x158b bytes
    // dxgmms2.sys .text:0xbd30, 0x1c52 bytes
    // dxgmms2.sys .text:0xbcb0, 0x20ba bytes
    // dxgmms2.sys .text:0xbd30, 0x1c52 bytes
    //
    _s61(sdk::unknown_ptr) schi_profile_performance_tick;
    
    // [VidSchiPropagateCrossAdapterSignal]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x24494, 0x158b bytes
    // dxgmms2.sys .text:0x3079c, 0x1c52 bytes
    // dxgmms2.sys .text:0x38f08, 0x20ba bytes
    // dxgmms2.sys .text:0x3071c, 0x1c52 bytes
    //
    _s62(sdk::unknown_ptr) schi_propagate_cross_adapter_signal;
    
    // [VidSchiPropagatePresentHistoryToken]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x114b8, 0x158b bytes
    // dxgmms2.sys .text:0x13b70, 0x1c52 bytes
    // dxgmms2.sys .text:0x161ec, 0x20ba bytes
    // dxgmms2.sys .text:0x13b70, 0x1c52 bytes
    //
    _s63(sdk::unknown_ptr) schi_propagate_present_history_token;
    
    // [VidSchiQueueDeferredVisibilityWorkItem]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11e2c, 0x158b bytes
    // dxgmms2.sys .text:0x2bd4c, 0x1c52 bytes
    // dxgmms2.sys .text:0x35108, 0x20ba bytes
    // dxgmms2.sys .text:0x2bccc, 0x1c52 bytes
    //
    _s64(sdk::unknown_ptr) schi_queue_deferred_visibility_work_item;
    
    // [VidSchiReadCommandFromContextQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x24508, 0x158b bytes
    // dxgmms2.sys .text:0x30824, 0x1c52 bytes
    // dxgmms2.sys .text:0x38fa0, 0x20ba bytes
    // dxgmms2.sys .text:0x307a4, 0x1c52 bytes
    //
    _s65(sdk::unknown_ptr) schi_read_command_from_context_queue;
    
    // [VidSchiReadDeviceConfiguration]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x64e10, 0x158b bytes
    // dxgmms2.sys PAGE:0x7def8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x94be4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7e4e8, 0x1c52 bytes
    //
    _s66(sdk::unknown_ptr) schi_read_device_configuration;
    
    // [VidSchiReadGlobalConfiguration]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x69710, 0x158b bytes
    // dxgmms2.sys PAGE:0x8bf6c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xabf84, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8c55c, 0x1c52 bytes
    //
    _s67(sdk::unknown_ptr) schi_read_global_configuration;
    
    // [VidSchiReadNodeConfiguration]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6a450, 0x158b bytes
    // dxgmms2.sys PAGE:0x8cce0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xaccf8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8d2d0, 0x1c52 bytes
    //
    _s68(sdk::unknown_ptr) schi_read_node_configuration;
    
    // [VidSchiRecoverFromTDR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xa1444, 0x158b bytes
    // dxgmms2.sys PAGE:0xd57dc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf70d4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd5f7c, 0x1c52 bytes
    //
    _s69(sdk::unknown_ptr) schi_recover_from_tdr;
    
    // [VidSchiReleaseSyncObjectReference]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xd934, 0x158b bytes
    // dxgmms2.sys .text:0xd068, 0x1c52 bytes
    // dxgmms2.sys .text:0xd2a0, 0x20ba bytes
    // dxgmms2.sys .text:0xd068, 0x1c52 bytes
    //
    _s70(sdk::unknown_ptr) schi_release_sync_object_reference;
    
    // [VidSchiRemoveContextFromSyncPoints]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xffc4, 0x158b bytes
    // dxgmms2.sys .text:0x1a94, 0x1c52 bytes
    // dxgmms2.sys .text:0x13e54, 0x20ba bytes
    // dxgmms2.sys .text:0x1a94, 0x1c52 bytes
    //
    _s71(sdk::unknown_ptr) schi_remove_context_from_sync_points;
    
    // [VidSchiReportHwHang]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x27304, 0x158b bytes
    // dxgmms2.sys .text:0x3d114, 0x1c52 bytes
    // dxgmms2.sys .text:0x44820, 0x20ba bytes
    // dxgmms2.sys .text:0x3d094, 0x1c52 bytes
    //
    _s72(sdk::unknown_ptr) schi_report_hw_hang;
    
    // [VidSchiRequestSchedulerStatus]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x67ca8, 0x158b bytes
    // dxgmms2.sys PAGE:0x8cde8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xacdf4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8d3d8, 0x1c52 bytes
    //
    _s73(sdk::unknown_ptr) schi_request_scheduler_status;
    
    // [VidSchiResetContextQuantumAtISR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x10ca0, 0x158b bytes
    // dxgmms2.sys .text:0x12d50, 0x1c52 bytes
    // dxgmms2.sys .text:0x16a70, 0x20ba bytes
    // dxgmms2.sys .text:0x12d50, 0x1c52 bytes
    //
    _s74(sdk::unknown_ptr) schi_reset_context_quantum_at_isr;
    
    // [VidSchiResetEngine]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x24608, 0x158b bytes
    // dxgmms2.sys .text:0x30c60, 0x1c52 bytes
    // dxgmms2.sys .text:0x3945c, 0x20ba bytes
    // dxgmms2.sys .text:0x30be0, 0x1c52 bytes
    //
    _s75(sdk::unknown_ptr) schi_reset_engine;
    
    // [VidSchiResetEngines]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9ede0, 0x158b bytes
    // dxgmms2.sys PAGE:0xd1564, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf3810, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd1d04, 0x1c52 bytes
    //
    _s76(sdk::unknown_ptr) schi_reset_engines;
    
    // [VidSchiRestartQueuedFlip]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x24f2c, 0x158b bytes
    // dxgmms2.sys .text:0x3158c, 0x1c52 bytes
    // dxgmms2.sys .text:0x39d40, 0x20ba bytes
    // dxgmms2.sys .text:0x3150c, 0x1c52 bytes
    //
    _s77(sdk::unknown_ptr) schi_restart_queued_flip;
    
    // [VidSchiResumeFlipQueues]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9ef00, 0x158b bytes
    // dxgmms2.sys PAGE:0xd1710, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa823c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd1eb0, 0x1c52 bytes
    //
    _s78(sdk::unknown_ptr) schi_resume_flip_queues;
    
    // [VidSchiRewindPacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xe95c, 0x158b bytes
    // dxgmms2.sys .text:0x10304, 0x1c52 bytes
    // dxgmms2.sys .text:0x39e20, 0x20ba bytes
    // dxgmms2.sys .text:0x10304, 0x1c52 bytes
    //
    _s79(sdk::unknown_ptr) schi_rewind_packet;
    
    // [VidSchiRun_PriorityTable]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6f690, 0x158b bytes
    // dxgmms2.sys PAGE:0x8ab80, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xaa810, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8b170, 0x1c52 bytes
    //
    _s80(sdk::unknown_ptr) schi_run_priority_table;
    
    // [VidSchiRundownMonitoredFenceCpuWaiters]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xee0c, 0x158b bytes
    // dxgmms2.sys .text:0x1cd8, 0x1c52 bytes
    // dxgmms2.sys .text:0x14da8, 0x20ba bytes
    // dxgmms2.sys .text:0x1cd8, 0x1c52 bytes
    //
    _s81(sdk::unknown_ptr) schi_rundown_monitored_fence_cpu_waiters;
    
    // [VidSchiRundownUnorderedWaiterContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x146bc, 0x158b bytes
    // dxgmms2.sys .text:0x31658, 0x1c52 bytes
    // dxgmms2.sys .text:0x39ef8, 0x20ba bytes
    // dxgmms2.sys .text:0x315d8, 0x1c52 bytes
    //
    _s82(sdk::unknown_ptr) schi_rundown_unordered_waiter_context;
    
    // [VidSchiRundownUnorderedWaiterDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14734, 0x158b bytes
    // dxgmms2.sys .text:0x316a4, 0x1c52 bytes
    // dxgmms2.sys .text:0x39f44, 0x20ba bytes
    // dxgmms2.sys .text:0x31624, 0x1c52 bytes
    //
    _s83(sdk::unknown_ptr) schi_rundown_unordered_waiter_device;
    
    // [VidSchiRunningDeviceAllowsLongRunningPackets]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x24ff8, 0x158b bytes
    // dxgmms2.sys .text:0x3176c, 0x1c52 bytes
    // dxgmms2.sys .text:0x3a058, 0x20ba bytes
    // dxgmms2.sys .text:0x316ec, 0x1c52 bytes
    //
    _s84(sdk::unknown_ptr) schi_running_device_allows_long_running_packets;
    
    // [VidSchiScheduleCommandToRun]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xa0f0, 0x158b bytes
    // dxgmms2.sys .text:0xb700, 0x1c52 bytes
    // dxgmms2.sys .text:0xb650, 0x20ba bytes
    // dxgmms2.sys .text:0xb700, 0x1c52 bytes
    //
    _s85(sdk::unknown_ptr) schi_schedule_command_to_run;
    
    // [VidSchiSchedulerNodeToDriverEngine]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11168, 0x158b bytes
    // dxgmms2.sys .text:0x26b4, 0x1c52 bytes
    // dxgmms2.sys .text:0x5610, 0x20ba bytes
    // dxgmms2.sys .text:0x26b4, 0x1c52 bytes
    //
    _s86(sdk::unknown_ptr) schi_scheduler_node_to_driver_engine;
    
    // [VidSchiSchedulerNodeToDriverNode]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14fc4, 0x158b bytes
    // dxgmms2.sys .text:0x31874, 0x1c52 bytes
    // dxgmms2.sys .text:0x3a174, 0x20ba bytes
    // dxgmms2.sys .text:0x317f4, 0x1c52 bytes
    //
    _s87(sdk::unknown_ptr) schi_scheduler_node_to_driver_node;
    
    // [VidSchiSelectContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x25094, 0x158b bytes
    // dxgmms2.sys .text:0xba40, 0x1c52 bytes
    // dxgmms2.sys .text:0xb9c0, 0x20ba bytes
    // dxgmms2.sys .text:0xba40, 0x1c52 bytes
    //
    _s88(sdk::unknown_ptr) schi_select_context;
    
    // [VidSchiSelectContextFromThisPriority]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x25180, 0x158b bytes
    // dxgmms2.sys .text:0xcf70, 0x1c52 bytes
    // dxgmms2.sys .text:0xd010, 0x20ba bytes
    // dxgmms2.sys .text:0xcf70, 0x1c52 bytes
    //
    _s89(sdk::unknown_ptr) schi_select_context_from_this_priority;
    
    // [VidSchiSelectContextFromThisProcess]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xd3f0, 0x158b bytes
    // dxgmms2.sys .text:0x13308, 0x1c52 bytes
    // dxgmms2.sys .text:0x15e60, 0x20ba bytes
    // dxgmms2.sys .text:0x13308, 0x1c52 bytes
    //
    _s90(sdk::unknown_ptr) schi_select_context_from_this_process;
    
    // [VidSchiSendToExecutionQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x8000, 0x158b bytes
    // dxgmms2.sys .text:0x9440, 0x1c52 bytes
    // dxgmms2.sys .text:0x8e80, 0x20ba bytes
    // dxgmms2.sys .text:0x9440, 0x1c52 bytes
    //
    _s91(sdk::unknown_ptr) schi_send_to_execution_queue;
    
    // [VidSchiSendToExecutionQueueWithWait]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x64728, 0x158b bytes
    // dxgmms2.sys PAGE:0x84980, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa028c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x84f70, 0x1c52 bytes
    //
    _s92(sdk::unknown_ptr) schi_send_to_execution_queue_with_wait;
    
    // [VidSchiSetFlipDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x5a3c, 0x158b bytes
    // dxgmms2.sys .text:0x3a04, 0x1c52 bytes
    // dxgmms2.sys .text:0x14f44, 0x20ba bytes
    // dxgmms2.sys .text:0x3a04, 0x1c52 bytes
    //
    _s93(sdk::unknown_ptr) schi_set_flip_device;
    
    // [VidSchiSetInProcessPriorityContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11a38, 0x158b bytes
    // dxgmms2.sys .text:0x1440c, 0x1c52 bytes
    // dxgmms2.sys .text:0x18a88, 0x20ba bytes
    // dxgmms2.sys .text:0x1440c, 0x1c52 bytes
    //
    _s94(sdk::unknown_ptr) schi_set_in_process_priority_context;
    
    // [VidSchiSetNextRunPacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xdd10, 0x158b bytes
    // dxgmms2.sys .text:0x10924, 0x1c52 bytes
    // dxgmms2.sys .text:0x103d8, 0x20ba bytes
    // dxgmms2.sys .text:0x10924, 0x1c52 bytes
    //
    _s95(sdk::unknown_ptr) schi_set_next_run_packet;
    
    // [VidSchiSetNodeResettingStateAtISR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x25220, 0x158b bytes
    // dxgmms2.sys .text:0x318a0, 0x1c52 bytes
    // dxgmms2.sys .text:0x3a1a0, 0x20ba bytes
    // dxgmms2.sys .text:0x31820, 0x1c52 bytes
    //
    _s96(sdk::unknown_ptr) schi_set_node_resetting_state_at_isr;
    
    // [VidSchiSetPriorityContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xfb4c, 0x158b bytes
    // dxgmms2.sys .text:0x11b98, 0x1c52 bytes
    // dxgmms2.sys .text:0x134b4, 0x20ba bytes
    // dxgmms2.sys .text:0x11b98, 0x1c52 bytes
    //
    _s97(sdk::unknown_ptr) schi_set_priority_context;
    
    // [VidSchiSetSchedulerStatus]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x66a9c, 0x158b bytes
    // dxgmms2.sys PAGE:0x8ad54, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xaa9dc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8b344, 0x1c52 bytes
    //
    _s98(sdk::unknown_ptr) schi_set_scheduler_status;
    
    // [VidSchiSetTransferContextRunningTime]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xed70, 0x158b bytes
    // dxgmms2.sys .text:0x10490, 0x1c52 bytes
    // dxgmms2.sys .text:0x15f10, 0x20ba bytes
    // dxgmms2.sys .text:0x10490, 0x1c52 bytes
    //
    _s99(sdk::unknown_ptr) schi_set_transfer_context_running_time;
    
    // [VidSchiSignalRegisteredEvent]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xe6f0, 0x158b bytes
    // dxgmms2.sys .text:0xfcd8, 0x1c52 bytes
    // dxgmms2.sys .text:0x4eb0, 0x20ba bytes
    // dxgmms2.sys .text:0xfcd8, 0x1c52 bytes
    //
    _t00(sdk::unknown_ptr) schi_signal_registered_event;
    
    // [VidSchiSignalRegisteredSyncObjects]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11934, 0x158b bytes
    // dxgmms2.sys .text:0x1108, 0x1c52 bytes
    // dxgmms2.sys .text:0x188e4, 0x20ba bytes
    // dxgmms2.sys .text:0x1108, 0x1c52 bytes
    //
    _t01(sdk::unknown_ptr) schi_signal_registered_sync_objects;
    
    // [VidSchiSignalSyncObject]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x7e70, 0x158b bytes
    // dxgmms2.sys .text:0x9000, 0x1c52 bytes
    // dxgmms2.sys .text:0x3a210, 0x20ba bytes
    // dxgmms2.sys .text:0x9000, 0x1c52 bytes
    //
    _t02(sdk::unknown_ptr) schi_signal_sync_object;
    
    // [VidSchiStartContextRunningTimeAtISR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x10db0, 0x158b bytes
    // dxgmms2.sys .text:0x12df0, 0x1c52 bytes
    // dxgmms2.sys .text:0x16b30, 0x20ba bytes
    // dxgmms2.sys .text:0x12df0, 0x1c52 bytes
    //
    _t03(sdk::unknown_ptr) schi_start_context_running_time_at_isr;
    
    // [VidSchiStartExecutionTimeAtThisPriority]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1048, 0x158b bytes
    // dxgmms2.sys .text:0x102c8, 0x1c52 bytes
    // dxgmms2.sys .text:0x10c0, 0x20ba bytes
    // dxgmms2.sys .text:0x102c8, 0x1c52 bytes
    //
    _t04(sdk::unknown_ptr) schi_start_execution_time_at_this_priority;
    
    // [VidSchiStartNodeYield]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11ba8, 0x158b bytes
    // dxgmms2.sys .text:0x13500, 0x1c52 bytes
    // dxgmms2.sys .text:0x182d0, 0x20ba bytes
    // dxgmms2.sys .text:0x13500, 0x1c52 bytes
    //
    _t05(sdk::unknown_ptr) schi_start_node_yield;
    
    // [VidSchiStopExecutionTimeAtThisPriority]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xd4fc, 0x158b bytes
    // dxgmms2.sys .text:0xf660, 0x1c52 bytes
    // dxgmms2.sys .text:0x17588, 0x20ba bytes
    // dxgmms2.sys .text:0xf660, 0x1c52 bytes
    //
    _t06(sdk::unknown_ptr) schi_stop_execution_time_at_this_priority;
    
    // [VidSchiStopNodeYield]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x112c4, 0x158b bytes
    // dxgmms2.sys .text:0x137c4, 0x1c52 bytes
    // dxgmms2.sys .text:0x177ac, 0x20ba bytes
    // dxgmms2.sys .text:0x137c4, 0x1c52 bytes
    //
    _t07(sdk::unknown_ptr) schi_stop_node_yield;
    
    // [VidSchiSubmitCommandPacketToQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x63370, 0x158b bytes
    // dxgmms2.sys .text:0x8030, 0x1c52 bytes
    // dxgmms2.sys .text:0x8430, 0x20ba bytes
    // dxgmms2.sys .text:0x8030, 0x1c52 bytes
    //
    _t08(sdk::unknown_ptr) schi_submit_command_packet_to_queue;
    
    // [VidSchiSubmitIndependentFlip]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x218dc, 0x158b bytes
    // dxgmms2.sys .text:0x2c4dc, 0x1c52 bytes
    // dxgmms2.sys .text:0x35520, 0x20ba bytes
    // dxgmms2.sys .text:0x2c45c, 0x1c52 bytes
    //
    _t09(sdk::unknown_ptr) schi_submit_independent_flip;
    
    // [VidSchiSubmitMmIoFlipCommand]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2a50, 0x158b bytes
    // dxgmms2.sys .text:0x3b10, 0x1c52 bytes
    // dxgmms2.sys .text:0x12520, 0x20ba bytes
    // dxgmms2.sys .text:0x3b10, 0x1c52 bytes
    //
    _t10(sdk::unknown_ptr) schi_submit_mm_io_flip_command;
    
    // [VidSchiSubmitPagingCommand]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x62620, 0x158b bytes
    // dxgmms2.sys PAGE:0x82c40, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x91690, 0x20ba bytes
    // dxgmms2.sys PAGE:0x83230, 0x1c52 bytes
    //
    _t11(sdk::unknown_ptr) schi_submit_paging_command;
    
    // [VidSchiSubmitPreemptionCommand]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x64674, 0x158b bytes
    // dxgmms2.sys PAGE:0x848bc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa01b0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x84eac, 0x1c52 bytes
    //
    _t12(sdk::unknown_ptr) schi_submit_preemption_command;
    
    // [VidSchiSubmitPresentHistoryToken]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x25284, 0x158b bytes
    // dxgmms2.sys .text:0x3630, 0x1c52 bytes
    // dxgmms2.sys .text:0x16370, 0x20ba bytes
    // dxgmms2.sys .text:0x3630, 0x1c52 bytes
    //
    _t13(sdk::unknown_ptr) schi_submit_present_history_token;
    
    // [VidSchiSubmitQueueCommand]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9ef54, 0x158b bytes
    // dxgmms2.sys PAGE:0xd1770, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf39bc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd1f10, 0x1c52 bytes
    //
    _t14(sdk::unknown_ptr) schi_submit_queue_command;
    
    // [VidSchiSubmitRenderCommand]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9f03c, 0x158b bytes
    // dxgmms2.sys PAGE:0xd18ac, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf3af0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd204c, 0x1c52 bytes
    //
    _t15(sdk::unknown_ptr) schi_submit_render_command;
    
    // [VidSchiSubmitRenderVirtualCommand]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x63b40, 0x158b bytes
    // dxgmms2.sys PAGE:0x7bf50, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x922e0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7c540, 0x1c52 bytes
    //
    _t16(sdk::unknown_ptr) schi_submit_render_virtual_command;
    
    // [VidSchiSubmitSignalCommand]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xea00, 0x158b bytes
    // dxgmms2.sys .text:0x12b80, 0x1c52 bytes
    // dxgmms2.sys .text:0x15c10, 0x20ba bytes
    // dxgmms2.sys .text:0x12b80, 0x1c52 bytes
    //
    _t17(sdk::unknown_ptr) schi_submit_signal_command;
    
    // [VidSchiSubmitSoftwareCommand]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x10204, 0x158b bytes
    // dxgmms2.sys .text:0x1307c, 0x1c52 bytes
    // dxgmms2.sys .text:0x16da8, 0x20ba bytes
    // dxgmms2.sys .text:0x1307c, 0x1c52 bytes
    //
    _t18(sdk::unknown_ptr) schi_submit_software_command;
    
    // [VidSchiSubmitWaitCommand]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xdda8, 0x158b bytes
    // dxgmms2.sys .text:0x10528, 0x1c52 bytes
    // dxgmms2.sys .text:0x107a8, 0x20ba bytes
    // dxgmms2.sys .text:0x10528, 0x1c52 bytes
    //
    _t19(sdk::unknown_ptr) schi_submit_wait_command;
    
    // [VidSchiSuspendFlipQueues]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9f4e8, 0x158b bytes
    // dxgmms2.sys PAGE:0xd1d70, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa829c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd2510, 0x1c52 bytes
    //
    _t20(sdk::unknown_ptr) schi_suspend_flip_queues;
    
    // [VidSchiSuspendResumeDevicesForPowerTransition]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xf7d8, 0x158b bytes
    // dxgmms2.sys .text:0x1258c, 0x1c52 bytes
    // dxgmms2.sys .text:0x13f40, 0x20ba bytes
    // dxgmms2.sys .text:0x1258c, 0x1c52 bytes
    //
    _t21(sdk::unknown_ptr) schi_suspend_resume_devices_for_power_transition;
    
    // [VidSchiSwitchContextWithCheck]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xab80, 0x158b bytes
    // dxgmms2.sys .text:0xca10, 0x1c52 bytes
    // dxgmms2.sys .text:0xc9e0, 0x20ba bytes
    // dxgmms2.sys .text:0xca10, 0x1c52 bytes
    //
    _t22(sdk::unknown_ptr) schi_switch_context_with_check;
    
    // [VidSchiSwitchNodeFromContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x64160, 0x158b bytes
    // dxgmms2.sys PAGE:0x88030, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa0080, 0x20ba bytes
    // dxgmms2.sys PAGE:0x88620, 0x1c52 bytes
    //
    _t23(sdk::unknown_ptr) schi_switch_node_from_context;
    
    // [VidSchiSwitchNodeFromDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xfd90, 0x158b bytes
    // dxgmms2.sys .text:0x33550, 0x1c52 bytes
    // dxgmms2.sys .text:0x17330, 0x20ba bytes
    // dxgmms2.sys .text:0x334d0, 0x1c52 bytes
    //
    _t24(sdk::unknown_ptr) schi_switch_node_from_device;
    
    // [VidSchiTryEnterIndependentFlip]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11c88, 0x158b bytes
    // dxgmms2.sys .text:0x31fa4, 0x1c52 bytes
    // dxgmms2.sys .text:0x1a0ac, 0x20ba bytes
    // dxgmms2.sys .text:0x31f24, 0x1c52 bytes
    //
    _t25(sdk::unknown_ptr) schi_try_enter_independent_flip;
    
    // [VidSchiUnblockUnorderedWaitQueuePacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11010, 0x158b bytes
    // dxgmms2.sys .text:0x14974, 0x1c52 bytes
    // dxgmms2.sys .text:0x3a6d4, 0x20ba bytes
    // dxgmms2.sys .text:0x14974, 0x1c52 bytes
    //
    _t26(sdk::unknown_ptr) schi_unblock_unordered_wait_queue_packet;
    
    // [VidSchiUnblockUnorderedWaiter]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x10f8c, 0x158b bytes
    // dxgmms2.sys .text:0x31ff8, 0x1c52 bytes
    // dxgmms2.sys .text:0x3a7e4, 0x20ba bytes
    // dxgmms2.sys .text:0x31f78, 0x1c52 bytes
    //
    _t27(sdk::unknown_ptr) schi_unblock_unordered_waiter;
    
    // [VidSchiUnreferenceDisplayingAllocations]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x10014, 0x158b bytes
    // dxgmms2.sys .text:0x52e0, 0x1c52 bytes
    // dxgmms2.sys .text:0x4130, 0x20ba bytes
    // dxgmms2.sys .text:0x52e0, 0x1c52 bytes
    //
    _t28(sdk::unknown_ptr) schi_unreference_displaying_allocations;
    
    // [VidSchiUnreferencePrimaryAllocations]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11d08, 0x158b bytes
    // dxgmms2.sys .text:0x57c0, 0x1c52 bytes
    // dxgmms2.sys .text:0x19ce8, 0x20ba bytes
    // dxgmms2.sys .text:0x57c0, 0x1c52 bytes
    //
    _t29(sdk::unknown_ptr) schi_unreference_primary_allocations;
    
    // [VidSchiUnwaitAllContexts]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x25394, 0x158b bytes
    // dxgmms2.sys .text:0x321dc, 0x1c52 bytes
    // dxgmms2.sys .text:0x3a998, 0x20ba bytes
    // dxgmms2.sys .text:0x3215c, 0x1c52 bytes
    //
    _t30(sdk::unknown_ptr) schi_unwait_all_contexts;
    
    // [VidSchiUnwaitAllContextsInList]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x21f78, 0x158b bytes
    // dxgmms2.sys .text:0x2ce68, 0x1c52 bytes
    // dxgmms2.sys .text:0x35fd8, 0x20ba bytes
    // dxgmms2.sys .text:0x2cde8, 0x1c52 bytes
    //
    _t31(sdk::unknown_ptr) schi_unwait_all_contexts_in_list;
    
    // [VidSchiUnwaitContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xd998, 0x158b bytes
    // dxgmms2.sys .text:0x11850, 0x1c52 bytes
    // dxgmms2.sys .text:0x10468, 0x20ba bytes
    // dxgmms2.sys .text:0x11850, 0x1c52 bytes
    //
    _t32(sdk::unknown_ptr) schi_unwait_context;
    
    // [VidSchiUnwaitFlipQueueUnderSchedulerSpinLock]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x25430, 0x158b bytes
    // dxgmms2.sys .text:0x322a0, 0x1c52 bytes
    // dxgmms2.sys .text:0x1c038, 0x20ba bytes
    // dxgmms2.sys .text:0x32220, 0x1c52 bytes
    //
    _t33(sdk::unknown_ptr) schi_unwait_flip_queue_under_scheduler_spin_lock;
    
    // [VidSchiUnwaitMonitoredFences]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xbdd0, 0x158b bytes
    // dxgmms2.sys .text:0xd210, 0x1c52 bytes
    // dxgmms2.sys .text:0xd490, 0x20ba bytes
    // dxgmms2.sys .text:0xd210, 0x1c52 bytes
    //
    _t34(sdk::unknown_ptr) schi_unwait_monitored_fences;
    
    // [VidSchiUnwaitWaitQueuePacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xd78c, 0x158b bytes
    // dxgmms2.sys .text:0x11658, 0x1c52 bytes
    // dxgmms2.sys .text:0x105b0, 0x20ba bytes
    // dxgmms2.sys .text:0x11658, 0x1c52 bytes
    //
    _t35(sdk::unknown_ptr) schi_unwait_wait_queue_packet;
    
    // [VidSchiUpdateContextRunningTimeAtISR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xc750, 0x158b bytes
    // dxgmms2.sys .text:0xebb0, 0x1c52 bytes
    // dxgmms2.sys .text:0xeab0, 0x20ba bytes
    // dxgmms2.sys .text:0xebb0, 0x1c52 bytes
    //
    _t36(sdk::unknown_ptr) schi_update_context_running_time_at_isr;
    
    // [VidSchiUpdateContextStatus]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xb430, 0x158b bytes
    // dxgmms2.sys .text:0x7a20, 0x1c52 bytes
    // dxgmms2.sys .text:0xed30, 0x20ba bytes
    // dxgmms2.sys .text:0x7a20, 0x1c52 bytes
    //
    _t37(sdk::unknown_ptr) schi_update_context_status;
    
    // [VidSchiUpdateCurrentIsrFrameTime]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1219c, 0x158b bytes
    // dxgmms2.sys .text:0x32314, 0x1c52 bytes
    // dxgmms2.sys .text:0x3aa6c, 0x20ba bytes
    // dxgmms2.sys .text:0x32294, 0x1c52 bytes
    //
    _t38(sdk::unknown_ptr) schi_update_current_isr_frame_time;
    
    // [VidSchiUpdateFlipContextStatus]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x101ac, 0x158b bytes
    // dxgmms2.sys .text:0x2cea0, 0x1c52 bytes
    // dxgmms2.sys .text:0x1a6c8, 0x20ba bytes
    // dxgmms2.sys .text:0x2ce20, 0x1c52 bytes
    //
    _t39(sdk::unknown_ptr) schi_update_flip_context_status;
    
    // [VidSchiUpdateFlipQueueEntriesForMove]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x25464, 0x158b bytes
    // dxgmms2.sys .text:0x32490, 0x1c52 bytes
    // dxgmms2.sys .text:0x3abec, 0x20ba bytes
    // dxgmms2.sys .text:0x32410, 0x1c52 bytes
    //
    _t40(sdk::unknown_ptr) schi_update_flip_queue_entries_for_move;
    
    // [VidSchiUpdateLastCompletedPresentTimestamp]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xba40, 0x158b bytes
    // dxgmms2.sys .text:0xd990, 0x1c52 bytes
    // dxgmms2.sys .text:0xdd80, 0x20ba bytes
    // dxgmms2.sys .text:0xd990, 0x1c52 bytes
    //
    _t41(sdk::unknown_ptr) schi_update_last_completed_present_timestamp;
    
    // [VidSchiUpdateNodeRunningTime]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x113d8, 0x158b bytes
    // dxgmms2.sys .text:0x14b24, 0x1c52 bytes
    // dxgmms2.sys .text:0x18c10, 0x20ba bytes
    // dxgmms2.sys .text:0x14b24, 0x1c52 bytes
    //
    _t42(sdk::unknown_ptr) schi_update_node_running_time;
    
    // [VidSchiUpdateNodeRunningTimeAtISR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xc6c0, 0x158b bytes
    // dxgmms2.sys .text:0xeb30, 0x1c52 bytes
    // dxgmms2.sys .text:0xea30, 0x20ba bytes
    // dxgmms2.sys .text:0xeb30, 0x1c52 bytes
    //
    _t43(sdk::unknown_ptr) schi_update_node_running_time_at_isr;
    
    // [VidSchiUpdatePresentParameters]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x5d60, 0x158b bytes
    // dxgmms2.sys .text:0x46a0, 0x1c52 bytes
    // dxgmms2.sys .text:0x34d0, 0x20ba bytes
    // dxgmms2.sys .text:0x46a0, 0x1c52 bytes
    //
    _t44(sdk::unknown_ptr) schi_update_present_parameters;
    
    // [VidSchiUpdatePriorityTables]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x9330, 0x158b bytes
    // dxgmms2.sys .text:0x326fc, 0x1c52 bytes
    // dxgmms2.sys .text:0x1beb0, 0x20ba bytes
    // dxgmms2.sys .text:0x3267c, 0x1c52 bytes
    //
    _t45(sdk::unknown_ptr) schi_update_priority_tables;
    
    // [VidSchiVerifyDriverReportedFenceId]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xd494, 0x158b bytes
    // dxgmms2.sys .text:0xf5e4, 0x1c52 bytes
    // dxgmms2.sys .text:0x17ce4, 0x20ba bytes
    // dxgmms2.sys .text:0xf5e4, 0x1c52 bytes
    //
    _t46(sdk::unknown_ptr) schi_verify_driver_reported_fence_id;
    
    // [VidSchiWaitFlushCompletion]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x624d0, 0x158b bytes
    // dxgmms2.sys PAGE:0x6283c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x973d8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x62e2c, 0x1c52 bytes
    //
    _t47(sdk::unknown_ptr) schi_wait_flush_completion;
    
    // [VidSchiWaitForCompletePreemption]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9f584, 0x158b bytes
    // dxgmms2.sys PAGE:0xd1df4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf3f98, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd2594, 0x1c52 bytes
    //
    _t48(sdk::unknown_ptr) schi_wait_for_complete_preemption;
    
    // [VidSchiWaitForDrainFlipQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x66ad4, 0x158b bytes
    // dxgmms2.sys PAGE:0xd1eb8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa6988, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd2658, 0x1c52 bytes
    //
    _t49(sdk::unknown_ptr) schi_wait_for_drain_flip_queue;
    
    // [VidSchiWaitForEmptyHwQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x66c04, 0x158b bytes
    // dxgmms2.sys PAGE:0xd1f90, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf405c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd2730, 0x1c52 bytes
    //
    _t50(sdk::unknown_ptr) schi_wait_for_empty_hw_queue;
    
    // [VidSchiWaitForSchedulerEvents]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x62fc0, 0x158b bytes
    // dxgmms2.sys PAGE:0x7cd50, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x93210, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7d340, 0x1c52 bytes
    //
    _t51(sdk::unknown_ptr) schi_wait_for_scheduler_events;
    
    // [VidSchiWorkerThread]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6f600, 0x158b bytes
    // dxgmms2.sys PAGE:0x8aaa0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xaa730, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8b090, 0x1c52 bytes
    //
    _t52(sdk::unknown_ptr) schi_worker_thread;
    
    // [VidSchiWorkerThreadTimerCallback]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11180, 0x158b bytes
    // dxgmms2.sys .text:0x13650, 0x1c52 bytes
    // dxgmms2.sys .text:0x17670, 0x20ba bytes
    // dxgmms2.sys .text:0x13650, 0x1c52 bytes
    //
    _t53(sdk::unknown_ptr) schi_worker_thread_timer_callback;
};
#include "magic/api.end.hpp"
