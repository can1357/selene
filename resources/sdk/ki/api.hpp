#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kprcb_t.hpp"

#include "magic/api.start.hpp"
namespace ki
{
    // [KiAbEntryFreeAndEnableInterrupts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x272ca0, 0x1fd000 bytes
    //
    _m00(sdk::unknown_ptr) ab_entry_free_and_enable_interrupts;
    
    // [KiAbThreadGetIoQoSPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x350114, 0x1fd000 bytes
    //
    _m01(sdk::unknown_ptr) ab_thread_get_io_qo_s_priority;
    
    // [KiAbThreadRemoveBoostsSlow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x308f34, 0x1fd000 bytes
    //
    _m02(sdk::unknown_ptr) ab_thread_remove_boosts_slow;
    
    // [KiAbTryReclaimOrphanedEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x300260, 0x1fd000 bytes
    //
    _m03(sdk::unknown_ptr) ab_try_reclaim_orphaned_entries;
    
    // [KiAccumulateCycleStats]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x14a400, 0x32828 bytes
    //
    _m04(sdk::unknown_ptr) accumulate_cycle_stats;
    
    // [KiAcquirePrcbLocksForIsolationUnit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x21d0b0, 0x1fd000 bytes
    //
    _m05(sdk::unknown_ptr) acquire_prcb_locks_for_isolation_unit;
    
    // [KiAcquirePrcbLocksForPreemptionAttempt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5627ac, 0x1fd000 bytes
    //
    _m06(sdk::unknown_ptr) acquire_prcb_locks_for_preemption_attempt;
    
    // [KiAcquirePrcbLocksForPreemptionAttemptSlowPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x562810, 0x1fd000 bytes
    //
    _m07(sdk::unknown_ptr) acquire_prcb_locks_for_preemption_attempt_slow_path;
    
    // [KiAcquireProcessLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xa1e38, 0x32828 bytes
    //
    _m08(sdk::unknown_ptr) acquire_process_lock_exclusive;
    
    // [KiAcquireProcessLockShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1dc244, 0x32828 bytes
    //
    _m09(sdk::unknown_ptr) acquire_process_lock_shared;
    
    // [KiAcquireReleaseDpcData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x567fb8, 0x1fd000 bytes
    //
    _m10(sdk::unknown_ptr) acquire_release_dpc_data;
    
    // [KiAcquireThreadLockRaiseToDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xa079c, 0x32828 bytes
    //
    _m11(sdk::unknown_ptr) acquire_thread_lock_raise_to_dpc;
    
    // [KiAcquireThreadStateLockForWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5628ac, 0x1fd000 bytes
    //
    _m12(sdk::unknown_ptr) acquire_thread_state_lock_for_write;
    
    // [KiAdaptThreadIdealProcessorForProcessIdealSetChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x56228c, 0x1fd000 bytes
    //
    _m13(sdk::unknown_ptr) adapt_thread_ideal_processor_for_process_ideal_set_change;
    
    // [KiAddCpuToSystemCpuPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa76a2c, 0x1fd000 bytes
    //
    _m14(sdk::unknown_ptr) add_cpu_to_system_cpu_partition;
    
    // [KiAddProcessorToCoreControlBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3acec0, 0x1fd000 bytes
    //
    _m15(sdk::unknown_ptr) add_processor_to_core_control_block;
    
    // [KiAdjustProcessIdealProcessorSetsForThreadCreation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x212bc8, 0x1fd000 bytes
    //
    _m16(sdk::unknown_ptr) adjust_process_ideal_processor_sets_for_thread_creation;
    
    // [KiAdjustReadyQueueScanOwnerOnParkingChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x56949c, 0x1fd000 bytes
    //
    _m17(sdk::unknown_ptr) adjust_ready_queue_scan_owner_on_parking_change;
    
    // [KiAdjustRealtimePriorityFloor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x217620, 0x1fd000 bytes
    //
    _m18(sdk::unknown_ptr) adjust_realtime_priority_floor;
    
    // [KiAdjustRescheduleContextEntryForThreadRemoval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x33c63c, 0x1fd000 bytes
    //
    _m19(sdk::unknown_ptr) adjust_reschedule_context_entry_for_thread_removal;
    
    // [KiAdjustRescheduleContextForParking]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x56bfa0, 0x1fd000 bytes
    //
    _m20(sdk::unknown_ptr) adjust_reschedule_context_for_parking;
    
    // [KiAdvanceReadyQueueEnumeratorToNextList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x367ab8, 0x1fd000 bytes
    //
    _m21(sdk::unknown_ptr) advance_ready_queue_enumerator_to_next_list;
    
    // [KiAdvanceReadyQueueEnumeratorToNextPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x367d84, 0x1fd000 bytes
    //
    _m22(sdk::unknown_ptr) advance_ready_queue_enumerator_to_next_phase;
    
    // [KiAdvanceReadyQueueEnumeratorToNextProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x367dfc, 0x1fd000 bytes
    //
    _m23(sdk::unknown_ptr) advance_ready_queue_enumerator_to_next_processor;
    
    // [KiAdvanceReadyQueueEnumeratorToNextRootScb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x367c68, 0x1fd000 bytes
    //
    _m24(sdk::unknown_ptr) advance_ready_queue_enumerator_to_next_root_scb;
    
    // [KiAdvanceReadyQueueEnumeratorToNextScb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x367bb4, 0x1fd000 bytes
    //
    _m25(sdk::unknown_ptr) advance_ready_queue_enumerator_to_next_scb;
    
    // [KiAllocateDpcDelegateThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3b766c, 0x1fd000 bytes
    //
    _m26(sdk::unknown_ptr) allocate_dpc_delegate_thread;
    
    // [KiAllocateHeteroConfigBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa7dc14, 0x1fd000 bytes
    //
    _m27(sdk::unknown_ptr) allocate_hetero_config_buffer;
    
    // [KiAllocateIdleThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa79048, 0x1fd000 bytes
    //
    _m28(sdk::unknown_ptr) allocate_idle_thread;
    
    // [KiAllocateLocalSharedReadyQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3b7940, 0x1fd000 bytes
    //
    _m29(sdk::unknown_ptr) allocate_local_shared_ready_queue;
    
    // [KiAllocatePrcbThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3b76e8, 0x1fd000 bytes
    //
    _m30(sdk::unknown_ptr) allocate_prcb_thread;
    
    // [KiAllocatePrcbThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3b7568, 0x1fd000 bytes
    //
    _m31(sdk::unknown_ptr) allocate_prcb_threads;
    
    // [KiAllocateProcessorNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3b7eec, 0x1fd000 bytes
    //
    _m32(sdk::unknown_ptr) allocate_processor_number;
    
    // [KiAllocateProcessorStacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3b7b10, 0x1fd000 bytes
    //
    _m33(sdk::unknown_ptr) allocate_processor_stacks;
    
    // [KiAllocateProcessorStateInitializationParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3b759c, 0x1fd000 bytes
    //
    _m34(sdk::unknown_ptr) allocate_processor_state_initialization_parameters;
    
    // [KiAllocateSchedulerSubNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x55c1d8, 0x1fd000 bytes
    //
    _m35(sdk::unknown_ptr) allocate_scheduler_sub_node;
    
    // [KiAltContextProcessMcheckAltReturn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x56c0b0, 0x1fd000 bytes
    //
    _m36(sdk::unknown_ptr) alt_context_process_mcheck_alt_return;
    
    // [KiAltContextWorkQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc40880, 0x1fd000 bytes
    //
    _m37(sdk::unknown_ptr) alt_context_work_queue;
    
    // [KiAltContextWorkQueueAddItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x56c184, 0x1fd000 bytes
    //
    _m38(sdk::unknown_ptr) alt_context_work_queue_add_item;
    
    // [KiAltContextWrapper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xd1b210, 0x1fd000 bytes
    //
    _m39(sdk::unknown_ptr) alt_context_wrapper;
    
    // [KiAltReturnDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x56c210, 0x1fd000 bytes
    //
    _m40(sdk::unknown_ptr) alt_return_dpc_routine;
    
    // [KiAltReturnInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc6a908, 0x1fd000 bytes
    //
    _m41(sdk::unknown_ptr) alt_return_initialized;
    
    // [KiAltReturnSelectProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x56c230, 0x1fd000 bytes
    //
    _m42(sdk::unknown_ptr) alt_return_select_processor;
    
    // [KiAltReturnWorkerRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x56c2b0, 0x1fd000 bytes
    //
    _m43(sdk::unknown_ptr) alt_return_worker_routine;
    
    // [KiAndAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2b50e0, 0x1fd000 bytes
    //
    _m44(sdk::unknown_ptr) and_affinity_ex;
    
    // [KiApplyDpcVerificationScaleSettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x557564, 0x1fd000 bytes
    //
    _m45(sdk::unknown_ptr) apply_dpc_verification_scale_settings;
    
    // [KiApplyProcessorDpcLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa78c70, 0x1fd000 bytes
    //
    _m46(sdk::unknown_ptr) apply_processor_dpc_limits;
    
    // [KiAreSoftUnparkingElectionsEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x569598, 0x1fd000 bytes
    //
    _m47(sdk::unknown_ptr) are_soft_unparking_elections_enabled;
    
    // [KiAssignAdjustableSubNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb816a4, 0x1fd000 bytes
    //
    _m48(sdk::unknown_ptr) assign_adjustable_sub_nodes;
    
    // [KiAssignAllSubNodesToGroup0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb55bf4, 0x1fd000 bytes
    //
    _m49(sdk::unknown_ptr) assign_all_sub_nodes_to_group0;
    
    // [KiAssignFixedSubNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb8173c, 0x1fd000 bytes
    //
    _m50(sdk::unknown_ptr) assign_fixed_sub_nodes;
    
    // [KiAssignProcessorNumberToPrcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3b7190, 0x1fd000 bytes
    //
    _m51(sdk::unknown_ptr) assign_processor_number_to_prcb;
    
    // [KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5695f4, 0x1fd000 bytes
    //
    _m52(sdk::unknown_ptr) attempt_to_unpark_idle_soft_parked_processor_on_schedule;
    
    // [KiBootProcessorIdleThreadAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd23d80, 0x1fd000 bytes
    //
    _m53(sdk::unknown_ptr) boot_processor_idle_thread_affinity;
    
    // [KiBootProcessorIdleThreadUserAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd23e90, 0x1fd000 bytes
    //
    _m54(sdk::unknown_ptr) boot_processor_idle_thread_user_affinity;
    
    // [KiBugCheckDriverOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc6442c, 0x1fd000 bytes
    //
    _m55(sdk::unknown_ptr) bug_check_driver_offset;
    
    // [KiBugCheckProgressCpusFrozen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x422ac4, 0x1fd000 bytes
    //
    _m56(sdk::unknown_ptr) bug_check_progress_cpus_frozen;
    
    // [KiBugCheckRecoveryCleanupFromCrashDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x566188, 0x1fd000 bytes
    //
    _m57(sdk::unknown_ptr) bug_check_recovery_cleanup_from_crash_dump;
    
    // [KiBugCheckRecoveryFreezeOtherProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x56629c, 0x1fd000 bytes
    //
    _m58(sdk::unknown_ptr) bug_check_recovery_freeze_other_processors;
    
    // [KiBugCheckRecoveryFreezeProcessorDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5664d0, 0x1fd000 bytes
    //
    _m59(sdk::unknown_ptr) bug_check_recovery_freeze_processor_dpc;
    
    // [KiBugCheckRecoveryPrepareForCrashDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x566628, 0x1fd000 bytes
    //
    _m60(sdk::unknown_ptr) bug_check_recovery_prepare_for_crash_dump;
    
    // [KiBugCheckShouldEnterPostBugCheckDebugger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x555cd0, 0x1fd000 bytes
    //
    _m61(sdk::unknown_ptr) bug_check_should_enter_post_bug_check_debugger;
    
    // [KiBugCheckWriteCrashDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x555d78, 0x1fd000 bytes
    //
    _m62(sdk::unknown_ptr) bug_check_write_crash_dump;
    
    // [KiBugcheckBlockingEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc40ec0, 0x1fd000 bytes
    //
    _m63(sdk::unknown_ptr) bugcheck_blocking_event;
    
    // [KiBugcheckOwnerKeepsOthersFrozen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc483c0, 0x1fd000 bytes
    //
    _m64(sdk::unknown_ptr) bugcheck_owner_keeps_others_frozen;
    
    // [KiBugcheckRecoveryActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc40e80, 0x1fd000 bytes
    //
    _m65(sdk::unknown_ptr) bugcheck_recovery_active;
    
    // [KiBugcheckRecoveryActiveEvaluated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc40e84, 0x1fd000 bytes
    //
    _m66(sdk::unknown_ptr) bugcheck_recovery_active_evaluated;
    
    // [KiBugcheckRecoveryDumpPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc40e8c, 0x1fd000 bytes
    //
    _m67(sdk::unknown_ptr) bugcheck_recovery_dump_policy;
    
    // [KiBugcheckRecoveryOwner]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc40e28, 0x1fd000 bytes
    //
    _m68(sdk::unknown_ptr) bugcheck_recovery_owner;
    
    // [KiBuildShareCountsForSmtSiblings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x423028, 0x1fd000 bytes
    //
    _m69(sdk::unknown_ptr) build_share_counts_for_smt_siblings;
    
    // [KiCachedSystemAllowedCpuSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x302680, 0x32828 bytes
    //
    _m70(sdk::unknown_ptr) cached_system_allowed_cpu_set;
    
    // [KiCachedSystemAllowedCpuSetVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x302728, 0x32828 bytes
    //
    _m71(sdk::unknown_ptr) cached_system_allowed_cpu_set_version;
    
    // [KiCanLocalReadyThreadBeScheduledToRescheduleContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x217f00, 0x1fd000 bytes
    //
    _m72(sdk::unknown_ptr) can_local_ready_thread_be_scheduled_to_reschedule_context;
    
    // [KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2bb470, 0x1fd000 bytes
    //
    _m73(sdk::unknown_ptr) can_local_ready_thread_be_scheduled_to_reschedule_context_entry;
    
    // [KiCanThreadBeReadiedImmediately]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x216d54, 0x1fd000 bytes
    //
    _m74(sdk::unknown_ptr) can_thread_be_readied_immediately;
    
    // [KiCancelClockTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x32a56c, 0x1fd000 bytes
    //
    _m75(sdk::unknown_ptr) cancel_clock_timer;
    
    // [KiCaptureDumpPostRecovery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x566770, 0x1fd000 bytes
    //
    _m76(sdk::unknown_ptr) capture_dump_post_recovery;
    
    // [KiCaptureDumpPreRecovery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5667cc, 0x1fd000 bytes
    //
    _m77(sdk::unknown_ptr) capture_dump_pre_recovery;
    
    // [KiCaptureTotalCyclesCurrentThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x5ed50, 0x32828 bytes
    //
    _m78(sdk::unknown_ptr) capture_total_cycles_current_thread;
    
    // [KiCheckAssistDataForBamQosLevelOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x422b88, 0x1fd000 bytes
    //
    _m79(sdk::unknown_ptr) check_assist_data_for_bam_qos_level_override;
    
    // [KiCheckMinOverQuotaTransition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x422f8c, 0x1fd000 bytes
    //
    _m80(sdk::unknown_ptr) check_min_over_quota_transition;
    
    // [KiCheckPrcbAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x21670c, 0x1fd000 bytes
    //
    _m81(sdk::unknown_ptr) check_prcb_affinity_ex;
    
    // [KiCheckUserAddressCetCompat]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x96959c, 0x1fd000 bytes
    //
    _m82(sdk::unknown_ptr) check_user_address_cet_compat;
    
    // [KiClearPriorityFloor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x8705c, 0x32828 bytes
    //
    _m83(sdk::unknown_ptr) clear_priority_floor;
    
    // [KiClearSystemPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x35af34, 0x1fd000 bytes
    //
    _m84(sdk::unknown_ptr) clear_system_priority;
    
    // [KiClockOwnerOneShotCorrectiveRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc41d50, 0x1fd000 bytes
    //
    _m85(sdk::unknown_ptr) clock_owner_one_shot_corrective_request;
    
    // [KiClockTimerPerCpuTickScheduling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1da05, 0x1fd000 bytes
    //
    _m86(sdk::unknown_ptr) clock_timer_per_cpu_tick_scheduling;
    
    // [KiCollectFullProcessName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x555e20, 0x1fd000 bytes
    //
    _m87(sdk::unknown_ptr) collect_full_process_name;
    
    // [KiCollectTriageDumpDataBlocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x555e68, 0x1fd000 bytes
    //
    _m88(sdk::unknown_ptr) collect_triage_dump_data_blocks;
    
    // [KiCommitGroupSubNodeAssignments]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3de730, 0x1fd000 bytes
    //
    _m89(sdk::unknown_ptr) commit_group_sub_node_assignments;
    
    // [KiCommitRescheduleContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x218608, 0x1fd000 bytes
    //
    _m90(sdk::unknown_ptr) commit_reschedule_context;
    
    // [KiCommitRescheduleContextEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2be3c0, 0x1fd000 bytes
    //
    _m91(sdk::unknown_ptr) commit_reschedule_context_entry;
    
    // [KiComparePrcbLockOrdering]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x509910, 0x1fd000 bytes
    //
    _m92(sdk::unknown_ptr) compare_prcb_lock_ordering;
    
    // [KiCompareSubNodeConfigurationCapacity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb21260, 0x1fd000 bytes
    //
    _m93(sdk::unknown_ptr) compare_sub_node_configuration_capacity;
    
    // [KiComplementAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x33a1f0, 0x1fd000 bytes
    //
    _m94(sdk::unknown_ptr) complement_affinity_ex;
    
    // [KiCompleteBootProcessorContextInitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3b79bc, 0x1fd000 bytes
    //
    _m95(sdk::unknown_ptr) complete_boot_processor_context_initialization;
    
    // [KiCompleteRescheduleContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x329454, 0x1fd000 bytes
    //
    _m96(sdk::unknown_ptr) complete_reschedule_context;
    
    // [KiCompleteRescheduleContextEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3294a8, 0x1fd000 bytes
    //
    _m97(sdk::unknown_ptr) complete_reschedule_context_entry;
    
    // [KiComputeDispatchInterruptCost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb2dca4, 0x1fd000 bytes
    //
    _m98(sdk::unknown_ptr) compute_dispatch_interrupt_cost;
    
    // [KiComputeDispatchInterruptCostDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e44c0, 0x1fd000 bytes
    //
    _m99(sdk::unknown_ptr) compute_dispatch_interrupt_cost_dpc_routine;
    
    // [KiComputeEffectivePriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x219e30, 0x1fd000 bytes
    //
    _n00(sdk::unknown_ptr) compute_effective_priority;
    
    // [KiComputeGroupMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2ee7c8, 0x1fd000 bytes
    //
    _n01(sdk::unknown_ptr) compute_group_mask;
    
    // [KiComputeHeteroThreadQos]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2bc680, 0x1fd000 bytes
    //
    _n02(sdk::unknown_ptr) compute_hetero_thread_qos;
    
    // [KiComputeHgsScore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x562bc0, 0x1fd000 bytes
    //
    _n03(sdk::unknown_ptr) compute_hgs_score;
    
    // [KiComputeNewInterruptTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x36b384, 0x1fd000 bytes
    //
    _n04(sdk::unknown_ptr) compute_new_interrupt_time;
    
    // [KiComputeTopologyConstants]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3acf08, 0x1fd000 bytes
    //
    _n05(sdk::unknown_ptr) compute_topology_constants;
    
    // [KiConfigureHeteroMultiCoreProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x967234, 0x1fd000 bytes
    //
    _n06(sdk::unknown_ptr) configure_hetero_multi_core_processors;
    
    // [KiConstrainIdealProcessorSetBreakpoints]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2eeafc, 0x1fd000 bytes
    //
    _n07(sdk::unknown_ptr) constrain_ideal_processor_set_breakpoints;
    
    // [KiCopyAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2b57d0, 0x1fd000 bytes
    //
    _n08(sdk::unknown_ptr) copy_affinity_ex;
    
    // [KiCopyGroupMasksToAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x212820, 0x1fd000 bytes
    //
    _n09(sdk::unknown_ptr) copy_group_masks_to_affinity_ex;
    
    // [KiCopyInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1d5488, 0x32828 bytes
    //
    _n10(sdk::unknown_ptr) copy_information;
    
    // [KiCoreIsolationEnforceable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1e18c, 0x1fd000 bytes
    //
    _n11(sdk::unknown_ptr) core_isolation_enforceable;
    
    // [KiCountNodeZeroSetBitsGroupAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb3bdc8, 0x1fd000 bytes
    //
    _n12(sdk::unknown_ptr) count_node_zero_set_bits_group_affinity;
    
    // [KiCpuPartitionAssignmentLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc41e28, 0x1fd000 bytes
    //
    _n13(sdk::unknown_ptr) cpu_partition_assignment_lock;
    
    // [KiCrashDumpContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc42360, 0x1fd000 bytes
    //
    _n14(sdk::unknown_ptr) crash_dump_context;
    
    // [KiCreateDpcLimitsProcessorConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3b1ff0, 0x1fd000 bytes
    //
    _n15(sdk::unknown_ptr) create_dpc_limits_processor_configuration;
    
    // [KiCreateKernelShadowStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9685d0, 0x1fd000 bytes
    //
    _n16(sdk::unknown_ptr) create_kernel_shadow_stack;
    
    // [KiDebugRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe ALMOSTRO:0x3aa778, 0x32828 bytes
    //
    _n17(sdk::unknown_ptr) debug_routine;
    
    // [KiDebugSwitchRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe ALMOSTRO:0x3aa6c8, 0x32828 bytes
    //
    _n18(sdk::unknown_ptr) debug_switch_routine;
    
    // [KiDecrementKernelShadowStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x429420, 0x1fd000 bytes
    //
    _n19(sdk::unknown_ptr) decrement_kernel_shadow_stack;
    
    // [KiDefaultDynamicHeteroCpuPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe ALMOSTRO:0x3aa060, 0x32828 bytes
    //
    _n20(sdk::unknown_ptr) default_dynamic_hetero_cpu_policy;
    
    // [KiDeferDpcWatchdogViolation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x566874, 0x1fd000 bytes
    //
    _n21(sdk::unknown_ptr) defer_dpc_watchdog_violation;
    
    // [KiDeferredBugcheckRecoveryDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc40e40, 0x1fd000 bytes
    //
    _n22(sdk::unknown_ptr) deferred_bugcheck_recovery_dpc;
    
    // [KiDeferredBugcheckRecoveryWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc40ea0, 0x1fd000 bytes
    //
    _n23(sdk::unknown_ptr) deferred_bugcheck_recovery_work_item;
    
    // [KiDeferredBugcheckRecoveryWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5668c0, 0x1fd000 bytes
    //
    _n24(sdk::unknown_ptr) deferred_bugcheck_recovery_worker;
    
    // [KiDeferredDpcWatchdogActivePrcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc40f38, 0x1fd000 bytes
    //
    _n25(sdk::unknown_ptr) deferred_dpc_watchdog_active_prcb;
    
    // [KiDeferredDpcWatchdogViolation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4293e0, 0x1fd000 bytes
    //
    _n26(sdk::unknown_ptr) deferred_dpc_watchdog_violation;
    
    // [KiDeleteKernelShadowStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9685fc, 0x1fd000 bytes
    //
    _n27(sdk::unknown_ptr) delete_kernel_shadow_stack;
    
    // [KiDeregisterObjectWaitBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x35680c, 0x1fd000 bytes
    //
    _n28(sdk::unknown_ptr) deregister_object_wait_block;
    
    // [KiDetectBpbMsr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1dcf6c, 0x32828 bytes
    //
    _n29(sdk::unknown_ptr) detect_bpb_msr;
    
    // [KiDisablePointerParameterAlignmentValidation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1dd1c, 0x1fd000 bytes
    //
    _n30(sdk::unknown_ptr) disable_pointer_parameter_alignment_validation;
    
    // [KiDoesThreadDominateRescheduleContextEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x217fcc, 0x1fd000 bytes
    //
    _n31(sdk::unknown_ptr) does_thread_dominate_reschedule_context_entry;
    
    // [KiDowngradeIsolationUnitLockHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x21b750, 0x1fd000 bytes
    //
    _n32(sdk::unknown_ptr) downgrade_isolation_unit_lock_handle;
    
    // [KiDpcCorralLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc414e0, 0x1fd000 bytes
    //
    _n33(sdk::unknown_ptr) dpc_corral_lock;
    
    // [KiDpcDelegateThreadName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc064d0, 0x1fd000 bytes
    //
    _n34(sdk::unknown_ptr) dpc_delegate_thread_name;
    
    // [KiDpcRuntimeHistoryHashTableCleanupDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x361dc0, 0x1fd000 bytes
    //
    _n35(sdk::unknown_ptr) dpc_runtime_history_hash_table_cleanup_dpc_routine;
    
    // [KiDpcRuntimeHistoryHashTableCleanupTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc40da0, 0x1fd000 bytes
    //
    _n36(sdk::unknown_ptr) dpc_runtime_history_hash_table_cleanup_timer;
    
    // [KiDpcRuntimeHistoryHashTableCleanupTimerCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x361d20, 0x1fd000 bytes
    //
    _n37(sdk::unknown_ptr) dpc_runtime_history_hash_table_cleanup_timer_callback;
    
    // [KiDpcRuntimeHistoryHashTableGrowIfNeeded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x372528, 0x1fd000 bytes
    //
    _n38(sdk::unknown_ptr) dpc_runtime_history_hash_table_grow_if_needed;
    
    // [KiDpcWatchdogConfigurationLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc42310, 0x1fd000 bytes
    //
    _n39(sdk::unknown_ptr) dpc_watchdog_configuration_lock;
    
    // [KiDpcWatchdogCounterReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x35c260, 0x1fd000 bytes
    //
    _n40(sdk::unknown_ptr) dpc_watchdog_counter_reset;
    
    // [KiDynamicHeteroCpuPolicyImportant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe ALMOSTRO:0x3aa09c, 0x32828 bytes
    //
    _n41(sdk::unknown_ptr) dynamic_hetero_cpu_policy_important;
    
    // [KiDynamicHeteroCpuPolicyImportantShort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe ALMOSTRO:0x3aa064, 0x32828 bytes
    //
    _n42(sdk::unknown_ptr) dynamic_hetero_cpu_policy_important_short;
    
    // [KiEnableClockTimerPerCpuTickScheduling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1dd9c, 0x1fd000 bytes
    //
    _n43(sdk::unknown_ptr) enable_clock_timer_per_cpu_tick_scheduling;
    
    // [KiEnableOptionalXStateFeatures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x55e2ec, 0x1fd000 bytes
    //
    _n44(sdk::unknown_ptr) enable_optional_x_state_features;
    
    // [KiEndThreadAccountingPeriodEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2bd680, 0x1fd000 bytes
    //
    _n45(sdk::unknown_ptr) end_thread_accounting_period_ex;
    
    // [KiEnterLongDpcProcessing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2baa00, 0x1fd000 bytes
    //
    _n46(sdk::unknown_ptr) enter_long_dpc_processing;
    
    // [KiEnumerateNextSchedulerSubNodeInSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x55c278, 0x1fd000 bytes
    //
    _n47(sdk::unknown_ptr) enumerate_next_scheduler_sub_node_in_system;
    
    // [KiEvaluateHgsClassChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x562be0, 0x1fd000 bytes
    //
    _n48(sdk::unknown_ptr) evaluate_hgs_class_change;
    
    // [KiEvaluatePreemptionSwapTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x562c80, 0x1fd000 bytes
    //
    _n49(sdk::unknown_ptr) evaluate_preemption_swap_target;
    
    // [KiExecuteDpcDelegate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3c76e0, 0x1fd000 bytes
    //
    _n50(sdk::unknown_ptr) execute_dpc_delegate;
    
    // [KiExplicitTopologyLevels]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1e188, 0x1fd000 bytes
    //
    _n51(sdk::unknown_ptr) explicit_topology_levels;
    
    // [KiFastAcquireQueuedSpinLockInstrumented]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1d61b4, 0x32828 bytes
    //
    _n52(sdk::unknown_ptr) fast_acquire_queued_spin_lock_instrumented;
    
    // [KiFinalizeGroupAssignment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3de800, 0x1fd000 bytes
    //
    _n53(sdk::unknown_ptr) finalize_group_assignment;
    
    // [KiFindBiasedSetMember]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x45e2cc, 0x1fd000 bytes
    //
    _n54(sdk::unknown_ptr) find_biased_set_member;
    
    // [KiFindRescheduleContextEntryForPrcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2185dc, 0x1fd000 bytes
    //
    _n55(sdk::unknown_ptr) find_reschedule_context_entry_for_prcb;
    
    // [KiFindSubNodeForProcessorNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3b72b8, 0x1fd000 bytes
    //
    _n56(sdk::unknown_ptr) find_sub_node_for_processor_number;
    
    // [KiFixupControlProtectionKernelModeReturnMismatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x567680, 0x1fd000 bytes
    //
    _n57(sdk::unknown_ptr) fixup_control_protection_kernel_mode_return_mismatch;
    
    // [KiFlushSharedReadyQueueReadyLists]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x569874, 0x1fd000 bytes
    //
    _n58(sdk::unknown_ptr) flush_shared_ready_queue_ready_lists;
    
    // [KiFlushSoftwareInterruptBatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2b29c0, 0x1fd000 bytes
    //
    _n59(sdk::unknown_ptr) flush_software_interrupt_batch;
    
    // [KiFlushTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x66de8, 0x32828 bytes
    //
    _n60(sdk::unknown_ptr) flush_tb;
    
    // [KiFlushViaHypervisor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x36d40, 0x32828 bytes
    //
    _n61(sdk::unknown_ptr) flush_via_hypervisor;
    
    // [KiForceBugcheckForDpcWatchdog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1deec, 0x1fd000 bytes
    //
    _n62(sdk::unknown_ptr) force_bugcheck_for_dpc_watchdog;
    
    // [KiFreeLocalSharedReadyQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3adae4, 0x1fd000 bytes
    //
    _n63(sdk::unknown_ptr) free_local_shared_ready_queue;
    
    // [KiFreePrcbThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x557c4c, 0x1fd000 bytes
    //
    _n64(sdk::unknown_ptr) free_prcb_threads;
    
    // [KiFreeProcessorNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x55c30c, 0x1fd000 bytes
    //
    _n65(sdk::unknown_ptr) free_processor_number;
    
    // [KiFreeProcessorStacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x557c90, 0x1fd000 bytes
    //
    _n66(sdk::unknown_ptr) free_processor_stacks;
    
    // [KiFreeProcessorStateInitializationParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x557d78, 0x1fd000 bytes
    //
    _n67(sdk::unknown_ptr) free_processor_state_initialization_parameters;
    
    // [KiFreezeDataTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x558bc0, 0x1fd000 bytes
    //
    _n68(sdk::unknown_ptr) freeze_data_table_entry;
    
    // [KiFreezeInDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc40fa0, 0x1fd000 bytes
    //
    _n69(sdk::unknown_ptr) freeze_in_dpc;
    
    // [KiFreezeInDpcCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc40f30, 0x1fd000 bytes
    //
    _n70(sdk::unknown_ptr) freeze_in_dpc_count;
    
    // [KiFreezeNestingLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc41338, 0x1fd000 bytes
    //
    _n71(sdk::unknown_ptr) freeze_nesting_level;
    
    // [KiFreezeSkippedProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc41348, 0x1fd000 bytes
    //
    _n72(sdk::unknown_ptr) freeze_skipped_processor;
    
    // [KiGenericCallDpcInitiatorDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e3650, 0x1fd000 bytes
    //
    _n73(sdk::unknown_ptr) generic_call_dpc_initiator_dpc;
    
    // [KiGenericCallDpcInitiatorWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x34dce0, 0x1fd000 bytes
    //
    _n74(sdk::unknown_ptr) generic_call_dpc_initiator_worker;
    
    // [KiGetClockTimerEarliestDeadline]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3ea540, 0x1fd000 bytes
    //
    _n75(sdk::unknown_ptr) get_clock_timer_earliest_deadline;
    
    // [KiGetClockTimerState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x385ca0, 0x1fd000 bytes
    //
    _n76(sdk::unknown_ptr) get_clock_timer_state;
    
    // [KiGetCurrentKernelShadowStackBounds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x567814, 0x1fd000 bytes
    //
    _n77(sdk::unknown_ptr) get_current_kernel_shadow_stack_bounds;
    
    // [KiGetHeteroCpuPolicyThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x988d8, 0x32828 bytes
    //
    _n78(sdk::unknown_ptr) get_hetero_cpu_policy_thread;
    
    // [KiGetNextTimer2ExpirationDueTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xb51f8, 0x32828 bytes
    //
    _n79(sdk::unknown_ptr) get_next_timer2_expiration_due_time;
    
    // [KiGetProcessorClassForPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x45fa3e, 0x1fd000 bytes
    //
    _n80(sdk::unknown_ptr) get_processor_class_for_policy;
    
    // [KiGetProcessorEfficiencyClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x207850, 0x1fd000 bytes
    //
    _n81(sdk::unknown_ptr) get_processor_efficiency_class;
    
    // [KiGetSubNodeForGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x36b520, 0x1fd000 bytes
    //
    _n82(sdk::unknown_ptr) get_sub_node_for_group;
    
    // [KiGetSystemAllowedSetsAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x212914, 0x1fd000 bytes
    //
    _n83(sdk::unknown_ptr) get_system_allowed_sets_affinity_ex;
    
    // [KiGlobalTimerResolutionRequests]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1db8c, 0x1fd000 bytes
    //
    _n84(sdk::unknown_ptr) global_timer_resolution_requests;
    
    // [KiHaltOnAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x56bdec, 0x1fd000 bytes
    //
    _n85(sdk::unknown_ptr) halt_on_address;
    
    // [KiHaltOnAddressHashTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc40900, 0x1fd000 bytes
    //
    _n86(sdk::unknown_ptr) halt_on_address_hash_table;
    
    // [KiHaltOnAddressWakeEntireList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x56bed0, 0x1fd000 bytes
    //
    _n87(sdk::unknown_ptr) halt_on_address_wake_entire_list;
    
    // [KiHandleDeferredPreemption]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x32dc2c, 0x1fd000 bytes
    //
    _n88(sdk::unknown_ptr) handle_deferred_preemption;
    
    // [KiHandleMultipleBugchecksDuringRecovery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x566b70, 0x1fd000 bytes
    //
    _n89(sdk::unknown_ptr) handle_multiple_bugchecks_during_recovery;
    
    // [KiHeteroAttemptPreemptionSwap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x45fa80, 0x1fd000 bytes
    //
    _n90(sdk::unknown_ptr) hetero_attempt_preemption_swap;
    
    // [KiHeteroComputeThreadImportance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x45ff0a, 0x1fd000 bytes
    //
    _n91(sdk::unknown_ptr) hetero_compute_thread_importance;
    
    // [KiHeteroComputeThreadWorkloadProperties]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x45ff74, 0x1fd000 bytes
    //
    _n92(sdk::unknown_ptr) hetero_compute_thread_workload_properties;
    
    // [KiHeteroConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc422f0, 0x1fd000 bytes
    //
    _n93(sdk::unknown_ptr) hetero_config;
    
    // [KiHeteroIdleSetReduction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x460024, 0x1fd000 bytes
    //
    _n94(sdk::unknown_ptr) hetero_idle_set_reduction;
    
    // [KiHeteroIsSwapBeneficialForPerformance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x562ed8, 0x1fd000 bytes
    //
    _n95(sdk::unknown_ptr) hetero_is_swap_beneficial_for_performance;
    
    // [KiHeteroReduceToMaximallyPreferredByClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x562f28, 0x1fd000 bytes
    //
    _n96(sdk::unknown_ptr) hetero_reduce_to_maximally_preferred_by_class;
    
    // [KiHeteroScanQueueForPreemptionSwapTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x562fdc, 0x1fd000 bytes
    //
    _n97(sdk::unknown_ptr) hetero_scan_queue_for_preemption_swap_target;
    
    // [KiHeteroSchedulerOptionsMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1dbd4, 0x1fd000 bytes
    //
    _n98(sdk::unknown_ptr) hetero_scheduler_options_mask;
    
    // [KiHeteroSelectIdleProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x46012a, 0x1fd000 bytes
    //
    _n99(sdk::unknown_ptr) hetero_select_idle_processor;
    
    // [KiHeteroSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe ALMOSTRO:0x3ab338, 0x32828 bytes
    //
    _o00(sdk::unknown_ptr) hetero_system;
    
    // [KiHgsPlusConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1c360, 0x1fd000 bytes
    //
    _o01(sdk::unknown_ptr) hgs_plus_configuration;
    
    // [KiHgsPlusEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1da78, 0x1fd000 bytes
    //
    _o02(sdk::unknown_ptr) hgs_plus_enabled;
    
    // [KiHRTimerClockActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x30f2a8, 0x32828 bytes
    //
    _o03(sdk::unknown_ptr) hr_timer_clock_active;
    
    // [KiHRTimerClockRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x30f280, 0x32828 bytes
    //
    _o04(sdk::unknown_ptr) hr_timer_clock_request;
    
    // [KiHresetMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1dcac, 0x1fd000 bytes
    //
    _o05(sdk::unknown_ptr) hreset_mask;
    
    // [KiIdealProcessorRebalancerContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc41360, 0x1fd000 bytes
    //
    _o06(sdk::unknown_ptr) ideal_processor_rebalancer_context;
    
    // [KiIdealProcessorRebalancerTimerCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x36ee00, 0x1fd000 bytes
    //
    _o07(sdk::unknown_ptr) ideal_processor_rebalancer_timer_callback;
    
    // [KiIdealProcessorRebalancerWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x36cae0, 0x1fd000 bytes
    //
    _o08(sdk::unknown_ptr) ideal_processor_rebalancer_worker;
    
    // [KiIdleThreadName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc064e0, 0x1fd000 bytes
    //
    _o09(sdk::unknown_ptr) idle_thread_name;
    
    // [KiInitDpcThresholds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb5c840, 0x1fd000 bytes
    //
    _o10(sdk::unknown_ptr) init_dpc_thresholds;
    
    // [KiInitSupervisorStateExtensionHost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb2ecb4, 0x1fd000 bytes
    //
    _o11(sdk::unknown_ptr) init_supervisor_state_extension_host;
    
    // [KiInitialNodeStructures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xd0e4c0, 0x1fd000 bytes
    //
    _o12(sdk::unknown_ptr) initial_node_structures;
    
    // [KiInitialPCR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x345000, 0x32828 bytes
    //
    _o13(sdk::unknown_ptr) initial_pcr;
    
    // [KiInitialSharedReadyQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe CACHEALI:0xd4b040, 0x1fd000 bytes
    //
    _o14(sdk::unknown_ptr) initial_shared_ready_queue;
    
    // [KiInitializeAndStartInitialThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e729c, 0x1fd000 bytes
    //
    _o15(sdk::unknown_ptr) initialize_and_start_initial_thread;
    
    // [KiInitializeBugcheckRecoveryProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3acbb0, 0x1fd000 bytes
    //
    _o16(sdk::unknown_ptr) initialize_bugcheck_recovery_processor;
    
    // [KiInitializeDpcRuntimeHistoryHashTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb2e994, 0x1fd000 bytes
    //
    _o17(sdk::unknown_ptr) initialize_dpc_runtime_history_hash_tables;
    
    // [KiInitializeForegroundBoostThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x212c80, 0x1fd000 bytes
    //
    _o18(sdk::unknown_ptr) initialize_foreground_boost_thread;
    
    // [KiInitializeHgsPlusWorkloadClasses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa77988, 0x1fd000 bytes
    //
    _o19(sdk::unknown_ptr) initialize_hgs_plus_workload_classes;
    
    // [KiInitializeHresetSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa77a00, 0x1fd000 bytes
    //
    _o20(sdk::unknown_ptr) initialize_hreset_support;
    
    // [KiInitializeIdealProcessorRebalancer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e8200, 0x1fd000 bytes
    //
    _o21(sdk::unknown_ptr) initialize_ideal_processor_rebalancer;
    
    // [KiInitializeIdleProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb4e3d0, 0x1fd000 bytes
    //
    _o22(sdk::unknown_ptr) initialize_idle_process;
    
    // [KiInitializeKernelShadowStacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa7d990, 0x1fd000 bytes
    //
    _o23(sdk::unknown_ptr) initialize_kernel_shadow_stacks;
    
    // [KiInitializeLegacyWatchdogProfileThresholds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb5c940, 0x1fd000 bytes
    //
    _o24(sdk::unknown_ptr) initialize_legacy_watchdog_profile_thresholds;
    
    // [KiInitializeNormalPriorityAntiStarvationPolicies]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e683c, 0x1fd000 bytes
    //
    _o25(sdk::unknown_ptr) initialize_normal_priority_anti_starvation_policies;
    
    // [KiInitializeNXSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x997668, 0x1fe000 bytes
    //
    _o26(sdk::unknown_ptr) initialize_nx_support;
    
    // [KiInitializePriorityState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3ad750, 0x1fd000 bytes
    //
    _o27(sdk::unknown_ptr) initialize_priority_state;
    
    // [KiInitializeProcessConcurrencyCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x562570, 0x1fd000 bytes
    //
    _o28(sdk::unknown_ptr) initialize_process_concurrency_count;
    
    // [KiInitializeProcessorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x831c1c, 0x1fd000 bytes
    //
    _o29(sdk::unknown_ptr) initialize_processor_state;
    
    // [KiInitializeProcessorStateInitializationParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x557df0, 0x1fd000 bytes
    //
    _o30(sdk::unknown_ptr) initialize_processor_state_initialization_parameters;
    
    // [KiInitializeSchedulerSubNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3ca000, 0x1fd000 bytes
    //
    _o31(sdk::unknown_ptr) initialize_scheduler_sub_node;
    
    // [KiInitializeSharedReadyQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3acc08, 0x1fd000 bytes
    //
    _o32(sdk::unknown_ptr) initialize_shared_ready_queue;
    
    // [KiInitializeSingleDpcRuntimeHistoryHashTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x82d948, 0x1fd000 bytes
    //
    _o33(sdk::unknown_ptr) initialize_single_dpc_runtime_history_hash_table;
    
    // [KiInitializeSoftwareInterruptBatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3acb68, 0x1fd000 bytes
    //
    _o34(sdk::unknown_ptr) initialize_software_interrupt_batch;
    
    // [KiInitializeThreadCycleTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa769bc, 0x1fd000 bytes
    //
    _o35(sdk::unknown_ptr) initialize_thread_cycle_table;
    
    // [KiInitializeTopologyStructures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa76e5c, 0x1fd000 bytes
    //
    _o36(sdk::unknown_ptr) initialize_topology_structures;
    
    // [KiInitiateGenericCallDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x34dde4, 0x1fd000 bytes
    //
    _o37(sdk::unknown_ptr) initiate_generic_call_dpc;
    
    // [KiInjectedMachineFrame]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc40fc0, 0x1fd000 bytes
    //
    _o38(sdk::unknown_ptr) injected_machine_frame;
    
    // [KiInsertTimer2IntoCollection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xfe060, 0x32828 bytes
    //
    _o39(sdk::unknown_ptr) insert_timer2_into_collection;
    
    // [KiInswapAndReadyThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x362d64, 0x1fd000 bytes
    //
    _o40(sdk::unknown_ptr) inswap_and_ready_thread;
    
    // [KiIntPartGetLowestClassProcessorInMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x28d944, 0x1fd000 bytes
    //
    _o41(sdk::unknown_ptr) int_part_get_lowest_class_processor_in_mask;
    
    // [KiIntPartInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc41418, 0x1fd000 bytes
    //
    _o42(sdk::unknown_ptr) int_part_initialized;
    
    // [KiIntSteerAddLoadToProcessorAndCheckThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5658f0, 0x1fd000 bytes
    //
    _o43(sdk::unknown_ptr) int_steer_add_load_to_processor_and_check_threshold;
    
    // [KiIntSteerCalculateFallbackDistribution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5659bc, 0x1fd000 bytes
    //
    _o44(sdk::unknown_ptr) int_steer_calculate_fallback_distribution;
    
    // [KiIntSteerCalculatePriorityDistribution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x28d6b0, 0x1fd000 bytes
    //
    _o45(sdk::unknown_ptr) int_steer_calculate_priority_distribution;
    
    // [KiIntSteerCalculateUniformDistribution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x565a40, 0x1fd000 bytes
    //
    _o46(sdk::unknown_ptr) int_steer_calculate_uniform_distribution;
    
    // [KiIntSteerDetermineSteeringEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe INIT:0x791c7c, 0x32828 bytes
    //
    _o47(sdk::unknown_ptr) int_steer_determine_steering_enabled;
    
    // [KiIntSteerDistributionContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc41258, 0x1fd000 bytes
    //
    _o48(sdk::unknown_ptr) int_steer_distribution_context;
    
    // [KiIntSteerEnable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x12b724, 0x32828 bytes
    //
    _o49(sdk::unknown_ptr) int_steer_enable;
    
    // [KiIntSteerGetLineInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x38942c, 0x1fd000 bytes
    //
    _o50(sdk::unknown_ptr) int_steer_get_line_information;
    
    // [KiIntSteerGetNextProcessorTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x28d904, 0x1fd000 bytes
    //
    _o51(sdk::unknown_ptr) int_steer_get_next_processor_target;
    
    // [KiIntSteerLogMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1db9d8, 0x32828 bytes
    //
    _o52(sdk::unknown_ptr) int_steer_log_mask;
    
    // [KiIntSteerLogProc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1dbacc, 0x32828 bytes
    //
    _o53(sdk::unknown_ptr) int_steer_log_proc;
    
    // [KiIntSteerPerProcIsrDpcTimeAffinitized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc41128, 0x1fd000 bytes
    //
    _o54(sdk::unknown_ptr) int_steer_per_proc_isr_dpc_time_affinitized;
    
    // [KiIntSteerPreviousPerfSnapDelta]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc41008, 0x1fd000 bytes
    //
    _o55(sdk::unknown_ptr) int_steer_previous_perf_snap_delta;
    
    // [KiIntSteerSlowestCyclesPerSec]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc41250, 0x1fd000 bytes
    //
    _o56(sdk::unknown_ptr) int_steer_slowest_cycles_per_sec;
    
    // [KiInterruptPartitions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc41420, 0x1fd000 bytes
    //
    _o57(sdk::unknown_ptr) interrupt_partitions;
    
    // [KiInterruptSteeringFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1dc6c, 0x1fd000 bytes
    //
    _o58(sdk::unknown_ptr) interrupt_steering_flags;
    
    // [KiInvokeDeferredDpcWatchdogViolation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x566c00, 0x1fd000 bytes
    //
    _o59(sdk::unknown_ptr) invoke_deferred_dpc_watchdog_violation;
    
    // [KiIpiStallOnPacketTargetsPrcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x213500, 0x1fd000 bytes
    //
    _o60(sdk::function<void(uint32_t, struct nt::kprcb_t*)>*) ipi_stall_on_packet_targets_prcb;
    
    // [KiIsCommitFailTerminationRequested]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xc63c4, 0x32828 bytes
    //
    _o61(sdk::unknown_ptr) is_commit_fail_termination_requested;
    
    // [KiIsConcurrencyCountWithinIdealProcessorSetBreakpoints]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x212c64, 0x1fd000 bytes
    //
    _o62(sdk::unknown_ptr) is_concurrency_count_within_ideal_processor_set_breakpoints;
    
    // [KiIsFbClearSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x422f64, 0x1fd000 bytes
    //
    _o63(sdk::unknown_ptr) is_fb_clear_supported;
    
    // [KiIsIsolationUnitIdleByHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x56a85c, 0x1fd000 bytes
    //
    _o64(sdk::unknown_ptr) is_isolation_unit_idle_by_handle;
    
    // [KiIsPrcbThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x32e054, 0x1fd000 bytes
    //
    _o65(sdk::unknown_ptr) is_prcb_thread;
    
    // [KiIsRecoveryPossibleOnCurrentStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x566c34, 0x1fd000 bytes
    //
    _o66(sdk::unknown_ptr) is_recovery_possible_on_current_stack;
    
    // [KiIsThreadConstrainedBySchedulingGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x21a464, 0x1fd000 bytes
    //
    _o67(sdk::unknown_ptr) is_thread_constrained_by_scheduling_group;
    
    // [KiIsThreadEligibleForPreemptionSwap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x46021e, 0x1fd000 bytes
    //
    _o68(sdk::unknown_ptr) is_thread_eligible_for_preemption_swap;
    
    // [KiKernelCetAuditModeEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe CFGRO:0xe01843, 0x1fd000 bytes
    //
    _o69(sdk::unknown_ptr) kernel_cet_audit_mode_enabled;
    
    // [KiKernelCetLogging]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1e220, 0x1fd000 bytes
    //
    _o70(sdk::unknown_ptr) kernel_cet_logging;
    
    // [KiLoadDirectoryTableBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xc1068, 0x32828 bytes
    //
    _o71(sdk::unknown_ptr) load_directory_table_base;
    
    // [KiLogClockIncrementUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x33c840, 0x1fd000 bytes
    //
    _o72(sdk::unknown_ptr) log_clock_increment_update;
    
    // [KiLogControlProtectionKernelModeReturnMismatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5678c0, 0x1fd000 bytes
    //
    _o73(sdk::unknown_ptr) log_control_protection_kernel_mode_return_mismatch;
    
    // [KiLogControlProtectionUserModeAudit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004
    // ntoskrnl.exe .text:0x50c9bc, 0x1fe000 bytes
    //
    _o74(sdk::unknown_ptr) log_control_protection_user_mode_audit;
    
    // [KiLogSingleDpcSoftTimeoutEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x557250, 0x1fd000 bytes
    //
    _o75(sdk::unknown_ptr) log_single_dpc_soft_timeout_event;
    
    // [KiLogUserCetSetContextIpValidationAudit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004
    // ntoskrnl.exe .text:0x3eacb8, 0x1fe000 bytes
    //
    _o76(sdk::unknown_ptr) log_user_cet_set_context_ip_validation_audit;
    
    // [KiLongDpcQueueThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1c198, 0x1fd000 bytes
    //
    _o77(sdk::unknown_ptr) long_dpc_queue_threshold;
    
    // [KiLongDpcRuntimeThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1c19c, 0x1fd000 bytes
    //
    _o78(sdk::unknown_ptr) long_dpc_runtime_threshold;
    
    // [KiLongDpcRuntimeThresholdCycles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1def0, 0x1fd000 bytes
    //
    _o79(sdk::unknown_ptr) long_dpc_runtime_threshold_cycles;
    
    // [KiMaxReadyThreadsPerInterruptMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1c438, 0x1fd000 bytes
    //
    _o80(sdk::unknown_ptr) max_ready_threads_per_interrupt_mask;
    
    // [KiMcheckRecurseEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x16b374, 0x32828 bytes
    //
    _o81(sdk::unknown_ptr) mcheck_recurse_end;
    
    // [KiMcheckRecurseStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x16b112, 0x32828 bytes
    //
    _o82(sdk::unknown_ptr) mcheck_recurse_start;
    
    // [KiModifySystemAllowedCpuSetsWithLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3d2ca4, 0x1fd000 bytes
    //
    _o83(sdk::unknown_ptr) modify_system_allowed_cpu_sets_with_lock;
    
    // [KiMultiCoreHeteroLowerArchThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1df80, 0x1fd000 bytes
    //
    _o84(sdk::unknown_ptr) multi_core_hetero_lower_arch_threshold;
    
    // [KiMultiCoreHeteroUpperArchThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1df90, 0x1fd000 bytes
    //
    _o85(sdk::unknown_ptr) multi_core_hetero_upper_arch_threshold;
    
    // [KiNormalPriorityBoostMaximumThreadReadyCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1c07c, 0x1fd000 bytes
    //
    _o86(sdk::unknown_ptr) normal_priority_boost_maximum_thread_ready_count;
    
    // [KiNormalPriorityBoostReadyTimeTicks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1c0b0, 0x1fd000 bytes
    //
    _o87(sdk::unknown_ptr) normal_priority_boost_ready_time_ticks;
    
    // [KiNormalPriorityBoostScanLatencyTicks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1c0ac, 0x1fd000 bytes
    //
    _o88(sdk::unknown_ptr) normal_priority_boost_scan_latency_ticks;
    
    // [KiNormalPriorityBoostingPeriodMultiplier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1c088, 0x1fd000 bytes
    //
    _o89(sdk::unknown_ptr) normal_priority_boosting_period_multiplier;
    
    // [KiNormalPriorityReadyScan]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x32d06c, 0x1fd000 bytes
    //
    _o90(sdk::unknown_ptr) normal_priority_ready_scan;
    
    // [KiOpCheckUnhandledSecurePciAccessViolation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x56b12c, 0x1fd000 bytes
    //
    _o91(sdk::unknown_ptr) op_check_unhandled_secure_pci_access_violation;
    
    // [KiOpGetPciConfigSpaceAccessInfoFromPhysicalAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x56b324, 0x1fd000 bytes
    //
    _o92(sdk::unknown_ptr) op_get_pci_config_space_access_info_from_physical_address;
    
    // [KiOpInt2C]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc40d3c, 0x1fd000 bytes
    //
    _o93(sdk::unknown_ptr) op_int2c;
    
    // [KiOp_Mov]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x36e880, 0x1fd000 bytes
    //
    _o94(sdk::unknown_ptr) op_mov;
    
    // [KiOpPciConfigSpaceAccessCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x56b51c, 0x1fd000 bytes
    //
    _o95(sdk::unknown_ptr) op_pci_config_space_access_common;
    
    // [KiOp_SLDTSTR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1dcd10, 0x32828 bytes
    //
    _o96(sdk::unknown_ptr) op_sldtstr;
    
    // [KiOptimizeSpecCtrlSettingsWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3da610, 0x1fd000 bytes
    //
    _o97(sdk::unknown_ptr) optimize_spec_ctrl_settings_worker;
    
    // [KiOrAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2129a0, 0x1fd000 bytes
    //
    _o98(sdk::unknown_ptr) or_affinity_ex;
    
    // [KiParkCurrentProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5698c4, 0x1fd000 bytes
    //
    _o99(sdk::unknown_ptr) park_current_processor;
    
    // [KiPerformAutomaticGroupConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb8191c, 0x1fd000 bytes
    //
    _p00(sdk::unknown_ptr) perform_automatic_group_configuration;
    
    // [KiPerformExplicitGroupAssignment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb55c38, 0x1fd000 bytes
    //
    _p01(sdk::unknown_ptr) perform_explicit_group_assignment;
    
    // [KiPerformHeteroSoftParkElection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x569b1c, 0x1fd000 bytes
    //
    _p02(sdk::unknown_ptr) perform_hetero_soft_park_election;
    
    // [KiPerformSoftParkElection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x569c54, 0x1fd000 bytes
    //
    _p03(sdk::unknown_ptr) perform_soft_park_election;
    
    // [KiPlatformSwapStacksAndCall]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x42fd20, 0x1fd000 bytes
    //
    _p04(sdk::unknown_ptr) platform_swap_stacks_and_call;
    
    // [KiPlatformSwapStacksAndCallReturn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x42fd2f, 0x1fd000 bytes
    //
    _p05(sdk::unknown_ptr) platform_swap_stacks_and_call_return;
    
    // [KiPopulateNodeInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb55ee0, 0x1fd000 bytes
    //
    _p06(sdk::unknown_ptr) populate_node_information;
    
    // [KiPopulateSubNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb55cb0, 0x1fd000 bytes
    //
    _p07(sdk::unknown_ptr) populate_sub_nodes;
    
    // [KiPopulateTrivialProcessorSelectionResult]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x34bf80, 0x1fd000 bytes
    //
    _p08(sdk::unknown_ptr) populate_trivial_processor_selection_result;
    
    // [KiPrepareUpdateCoresHeteroMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x967538, 0x1fd000 bytes
    //
    _p09(sdk::unknown_ptr) prepare_update_cores_hetero_mask;
    
    // [KiPristineTriageDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc40f48, 0x1fd000 bytes
    //
    _p10(sdk::unknown_ptr) pristine_triage_dump;
    
    // [KiPristineTriageDumpAllocationDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc40f60, 0x1fd000 bytes
    //
    _p11(sdk::unknown_ptr) pristine_triage_dump_allocation_dpc;
    
    // [KiPristineTriageDumpAllocationWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x566ca0, 0x1fd000 bytes
    //
    _p12(sdk::unknown_ptr) pristine_triage_dump_allocation_worker;
    
    // [KiPristineTriageDumpSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc40f50, 0x1fd000 bytes
    //
    _p13(sdk::unknown_ptr) pristine_triage_dump_size;
    
    // [KiProcessControlProtectionFromKernelMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x567e28, 0x1fd000 bytes
    //
    _p14(sdk::unknown_ptr) process_control_protection_from_kernel_mode;
    
    // [KiProcessControlProtectionUserModeAudit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004
    // ntoskrnl.exe .text:0x50cc98, 0x1fe000 bytes
    //
    _p15(sdk::unknown_ptr) process_control_protection_user_mode_audit;
    
    // [KiProcessDeferredDpcWatchdogViolation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x566ce8, 0x1fd000 bytes
    //
    _p16(sdk::unknown_ptr) process_deferred_dpc_watchdog_violation;
    
    // [KiQueryDpcRuntimeHistory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x36a200, 0x1fd000 bytes
    //
    _p17(sdk::unknown_ptr) query_dpc_runtime_history;
    
    // [KiQueryEffectivePriorityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x98f80, 0x32828 bytes
    //
    _p18(sdk::unknown_ptr) query_effective_priority_thread;
    
    // [KiQueryNodeCapacity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x2f3870, 0x32828 bytes
    //
    _p19(sdk::unknown_ptr) query_node_capacity;
    
    // [KiQueryNodeDistance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x2f3878, 0x32828 bytes
    //
    _p20(sdk::unknown_ptr) query_node_distance;
    
    // [KiQueryProcessStibpPairingAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x55f80c, 0x1fd000 bytes
    //
    _p21(sdk::unknown_ptr) query_process_stibp_pairing_allowed;
    
    // [KiQuerySubNodeActiveAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x33c5ac, 0x1fd000 bytes
    //
    _p22(sdk::unknown_ptr) query_sub_node_active_affinity;
    
    // [KiReadyQueueEnumeratorStartNormalQueuesPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2c7d90, 0x1fd000 bytes
    //
    _p23(sdk::unknown_ptr) ready_queue_enumerator_start_normal_queues_phase;
    
    // [KiReadyQueueEnumeratorStartScbQueuesPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2bd970, 0x1fd000 bytes
    //
    _p24(sdk::unknown_ptr) ready_queue_enumerator_start_scb_queues_phase;
    
    // [KiReconfigureSubNodeSchedulingInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x557e10, 0x1fd000 bytes
    //
    _p25(sdk::unknown_ptr) reconfigure_sub_node_scheduling_information;
    
    // [KiRecoverableBugcheckException]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0d220, 0x1fd000 bytes
    //
    _p26(sdk::unknown_ptr) recoverable_bugcheck_exception;
    
    // [KiRecoveryCheckpointsFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc40e88, 0x1fd000 bytes
    //
    _p27(sdk::unknown_ptr) recovery_checkpoints_failure;
    
    // [KiReleaseInterruptConnectLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x12b6bc, 0x32828 bytes
    //
    _p28(sdk::unknown_ptr) release_interrupt_connect_lock;
    
    // [KiReleasePrcbLocksForIsolationUnit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x21b7a0, 0x1fd000 bytes
    //
    _p29(sdk::unknown_ptr) release_prcb_locks_for_isolation_unit;
    
    // [KiReleaseSecondaryPassiveConnectLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1d86a8, 0x32828 bytes
    //
    _p30(sdk::unknown_ptr) release_secondary_passive_connect_lock;
    
    // [KiReleaseSecondarySignalListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1d86cc, 0x32828 bytes
    //
    _p31(sdk::unknown_ptr) release_secondary_signal_list_lock;
    
    // [KiRemoveAndFreeCpuPartitionAssignmentProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x379bc0, 0x1fd000 bytes
    //
    _p32(sdk::unknown_ptr) remove_and_free_cpu_partition_assignment_process;
    
    // [KiRemoveCpuPartitionAssignmentProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x379c48, 0x1fd000 bytes
    //
    _p33(sdk::unknown_ptr) remove_cpu_partition_assignment_process;
    
    // [KiRemoveCurrentlyEnumeratedThreadFromReadyQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2bb510, 0x1fd000 bytes
    //
    _p34(sdk::unknown_ptr) remove_currently_enumerated_thread_from_ready_queue;
    
    // [KiRemovePrcbWaitEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x296440, 0x1fd000 bytes
    //
    _p35(sdk::unknown_ptr) remove_prcb_wait_entry;
    
    // [KiReparkIdlingProcessorIfNecessary]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x34bc00, 0x1fd000 bytes
    //
    _p36(sdk::unknown_ptr) repark_idling_processor_if_necessary;
    
    // [KiReselectIdealProcessorAfterAffinityChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3a85b4, 0x1fd000 bytes
    //
    _p37(sdk::unknown_ptr) reselect_ideal_processor_after_affinity_change;
    
    // [KiResetClockInterval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x55b7b4, 0x1fd000 bytes
    //
    _p38(sdk::unknown_ptr) reset_clock_interval;
    
    // [KiResetClockIntervalOneShot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x32a664, 0x1fd000 bytes
    //
    _p39(sdk::unknown_ptr) reset_clock_interval_one_shot;
    
    // [KiRestrictAffinityByShareCounts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4230c0, 0x1fd000 bytes
    //
    _p40(sdk::unknown_ptr) restrict_affinity_by_share_counts;
    
    // [KiRestrictSoftParkCandidatesForTopologyPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x423130, 0x1fd000 bytes
    //
    _p41(sdk::unknown_ptr) restrict_soft_park_candidates_for_topology_policy;
    
    // [KiSaveBugCheckRecoveryStatusMultipleBugChecks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x566de8, 0x1fd000 bytes
    //
    _p42(sdk::unknown_ptr) save_bug_check_recovery_status_multiple_bug_checks;
    
    // [KiSaveBugCheckRecoveryStatusPhase0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x566e44, 0x1fd000 bytes
    //
    _p43(sdk::unknown_ptr) save_bug_check_recovery_status_phase0;
    
    // [KiSaveBugCheckRecoveryStatusPhase1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x566ec8, 0x1fd000 bytes
    //
    _p44(sdk::unknown_ptr) save_bug_check_recovery_status_phase1;
    
    // [KiSaveBugCheckRecoveryStatusPhase2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x566f1c, 0x1fd000 bytes
    //
    _p45(sdk::unknown_ptr) save_bug_check_recovery_status_phase2;
    
    // [KiSaveXSaveSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa8b31c, 0x1fd000 bytes
    //
    _p46(sdk::unknown_ptr) save_x_save_support;
    
    // [KiSavedDpcTimeCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc40f40, 0x1fd000 bytes
    //
    _p47(sdk::unknown_ptr) saved_dpc_time_count;
    
    // [KiSavedDpcTimeLimitTicks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc40f44, 0x1fd000 bytes
    //
    _p48(sdk::unknown_ptr) saved_dpc_time_limit_ticks;
    
    // [KiScheduleBugcheckRecovery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x566f74, 0x1fd000 bytes
    //
    _p49(sdk::unknown_ptr) schedule_bugcheck_recovery;
    
    // [KiScheduleBugcheckRecoveryWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x567030, 0x1fd000 bytes
    //
    _p50(sdk::unknown_ptr) schedule_bugcheck_recovery_work_item;
    
    // [KiScheduleThreadToRescheduleContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2be290, 0x1fd000 bytes
    //
    _p51(sdk::unknown_ptr) schedule_thread_to_reschedule_context;
    
    // [KiSchedulerForegroundBoostDecayPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1c318, 0x1fd000 bytes
    //
    _p52(sdk::unknown_ptr) scheduler_foreground_boost_decay_policy;
    
    // [KiSearchForNewThreadOnSubNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x21a7d0, 0x1fd000 bytes
    //
    _p53(sdk::unknown_ptr) search_for_new_thread_on_sub_node;
    
    // [KiSearchForNewThreadsForRescheduleContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2b4d10, 0x1fd000 bytes
    //
    _p54(sdk::unknown_ptr) search_for_new_threads_for_reschedule_context;
    
    // [KiSelectIdealProcessorSetForGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2eeb80, 0x1fd000 bytes
    //
    _p55(sdk::unknown_ptr) select_ideal_processor_set_for_group;
    
    // [KiSelectIdealProcessorSetForNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2eed48, 0x1fd000 bytes
    //
    _p56(sdk::unknown_ptr) select_ideal_processor_set_for_node;
    
    // [KiSelectIdealProcessorSetForProcessGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2eeb1c, 0x1fd000 bytes
    //
    _p57(sdk::unknown_ptr) select_ideal_processor_set_for_process_group;
    
    // [KiSelectIdealProcessorSetsForProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2eea20, 0x1fd000 bytes
    //
    _p58(sdk::unknown_ptr) select_ideal_processor_sets_for_process;
    
    // [KiSetClockIntervalOneShot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x32bee0, 0x1fd000 bytes
    //
    _p59(sdk::unknown_ptr) set_clock_interval_one_shot;
    
    // [KiSetClockTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x32cddc, 0x1fd000 bytes
    //
    _p60(sdk::unknown_ptr) set_clock_timer;
    
    // [KiSetClockTimerKTimerDeadlines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x32be80, 0x1fd000 bytes
    //
    _p61(sdk::unknown_ptr) set_clock_timer_k_timer_deadlines;
    
    // [KiSetControlEnforcement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9997a4, 0x1fe000 bytes
    //
    _p62(sdk::unknown_ptr) set_control_enforcement;
    
    // [KiSetIdealProcessorThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x397b9c, 0x1fd000 bytes
    //
    _p63(sdk::unknown_ptr) set_ideal_processor_thread;
    
    // [KiSetLegacyAffinityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x329644, 0x1fd000 bytes
    //
    _p64(sdk::unknown_ptr) set_legacy_affinity_thread;
    
    // [KiSetNextClockTickDueTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x224930, 0x1fd000 bytes
    //
    _p65(sdk::unknown_ptr) set_next_clock_tick_due_time;
    
    // [KiSetPriorityFloor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x8a3c4, 0x32828 bytes
    //
    _p66(sdk::unknown_ptr) set_priority_floor;
    
    // [KiSetProcessorDpcLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3b1ed8, 0x1fd000 bytes
    //
    _p67(sdk::unknown_ptr) set_processor_dpc_limits;
    
    // [KiSetSystemPriorityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3737c4, 0x1fd000 bytes
    //
    _p68(sdk::unknown_ptr) set_system_priority_thread;
    
    // [KiSetTbFlushTimeStampBusy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1d8a9c, 0x32828 bytes
    //
    _p69(sdk::unknown_ptr) set_tb_flush_time_stamp_busy;
    
    // [KiSetThreadQosLevelUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x422ec2, 0x1fd000 bytes
    //
    _p70(sdk::unknown_ptr) set_thread_qos_level_unsafe;
    
    // [KiSetVpThreadHrTimerActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x33c0b8, 0x1fd000 bytes
    //
    _p71(sdk::unknown_ptr) set_vp_thread_hr_timer_active;
    
    // [KiShouldLogUserModeReturnMismatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9696d8, 0x1fd000 bytes
    //
    _p72(sdk::unknown_ptr) should_log_user_mode_return_mismatch;
    
    // [KiShouldRearmClockTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x33a880, 0x1fd000 bytes
    //
    _p73(sdk::unknown_ptr) should_rearm_clock_timer;
    
    // [KiShouldSoftParkElectionBePerformed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x569cf8, 0x1fd000 bytes
    //
    _p74(sdk::unknown_ptr) should_soft_park_election_be_performed;
    
    // [KiShuffleAssignedSubNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb81afc, 0x1fd000 bytes
    //
    _p75(sdk::unknown_ptr) shuffle_assigned_sub_nodes;
    
    // [KiSoftParkElectionDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x569d60, 0x1fd000 bytes
    //
    _p76(sdk::unknown_ptr) soft_park_election_dpc_routine;
    
    // [KiSplitLargeCaches]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1def4, 0x1fd000 bytes
    //
    _p77(sdk::unknown_ptr) split_large_caches;
    
    // [KiStallBugcheckThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x567098, 0x1fd000 bytes
    //
    _p78(sdk::unknown_ptr) stall_bugcheck_thread;
    
    // [KiStartIdleThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3ad694, 0x1fd000 bytes
    //
    _p79(sdk::unknown_ptr) start_idle_thread;
    
    // [KiStartPrcbThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3ad7a0, 0x1fd000 bytes
    //
    _p80(sdk::unknown_ptr) start_prcb_thread;
    
    // [KiStartPrcbThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3ad630, 0x1fd000 bytes
    //
    _p81(sdk::unknown_ptr) start_prcb_threads;
    
    // [KiStartReadyQueueEnumeratorForRescheduleContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2c7ed0, 0x1fd000 bytes
    //
    _p82(sdk::unknown_ptr) start_ready_queue_enumerator_for_reschedule_context;
    
    // [KiStartRescheduleContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2bde80, 0x1fd000 bytes
    //
    _p83(sdk::unknown_ptr) start_reschedule_context;
    
    // [KiSubNodeConfigBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc41688, 0x1fd000 bytes
    //
    _p84(sdk::unknown_ptr) sub_node_config_block;
    
    // [KiSubNodeCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc41680, 0x1fd000 bytes
    //
    _p85(sdk::unknown_ptr) sub_node_count;
    
    // [KiSubNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc41690, 0x1fd000 bytes
    //
    _p86(sdk::unknown_ptr) sub_nodes;
    
    // [KiSubtractAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x353ea0, 0x1fd000 bytes
    //
    _p87(sdk::unknown_ptr) subtract_affinity_ex;
    
    // [KiSwapStacksAndRetireDpcList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x42fd60, 0x1fd000 bytes
    //
    _p88(sdk::unknown_ptr) swap_stacks_and_retire_dpc_list;
    
    // [KiSwapStacksAndRetireDpcListReturn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x42fd6f, 0x1fd000 bytes
    //
    _p89(sdk::unknown_ptr) swap_stacks_and_retire_dpc_list_return;
    
    // [KiSystemCall32AmdShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe KVASCODE:0x240f40, 0x32828 bytes
    //
    _p90(sdk::unknown_ptr) system_call32_amd_shadow;
    
    // [KiSystemCall32ShadowCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe KVASCODE:0x240b61, 0x32828 bytes
    //
    _p91(sdk::unknown_ptr) system_call32_shadow_common;
    
    // [KiSystemCall64AmdShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe KVASCODE:0x241200, 0x32828 bytes
    //
    _p92(sdk::unknown_ptr) system_call64_amd_shadow;
    
    // [KiSystemCall64ShadowCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe KVASCODE:0x240fed, 0x32828 bytes
    //
    _p93(sdk::unknown_ptr) system_call64_shadow_common;
    
    // [KiSystemCpuPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1dc98, 0x1fd000 bytes
    //
    _p94(sdk::unknown_ptr) system_cpu_partition;
    
    // [KiTallyHeteroSoftParkElectionVotes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x56a580, 0x1fd000 bytes
    //
    _p95(sdk::unknown_ptr) tally_hetero_soft_park_election_votes;
    
    // [KiTestNodeAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x21235c, 0x1fd000 bytes
    //
    _p96(sdk::unknown_ptr) test_node_affinity;
    
    // [KiThreadPolicyToQosMappingTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1c548, 0x1fd000 bytes
    //
    _p97(sdk::unknown_ptr) thread_policy_to_qos_mapping_table;
    
    // [KiTimer2ComputeDueTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xfeec0, 0x32828 bytes
    //
    _p98(sdk::unknown_ptr) timer2_compute_due_time;
    
    // [KiTimer2TypeFlagsToEtwFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1dbc5c, 0x32828 bytes
    //
    _p99(sdk::unknown_ptr) timer2_type_flags_to_etw_flags;
    
    // [KiTpCompletionContextSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x96a684, 0x1fd000 bytes
    //
    _q00(sdk::unknown_ptr) tp_completion_context_size;
    
    // [KiTpExcludedRangeBitMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc40d50, 0x1fd000 bytes
    //
    _q01(sdk::unknown_ptr) tp_excluded_range_bit_map;
    
    // [KiTpExcludedRoutineCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa63f1c, 0x1fd000 bytes
    //
    _q02(sdk::unknown_ptr) tp_excluded_routine_count;
    
    // [KiTraceLogControlCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x86a170, 0x1fd000 bytes
    //
    _q03(sdk::unknown_ptr) trace_log_control_callback;
    
    // [KiTraceLogHeteroRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e47ac, 0x1fd000 bytes
    //
    _q04(sdk::unknown_ptr) trace_log_hetero_rundown;
    
    // [KiTryPopulateLogicalProcessorInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x33c684, 0x1fd000 bytes
    //
    _q05(sdk::unknown_ptr) try_populate_logical_processor_information;
    
    // [KiTryUpgradeIsolationUnitLockHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x558f60, 0x1fd000 bytes
    //
    _q06(sdk::unknown_ptr) try_upgrade_isolation_unit_lock_handle;
    
    // [KiUnassignProcessorNumberFromPrcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x55c42c, 0x1fd000 bytes
    //
    _q07(sdk::unknown_ptr) unassign_processor_number_from_prcb;
    
    // [KiUncommitGroupSubNodeAssignments]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x55c470, 0x1fd000 bytes
    //
    _q08(sdk::unknown_ptr) uncommit_group_sub_node_assignments;
    
    // [KiUnparkCurrentProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x56a778, 0x1fd000 bytes
    //
    _q09(sdk::unknown_ptr) unpark_current_processor;
    
    // [KiUpdateBugcheckRecoveryProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x567358, 0x1fd000 bytes
    //
    _q10(sdk::unknown_ptr) update_bugcheck_recovery_progress;
    
    // [KiUpdatePriorityMatrixQos]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x422eec, 0x1fd000 bytes
    //
    _q11(sdk::unknown_ptr) update_priority_matrix_qos;
    
    // [KiUpdateProcessConcurrencyCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x21ff70, 0x1fd000 bytes
    //
    _q12(sdk::unknown_ptr) update_process_concurrency_count;
    
    // [KiUpdateProcessConcurrencyCounts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x220120, 0x1fd000 bytes
    //
    _q13(sdk::unknown_ptr) update_process_concurrency_counts;
    
    // [KiUpdateProcessorDpcWatchdogConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x557360, 0x1fd000 bytes
    //
    _q14(sdk::unknown_ptr) update_processor_dpc_watchdog_configuration;
    
    // [KiUpdateThreadHgsFeedback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x564298, 0x1fd000 bytes
    //
    _q15(sdk::unknown_ptr) update_thread_hgs_feedback;
    
    // [KiUpdateThreadSchedulingProperties]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x372d04, 0x1fd000 bytes
    //
    _q16(sdk::unknown_ptr) update_thread_scheduling_properties;
    
    // [KiUpdateThreadState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x433c, 0x32828 bytes
    //
    _q17(sdk::unknown_ptr) update_thread_state;
    
    // [KiUpdateVpBackingThreadPriorityOnPriorityQuery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x55a340, 0x1fd000 bytes
    //
    _q18(sdk::unknown_ptr) update_vp_backing_thread_priority_on_priority_query;
    
    // [KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x32d9b8, 0x1fd000 bytes
    //
    _q19(sdk::unknown_ptr) update_vp_backing_thread_priority_on_ready_queue_insertion;
    
    // [KiUserCetAppcompatOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1dda8, 0x1fd000 bytes
    //
    _q20(sdk::unknown_ptr) user_cet_appcompat_options;
    
    // [KiUserCetPl3SspCanonicalizeUpperMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1e184, 0x1fd000 bytes
    //
    _q21(sdk::unknown_ptr) user_cet_pl3_ssp_canonicalize_upper_mask;
    
    // [KiValidateDpcWatchdogConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x557378, 0x1fd000 bytes
    //
    _q22(sdk::unknown_ptr) validate_dpc_watchdog_configuration;
    
    // [KiXSaveAreaLengthFull]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1c188, 0x1fd000 bytes
    //
    _q23(sdk::unknown_ptr) x_save_area_length_full;
    
    // [KiXorAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x45e42c, 0x1fd000 bytes
    //
    _q24(sdk::unknown_ptr) xor_affinity_ex;
    
    // [KiYieldWaitForDebugger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x556c68, 0x1fd000 bytes
    //
    _q25(sdk::unknown_ptr) yield_wait_for_debugger;
    
    // [KiAbCleanupThreadState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x29b5f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x23f4d8, 0x1fe000 bytes
    //
    _q26(sdk::unknown_ptr) ab_cleanup_thread_state;
    
    // [KiAbProcessThreadPriorityModification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x357030, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2dcdf0, 0x1fe000 bytes
    //
    _q27(sdk::unknown_ptr) ab_process_thread_priority_modification;
    
    // [KiCetCapable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xd1c060, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa041, 0x1fe000 bytes
    //
    _q28(sdk::unknown_ptr) cet_capable;
    
    // [KiDeferredReadyThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe .text:0x4b520, 0x32828 bytes
    // ntoskrnl.exe .text:0x214cf0, 0x1fd000 bytes
    //
    _q29(sdk::unknown_ptr) deferred_ready_thread;
    
    // [KiDisableFgBoostDecayRegKeyName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2e80, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x23c0, 0x1fe000 bytes
    //
    _q30(sdk::unknown_ptr) disable_fg_boost_decay_reg_key_name;
    
    // [KiDisableFgBoostDecayRegistryChangeHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50c3b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50c170, 0x1fe000 bytes
    //
    _q31(sdk::unknown_ptr) disable_fg_boost_decay_registry_change_handler;
    
    // [KiDisableFgBoostDecayRegistryChangeIoStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc32040, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31ff0, 0x1fe000 bytes
    //
    _q32(sdk::unknown_ptr) disable_fg_boost_decay_registry_change_io_status;
    
    // [KiDisableFgBoostDecayRegistryChangeWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc32020, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31fc0, 0x1fe000 bytes
    //
    _q33(sdk::unknown_ptr) disable_fg_boost_decay_registry_change_work;
    
    // [KiDisableFgBoostDecayRegistryHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc32010, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc32000, 0x1fe000 bytes
    //
    _q34(sdk::unknown_ptr) disable_fg_boost_decay_registry_handle;
    
    // [KiEpfCompletionIsr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51e370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51e180, 0x1fe000 bytes
    //
    _q35(sdk::unknown_ptr) epf_completion_isr;
    
    // [KiFindBiasedProcessorIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x512fbc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x512dcc, 0x1fe000 bytes
    //
    _q36(sdk::unknown_ptr) find_biased_processor_index;
    
    // [KiFixupControlProtectionUserModeReturnMismatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5677f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebf9c, 0x1fe000 bytes
    //
    _q37(sdk::unknown_ptr) fixup_control_protection_user_mode_return_mismatch;
    
    // [KiForegrounBoostVelocityFlag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa016, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa016, 0x1fe000 bytes
    //
    _q38(sdk::unknown_ptr) foregroun_boost_velocity_flag;
    
    // [KiGetDisableFgBoostDecayRegKeyHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3af8f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ab354, 0x1fe000 bytes
    //
    _q39(sdk::unknown_ptr) get_disable_fg_boost_decay_reg_key_handle;
    
    // [KiGetHeteroThreadQos]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x519538, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x519348, 0x1fe000 bytes
    //
    _q40(sdk::unknown_ptr) get_hetero_thread_qos;
    
    // [KiGetThreadScb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x289bd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x333830, 0x1fe000 bytes
    //
    _q41(sdk::unknown_ptr) get_thread_scb;
    
    // [KiHrIncrement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc4c104, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc4c0e4, 0x1fe000 bytes
    //
    _q42(sdk::unknown_ptr) hr_increment;
    
    // [KiIntersectFeaturesWithLoader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0xa7c5d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99c988, 0x1fe000 bytes
    //
    _q43(sdk::unknown_ptr) intersect_features_with_loader;
    
    // [KiIstStackSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa354, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa354, 0x1fe000 bytes
    //
    _q44(sdk::unknown_ptr) ist_stack_size;
    
    // [KiKernelCetEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CFGRO:0xe01841, 0x1fd000 bytes
    // ntoskrnl.exe CFGRO:0xe01842, 0x1fe000 bytes
    //
    _q45(sdk::unknown_ptr) kernel_cet_enabled;
    
    // [KiLogControlProtectionUserModeReturnMismatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x56794c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebfc0, 0x1fe000 bytes
    //
    _q46(sdk::unknown_ptr) log_control_protection_user_mode_return_mismatch;
    
    // [KiLogUserCetSetContextIpValidationFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5679a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ec060, 0x1fe000 bytes
    //
    _q47(sdk::unknown_ptr) log_user_cet_set_context_ip_validation_failure;
    
    // [KiLogUserCetSetContextIpValidationFailureWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x969630, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c6c00, 0x1fe000 bytes
    //
    _q48(sdk::unknown_ptr) log_user_cet_set_context_ip_validation_failure_worker;
    
    // [KiReconfigureNodeSchedulingInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50c578, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50c338, 0x1fe000 bytes
    //
    _q49(sdk::unknown_ptr) reconfigure_node_scheduling_information;
    
    // [KiRegisterForDisableFgBoostDecayRegistryNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3af870, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ab2d0, 0x1fe000 bytes
    //
    _q50(sdk::unknown_ptr) register_for_disable_fg_boost_decay_registry_notification;
    
    // [KiReleaseThreadLockSafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x242850, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ee520, 0x1fe000 bytes
    //
    _q51(sdk::unknown_ptr) release_thread_lock_safe;
    
    // [KiSearchForNewThreadOnNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x28b168, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3308e8, 0x1fe000 bytes
    //
    _q52(sdk::unknown_ptr) search_for_new_thread_on_node;
    
    // [KiSetLockOwnershipQuantum]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x245924, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30bd0c, 0x1fe000 bytes
    //
    _q53(sdk::unknown_ptr) set_lock_ownership_quantum;
    
    // [KiSetVpThreadSpinLockCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2e0350, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x261600, 0x1fe000 bytes
    //
    _q54(sdk::unknown_ptr) set_vp_thread_spin_lock_count;
    
    // [KiTpBuildExcludedKernelTracepointRangeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b99b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8b8164, 0x1fe000 bytes
    //
    _q55(sdk::unknown_ptr) tp_build_excluded_kernel_tracepoint_range_list;
    
    // [KiTpExcludedRangeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2b1e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2b140, 0x1fe000 bytes
    //
    _q56(sdk::unknown_ptr) tp_excluded_range_list;
    
    // [KiTraceLogNmiCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b86bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8b6e6c, 0x1fe000 bytes
    //
    _q57(sdk::unknown_ptr) trace_log_nmi_callback;
    
    // [KiTryToAcquirePrcbLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50f0e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50eef8, 0x1fe000 bytes
    //
    _q58(sdk::unknown_ptr) try_to_acquire_prcb_lock;
    
    // [KiTryToAcquireThreadLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x289330, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33488c, 0x1fe000 bytes
    //
    _q59(sdk::unknown_ptr) try_to_acquire_thread_lock;
    
    // [KiTryToUpdateVPBackingThreadPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x25f344, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30f954, 0x1fe000 bytes
    //
    _q60(sdk::unknown_ptr) try_to_update_vp_backing_thread_priority;
    
    // [KiUpdateVpBackingRequiresPriorityKickState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51ad10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51ab10, 0x1fe000 bytes
    //
    _q61(sdk::unknown_ptr) update_vp_backing_requires_priority_kick_state;
    
    // [KiWaitSatisfyAny]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2a2e14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2cd4e0, 0x1fe000 bytes
    //
    _q62(sdk::unknown_ptr) wait_satisfy_any;
    
    // [KiAbCrossThreadRelease]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38a0f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x394b64, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38b190, 0x1fe000 bytes
    //
    _q63(sdk::unknown_ptr) ab_cross_thread_release;
    
    // [KiAbForceProcessLockEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38b394, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x393a84, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38c434, 0x1fe000 bytes
    //
    _q64(sdk::unknown_ptr) ab_force_process_lock_entry;
    
    // [KiAbThreadRemoveBoosts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2dfac0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c9140, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x260d50, 0x1fe000 bytes
    //
    _q65(sdk::unknown_ptr) ab_thread_remove_boosts;
    
    // [KiAccessPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITKDBG:0xa0f010, 0x1fe000 bytes
    // ntoskrnl.exe INITKDBG:0xaff480, 0x1fd000 bytes
    // ntoskrnl.exe INITKDBG:0xa0e010, 0x1fe000 bytes
    //
    _q66(sdk::unknown_ptr) access_page;
    
    // [KiAccumulateProcessorCycleStats]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3eafa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2077e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ec5d0, 0x1fe000 bytes
    //
    _q67(sdk::unknown_ptr) accumulate_processor_cycle_stats;
    
    // [KiAcquireSecondaryInterruptConnectLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51317c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d8148, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x512f8c, 0x1fe000 bytes
    //
    _q68(sdk::unknown_ptr) acquire_secondary_interrupt_connect_lock;
    
    // [KiAcquireThreadStateLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5e0f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x302ef0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x26d370, 0x1fe000 bytes
    //
    _q69(sdk::unknown_ptr) acquire_thread_state_lock;
    
    // [KiAddProcessorToGroupDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x139fbc, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b02d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3abd38, 0x1fe000 bytes
    //
    _q70(sdk::unknown_ptr) add_processor_to_group_database;
    
    // [KiAdjustThreadTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5191e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x562a48, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x518ff4, 0x1fe000 bytes
    //
    _q71(sdk::unknown_ptr) adjust_thread_timer;
    
    // [KiAreCodePatchesAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa70ad8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb81640, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6fed4, 0x1fe000 bytes
    //
    _q72(sdk::unknown_ptr) are_code_patches_allowed;
    
    // [KiAssignAdjustableNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bc9e4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa9044c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa8f6cc, 0x1fe000 bytes
    //
    _q73(sdk::unknown_ptr) assign_adjustable_nodes;
    
    // [KiAssignAllNodesToGroup0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x792b94, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa46c44, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa4102c, 0x1fe000 bytes
    //
    _q74(sdk::unknown_ptr) assign_all_nodes_to_group0;
    
    // [KiAssignFixedNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bca88, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa904f4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa8f774, 0x1fe000 bytes
    //
    _q75(sdk::unknown_ptr) assign_fixed_nodes;
    
    // [KiAttemptBugcheckRecovery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51ef94, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x565f0c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51eda4, 0x1fe000 bytes
    //
    _q76(sdk::unknown_ptr) attempt_bugcheck_recovery;
    
    // [KiBlockAndActivateUmsThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dd568, 0x32828 bytes
    // ntoskrnl.exe .text:0x51fed8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51fce8, 0x1fe000 bytes
    //
    _q77(sdk::unknown_ptr) block_and_activate_ums_thread;
    
    // [KiBootProcessorCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb90c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1decc, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb90c, 0x1fe000 bytes
    //
    _q78(sdk::unknown_ptr) boot_processor_count;
    
    // [KiBootProcessorsStarted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb910, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1ded0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb910, 0x1fe000 bytes
    //
    _q79(sdk::unknown_ptr) boot_processors_started;
    
    // [KiBugCheckConvertParameterValueToUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x511edc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55592c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x511cec, 0x1fe000 bytes
    //
    _q80(sdk::unknown_ptr) bug_check_convert_parameter_value_to_unicode_string;
    
    // [KiBugCheckConvertProgressValueToUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x511f9c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5559e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x511dac, 0x1fe000 bytes
    //
    _q81(sdk::unknown_ptr) bug_check_convert_progress_value_to_unicode_string;
    
    // [KiBugCheckOriginalData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc12f60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0dfe0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12fe0, 0x1fe000 bytes
    //
    _q82(sdk::unknown_ptr) bug_check_original_data;
    
    // [KiBugCheckUnicodeToAnsi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x512290, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x555d34, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5120a0, 0x1fe000 bytes
    //
    _q83(sdk::unknown_ptr) bug_check_unicode_to_ansi;
    
    // [KiBugcheckRecoveryFailureReason]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2aeb0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40f2c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2ae60, 0x1fe000 bytes
    //
    _q84(sdk::unknown_ptr) bugcheck_recovery_failure_reason;
    
    // [KiBugcheckRecoveryInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2aec0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40ee0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2ae40, 0x1fe000 bytes
    //
    _q85(sdk::unknown_ptr) bugcheck_recovery_information;
    
    // [KiBugcheckUnloadDebugSymbols]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5122d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x555de4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5120e4, 0x1fe000 bytes
    //
    _q86(sdk::unknown_ptr) bugcheck_unload_debug_symbols;
    
    // [KiCacheAwareScheduling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa160, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c084, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa160, 0x1fe000 bytes
    //
    _q87(sdk::unknown_ptr) cache_aware_scheduling;
    
    // [KiCacheIsoBitmap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb744, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1ddac, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb744, 0x1fe000 bytes
    //
    _q88(sdk::unknown_ptr) cache_iso_bitmap;
    
    // [KiCanSelectSoftParkedProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51fca4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x460e64, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51fab4, 0x1fe000 bytes
    //
    _q89(sdk::unknown_ptr) can_select_soft_parked_processor;
    
    // [KiCaptureUmsThreadContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6567d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bbb70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8ba320, 0x1fe000 bytes
    //
    _q90(sdk::unknown_ptr) capture_ums_thread_context;
    
    // [KiCheckAndApplyCacheIsolation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x519350, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x562b60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x519160, 0x1fe000 bytes
    //
    _q91(sdk::unknown_ptr) check_and_apply_cache_isolation;
    
    // [KiCheckAndRearmForceIdle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26dc90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x384fd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31f47c, 0x1fe000 bytes
    //
    _q92(sdk::unknown_ptr) check_and_rearm_force_idle;
    
    // [KiCheckGroupSchedulingQuantumEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x589a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x30ad50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x276240, 0x1fe000 bytes
    //
    _q93(sdk::unknown_ptr) check_group_scheduling_quantum_end;
    
    // [KiCheckMicrocode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9973d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa765b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x996770, 0x1fe000 bytes
    //
    _q94(sdk::unknown_ptr) check_microcode;
    
    // [KiCheckVpBackingLongSpinWaitHypercall]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38c840, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x398f50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38d8d0, 0x1fe000 bytes
    //
    _q95(sdk::unknown_ptr) check_vp_backing_long_spin_wait_hypercall;
    
    // [KiChooseLowestRankedThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x99564, 0x32828 bytes
    // ntoskrnl.exe .text:0x258a1c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x334be0, 0x1fe000 bytes
    //
    _q96(sdk::unknown_ptr) choose_lowest_ranked_thread;
    
    // [KiClearLastBranchRecordStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50c970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45e290, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50c740, 0x1fe000 bytes
    //
    _q97(sdk::unknown_ptr) clear_last_branch_record_stack;
    
    // [KiClockOwnerOneShotRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc31a28, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41d40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31a48, 0x1fe000 bytes
    //
    _q98(sdk::unknown_ptr) clock_owner_one_shot_request;
    
    // [KiClockOwnerOneShotRequestState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc31ae8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41d48, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31a50, 0x1fe000 bytes
    //
    _q99(sdk::unknown_ptr) clock_owner_one_shot_request_state;
    
    // [KiClockTickSkipTraceIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc31768, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc419e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31640, 0x1fe000 bytes
    //
    _r00(sdk::unknown_ptr) clock_tick_skip_trace_index;
    
    // [KiClockTickSkipTraces]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc31780, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41a00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31940, 0x1fe000 bytes
    //
    _r01(sdk::unknown_ptr) clock_tick_skip_traces;
    
    // [KiClockTimerOneShotReady]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2917c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33c044, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2418bc, 0x1fe000 bytes
    //
    _r02(sdk::unknown_ptr) clock_timer_one_shot_ready;
    
    // [KiCommitNodeAssignment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13a248, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b06dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ac13c, 0x1fe000 bytes
    //
    _r03(sdk::unknown_ptr) commit_node_assignment;
    
    // [KiComputePriorityFloor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x302d70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21ccf8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26d1f0, 0x1fe000 bytes
    //
    _r04(sdk::unknown_ptr) compute_priority_floor;
    
    // [KiConfigureAllSchedulingInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa47540, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2ac4c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa41928, 0x1fe000 bytes
    //
    _r05(sdk::unknown_ptr) configure_all_scheduling_information;
    
    // [KiConfigureNodeSchedulingInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b10c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e54f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3acb20, 0x1fe000 bytes
    //
    _r06(sdk::unknown_ptr) configure_node_scheduling_information;
    
    // [KiControlProtectionFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x403e00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x438e80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x405700, 0x1fe000 bytes
    //
    _r07(sdk::unknown_ptr) control_protection_fault;
    
    // [KiControlProtectionFaultShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0xa12bc0, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae2bc0, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa11bc0, 0x1fe000 bytes
    //
    _r08(sdk::unknown_ptr) control_protection_fault_shadow;
    
    // [KiCopyUchToStagingArea]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x656b14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bbef8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8ba6a8, 0x1fe000 bytes
    //
    _r09(sdk::unknown_ptr) copy_uch_to_staging_area;
    
    // [KiCpu0HardwareFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb5b4, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dbc4, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5b4, 0x1fe000 bytes
    //
    _r10(sdk::unknown_ptr) cpu0_hardware_flags;
    
    // [KiCpuFeatureTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x10260, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x14da0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x101e0, 0x1fe000 bytes
    //
    _r11(sdk::unknown_ptr) cpu_feature_table;
    
    // [KiCpuTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1e680, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x27aa0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e620, 0x1fe000 bytes
    //
    _r12(sdk::unknown_ptr) cpu_table;
    
    // [KiCpuTracingFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc31490, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc422e8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc313d0, 0x1fe000 bytes
    //
    _r13(sdk::unknown_ptr) cpu_tracing_flags;
    
    // [KiDebugTrapIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0xd54660, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f660, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54660, 0x1fe000 bytes
    //
    _r14(sdk::unknown_ptr) debug_trap_index;
    
    // [KiDebugTraps]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CFGRO:0xe01900, 0x1fe000 bytes
    // ntoskrnl.exe CFGRO:0xe01910, 0x1fd000 bytes
    // ntoskrnl.exe CFGRO:0xe01900, 0x1fe000 bytes
    //
    _r15(sdk::unknown_ptr) debug_traps;
    
    // [KiDeferredReadySingleThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2c9b20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2be9d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x24ab50, 0x1fe000 bytes
    //
    _r16(sdk::unknown_ptr) deferred_ready_single_thread;
    
    // [KiDeregisterNmiSxCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50ebb4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5589d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50e9c4, 0x1fe000 bytes
    //
    _r17(sdk::unknown_ptr) deregister_nmi_sx_callback;
    
    // [KiDetectAmdNonArchSsbdSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5158e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55f71c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5156f8, 0x1fe000 bytes
    //
    _r18(sdk::unknown_ptr) detect_amd_non_arch_ssbd_support;
    
    // [KiDetectHardwareSpecControlFeatures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a3f94, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ad178, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a9914, 0x1fe000 bytes
    //
    _r19(sdk::unknown_ptr) detect_hardware_spec_control_features;
    
    // [KiDetectTsx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3af7f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b20f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ab250, 0x1fe000 bytes
    //
    _r20(sdk::unknown_ptr) detect_tsx;
    
    // [KiDetermineRetpolineEnablement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c7d60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e5ac4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c8c30, 0x1fe000 bytes
    //
    _r21(sdk::unknown_ptr) determine_retpoline_enablement;
    
    // [KiDisableTsx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb6ac, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd18, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6ac, 0x1fe000 bytes
    //
    _r22(sdk::unknown_ptr) disable_tsx;
    
    // [KiDispatchInterruptContinue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1626d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3facd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3fc5b0, 0x1fe000 bytes
    //
    _r23(sdk::unknown_ptr) dispatch_interrupt_continue;
    
    // [KiDispatchInterruptCost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa2e0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c3e0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2e0, 0x1fe000 bytes
    //
    _r24(sdk::unknown_ptr) dispatch_interrupt_cost;
    
    // [KiDpcRuntimeHistoryHashTableAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51ce14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b214c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51cc14, 0x1fe000 bytes
    //
    _r25(sdk::unknown_ptr) dpc_runtime_history_hash_table_allocate;
    
    // [KiDpcRuntimeHistoryHashTableDeallocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21b1b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e2170, 0x1fe000 bytes
    //
    _r26(sdk::unknown_ptr) dpc_runtime_history_hash_table_deallocate;
    
    // [KiDPCTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa034, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa03c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa03c, 0x1fe000 bytes
    //
    _r27(sdk::unknown_ptr) dpc_timeout;
    
    // [KiDpcWatchdogProfileArrayLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327180, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50b30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc50b28, 0x1fe000 bytes
    //
    _r28(sdk::unknown_ptr) dpc_watchdog_profile_array_length;
    
    // [KiDpcWatchdogProfileCumulativeDpcThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327188, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50b34, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc50b2c, 0x1fe000 bytes
    //
    _r29(sdk::unknown_ptr) dpc_watchdog_profile_cumulative_dpc_threshold;
    
    // [KiDpcWatchdogProfileSingleDpcThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327184, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50b38, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc50b30, 0x1fe000 bytes
    //
    _r30(sdk::unknown_ptr) dpc_watchdog_profile_single_dpc_threshold;
    
    // [KiDynamicHeteroCpuPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa368, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c3f8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa368, 0x1fe000 bytes
    //
    _r31(sdk::unknown_ptr) dynamic_hetero_cpu_policy;
    
    // [KiDynamicProcessorInitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50c40c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x557bac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50c1cc, 0x1fe000 bytes
    //
    _r32(sdk::unknown_ptr) dynamic_processor_initialization;
    
    // [KiDynamicTickInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb5af, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dbc0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5b0, 0x1fe000 bytes
    //
    _r33(sdk::unknown_ptr) dynamic_tick_initialized;
    
    // [KiDynamicTraceCallouts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfbb60, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e2c0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbb60, 0x1fe000 bytes
    //
    _r34(sdk::unknown_ptr) dynamic_trace_callouts;
    
    // [KiDynamicTraceContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x8bd0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x9a60, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x8c00, 0x1fe000 bytes
    //
    _r35(sdk::unknown_ptr) dynamic_trace_context;
    
    // [KiDynamicTraceEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb524, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db5c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb524, 0x1fe000 bytes
    //
    _r36(sdk::unknown_ptr) dynamic_trace_enabled;
    
    // [KiDynamicTraceMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb600, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dc40, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb600, 0x1fe000 bytes
    //
    _r37(sdk::unknown_ptr) dynamic_trace_mask;
    
    // [KiEfficiencyClassSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb914, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd0c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb914, 0x1fe000 bytes
    //
    _r38(sdk::unknown_ptr) efficiency_class_system;
    
    // [KiEnclsStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50f6c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55c0e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50f4d8, 0x1fe000 bytes
    //
    _r39(sdk::unknown_ptr) encls_status;
    
    // [KiEnterDeferredReadyState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2c3d10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2963e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x244d40, 0x1fe000 bytes
    //
    _r40(sdk::unknown_ptr) enter_deferred_ready_state;
    
    // [KiEnumerateNmiSxCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x37c974, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39c874, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37dcf4, 0x1fe000 bytes
    //
    _r41(sdk::unknown_ptr) enumerate_nmi_sx_callback;
    
    // [KiEpfComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51e25c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x564a40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51e06c, 0x1fe000 bytes
    //
    _r42(sdk::unknown_ptr) epf_complete;
    
    // [KiEpfCompletionDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2af60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc412e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2af20, 0x1fe000 bytes
    //
    _r43(sdk::unknown_ptr) epf_completion_dpc;
    
    // [KiEpfCompletionDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51e350, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x564b30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51e160, 0x1fe000 bytes
    //
    _r44(sdk::unknown_ptr) epf_completion_dpc_routine;
    
    // [KiEpfCompletionQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2af48, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41278, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2aed0, 0x1fe000 bytes
    //
    _r45(sdk::unknown_ptr) epf_completion_queue;
    
    // [KiEpfCompletionQueueSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2af50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc412c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2aec8, 0x1fe000 bytes
    //
    _r46(sdk::unknown_ptr) epf_completion_queue_size;
    
    // [KiEpfCompletionQueueSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf6240, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17c80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf6240, 0x1fe000 bytes
    //
    _r47(sdk::unknown_ptr) epf_completion_queue_spin_lock;
    
    // [KiEpfCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2afc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc412a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2aee0, 0x1fe000 bytes
    //
    _r48(sdk::unknown_ptr) epf_counters;
    
    // [KiEpfDrainCompletionQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51e3b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x564b4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51e1c8, 0x1fe000 bytes
    //
    _r49(sdk::unknown_ptr) epf_drain_completion_queue;
    
    // [KiEpfHandleNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51e440, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x564bd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51e250, 0x1fe000 bytes
    //
    _r50(sdk::unknown_ptr) epf_handle_notification;
    
    // [KiEpfHashTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2afa0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41280, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2af00, 0x1fe000 bytes
    //
    _r51(sdk::unknown_ptr) epf_hash_table;
    
    // [KiEpfStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51e464, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x564bf4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51e274, 0x1fe000 bytes
    //
    _r52(sdk::unknown_ptr) epf_start;
    
    // [KiErrata361Present]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITKDBG:0xa0efa0, 0x1fe000 bytes
    // ntoskrnl.exe INITKDBG:0xaff410, 0x1fd000 bytes
    // ntoskrnl.exe INITKDBG:0xa0dfa0, 0x1fe000 bytes
    //
    _r53(sdk::unknown_ptr) errata361_present;
    
    // [KiErrata704Present]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITKDBG:0xa0efd0, 0x1fe000 bytes
    // ntoskrnl.exe INITKDBG:0xaff440, 0x1fd000 bytes
    // ntoskrnl.exe INITKDBG:0xa0dfd0, 0x1fe000 bytes
    //
    _r54(sdk::unknown_ptr) errata704_present;
    
    // [KiErrataSkx55Present]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITKDBG:0xa0efc0, 0x1fe000 bytes
    // ntoskrnl.exe INITKDBG:0xaff430, 0x1fd000 bytes
    // ntoskrnl.exe INITKDBG:0xa0dfc0, 0x1fe000 bytes
    //
    _r55(sdk::unknown_ptr) errata_skx55_present;
    
    // [KiExceptionDispatchOnExceptionStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f4ce0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x428fd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f65c0, 0x1fe000 bytes
    //
    _r56(sdk::unknown_ptr) exception_dispatch_on_exception_stack;
    
    // [KiExceptionDispatchOnExceptionStackContinue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f4d00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x428ff0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f65e0, 0x1fe000 bytes
    //
    _r57(sdk::unknown_ptr) exception_dispatch_on_exception_stack_continue;
    
    // [KiExceptionStackSwitchHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26450c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x373a30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31474c, 0x1fe000 bytes
    //
    _r58(sdk::unknown_ptr) exception_stack_switch_handler;
    
    // [KiFavoredCoreCycleTimeBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb918, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dee0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb918, 0x1fe000 bytes
    //
    _r59(sdk::unknown_ptr) favored_core_cycle_time_bits;
    
    // [KiFeatureSimulations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2b244, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41484, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b1a4, 0x1fe000 bytes
    //
    _r60(sdk::unknown_ptr) feature_simulations;
    
    // [KiFilterBugCheckInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3d676c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3f613c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3d783c, 0x1fe000 bytes
    //
    _r61(sdk::unknown_ptr) filter_bug_check_info;
    
    // [KiFindRankBiasedIdleSmtSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51940c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x562e10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51921c, 0x1fe000 bytes
    //
    _r62(sdk::unknown_ptr) find_rank_biased_idle_smt_set;
    
    // [KiFindReadyThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9863c, 0x32828 bytes
    // ntoskrnl.exe .text:0x245a40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x337c60, 0x1fe000 bytes
    //
    _r63(sdk::unknown_ptr) find_ready_thread;
    
    // [KiFlushAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38c684, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x397938, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38d714, 0x1fe000 bytes
    //
    _r64(sdk::unknown_ptr) flush_affinity;
    
    // [KiFlushCurrentRsb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe RETPOL:0xa15600, 0x1fe000 bytes
    // ntoskrnl.exe RETPOL:0xae5620, 0x1fd000 bytes
    // ntoskrnl.exe RETPOL:0xa14600, 0x1fe000 bytes
    //
    _r65(sdk::unknown_ptr) flush_current_rsb;
    
    // [KiFlushCurrentTbOnly]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x392e9c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a0520, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393efc, 0x1fe000 bytes
    //
    _r66(sdk::unknown_ptr) flush_current_tb_only;
    
    // [KiFlushIpi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa150, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c194, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa150, 0x1fe000 bytes
    //
    _r67(sdk::unknown_ptr) flush_ipi;
    
    // [KiFlushRsbTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5159e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45ee30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5157f0, 0x1fe000 bytes
    //
    _r68(sdk::unknown_ptr) flush_rsb_target;
    
    // [KiForceIdleActiveLastStartTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc31c08, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41ec0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31b68, 0x1fe000 bytes
    //
    _r69(sdk::unknown_ptr) force_idle_active_last_start_time;
    
    // [KiForceIdleDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb584, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1ded8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb584, 0x1fe000 bytes
    //
    _r70(sdk::unknown_ptr) force_idle_disabled;
    
    // [KiForceIdleGracePeriodInSec]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa15c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c18c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa15c, 0x1fe000 bytes
    //
    _r71(sdk::unknown_ptr) force_idle_grace_period_in_sec;
    
    // [KiForceIdleLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc31f28, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc42240, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31e98, 0x1fe000 bytes
    //
    _r72(sdk::unknown_ptr) force_idle_lock;
    
    // [KiForceIdleParkUnparkDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51d2f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x568850, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51d0f0, 0x1fe000 bytes
    //
    _r73(sdk::unknown_ptr) force_idle_park_unpark_dpc_routine;
    
    // [KiForceIdleParkUnparkProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51d318, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x568878, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51d118, 0x1fe000 bytes
    //
    _r74(sdk::unknown_ptr) force_idle_park_unpark_processor;
    
    // [KiForceIdlePendingDpcCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc31bf8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41ec8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31b70, 0x1fe000 bytes
    //
    _r75(sdk::unknown_ptr) force_idle_pending_dpc_count;
    
    // [KiForceIdleReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc31520, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc4172d, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31461, 0x1fe000 bytes
    //
    _r76(sdk::unknown_ptr) force_idle_reset;
    
    // [KiForceIdleSoftParkRestoreMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc123f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0d000, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12480, 0x1fe000 bytes
    //
    _r77(sdk::unknown_ptr) force_idle_soft_park_restore_mask;
    
    // [KiForceIdleStartDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc31f40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc42200, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31ec0, 0x1fe000 bytes
    //
    _r78(sdk::unknown_ptr) force_idle_start_dpc;
    
    // [KiForceIdleStartDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51d4d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x568940, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51d2d0, 0x1fe000 bytes
    //
    _r79(sdk::unknown_ptr) force_idle_start_dpc_routine;
    
    // [KiForceIdleStartTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc31f20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc42248, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31ea0, 0x1fe000 bytes
    //
    _r80(sdk::unknown_ptr) force_idle_start_time;
    
    // [KiForceIdleState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc31bfc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41ecc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31b78, 0x1fe000 bytes
    //
    _r81(sdk::unknown_ptr) force_idle_state;
    
    // [KiForceIdleStopDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc31c20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41ee0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31b80, 0x1fe000 bytes
    //
    _r82(sdk::unknown_ptr) force_idle_stop_dpc;
    
    // [KiForceIdleStopDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51d5e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x568a00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51d3e0, 0x1fe000 bytes
    //
    _r83(sdk::unknown_ptr) force_idle_stop_dpc_routine;
    
    // [KiForceIdleUnparkRestoreMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc124c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0d110, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12530, 0x1fe000 bytes
    //
    _r84(sdk::unknown_ptr) force_idle_unpark_restore_mask;
    
    // [KiForceIdleUpdateSchedulerParkState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51d6d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x568aa4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51d4d0, 0x1fe000 bytes
    //
    _r85(sdk::unknown_ptr) force_idle_update_scheduler_park_state;
    
    // [KiForceIdleWatchdogResetCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc31c60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41f28, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31bc0, 0x1fe000 bytes
    //
    _r86(sdk::unknown_ptr) force_idle_watchdog_reset_count;
    
    // [KiForegroundBoostTicks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa14c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c190, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa14c, 0x1fe000 bytes
    //
    _r87(sdk::unknown_ptr) foreground_boost_ticks;
    
    // [KiGenericCallDpcWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb7cc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x25bc20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30b7f0, 0x1fe000 bytes
    //
    _r88(sdk::unknown_ptr) generic_call_dpc_worker;
    
    // [KiGetAllocatedXSaveArea]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26bc70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x382a00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31d300, 0x1fe000 bytes
    //
    _r89(sdk::unknown_ptr) get_allocated_x_save_area;
    
    // [KiGetClockIntervalOneShot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2918ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32bf58, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30af98, 0x1fe000 bytes
    //
    _r90(sdk::unknown_ptr) get_clock_interval_one_shot;
    
    // [KiGetDueTimeWithThreadTimerDelay]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51cc90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x565d08, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51ca90, 0x1fe000 bytes
    //
    _r91(sdk::unknown_ptr) get_due_time_with_thread_timer_delay;
    
    // [KiGetHalNumaConversionFactor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa90368, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8154c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8f5e8, 0x1fe000 bytes
    //
    _r92(sdk::unknown_ptr) get_hal_numa_conversion_factor;
    
    // [KiGetIptInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a3c04, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d194c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a9584, 0x1fe000 bytes
    //
    _r93(sdk::unknown_ptr) get_ipt_info;
    
    // [KiGetLdtr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITKDBG:0xa0ef70, 0x1fe000 bytes
    // ntoskrnl.exe INITKDBG:0xaff3e0, 0x1fd000 bytes
    // ntoskrnl.exe INITKDBG:0xa0df70, 0x1fe000 bytes
    //
    _r94(sdk::unknown_ptr) get_ldtr;
    
    // [KiGetNtDdiVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50eda8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45e364, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50ebb8, 0x1fe000 bytes
    //
    _r95(sdk::unknown_ptr) get_nt_ddi_version;
    
    // [KiGetPastDueIRTimerInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51dc8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x569034, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51da94, 0x1fe000 bytes
    //
    _r96(sdk::unknown_ptr) get_past_due_ir_timer_info;
    
    // [KiGetProcessorSignature]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x997dd8, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa75724, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9974e4, 0x1fe000 bytes
    //
    _r97(sdk::unknown_ptr) get_processor_signature;
    
    // [KiGetRecoveryInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51f2f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x566aa4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51f100, 0x1fe000 bytes
    //
    _r98(sdk::unknown_ptr) get_recovery_information;
    
    // [KiGetSavedIptState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x514420, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55e3b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x514230, 0x1fe000 bytes
    //
    _r99(sdk::unknown_ptr) get_saved_ipt_state;
    
    // [KiGetSavedSupervisorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5144d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55e480, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5142e0, 0x1fe000 bytes
    //
    _s00(sdk::unknown_ptr) get_saved_supervisor_state;
    
    // [KiGetSs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITKDBG:0xa0ef80, 0x1fe000 bytes
    // ntoskrnl.exe INITKDBG:0xaff3f0, 0x1fd000 bytes
    // ntoskrnl.exe INITKDBG:0xa0df80, 0x1fe000 bytes
    //
    _s01(sdk::unknown_ptr) get_ss;
    
    // [KiGetSystemServiceTraceTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b9fa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9699b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b8750, 0x1fe000 bytes
    //
    _s02(sdk::unknown_ptr) get_system_service_trace_table;
    
    // [KiGetTbLeafInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa90b48, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb81ed8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8fdc8, 0x1fe000 bytes
    //
    _s03(sdk::unknown_ptr) get_tb_leaf_info;
    
    // [KiGetTr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITKDBG:0xa0ef90, 0x1fe000 bytes
    // ntoskrnl.exe INITKDBG:0xaff400, 0x1fd000 bytes
    // ntoskrnl.exe INITKDBG:0xa0df90, 0x1fe000 bytes
    //
    _s04(sdk::unknown_ptr) get_tr;
    
    // [KiGetTrapFrameRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51e0b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x569290, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51dec0, 0x1fe000 bytes
    //
    _s05(sdk::unknown_ptr) get_trap_frame_register;
    
    // [KiHandleMcheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50c990, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x557f30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50c760, 0x1fe000 bytes
    //
    _s06(sdk::unknown_ptr) handle_mcheck;
    
    // [KiHeteroSchedulerOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb58c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dbd0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb58c, 0x1fe000 bytes
    //
    _s07(sdk::unknown_ptr) hetero_scheduler_options;
    
    // [KiHrTimerActiveCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc31c00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41e30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31b74, 0x1fe000 bytes
    //
    _s08(sdk::unknown_ptr) hr_timer_active_count;
    
    // [KiHvEnlightenedGuestPriorityKick]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x300c50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b51f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x337460, 0x1fe000 bytes
    //
    _s09(sdk::unknown_ptr) hv_enlightened_guest_priority_kick;
    
    // [KiHvInterruptDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f9310, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42e250, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fabf0, 0x1fe000 bytes
    //
    _s10(sdk::unknown_ptr) hv_interrupt_dispatch;
    
    // [KiHvInterruptSubDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f9830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42e7e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fb110, 0x1fe000 bytes
    //
    _s11(sdk::unknown_ptr) hv_interrupt_sub_dispatch;
    
    // [KiImplementedPhysicalBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb624, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dc84, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb624, 0x1fe000 bytes
    //
    _s12(sdk::unknown_ptr) implemented_physical_bits;
    
    // [KiInSwapKernelStacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x27db88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe84c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3298c8, 0x1fe000 bytes
    //
    _s13(sdk::unknown_ptr) in_swap_kernel_stacks;
    
    // [KiInitDynamicTraceSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa45e84, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb60c00, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4026c, 0x1fe000 bytes
    //
    _s14(sdk::unknown_ptr) init_dynamic_trace_support;
    
    // [KiInitIptState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51452c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55e4dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51433c, 0x1fe000 bytes
    //
    _s15(sdk::unknown_ptr) init_ipt_state;
    
    // [KiInitializeForceIdle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x77cb0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x832510, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78181c, 0x1fe000 bytes
    //
    _s16(sdk::unknown_ptr) initialize_force_idle;
    
    // [KiInitializeIdleThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d58ec, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x999ef0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0x9995f8, 0x1fe000 bytes
    //
    _s17(sdk::unknown_ptr) initialize_idle_thread;
    
    // [KiInitializeReservedCpuSets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa458b0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5e870, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3fc98, 0x1fe000 bytes
    //
    _s18(sdk::unknown_ptr) initialize_reserved_cpu_sets;
    
    // [KiInitializeTimer2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x208c9c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f8f9c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c06ec, 0x1fe000 bytes
    //
    _s19(sdk::unknown_ptr) initialize_timer2;
    
    // [KiInitializeVelocity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa4505c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5e1b0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3f444, 0x1fe000 bytes
    //
    _s20(sdk::unknown_ptr) initialize_velocity;
    
    // [KiInsertDeferredReadyList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2459b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x295690, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x337bd0, 0x1fe000 bytes
    //
    _s21(sdk::unknown_ptr) insert_deferred_ready_list;
    
    // [KiInsertNewDpcRuntime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51ce38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3723d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51cc38, 0x1fe000 bytes
    //
    _s22(sdk::unknown_ptr) insert_new_dpc_runtime;
    
    // [KiInsertSecondarySignalList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d8440, 0x32828 bytes
    // ntoskrnl.exe .text:0x513628, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x513438, 0x1fe000 bytes
    //
    _s23(sdk::unknown_ptr) insert_secondary_signal_list;
    
    // [KiIntSteerLoadCompare]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc52e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x2518f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ff9e0, 0x1fe000 bytes
    //
    _s24(sdk::unknown_ptr) int_steer_load_compare;
    
    // [KiIntSteerMaskCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3088b0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b0c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2af90, 0x1fe000 bytes
    //
    _s25(sdk::unknown_ptr) int_steer_mask_count;
    
    // [KiIntSteerUpdateDeviceInterruptMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x260de8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3882bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31104c, 0x1fe000 bytes
    //
    _s26(sdk::unknown_ptr) int_steer_update_device_interrupt_mask;
    
    // [KiInterruptSteeringDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab504, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb928, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb928, 0x1fe000 bytes
    //
    _s27(sdk::unknown_ptr) interrupt_steering_disabled;
    
    // [KiInvokeBugCheckAddTriageDumpDataCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51283c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x556650, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51264c, 0x1fe000 bytes
    //
    _s28(sdk::unknown_ptr) invoke_bug_check_add_triage_dump_data_callbacks;
    
    // [KiIpiEnlightenedGuestPriorityKick]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23c7e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b5850, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x359594, 0x1fe000 bytes
    //
    _s29(sdk::unknown_ptr) ipi_enlightened_guest_priority_kick;
    
    // [KiIpiUpdateExtendedSupervisorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5145c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55e570, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5143d0, 0x1fe000 bytes
    //
    _s30(sdk::unknown_ptr) ipi_update_extended_supervisor_state;
    
    // [KiIptMsrMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb4b4, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dad4, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4b4, 0x1fe000 bytes
    //
    _s31(sdk::unknown_ptr) ipt_msr_mask;
    
    // [KiIptSaveAreaLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb580, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db84, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb580, 0x1fe000 bytes
    //
    _s32(sdk::unknown_ptr) ipt_save_area_length;
    
    // [KiIrqlFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb658, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dc74, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb658, 0x1fe000 bytes
    //
    _s33(sdk::unknown_ptr) irql_flags;
    
    // [KiIsAddressRangeValid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c4dfc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dccd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c5b6c, 0x1fe000 bytes
    //
    _s34(sdk::unknown_ptr) is_address_range_valid;
    
    // [KiIsFlushEntire]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x513cdc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45ea4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x513aec, 0x1fe000 bytes
    //
    _s35(sdk::unknown_ptr) is_flush_entire;
    
    // [KiIsIntelPebsSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b0e88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ddcd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ac8e8, 0x1fe000 bytes
    //
    _s36(sdk::unknown_ptr) is_intel_pebs_supported;
    
    // [KiIsKernelCfgActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa70f0c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb60fc8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa701fc, 0x1fe000 bytes
    //
    _s37(sdk::unknown_ptr) is_kernel_cfg_active;
    
    // [KiIsPgiKernel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c7dfc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e5b64, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c8ccc, 0x1fe000 bytes
    //
    _s38(sdk::unknown_ptr) is_pgi_kernel;
    
    // [KiIsPrimaryPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dd5bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x51ff34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51fd44, 0x1fe000 bytes
    //
    _s39(sdk::unknown_ptr) is_primary_present;
    
    // [KiIsProcessTerminationRequested]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20d648, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36eef4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30d6a0, 0x1fe000 bytes
    //
    _s40(sdk::unknown_ptr) is_process_termination_requested;
    
    // [KiIsQosGroupingActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3947d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cec2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x395834, 0x1fe000 bytes
    //
    _s41(sdk::unknown_ptr) is_qos_grouping_active;
    
    // [KiIsTraceMemoryAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x24c9f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35ace0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f65f0, 0x1fe000 bytes
    //
    _s42(sdk::unknown_ptr) is_trace_memory_access;
    
    // [KiKernelIstMceExitMceTailMceBegin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0xa13d3a, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae3d3a, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa12d3a, 0x1fe000 bytes
    //
    _s43(sdk::unknown_ptr) kernel_ist_mce_exit_mce_tail_mce_begin;
    
    // [KiKernelIstMceExitMceTailMceEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0xa13d50, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae3d50, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa12d50, 0x1fe000 bytes
    //
    _s44(sdk::unknown_ptr) kernel_ist_mce_exit_mce_tail_mce_end;
    
    // [KiKernelIstMceExitMceTailNmiBegin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0xa13d81, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae3d81, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa12d81, 0x1fe000 bytes
    //
    _s45(sdk::unknown_ptr) kernel_ist_mce_exit_mce_tail_nmi_begin;
    
    // [KiKernelIstMceExitMceTailNmiEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0xa13d97, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae3d97, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa12d97, 0x1fe000 bytes
    //
    _s46(sdk::unknown_ptr) kernel_ist_mce_exit_mce_tail_nmi_end;
    
    // [KiLastPseudoHrTimerExpiration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc4c368, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64448, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c348, 0x1fe000 bytes
    //
    _s47(sdk::unknown_ptr) last_pseudo_hr_timer_expiration;
    
    // [KiLeaveGuardedRegionUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x112c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2dfb50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x260de0, 0x1fe000 bytes
    //
    _s48(sdk::unknown_ptr) leave_guarded_region_unsafe;
    
    // [KiMceDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITKDBG:0xa09ea0, 0x1fe000 bytes
    // ntoskrnl.exe INITKDBG:0xaf9550, 0x1fd000 bytes
    // ntoskrnl.exe INITKDBG:0xa08ea0, 0x1fe000 bytes
    //
    _s49(sdk::unknown_ptr) mce_dispatch;
    
    // [KiMceLinkage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITKDBG:0xa0f2a0, 0x1fe000 bytes
    // ntoskrnl.exe INITKDBG:0xaff710, 0x1fd000 bytes
    // ntoskrnl.exe INITKDBG:0xa0e2a0, 0x1fe000 bytes
    //
    _s50(sdk::unknown_ptr) mce_linkage;
    
    // [KiMceThunk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITKDBG:0xa0f190, 0x1fe000 bytes
    // ntoskrnl.exe INITKDBG:0xaff600, 0x1fd000 bytes
    // ntoskrnl.exe INITKDBG:0xa0e190, 0x1fe000 bytes
    //
    _s51(sdk::unknown_ptr) mce_thunk;
    
    // [KiMcheckExit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f4d80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x429070, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f6660, 0x1fe000 bytes
    //
    _s52(sdk::unknown_ptr) mcheck_exit;
    
    // [KiMcheckExitMceTailMceBegin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f4d97, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x429087, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f6677, 0x1fe000 bytes
    //
    _s53(sdk::unknown_ptr) mcheck_exit_mce_tail_mce_begin;
    
    // [KiMcheckExitMceTailMceEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f4dad, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42909d, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f668d, 0x1fe000 bytes
    //
    _s54(sdk::unknown_ptr) mcheck_exit_mce_tail_mce_end;
    
    // [KiMcheckExitMceTailNmiBegin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f4dde, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4290ce, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f66be, 0x1fe000 bytes
    //
    _s55(sdk::unknown_ptr) mcheck_exit_mce_tail_nmi_begin;
    
    // [KiMcheckExitMceTailNmiEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f4df4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4290e4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f66d4, 0x1fe000 bytes
    //
    _s56(sdk::unknown_ptr) mcheck_exit_mce_tail_nmi_end;
    
    // [KiMcheckFastForward]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5208d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3708b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5206e0, 0x1fe000 bytes
    //
    _s57(sdk::unknown_ptr) mcheck_fast_forward;
    
    // [KiMcheckNmiBlocking]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2ae68, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40820, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2ae30, 0x1fe000 bytes
    //
    _s58(sdk::unknown_ptr) mcheck_nmi_blocking;
    
    // [KiMcheckRecursive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2ae80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40840, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2ae00, 0x1fe000 bytes
    //
    _s59(sdk::unknown_ptr) mcheck_recursive;
    
    // [KiMcheckStiBlocking]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2ae60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40870, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2ade0, 0x1fe000 bytes
    //
    _s60(sdk::unknown_ptr) mcheck_sti_blocking;
    
    // [KiMicrocodeTracker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfbc50, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e490, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbc50, 0x1fe000 bytes
    //
    _s61(sdk::unknown_ptr) microcode_tracker;
    
    // [KiMicrocodeTrackerEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb734, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dda4, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb734, 0x1fe000 bytes
    //
    _s62(sdk::unknown_ptr) microcode_tracker_enabled;
    
    // [KiMsrFeatureTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x61a0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x6c58, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x6190, 0x1fe000 bytes
    //
    _s63(sdk::unknown_ptr) msr_feature_table;
    
    // [KiMsr_IA32_ARCH_CAPABILITIES]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x211e0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x27f40, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x21140, 0x1fe000 bytes
    //
    _s64(sdk::unknown_ptr) msr_ia32_arch_capabilities;
    
    // [KiNumaQueryNodeCapacity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc00ea8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc02558, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc00ea0, 0x1fe000 bytes
    //
    _s65(sdk::unknown_ptr) numa_query_node_capacity;
    
    // [KiNumaQueryNodeDistance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc00ea0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc02550, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc00ea8, 0x1fe000 bytes
    //
    _s66(sdk::unknown_ptr) numa_query_node_distance;
    
    // [KiNumaQueryProximityId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc31460, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc416a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc313a0, 0x1fe000 bytes
    //
    _s67(sdk::unknown_ptr) numa_query_proximity_id;
    
    // [KiNumaQueryProximityNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc31458, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc416a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31390, 0x1fe000 bytes
    //
    _s68(sdk::unknown_ptr) numa_query_proximity_node;
    
    // [KiOpFetchNextByte]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2848a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x210cbc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32b748, 0x1fe000 bytes
    //
    _s69(sdk::unknown_ptr) op_fetch_next_byte;
    
    // [KiOpPreprocessSecureFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50ee50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x558c94, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50ec60, 0x1fe000 bytes
    //
    _s70(sdk::unknown_ptr) op_preprocess_secure_fault;
    
    // [KiOp_SLDTSTRSMSW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51ee10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56bc60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51ec20, 0x1fe000 bytes
    //
    _s71(sdk::unknown_ptr) op_sldtstrsmsw;
    
    // [KiParkUmsThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dd6a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x520130, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51ff40, 0x1fe000 bytes
    //
    _s72(sdk::unknown_ptr) park_ums_thread;
    
    // [KiPendingVirtualHeteroRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf9ce4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17c50, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9ce4, 0x1fe000 bytes
    //
    _s73(sdk::unknown_ptr) pending_virtual_hetero_request;
    
    // [KiPerfIsoEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb618, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dc70, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb618, 0x1fe000 bytes
    //
    _s74(sdk::unknown_ptr) perf_iso_enabled;
    
    // [KiPrcbInGroupAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x98a44, 0x32828 bytes
    // ntoskrnl.exe .text:0x28d7ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x334838, 0x1fe000 bytes
    //
    _s75(sdk::unknown_ptr) prcb_in_group_affinity;
    
    // [KiPrepareFlushCurrentAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x513d14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55dae4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x513b24, 0x1fe000 bytes
    //
    _s76(sdk::unknown_ptr) prepare_flush_current_affinity;
    
    // [KiPreprocessFlushTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x321340, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b4180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x293880, 0x1fe000 bytes
    //
    _s77(sdk::unknown_ptr) preprocess_flush_tb;
    
    // [KiProcessControlProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50ca70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x567aa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50c790, 0x1fe000 bytes
    //
    _s78(sdk::unknown_ptr) process_control_protection;
    
    // [KiProcessPolicyToQosMappingTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa3a0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c520, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa3a0, 0x1fe000 bytes
    //
    _s79(sdk::unknown_ptr) process_policy_to_qos_mapping_table;
    
    // [KiPublishProcessorFeatures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa3c84c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb60488, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3cf08, 0x1fe000 bytes
    //
    _s80(sdk::unknown_ptr) publish_processor_features;
    
    // [KiQosHysteresisTimerPeriod]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb73c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dc18, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb73c, 0x1fe000 bytes
    //
    _s81(sdk::unknown_ptr) qos_hysteresis_timer_period;
    
    // [KiQueryIptSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9aca60, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8b2a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9ab9d0, 0x1fe000 bytes
    //
    _s82(sdk::unknown_ptr) query_ipt_support;
    
    // [KiQueryProximityNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50fc50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55c410, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50fa60, 0x1fe000 bytes
    //
    _s83(sdk::unknown_ptr) query_proximity_node;
    
    // [KiReadGuestSchedulerAssistPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x519e64, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x559dac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x519c68, 0x1fe000 bytes
    //
    _s84(sdk::unknown_ptr) read_guest_scheduler_assist_priority;
    
    // [KiReadyThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeb72c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c3bd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x244c00, 0x1fe000 bytes
    //
    _s85(sdk::unknown_ptr) ready_thread;
    
    // [KiRebalanceMinPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa2c0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c314, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2c0, 0x1fe000 bytes
    //
    _s86(sdk::unknown_ptr) rebalance_min_priority;
    
    // [KiRecordRecoveryFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51f36c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x566db0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51f17c, 0x1fe000 bytes
    //
    _s87(sdk::unknown_ptr) record_recovery_failure;
    
    // [KiRecoveryCallbackCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2aeb4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40e30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2ae68, 0x1fe000 bytes
    //
    _s88(sdk::unknown_ptr) recovery_callback_count;
    
    // [KiRecoveryInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2aeac, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40e2c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2ae64, 0x1fe000 bytes
    //
    _s89(sdk::unknown_ptr) recovery_in_progress;
    
    // [KiRegisterNmiSxCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50eef4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x558d68, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50ed04, 0x1fe000 bytes
    //
    _s90(sdk::unknown_ptr) register_nmi_sx_callback;
    
    // [KiReleaseThreadStateLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x290200, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56328c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3362a0, 0x1fe000 bytes
    //
    _s91(sdk::unknown_ptr) release_thread_state_lock;
    
    // [KiRemoveProcessorFromGroupDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d5e78, 0x32828 bytes
    // ntoskrnl.exe .text:0x50fc6c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50fa7c, 0x1fe000 bytes
    //
    _s92(sdk::unknown_ptr) remove_processor_from_group_database;
    
    // [KiRemoveSystemWorkPriorityKick]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3eafe4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x422bc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ec614, 0x1fe000 bytes
    //
    _s93(sdk::unknown_ptr) remove_system_work_priority_kick;
    
    // [KiReservedCpuSets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfcbd0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1f480, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfcbd0, 0x1fe000 bytes
    //
    _s94(sdk::unknown_ptr) reserved_cpu_sets;
    
    // [KiResetForceIdle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51d840, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x568c2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51d640, 0x1fe000 bytes
    //
    _s95(sdk::unknown_ptr) reset_force_idle;
    
    // [KiResetProcessorTraceBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50efe0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x558e50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50edf0, 0x1fe000 bytes
    //
    _s96(sdk::unknown_ptr) reset_processor_trace_buffer;
    
    // [KiRestoreClockTickRate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x291878, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33a740, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x241808, 0x1fe000 bytes
    //
    _s97(sdk::unknown_ptr) restore_clock_tick_rate;
    
    // [KiRestoreIptState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x514600, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55e5b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x514410, 0x1fe000 bytes
    //
    _s98(sdk::unknown_ptr) restore_ipt_state;
    
    // [KiRestoreThreadIptState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5146f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55e6b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x514500, 0x1fe000 bytes
    //
    _s99(sdk::unknown_ptr) restore_thread_ipt_state;
    
    // [KiRestoreUchFromUmsContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x656c5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bc048, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8ba7f8, 0x1fe000 bytes
    //
    _t00(sdk::unknown_ptr) restore_uch_from_ums_context;
    
    // [KiResumeUmsThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x655524, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ba890, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8b9040, 0x1fe000 bytes
    //
    _t01(sdk::unknown_ptr) resume_ums_thread;
    
    // [KiRspInIstStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x512e48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x370a50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x512c58, 0x1fe000 bytes
    //
    _t02(sdk::unknown_ptr) rsp_in_ist_stack;
    
    // [KiSaveIptState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x514728, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55e6e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x514538, 0x1fe000 bytes
    //
    _t03(sdk::unknown_ptr) save_ipt_state;
    
    // [KiSaveThreadIptState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x514830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55e7e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x514640, 0x1fe000 bytes
    //
    _t04(sdk::unknown_ptr) save_thread_ipt_state;
    
    // [KiSchedulerAssistThreadFlagEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb6a4, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd14, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6a4, 0x1fe000 bytes
    //
    _t05(sdk::unknown_ptr) scheduler_assist_thread_flag_enabled;
    
    // [KiSchedulerAssistThreadFlagOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb740, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1ddb0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb740, 0x1fe000 bytes
    //
    _t06(sdk::unknown_ptr) scheduler_assist_thread_flag_override;
    
    // [KiSelectIdealProcessorForProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x209b3c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ee89c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33801c, 0x1fe000 bytes
    //
    _t07(sdk::unknown_ptr) select_ideal_processor_for_process;
    
    // [KiSelectLowestRankedThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9951c, 0x32828 bytes
    // ntoskrnl.exe .text:0x28b400, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x330b80, 0x1fe000 bytes
    //
    _t08(sdk::unknown_ptr) select_lowest_ranked_thread;
    
    // [KiSelectNextThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x99400, 0x32828 bytes
    // ntoskrnl.exe .text:0x28b2e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x330a68, 0x1fe000 bytes
    //
    _t09(sdk::unknown_ptr) select_next_thread;
    
    // [KiSelectReadyThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50b50, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e5270, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x266580, 0x1fe000 bytes
    //
    _t10(sdk::unknown_ptr) select_ready_thread;
    
    // [KiSelectReadyThreadEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x52930, 0x32828 bytes
    // ntoskrnl.exe .text:0x300c80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x269ec0, 0x1fe000 bytes
    //
    _t11(sdk::unknown_ptr) select_ready_thread_ex;
    
    // [KiSelectThreadFromScbQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd4820, 0x32828 bytes
    // ntoskrnl.exe .text:0x51db14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51d91c, 0x1fe000 bytes
    //
    _t12(sdk::unknown_ptr) select_thread_from_scb_queue;
    
    // [KiSelectThreadFromSchedulingGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x99db0, 0x32828 bytes
    // ntoskrnl.exe .text:0x290940, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3364b0, 0x1fe000 bytes
    //
    _t13(sdk::unknown_ptr) select_thread_from_scheduling_group;
    
    // [KiSendHeteroRescheduleIntRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51a14c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x46043e, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x519f50, 0x1fe000 bytes
    //
    _t14(sdk::unknown_ptr) send_hetero_reschedule_int_request;
    
    // [KiSendHeteroRescheduleIntRequestHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51a20c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x46051c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51a010, 0x1fe000 bytes
    //
    _t15(sdk::unknown_ptr) send_hetero_reschedule_int_request_helper;
    
    // [KiSendSoftwareInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x252958, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e6c3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x302828, 0x1fe000 bytes
    //
    _t16(sdk::unknown_ptr) send_software_interrupt;
    
    // [KiServicesTab]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x985b10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa6a240, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9843f0, 0x1fe000 bytes
    //
    _t17(sdk::unknown_ptr) services_tab;
    
    // [KiSetDpcRequestFlag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2528f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e828c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3027c4, 0x1fe000 bytes
    //
    _t18(sdk::unknown_ptr) set_dpc_request_flag;
    
    // [KiSetForceIdleState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51d9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x568d74, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51d7c0, 0x1fe000 bytes
    //
    _t19(sdk::unknown_ptr) set_force_idle_state;
    
    // [KiSetHardwareSpeculationControlFeatures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a3e90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3acd2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a9810, 0x1fe000 bytes
    //
    _t20(sdk::unknown_ptr) set_hardware_speculation_control_features;
    
    // [KiSetProcessorSignature]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x99a450, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa780c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x999c08, 0x1fe000 bytes
    //
    _t21(sdk::unknown_ptr) set_processor_signature;
    
    // [KiSetSchedulerAssistPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51ab70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x422d48, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51a974, 0x1fe000 bytes
    //
    _t22(sdk::unknown_ptr) set_scheduler_assist_priority;
    
    // [KiSetSpecCtrlNmi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f7b60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42c840, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f9440, 0x1fe000 bytes
    //
    _t23(sdk::unknown_ptr) set_spec_ctrl_nmi;
    
    // [KiSetSwitchingNpxState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2b86f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21329c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x355364, 0x1fe000 bytes
    //
    _t24(sdk::unknown_ptr) set_switching_npx_state;
    
    // [KiSetVirtualHeteroClockIntervalRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51abb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x460930, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51a9b4, 0x1fe000 bytes
    //
    _t25(sdk::unknown_ptr) set_virtual_hetero_clock_interval_request;
    
    // [KiSetVirtualHeteroClockIntervalRequestDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc31ee0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc421a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31e40, 0x1fe000 bytes
    //
    _t26(sdk::unknown_ptr) set_virtual_hetero_clock_interval_request_dpc;
    
    // [KiSetVirtualHeteroClockIntervalRequestDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51acf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x460a50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51aaf0, 0x1fe000 bytes
    //
    _t27(sdk::unknown_ptr) set_virtual_hetero_clock_interval_request_dpc_routine;
    
    // [KiShuffleAssignedNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bcc88, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa90708, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa8f988, 0x1fe000 bytes
    //
    _t28(sdk::unknown_ptr) shuffle_assigned_nodes;
    
    // [KiSpeculationFeatures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb4c8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dab0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4c8, 0x1fe000 bytes
    //
    _t29(sdk::unknown_ptr) speculation_features;
    
    // [KiSsbdBit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc0f328, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc099e8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f378, 0x1fe000 bytes
    //
    _t30(sdk::unknown_ptr) ssbd_bit;
    
    // [KiSsbdMsr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc0f324, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc099f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f380, 0x1fe000 bytes
    //
    _t31(sdk::unknown_ptr) ssbd_msr;
    
    // [KiStackProtectNotifyEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc31ec0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc42180, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31e80, 0x1fe000 bytes
    //
    _t32(sdk::unknown_ptr) stack_protect_notify_event;
    
    // [KiStartSavingSupervisorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9acac0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8b350, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9aba30, 0x1fe000 bytes
    //
    _t33(sdk::unknown_ptr) start_saving_supervisor_state;
    
    // [KiSupervisorStateExtensionHost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2b298, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc414d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b1f0, 0x1fe000 bytes
    //
    _t34(sdk::unknown_ptr) supervisor_state_extension_host;
    
    // [KiSupervisorXStateFeaturesLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2b290, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc414d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b1e8, 0x1fe000 bytes
    //
    _t35(sdk::unknown_ptr) supervisor_x_state_features_lock;
    
    // [KiSuspectPoolTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc13c0c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0ec88, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc13c70, 0x1fe000 bytes
    //
    _t36(sdk::unknown_ptr) suspect_pool_tag;
    
    // [KiSuspendUmsThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x655578, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ba8e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8b9098, 0x1fe000 bytes
    //
    _t37(sdk::unknown_ptr) suspend_ums_thread;
    
    // [KiSwapProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa0380, 0x32828 bytes
    // ntoskrnl.exe .text:0x2dd250, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x25e4c0, 0x1fe000 bytes
    //
    _t38(sdk::unknown_ptr) swap_process;
    
    // [KiSwapToUmsThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6555c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ba940, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8b90f0, 0x1fe000 bytes
    //
    _t39(sdk::unknown_ptr) swap_to_ums_thread;
    
    // [KiSwapToUmsThreadContinue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ddad0, 0x32828 bytes
    // ntoskrnl.exe .text:0x520730, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520540, 0x1fe000 bytes
    //
    _t40(sdk::unknown_ptr) swap_to_ums_thread_continue;
    
    // [KiSynchronizeSecurityDomainTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x271160, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x384e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x322900, 0x1fe000 bytes
    //
    _t41(sdk::unknown_ptr) synchronize_security_domain_target;
    
    // [KiSynchronizeStibpPairing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5159f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45ee46, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x515808, 0x1fe000 bytes
    //
    _t42(sdk::unknown_ptr) synchronize_stibp_pairing;
    
    // [KiSynchronizeStibpPairingTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x515b80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45efd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x515990, 0x1fe000 bytes
    //
    _t43(sdk::unknown_ptr) synchronize_stibp_pairing_target;
    
    // [KiSystemServiceTraceCallbackCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2c7c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53560, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7c8, 0x1fe000 bytes
    //
    _t44(sdk::unknown_ptr) system_service_trace_callback_count;
    
    // [KiSystemServiceTraceCallbackLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2cc08, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53958, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cc08, 0x1fe000 bytes
    //
    _t45(sdk::unknown_ptr) system_service_trace_callback_lock;
    
    // [KiSystemServiceTraceCallbackTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2ca58, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd537f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca58, 0x1fe000 bytes
    //
    _t46(sdk::unknown_ptr) system_service_trace_callback_table;
    
    // [KiSystemServiceTraceCallbacksActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2c770, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd534c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c770, 0x1fe000 bytes
    //
    _t47(sdk::unknown_ptr) system_service_trace_callbacks_active;
    
    // [KiSystemServiceTraceTableCompareFunction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8ba0f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x969af4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b88a0, 0x1fe000 bytes
    //
    _t48(sdk::unknown_ptr) system_service_trace_table_compare_function;
    
    // [KiTimelineBitmapTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2af44, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40d84, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2aec4, 0x1fe000 bytes
    //
    _t49(sdk::unknown_ptr) timeline_bitmap_time;
    
    // [KiTpAccessMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe TRACESUP:0xa10008, 0x1fe000 bytes
    // ntoskrnl.exe TRACESUP:0xadf008, 0x1fd000 bytes
    // ntoskrnl.exe TRACESUP:0xa0f008, 0x1fe000 bytes
    //
    _t50(sdk::unknown_ptr) tp_access_memory;
    
    // [KiTpActiveTrapsCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2b1c4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40d70, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b150, 0x1fe000 bytes
    //
    _t51(sdk::unknown_ptr) tp_active_traps_count;
    
    // [KiTpCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe TRACESUP:0xa10130, 0x1fe000 bytes
    // ntoskrnl.exe TRACESUP:0xadf130, 0x1fd000 bytes
    // ntoskrnl.exe TRACESUP:0xa0f130, 0x1fe000 bytes
    //
    _t52(sdk::unknown_ptr) tp_completion;
    
    // [KiTpDecodeModRm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe TRACESUP:0xa10168, 0x1fe000 bytes
    // ntoskrnl.exe TRACESUP:0xadf1f4, 0x1fd000 bytes
    // ntoskrnl.exe TRACESUP:0xa0f168, 0x1fe000 bytes
    //
    _t53(sdk::unknown_ptr) tp_decode_mod_rm;
    
    // [KiTpDecodeModRmOperand]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe TRACESUP:0xa10254, 0x1fe000 bytes
    // ntoskrnl.exe TRACESUP:0xadf2e0, 0x1fd000 bytes
    // ntoskrnl.exe TRACESUP:0xa0f254, 0x1fe000 bytes
    //
    _t54(sdk::unknown_ptr) tp_decode_mod_rm_operand;
    
    // [KiTpEmulateGroup0Instruction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe TRACESUP:0xa103b4, 0x1fe000 bytes
    // ntoskrnl.exe TRACESUP:0xadf43c, 0x1fd000 bytes
    // ntoskrnl.exe TRACESUP:0xa0f3b4, 0x1fe000 bytes
    //
    _t55(sdk::unknown_ptr) tp_emulate_group0_instruction;
    
    // [KiTpEmulateGroup11Instruction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe TRACESUP:0xa10610, 0x1fe000 bytes
    // ntoskrnl.exe TRACESUP:0xadf694, 0x1fd000 bytes
    // ntoskrnl.exe TRACESUP:0xa0f610, 0x1fe000 bytes
    //
    _t56(sdk::unknown_ptr) tp_emulate_group11_instruction;
    
    // [KiTpEmulateGroup1Instruction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe TRACESUP:0xa106d0, 0x1fe000 bytes
    // ntoskrnl.exe TRACESUP:0xadf754, 0x1fd000 bytes
    // ntoskrnl.exe TRACESUP:0xa0f6d0, 0x1fe000 bytes
    //
    _t57(sdk::unknown_ptr) tp_emulate_group1_instruction;
    
    // [KiTpEmulateInstruction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe TRACESUP:0xa108c0, 0x1fe000 bytes
    // ntoskrnl.exe TRACESUP:0xadf944, 0x1fd000 bytes
    // ntoskrnl.exe TRACESUP:0xa0f8c0, 0x1fe000 bytes
    //
    _t58(sdk::unknown_ptr) tp_emulate_instruction;
    
    // [KiTpEmulateMovRegImm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe TRACESUP:0xa10f3c, 0x1fe000 bytes
    // ntoskrnl.exe TRACESUP:0xae00cc, 0x1fd000 bytes
    // ntoskrnl.exe TRACESUP:0xa0ff3c, 0x1fe000 bytes
    //
    _t59(sdk::unknown_ptr) tp_emulate_mov_reg_imm;
    
    // [KiTpEmulateMovzx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe TRACESUP:0xa10fcc, 0x1fe000 bytes
    // ntoskrnl.exe TRACESUP:0xae015c, 0x1fd000 bytes
    // ntoskrnl.exe TRACESUP:0xa0ffcc, 0x1fe000 bytes
    //
    _t60(sdk::unknown_ptr) tp_emulate_movzx;
    
    // [KiTpEmulateRegisterPushPop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe TRACESUP:0xa110dc, 0x1fe000 bytes
    // ntoskrnl.exe TRACESUP:0xae026c, 0x1fd000 bytes
    // ntoskrnl.exe TRACESUP:0xa100dc, 0x1fe000 bytes
    //
    _t61(sdk::unknown_ptr) tp_emulate_register_push_pop;
    
    // [KiTpEnabledCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2b1c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40d6c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b13c, 0x1fe000 bytes
    //
    _t62(sdk::unknown_ptr) tp_enabled_count;
    
    // [KiTpExcludedRoutines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x8c20, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x9ab0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x8c50, 0x1fe000 bytes
    //
    _t63(sdk::unknown_ptr) tp_excluded_routines;
    
    // [KiTpFetchImmediateOperand]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe TRACESUP:0xa11198, 0x1fe000 bytes
    // ntoskrnl.exe TRACESUP:0xae0338, 0x1fd000 bytes
    // ntoskrnl.exe TRACESUP:0xa10198, 0x1fe000 bytes
    //
    _t64(sdk::unknown_ptr) tp_fetch_immediate_operand;
    
    // [KiTpFetchInstructionBytes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe TRACESUP:0xa11210, 0x1fe000 bytes
    // ntoskrnl.exe TRACESUP:0xae03b4, 0x1fd000 bytes
    // ntoskrnl.exe TRACESUP:0xa10210, 0x1fe000 bytes
    //
    _t65(sdk::unknown_ptr) tp_fetch_instruction_bytes;
    
    // [KiTpGetRegisterAddressByIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe TRACESUP:0xa11254, 0x1fe000 bytes
    // ntoskrnl.exe TRACESUP:0xae03f8, 0x1fd000 bytes
    // ntoskrnl.exe TRACESUP:0xa10254, 0x1fe000 bytes
    //
    _t66(sdk::unknown_ptr) tp_get_register_address_by_index;
    
    // [KiTpHandleTrap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5173e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56abf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5171f0, 0x1fe000 bytes
    //
    _t67(sdk::unknown_ptr) tp_handle_trap;
    
    // [KiTpHashTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2b1d8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40d78, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b158, 0x1fe000 bytes
    //
    _t68(sdk::unknown_ptr) tp_hash_table;
    
    // [KiTpIsExcludedKernelTracepointLocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b9a9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96a4c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b824c, 0x1fe000 bytes
    //
    _t69(sdk::unknown_ptr) tp_is_excluded_kernel_tracepoint_location;
    
    // [KiTpIsSupportedKernelTracepointLocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b9b4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96a5b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b82fc, 0x1fe000 bytes
    //
    _t70(sdk::unknown_ptr) tp_is_supported_kernel_tracepoint_location;
    
    // [KiTpParityLookupTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x33950, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3f920, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33c90, 0x1fe000 bytes
    //
    _t71(sdk::unknown_ptr) tp_parity_lookup_table;
    
    // [KiTpParseInstruction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe TRACESUP:0xa112ac, 0x1fe000 bytes
    // ntoskrnl.exe TRACESUP:0xae0450, 0x1fd000 bytes
    // ntoskrnl.exe TRACESUP:0xa102ac, 0x1fe000 bytes
    //
    _t72(sdk::unknown_ptr) tp_parse_instruction;
    
    // [KiTpParseInstructionPrefix]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe TRACESUP:0xa112d8, 0x1fe000 bytes
    // ntoskrnl.exe TRACESUP:0xae047c, 0x1fd000 bytes
    // ntoskrnl.exe TRACESUP:0xa102d8, 0x1fe000 bytes
    //
    _t73(sdk::unknown_ptr) tp_parse_instruction_prefix;
    
    // [KiTpReadImageData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8ba2ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96a694, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b8a5c, 0x1fe000 bytes
    //
    _t74(sdk::unknown_ptr) tp_read_image_data;
    
    // [KiTpReadOperandValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe TRACESUP:0xa113ec, 0x1fe000 bytes
    // ntoskrnl.exe TRACESUP:0xae0594, 0x1fd000 bytes
    // ntoskrnl.exe TRACESUP:0xa103ec, 0x1fe000 bytes
    //
    _t75(sdk::unknown_ptr) tp_read_operand_value;
    
    // [KiTpRegisteredCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2b1c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40d68, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b138, 0x1fe000 bytes
    //
    _t76(sdk::unknown_ptr) tp_registered_count;
    
    // [KiTpSetFlagsAdd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe TRACESUP:0xa11450, 0x1fe000 bytes
    // ntoskrnl.exe TRACESUP:0xae05f8, 0x1fd000 bytes
    // ntoskrnl.exe TRACESUP:0xa10450, 0x1fe000 bytes
    //
    _t77(sdk::unknown_ptr) tp_set_flags_add;
    
    // [KiTpSetFlagsSub]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe TRACESUP:0xa1153c, 0x1fe000 bytes
    // ntoskrnl.exe TRACESUP:0xae06e4, 0x1fd000 bytes
    // ntoskrnl.exe TRACESUP:0xa1053c, 0x1fe000 bytes
    //
    _t78(sdk::unknown_ptr) tp_set_flags_sub;
    
    // [KiTpSetFlagsZeroSignParity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe TRACESUP:0xa11640, 0x1fe000 bytes
    // ntoskrnl.exe TRACESUP:0xae07e8, 0x1fd000 bytes
    // ntoskrnl.exe TRACESUP:0xa10640, 0x1fe000 bytes
    //
    _t79(sdk::unknown_ptr) tp_set_flags_zero_sign_parity;
    
    // [KiTpSetImmediateOperandSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe TRACESUP:0xa116b0, 0x1fe000 bytes
    // ntoskrnl.exe TRACESUP:0xae0858, 0x1fd000 bytes
    // ntoskrnl.exe TRACESUP:0xa106b0, 0x1fe000 bytes
    //
    _t80(sdk::unknown_ptr) tp_set_immediate_operand_size;
    
    // [KiTpSetupCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8ba390, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96a778, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b8b40, 0x1fe000 bytes
    //
    _t81(sdk::unknown_ptr) tp_setup_completion;
    
    // [KiTpSignExtendOperandValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe TRACESUP:0xa116e0, 0x1fe000 bytes
    // ntoskrnl.exe TRACESUP:0xae0888, 0x1fd000 bytes
    // ntoskrnl.exe TRACESUP:0xa106e0, 0x1fe000 bytes
    //
    _t82(sdk::unknown_ptr) tp_sign_extend_operand_value;
    
    // [KiTpStateLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2b1d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40d60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b148, 0x1fe000 bytes
    //
    _t83(sdk::unknown_ptr) tp_state_lock;
    
    // [KiTpWriteBreakpoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x517678, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56ae3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x517488, 0x1fe000 bytes
    //
    _t84(sdk::unknown_ptr) tp_write_breakpoint;
    
    // [KiTpWriteMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51770c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56aedc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51751c, 0x1fe000 bytes
    //
    _t85(sdk::unknown_ptr) tp_write_memory;
    
    // [KiTpWriteRegisterValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe TRACESUP:0xa1170c, 0x1fe000 bytes
    // ntoskrnl.exe TRACESUP:0xae08b4, 0x1fd000 bytes
    // ntoskrnl.exe TRACESUP:0xa1070c, 0x1fe000 bytes
    //
    _t86(sdk::unknown_ptr) tp_write_register_value;
    
    // [KiTpWriteUmMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x517834, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56b000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x517644, 0x1fe000 bytes
    //
    _t87(sdk::unknown_ptr) tp_write_um_memory;
    
    // [KiTrackSystemCallEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8ba110, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x969b10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b88c0, 0x1fe000 bytes
    //
    _t88(sdk::unknown_ptr) track_system_call_entry;
    
    // [KiTrackSystemCallExit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8ba230, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x969c30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b89e0, 0x1fe000 bytes
    //
    _t89(sdk::unknown_ptr) track_system_call_exit;
    
    // [KiTryLocalThreadSchedule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2cb1c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c0980, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x24c1f0, 0x1fe000 bytes
    //
    _t90(sdk::unknown_ptr) try_local_thread_schedule;
    
    // [KiTsxSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb920, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dee4, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb920, 0x1fe000 bytes
    //
    _t91(sdk::unknown_ptr) tsx_supported;
    
    // [KiTsxSupportedAtBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb91c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dee8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb91c, 0x1fe000 bytes
    //
    _t92(sdk::unknown_ptr) tsx_supported_at_boot;
    
    // [KiUmsCallEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16e640, 0x32828 bytes
    // ntoskrnl.exe .text:0x4069c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4082c0, 0x1fe000 bytes
    //
    _t93(sdk::unknown_ptr) ums_call_entry;
    
    // [KiUmsCallEntryContinue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16e740, 0x32828 bytes
    // ntoskrnl.exe .text:0x406ac0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4083c0, 0x1fe000 bytes
    //
    _t94(sdk::unknown_ptr) ums_call_entry_continue;
    
    // [KiUmsExceptionEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16e800, 0x32828 bytes
    // ntoskrnl.exe .text:0x406b80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x408480, 0x1fe000 bytes
    //
    _t95(sdk::unknown_ptr) ums_exception_entry;
    
    // [KiUmsExceptionFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6559f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bad84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8b9534, 0x1fe000 bytes
    //
    _t96(sdk::unknown_ptr) ums_exception_filter;
    
    // [KiUmsExit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16e8c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x406c40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x408540, 0x1fe000 bytes
    //
    _t97(sdk::unknown_ptr) ums_exit;
    
    // [KiUmsFastReturnToUser]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16e180, 0x32828 bytes
    // ntoskrnl.exe .text:0x4064c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x407dc0, 0x1fe000 bytes
    //
    _t98(sdk::unknown_ptr) ums_fast_return_to_user;
    
    // [KiUmsRestoreUch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16e400, 0x32828 bytes
    // ntoskrnl.exe .text:0x406740, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x408040, 0x1fe000 bytes
    //
    _t99(sdk::unknown_ptr) ums_restore_uch;
    
    // [KiUmsTrapEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16e440, 0x32828 bytes
    // ntoskrnl.exe .text:0x4067c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4080c0, 0x1fe000 bytes
    //
    _u00(sdk::unknown_ptr) ums_trap_entry;
    
    // [KiUmsTrapEntryContinue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16e580, 0x32828 bytes
    // ntoskrnl.exe .text:0x406900, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x408200, 0x1fe000 bytes
    //
    _u01(sdk::unknown_ptr) ums_trap_entry_continue;
    
    // [KiUncommitNodeAssignment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d5ee4, 0x32828 bytes
    // ntoskrnl.exe .text:0x50fce4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50faf4, 0x1fe000 bytes
    //
    _u02(sdk::unknown_ptr) uncommit_node_assignment;
    
    // [KiUnwindUserSspForApcContextCopyBypass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51f3a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56c684, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51f1b4, 0x1fe000 bytes
    //
    _u03(sdk::unknown_ptr) unwind_user_ssp_for_apc_context_copy_bypass;
    
    // [KiUpdateRunTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x309ed0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x222e80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2753c0, 0x1fe000 bytes
    //
    _u04(sdk::unknown_ptr) update_run_time;
    
    // [KiUpdateSavedSupervisorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9acb40, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8b3d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9abab0, 0x1fe000 bytes
    //
    _u05(sdk::unknown_ptr) update_saved_supervisor_state;
    
    // [KiUpdateSpecCtrlEnhancedIBRS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x515c1c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45f06c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x515a2c, 0x1fe000 bytes
    //
    _u06(sdk::unknown_ptr) update_spec_ctrl_enhanced_ibrs;
    
    // [KiUpdateSpeculationControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x226f90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x346cd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ddbb0, 0x1fe000 bytes
    //
    _u07(sdk::unknown_ptr) update_speculation_control;
    
    // [KiUpdateStibpPairing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x227300, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45f1a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ddf20, 0x1fe000 bytes
    //
    _u08(sdk::unknown_ptr) update_stibp_pairing;
    
    // [KiUpdateThreadCpuSetAffinitiesFromDpcLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c125c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d3d10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c206c, 0x1fe000 bytes
    //
    _u09(sdk::unknown_ptr) update_thread_cpu_set_affinities_from_dpc_level;
    
    // [KiUpdateThreadCpuSetAffinitiesProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c120c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d3cc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c201c, 0x1fe000 bytes
    //
    _u10(sdk::unknown_ptr) update_thread_cpu_set_affinities_process;
    
    // [KiUpdateTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x30a030, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x221a70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x275520, 0x1fe000 bytes
    //
    _u11(sdk::unknown_ptr) update_time;
    
    // [KiUpdateTimer2Collections]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x39be04, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f88d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39d2c4, 0x1fe000 bytes
    //
    _u12(sdk::unknown_ptr) update_timer2_collections;
    
    // [KiUpdateVPBackingThreadPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x28cab8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2186a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3323a0, 0x1fe000 bytes
    //
    _u13(sdk::unknown_ptr) update_vp_backing_thread_priority;
    
    // [KiUpdateVpBackingThreadPriorityDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51ad40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x559ed0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51ab40, 0x1fe000 bytes
    //
    _u14(sdk::unknown_ptr) update_vp_backing_thread_priority_dpc_routine;
    
    // [KiUpdateVpBackingThreadPriorityFromTopLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51aee0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55a064, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51ace0, 0x1fe000 bytes
    //
    _u15(sdk::unknown_ptr) update_vp_backing_thread_priority_from_top_level;
    
    // [KiUpdateVpThreadPriorityDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc31de0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc420a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31d40, 0x1fe000 bytes
    //
    _u16(sdk::unknown_ptr) update_vp_thread_priority_dpc;
    
    // [KiUpdateVpThreadPriorityListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc31e20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc420e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31d80, 0x1fe000 bytes
    //
    _u17(sdk::unknown_ptr) update_vp_thread_priority_list_head;
    
    // [KiUpdateVpThreadPriorityLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc31e30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc420f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31d90, 0x1fe000 bytes
    //
    _u18(sdk::unknown_ptr) update_vp_thread_priority_lock;
    
    // [KiUserCetAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa041, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c061, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa042, 0x1fe000 bytes
    //
    _u19(sdk::unknown_ptr) user_cet_allowed;
    
    // [KiValidateComponentName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x512d90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x556bc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x512ba0, 0x1fe000 bytes
    //
    _u20(sdk::unknown_ptr) validate_component_name;
    
    // [KiValidateTriageDumpDataArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c4d1c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dcbe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c5a8c, 0x1fe000 bytes
    //
    _u21(sdk::unknown_ptr) validate_triage_dump_data_array;
    
    // [KiVelocityFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb450, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db14, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb450, 0x1fe000 bytes
    //
    _u22(sdk::unknown_ptr) velocity_flags;
    
    // [KiVerifyContextIpForUserCet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3eadf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55c9a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ec260, 0x1fe000 bytes
    //
    _u23(sdk::unknown_ptr) verify_context_ip_for_user_cet;
    
    // [KiVerifyContextRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x288a80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20fa30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32f9f0, 0x1fe000 bytes
    //
    _u24(sdk::unknown_ptr) verify_context_record;
    
    // [KiVerifyContextXStateCetUEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x510270, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45e5bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x510080, 0x1fe000 bytes
    //
    _u25(sdk::unknown_ptr) verify_context_x_state_cet_u_enabled;
    
    // [KiVirtualHeteroClockRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc12498, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cfd8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12450, 0x1fe000 bytes
    //
    _u26(sdk::unknown_ptr) virtual_hetero_clock_request;
    
    // [KiVirtualizationException]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x403900, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x438900, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x405200, 0x1fe000 bytes
    //
    _u27(sdk::unknown_ptr) virtualization_exception;
    
    // [KiVirtualizationExceptionShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0xa12b40, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae2b40, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa11b40, 0x1fe000 bytes
    //
    _u28(sdk::unknown_ptr) virtualization_exception_shadow;
    
    // [KiVmbusInterruptDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f95b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42e520, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fae90, 0x1fe000 bytes
    //
    _u29(sdk::unknown_ptr) vmbus_interrupt_dispatch;
    
    // [KiVmbusInterruptSubDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f9990, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42e940, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fb270, 0x1fe000 bytes
    //
    _u30(sdk::unknown_ptr) vmbus_interrupt_sub_dispatch;
    
    // [KiVpThreadSystemWorkPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa01c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c058, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa01c, 0x1fe000 bytes
    //
    _u31(sdk::unknown_ptr) vp_thread_system_work_priority;
    
    // [KiXSaveAreaLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa07c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c104, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa07c, 0x1fe000 bytes
    //
    _u32(sdk::unknown_ptr) x_save_area_length;
    
    // [KiXSavesManagesIpt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x514854, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55e7fc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x514664, 0x1fe000 bytes
    //
    _u33(sdk::unknown_ptr) x_saves_manages_ipt;
    
    // [KiAbApplyWakeupBoost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x89c48, 0x32828 bytes
    // ntoskrnl.exe .text:0x20f60c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e568c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35a9fc, 0x1fe000 bytes
    //
    _u34(sdk::unknown_ptr) ab_apply_wakeup_boost;
    
    // [KiAbCompareSnappedEntryState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x87c58, 0x32828 bytes
    // ntoskrnl.exe .text:0x210918, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e7d74, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35b228, 0x1fe000 bytes
    //
    _u35(sdk::unknown_ptr) ab_compare_snapped_entry_state;
    
    // [KiAbCpuBoostOwners]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x89e58, 0x32828 bytes
    // ntoskrnl.exe .text:0x20eaf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34fcec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dcf78, 0x1fe000 bytes
    //
    _u36(sdk::unknown_ptr) ab_cpu_boost_owners;
    
    // [KiAbDeferredProcessingWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x89168, 0x32828 bytes
    // ntoskrnl.exe .text:0x20ebf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34f600, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dd070, 0x1fe000 bytes
    //
    _u37(sdk::unknown_ptr) ab_deferred_processing_worker;
    
    // [KiAbDetermineMaxWaiterPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x88fa8, 0x32828 bytes
    // ntoskrnl.exe .text:0x20e830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34fb78, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x269e50, 0x1fe000 bytes
    //
    _u38(sdk::unknown_ptr) ab_determine_max_waiter_priority;
    
    // [KiAbEntryGetCpuPriorityKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8a2a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2103c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x350214, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dd91c, 0x1fe000 bytes
    //
    _u39(sdk::unknown_ptr) ab_entry_get_cpu_priority_key;
    
    // [KiAbEntryGetLockedHeadEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfc470, 0x32828 bytes
    // ntoskrnl.exe .text:0x20fd10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x277640, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x269870, 0x1fe000 bytes
    //
    _u40(sdk::unknown_ptr) ab_entry_get_locked_head_entry;
    
    // [KiAbEntryRemoveFromTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38e40, 0x32828 bytes
    // ntoskrnl.exe .text:0x2282a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x276430, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x341050, 0x1fe000 bytes
    //
    _u41(sdk::unknown_ptr) ab_entry_remove_from_tree;
    
    // [KiAbEntryUpdateOwnerTreePosition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x89f38, 0x32828 bytes
    // ntoskrnl.exe .text:0x20f9a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34fdec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dd4e0, 0x1fe000 bytes
    //
    _u42(sdk::unknown_ptr) ab_entry_update_owner_tree_position;
    
    // [KiAbEntryUpdateWaiterTreePosition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8a2e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x2102ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x350138, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dd848, 0x1fe000 bytes
    //
    _u43(sdk::unknown_ptr) ab_entry_update_waiter_tree_position;
    
    // [KiAbFindWakeupLockEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x89b08, 0x32828 bytes
    // ntoskrnl.exe .text:0x20f818, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e4ff0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35ac08, 0x1fe000 bytes
    //
    _u44(sdk::unknown_ptr) ab_find_wakeup_lock_entry;
    
    // [KiAbIoBoostOwners]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x89d68, 0x32828 bytes
    // ntoskrnl.exe .text:0x20e9ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34fbe8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dce74, 0x1fe000 bytes
    //
    _u45(sdk::unknown_ptr) ab_io_boost_owners;
    
    // [KiAbOwnerComputeCpuPriorityKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8a37c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2104fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x350264, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dda58, 0x1fe000 bytes
    //
    _u46(sdk::unknown_ptr) ab_owner_compute_cpu_priority_key;
    
    // [KiAbProcessContextSwitch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50e20, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e55c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21c6ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2668d0, 0x1fe000 bytes
    //
    _u47(sdk::unknown_ptr) ab_process_context_switch;
    
    // [KiAbProcessThreadLocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x892bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x20ed54, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34f7b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dd1d4, 0x1fe000 bytes
    //
    _u48(sdk::unknown_ptr) ab_process_thread_locks;
    
    // [KiAbPropagateBoosts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x89230, 0x32828 bytes
    // ntoskrnl.exe .text:0x20ecc4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34f720, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dd144, 0x1fe000 bytes
    //
    _u49(sdk::unknown_ptr) ab_propagate_boosts;
    
    // [KiAbQueueAutoBoostDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x795d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3570b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x350388, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ddb6c, 0x1fe000 bytes
    //
    _u50(sdk::unknown_ptr) ab_queue_auto_boost_dpc;
    
    // [KiAbSetMinimumThreadPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x89fb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x20fa54, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34fea8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dd594, 0x1fe000 bytes
    //
    _u51(sdk::unknown_ptr) ab_set_minimum_thread_priority;
    
    // [KiAbThreadBoostIoPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7950c, 0x32828 bytes
    // ntoskrnl.exe .text:0x211160, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3502b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ddaa4, 0x1fe000 bytes
    //
    _u52(sdk::unknown_ptr) ab_thread_boost_io_priority;
    
    // [KiAbThreadClearAcquiredLockEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11300, 0x32828 bytes
    // ntoskrnl.exe .text:0x2dfb80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e5330, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x260e10, 0x1fe000 bytes
    //
    _u53(sdk::unknown_ptr) ab_thread_clear_acquired_lock_entry;
    
    // [KiAbThreadInsertList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xccf84, 0x32828 bytes
    // ntoskrnl.exe .text:0x267a8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x374480, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31899c, 0x1fe000 bytes
    //
    _u54(sdk::unknown_ptr) ab_thread_insert_list;
    
    // [KiAbThreadUnboostCpuPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x86fec, 0x32828 bytes
    // ntoskrnl.exe .text:0x254244, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x308fb4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x303f94, 0x1fe000 bytes
    //
    _u55(sdk::unknown_ptr) ab_thread_unboost_cpu_priority;
    
    // [KiAbThreadUnboostIoPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd2a84, 0x32828 bytes
    // ntoskrnl.exe .text:0x26f2e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x309900, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3209b0, 0x1fe000 bytes
    //
    _u56(sdk::unknown_ptr) ab_thread_unboost_io_priority;
    
    // [KiAbTreeArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32bdc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdbb00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcfb540, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdbb00, 0x1fe000 bytes
    //
    _u57(sdk::unknown_ptr) ab_tree_array;
    
    // [KiAbTryDecrementIoWaiterCounts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x395f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x228638, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35acf8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3413e8, 0x1fe000 bytes
    //
    _u58(sdk::unknown_ptr) ab_try_decrement_io_waiter_counts;
    
    // [KiAbTryIncrementIoWaiterCounts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8a1a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x210408, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2adb50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dd964, 0x1fe000 bytes
    //
    _u59(sdk::unknown_ptr) ab_try_increment_io_waiter_counts;
    
    // [KiAccessBitErrata]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x343128, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9cfc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b200, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9cfc, 0x1fe000 bytes
    //
    _u60(sdk::unknown_ptr) access_bit_errata;
    
    // [KiAcquireInterruptConnectLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12b6cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x3733f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38901c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x374770, 0x1fe000 bytes
    //
    _u61(sdk::unknown_ptr) acquire_interrupt_connect_lock;
    
    // [KiAcquireKobjectLockSafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xff180, 0x32828 bytes
    // ntoskrnl.exe .text:0x28e970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x27c000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x243930, 0x1fe000 bytes
    //
    _u62(sdk::unknown_ptr) acquire_kobject_lock_safe;
    
    // [KiAcquireQueuedSpinLockInstrumented]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d6100, 0x32828 bytes
    // ntoskrnl.exe .text:0x51061c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45e63e, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51042c, 0x1fe000 bytes
    //
    _u63(sdk::unknown_ptr) acquire_queued_spin_lock_instrumented;
    
    // [KiAcquireReleaseObjectRundownLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa5e5c, 0x32828 bytes
    // ntoskrnl.exe .text:0x24e564, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x359da8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fbe34, 0x1fe000 bytes
    //
    _u64(sdk::unknown_ptr) acquire_release_object_rundown_lock_exclusive;
    
    // [KiAcquireReleaseThreadLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa1164, 0x32828 bytes
    // ntoskrnl.exe .text:0x2573c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21409c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x356880, 0x1fe000 bytes
    //
    _u65(sdk::unknown_ptr) acquire_release_thread_lock;
    
    // [KiAcquireSecondaryPassiveConnectLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d815c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5131f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d7bf8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x513004, 0x1fe000 bytes
    //
    _u66(sdk::unknown_ptr) acquire_secondary_passive_connect_lock;
    
    // [KiAcquireSecondarySignalListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d818c, 0x32828 bytes
    // ntoskrnl.exe .text:0x51322c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55d388, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51303c, 0x1fe000 bytes
    //
    _u67(sdk::unknown_ptr) acquire_secondary_signal_list_lock;
    
    // [KiAcquireSpinLockInstrumented]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d63fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x510adc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45e8e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5108ec, 0x1fe000 bytes
    //
    _u68(sdk::unknown_ptr) acquire_spin_lock_instrumented;
    
    // [KiAcquireTimer2CollectionLockIfInserted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfc268, 0x32828 bytes
    // ntoskrnl.exe .text:0x30eeac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b1a04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x242a5c, 0x1fe000 bytes
    //
    _u69(sdk::unknown_ptr) acquire_timer2_collection_lock_if_inserted;
    
    // [KiAcquireTimer2LockUnlessDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfc2a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x30eefc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b19d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x242aac, 0x1fe000 bytes
    //
    _u70(sdk::unknown_ptr) acquire_timer2_lock_unless_disabled;
    
    // [KiActivateWaiterKQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x77ea8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2484fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30868c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x357490, 0x1fe000 bytes
    //
    _u71(sdk::unknown_ptr) activate_waiter_k_queue;
    
    // [KiActivateWaiterPriQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x77f34, 0x32828 bytes
    // ntoskrnl.exe .text:0x248590, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x308720, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x358814, 0x1fe000 bytes
    //
    _u72(sdk::unknown_ptr) activate_waiter_pri_queue;
    
    // [KiActivateWaiterQueueWithNoLocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x77d98, 0x32828 bytes
    // ntoskrnl.exe .text:0x2483c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x308574, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35735c, 0x1fe000 bytes
    //
    _u73(sdk::unknown_ptr) activate_waiter_queue_with_no_locks;
    
    // [KiActiveGroups]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa00c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa014, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c01c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa014, 0x1fe000 bytes
    //
    _u74(sdk::unknown_ptr) active_groups;
    
    // [KiActualNodeCost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f520, 0x32828 bytes
    // ntoskrnl.exe .data:0xc32050, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc42308, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31fe8, 0x1fe000 bytes
    //
    _u75(sdk::unknown_ptr) actual_node_cost;
    
    // [KiAddProcessorToGroupSchedulingDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3ddf10, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9ad054, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8ba14, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9abfc4, 0x1fe000 bytes
    //
    _u76(sdk::unknown_ptr) add_processor_to_group_scheduling_database;
    
    // [KiAddProcessorToGroupSchedulingList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dc158, 0x32828 bytes
    // ntoskrnl.exe .text:0x51d9ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x568f10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51d7ec, 0x1fe000 bytes
    //
    _u77(sdk::unknown_ptr) add_processor_to_group_scheduling_list;
    
    // [KiAddSynchCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571e10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b82a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9680b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b6a50, 0x1fe000 bytes
    //
    _u78(sdk::unknown_ptr) add_synch_counters;
    
    // [KiAddThreadToPrcbQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc501c, 0x32828 bytes
    // ntoskrnl.exe .text:0x244dd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2bdad0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3369d0, 0x1fe000 bytes
    //
    _u79(sdk::unknown_ptr) add_thread_to_prcb_queue;
    
    // [KiAddThreadToReadyQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1da4e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x519104, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2bc250, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x518f14, 0x1fe000 bytes
    //
    _u80(sdk::unknown_ptr) add_thread_to_ready_queue;
    
    // [KiAddThreadToScbQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbd354, 0x32828 bytes
    // ntoskrnl.exe .text:0x253b54, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32d688, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x335904, 0x1fe000 bytes
    //
    _u81(sdk::unknown_ptr) add_thread_to_scb_queue;
    
    // [KiAdjustDpcThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa078, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa088, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c09c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa088, 0x1fe000 bytes
    //
    _u82(sdk::unknown_ptr) adjust_dpc_threshold;
    
    // [KiAdjustGroupConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d5a10, 0x32828 bytes
    // ntoskrnl.exe .text:0x50f7c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e9a78, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50f5d8, 0x1fe000 bytes
    //
    _u83(sdk::unknown_ptr) adjust_group_configuration;
    
    // [KiAdjustTimer2DueTimes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x128c34, 0x32828 bytes
    // ntoskrnl.exe .text:0x3998f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d0a1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39adb0, 0x1fe000 bytes
    //
    _u84(sdk::unknown_ptr) adjust_timer2_due_times;
    
    // [KiAdjustTimerDueTimes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x128a24, 0x32828 bytes
    // ntoskrnl.exe .text:0x39966c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d0904, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39ab2c, 0x1fe000 bytes
    //
    _u85(sdk::unknown_ptr) adjust_timer_due_times;
    
    // [KiAdjustTimersAfterDripsExit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d4eb8, 0x32828 bytes
    // ntoskrnl.exe .text:0x50e1ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55b62c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50dfbc, 0x1fe000 bytes
    //
    _u86(sdk::unknown_ptr) adjust_timers_after_drips_exit;
    
    // [KiAffinityContainsProcessorsOtherThanSelf]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38c90, 0x32828 bytes
    // ntoskrnl.exe .text:0x320e40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b2a60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x293380, 0x1fe000 bytes
    //
    _u87(sdk::unknown_ptr) affinity_contains_processors_other_than_self;
    
    // [KiAlignmentFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16a8c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x402700, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4375c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x404000, 0x1fe000 bytes
    //
    _u88(sdk::unknown_ptr) alignment_fault;
    
    // [KiAlignmentFaultShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23f800, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa12940, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae2940, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa11940, 0x1fe000 bytes
    //
    _u89(sdk::unknown_ptr) alignment_fault_shadow;
    
    // [KiAllocateCpuSetData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x792c6c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa3c7a4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3be7c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3ce60, 0x1fe000 bytes
    //
    _u90(sdk::unknown_ptr) allocate_cpu_set_data;
    
    // [KiApcInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15f240, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f7f10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42cbe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f97f0, 0x1fe000 bytes
    //
    _u91(sdk::unknown_ptr) apc_interrupt;
    
    // [KiApcInterruptShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23fa00, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa12c40, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae2c40, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa11c40, 0x1fe000 bytes
    //
    _u92(sdk::unknown_ptr) apc_interrupt_shadow;
    
    // [KiApplyForegroundBoostThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9823c, 0x32828 bytes
    // ntoskrnl.exe .text:0x28fe0c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x332a14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x335eac, 0x1fe000 bytes
    //
    _u93(sdk::unknown_ptr) apply_foreground_boost_thread;
    
    // [KiArgumentTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2f262c, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xc8940, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xcd84c, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc8b40, 0x1fe000 bytes
    //
    _u94(sdk::unknown_ptr) argument_table;
    
    // [KiAssignSchedulingGroupWeights]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbcaec, 0x32828 bytes
    // ntoskrnl.exe .text:0x357a78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32ab30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dbe84, 0x1fe000 bytes
    //
    _u95(sdk::unknown_ptr) assign_scheduling_group_weights;
    
    // [KiAttachProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9eea0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2dd3c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2debe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25e630, 0x1fe000 bytes
    //
    _u96(sdk::unknown_ptr) attach_process;
    
    // [KiAttemptFastRemovePriQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x77fa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x248610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x215ae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x358890, 0x1fe000 bytes
    //
    _u97(sdk::unknown_ptr) attempt_fast_remove_pri_queue;
    
    // [KiAttemptFastRemoveQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc5b94, 0x32828 bytes
    // ntoskrnl.exe .text:0x25bbb4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36b5cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30b714, 0x1fe000 bytes
    //
    _u98(sdk::unknown_ptr) attempt_fast_remove_queue;
    
    // [KiBalanceSetManagerCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f500, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31fc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc422a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31f00, 0x1fe000 bytes
    //
    _u99(sdk::unknown_ptr) balance_set_manager_count;
    
    // [KiBalanceSetManagerDeferredRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc86d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x243970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36e720, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x323e30, 0x1fe000 bytes
    //
    _v00(sdk::unknown_ptr) balance_set_manager_deferred_routine;
    
    // [KiBalanceSetManagerPeriod]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa1b8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa238, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c280, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa238, 0x1fe000 bytes
    //
    _v01(sdk::unknown_ptr) balance_set_manager_period;
    
    // [KiBalanceSetManagerPeriodicDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f4c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31f80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc42260, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31f20, 0x1fe000 bytes
    //
    _v02(sdk::unknown_ptr) balance_set_manager_periodic_dpc;
    
    // [KiBalanceSetManagerPeriodicEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f4a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31ea0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc42160, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31e20, 0x1fe000 bytes
    //
    _v03(sdk::unknown_ptr) balance_set_manager_periodic_event;
    
    // [KiBarrierWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab3b4, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb610, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dc14, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb610, 0x1fe000 bytes
    //
    _v04(sdk::unknown_ptr) barrier_wait;
    
    // [KiBeginCounterAccumulation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d972c, 0x32828 bytes
    // ntoskrnl.exe .text:0x515fc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55fb90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x515dd0, 0x1fe000 bytes
    //
    _v05(sdk::unknown_ptr) begin_counter_accumulation;
    
    // [KiBeginThreadAccountingPeriod]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8af10, 0x32828 bytes
    // ntoskrnl.exe .text:0x20bed0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x218060, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x357a10, 0x1fe000 bytes
    //
    _v06(sdk::unknown_ptr) begin_thread_accounting_period;
    
    // [KiBeginThreadWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x623f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c25c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34e750, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x226020, 0x1fe000 bytes
    //
    _v07(sdk::unknown_ptr) begin_thread_wait;
    
    // [KiBootDebuggerActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce564, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd546d8, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f6c0, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd546d8, 0x1fe000 bytes
    //
    _v08(sdk::unknown_ptr) boot_debugger_active;
    
    // [KiBootProcessorIdt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74af98, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd537e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca60, 0x1fe000 bytes
    //
    _v09(sdk::unknown_ptr) boot_processor_idt;
    
    // [KiBootProcessorIdtSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32719c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50b44, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a904, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50b3c, 0x1fe000 bytes
    //
    _v10(sdk::unknown_ptr) boot_processor_idt_size;
    
    // [KiBoundFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x167740, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ffc80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x434940, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x401580, 0x1fe000 bytes
    //
    _v11(sdk::unknown_ptr) bound_fault;
    
    // [KiBoundFaultShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23f280, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa123c0, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae23c0, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa113c0, 0x1fe000 bytes
    //
    _v12(sdk::unknown_ptr) bound_fault_shadow;
    
    // [KiBoundsCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30ec98, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31488, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc422e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc313c8, 0x1fe000 bytes
    //
    _v13(sdk::unknown_ptr) bounds_callback;
    
    // [KiBreakpointTrap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x166f80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ff600, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4342c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x400f00, 0x1fe000 bytes
    //
    _v14(sdk::unknown_ptr) breakpoint_trap;
    
    // [KiBreakpointTrapShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23f180, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa122c0, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae22c0, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa112c0, 0x1fe000 bytes
    //
    _v15(sdk::unknown_ptr) breakpoint_trap_shadow;
    
    // [KiBugCheckActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30ec40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31400, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc483c4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31358, 0x1fe000 bytes
    //
    _v16(sdk::unknown_ptr) bug_check_active;
    
    // [KiBugCheckData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30ec60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31420, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc42320, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31360, 0x1fe000 bytes
    //
    _v17(uint64_t**) bug_check_data;
    
    // [KiBugCheckDebugBreak]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d76bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x512070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x555ab0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x511e80, 0x1fe000 bytes
    //
    _v18(sdk::unknown_ptr) bug_check_debug_break;
    
    // [KiBugCheckDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16db40, 0x32828 bytes
    // ntoskrnl.exe .text:0x405e00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x43b040, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x407700, 0x1fe000 bytes
    //
    _v19(sdk::unknown_ptr) bug_check_dispatch;
    
    // [KiBugCheckDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x343118, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9cf0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64430, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9cf0, 0x1fe000 bytes
    //
    _v20(sdk::unknown_ptr) bug_check_driver;
    
    // [KiBugCheckProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d7770, 0x32828 bytes
    // ntoskrnl.exe .text:0x512140, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x555b80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x511f50, 0x1fe000 bytes
    //
    _v21(sdk::unknown_ptr) bug_check_progress;
    
    // [KiBugCheckReturn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b6b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3e84, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4280d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5764, 0x1fe000 bytes
    //
    _v22(sdk::unknown_ptr) bug_check_return;
    
    // [KiBugCheckUnexpectedInterrupts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34267c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4c40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17698, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4c3c, 0x1fe000 bytes
    //
    _v23(sdk::unknown_ptr) bug_check_unexpected_interrupts;
    
    // [KiBugCodeMessages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab3d0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6d0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd38, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6c8, 0x1fe000 bytes
    //
    _v24(sdk::unknown_ptr) bug_code_messages;
    
    // [KiCacheErrataMonitor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab3a0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb628, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dc88, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb628, 0x1fe000 bytes
    //
    _v25(sdk::unknown_ptr) cache_errata_monitor;
    
    // [KiCacheFlushTimeStamp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be280, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd22240, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd48240, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd22240, 0x1fe000 bytes
    //
    _v26(sdk::unknown_ptr) cache_flush_time_stamp;
    
    // [KiCalibrateTimeAdjustment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3c9634, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x991bd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8abf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x990be0, 0x1fe000 bytes
    //
    _v27(sdk::unknown_ptr) calibrate_time_adjustment;
    
    // [KiCallInterruptServiceRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xdddc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2806f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x345dd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x327e50, 0x1fe000 bytes
    //
    _v28(sdk::unknown_ptr) call_interrupt_service_routine;
    
    // [KiCallUserMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15e9c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f7490, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42ba00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f8d70, 0x1fe000 bytes
    //
    _v29(sdk::unknown_ptr) call_user_mode;
    
    // [KiCancelTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4cab0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e5c40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b70b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x266f50, 0x1fe000 bytes
    //
    _v30(sdk::unknown_ptr) cancel_timer;
    
    // [KiChainedDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15c780, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f5140, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4294e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f6a20, 0x1fe000 bytes
    //
    _v31(sdk::unknown_ptr) chained_dispatch;
    
    // [KiChargeSchedulingGroupCycleTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbd314, 0x32828 bytes
    // ntoskrnl.exe .text:0x28d6d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32cc0c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x332fc0, 0x1fe000 bytes
    //
    _v32(sdk::unknown_ptr) charge_scheduling_group_cycle_time;
    
    // [KiCheckDueTimeExpired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x62558, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c3100, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34e8d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x229b80, 0x1fe000 bytes
    //
    _v33(sdk::unknown_ptr) check_due_time_expired;
    
    // [KiCheckForAtlThunk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dc404, 0x32828 bytes
    // ntoskrnl.exe .text:0x51e754, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56b0c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51e564, 0x1fe000 bytes
    //
    _v34(sdk::unknown_ptr) check_for_atl_thunk;
    
    // [KiCheckForDuplicateBugCheckCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12c19c, 0x32828 bytes
    // ntoskrnl.exe .text:0x399ca8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36c5dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39b168, 0x1fe000 bytes
    //
    _v35(sdk::unknown_ptr) check_for_duplicate_bug_check_callback;
    
    // [KiCheckForEffectivePriorityChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbd024, 0x32828 bytes
    // ntoskrnl.exe .text:0x3582c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32bae8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dc6d4, 0x1fe000 bytes
    //
    _v36(sdk::unknown_ptr) check_for_effective_priority_change;
    
    // [KiCheckForFreezeExecution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7a34c, 0x32828 bytes
    // ntoskrnl.exe .text:0x50c880, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2070c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50c650, 0x1fe000 bytes
    //
    _v37(sdk::unknown_ptr) check_for_freeze_execution;
    
    // [KiCheckForKernelApcDelivery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x88440, 0x32828 bytes
    // ntoskrnl.exe .text:0x20dcd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x216940, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x359950, 0x1fe000 bytes
    //
    _v38(sdk::unknown_ptr) check_for_kernel_apc_delivery;
    
    // [KiCheckForMaxOverQuotaScb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbfab8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2899b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21a4a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x333614, 0x1fe000 bytes
    //
    _v39(sdk::unknown_ptr) check_for_max_over_quota_scb;
    
    // [KiCheckForSListAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb1000, 0x32828 bytes
    // ntoskrnl.exe .text:0x23eed0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x217c20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ec460, 0x1fe000 bytes
    //
    _v40(sdk::unknown_ptr) check_for_s_list_address;
    
    // [KiCheckForThreadDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa1860, 0x32828 bytes
    // ntoskrnl.exe .text:0x27f3a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x215e18, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x329b74, 0x1fe000 bytes
    //
    _v41(sdk::unknown_ptr) check_for_thread_dispatch;
    
    // [KiCheckForTimerExpiration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57f50, 0x32828 bytes
    // ntoskrnl.exe .text:0x308830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x224510, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2725e0, 0x1fe000 bytes
    //
    _v42(sdk::unknown_ptr) check_for_timer_expiration;
    
    // [KiCheckKeepAlive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x95a6c, 0x32828 bytes
    // ntoskrnl.exe .text:0x257a30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x369afc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3073a0, 0x1fe000 bytes
    //
    _v43(sdk::unknown_ptr) check_keep_alive;
    
    // [KiCheckMaxOverQuotaTransition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbc3a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2893a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32c874, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x334864, 0x1fe000 bytes
    //
    _v44(sdk::unknown_ptr) check_max_over_quota_transition;
    
    // [KiCheckPreferredHeteroProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x58a20, 0x32828 bytes
    // ntoskrnl.exe .text:0x28ca10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2248b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x332190, 0x1fe000 bytes
    //
    _v45(sdk::unknown_ptr) check_preferred_hetero_processor;
    
    // [KiCheckStall]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1da460, 0x32828 bytes
    // ntoskrnl.exe .text:0x517f30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21ced0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x517d40, 0x1fe000 bytes
    //
    _v46(sdk::unknown_ptr) check_stall;
    
    // [KiCheckThreadAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5e858, 0x32828 bytes
    // ntoskrnl.exe .text:0x28d024, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35cdb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x332914, 0x1fe000 bytes
    //
    _v47(sdk::unknown_ptr) check_thread_affinity;
    
    // [KiCheckWaitNext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x625b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c3010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34e960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x229a90, 0x1fe000 bytes
    //
    _v48(sdk::unknown_ptr) check_wait_next;
    
    // [KiChooseTargetProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bfb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2caa40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2bfc00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x24ba70, 0x1fe000 bytes
    //
    _v49(sdk::unknown_ptr) choose_target_processor;
    
    // [KiClockCheckPending]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f7b20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11010, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0b720, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc10fd0, 0x1fe000 bytes
    //
    _v50(sdk::unknown_ptr) clock_check_pending;
    
    // [KiClockCheckReady]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f7a70, 0x32828 bytes
    // ntoskrnl.exe .data:0xc10f60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0b830, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11080, 0x1fe000 bytes
    //
    _v51(sdk::unknown_ptr) clock_check_ready;
    
    // [KiClockCheckSlot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3243a9, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c360, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64438, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c340, 0x1fe000 bytes
    //
    _v52(sdk::unknown_ptr) clock_check_slot;
    
    // [KiClockIncrementTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30ed80, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31540, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41b40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31660, 0x1fe000 bytes
    //
    _v53(sdk::unknown_ptr) clock_increment_trace;
    
    // [KiClockIncrementTraceCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30ed30, 0x32828 bytes
    // ntoskrnl.exe .data:0xc3152c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41b28, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc314a8, 0x1fe000 bytes
    //
    _v54(sdk::unknown_ptr) clock_increment_trace_count;
    
    // [KiClockIntervalRequests]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x33e610, 0x32828 bytes
    // ntoskrnl.exe .data:0xcebf80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0bbf0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcebf80, 0x1fe000 bytes
    //
    _v55(sdk::unknown_ptr) clock_interval_requests;
    
    // [KiClockKeepAliveCycle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa013, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa003, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c003, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa003, 0x1fe000 bytes
    //
    _v56(sdk::unknown_ptr) clock_keep_alive_cycle;
    
    // [KiClockLatencyMaxDynamicTickDuration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa314, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa338, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c43c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa338, 0x1fe000 bytes
    //
    _v57(sdk::unknown_ptr) clock_latency_max_dynamic_tick_duration;
    
    // [KiClockLatencyMeasurementEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30ed28, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31528, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc4172c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31460, 0x1fe000 bytes
    //
    _v58(sdk::unknown_ptr) clock_latency_measurement_enabled;
    
    // [KiClockOwnerAllowedCpuSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f0c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31a40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0bb60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31880, 0x1fe000 bytes
    //
    _v59(sdk::unknown_ptr) clock_owner_allowed_cpu_set;
    
    // [KiClockOwnerAllowedCpuSetVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f0a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31a20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41d60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31928, 0x1fe000 bytes
    //
    _v60(sdk::unknown_ptr) clock_owner_allowed_cpu_set_version;
    
    // [KiClockPollCycle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5db0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0f100, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc097c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f140, 0x1fe000 bytes
    //
    _v61(sdk::unknown_ptr) clock_poll_cycle;
    
    // [KiClockState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be000, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd22000, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd48000, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd22000, 0x1fe000 bytes
    //
    _v62(sdk::unknown_ptr) clock_state;
    
    // [KiClockStateUpdateTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab710, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbbb8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e410, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbbb8, 0x1fe000 bytes
    //
    _v63(sdk::unknown_ptr) clock_state_update_timeout;
    
    // [KiClockStats]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30ecc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc314a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc416c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc313e0, 0x1fe000 bytes
    //
    _v64(sdk::unknown_ptr) clock_stats;
    
    // [KiClockTickTraceIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30ed60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31880, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41748, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31860, 0x1fe000 bytes
    //
    _v65(sdk::unknown_ptr) clock_tick_trace_index;
    
    // [KiClockTickTraces]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30ef20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc318a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41760, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc314c0, 0x1fe000 bytes
    //
    _v66(sdk::unknown_ptr) clock_tick_traces;
    
    // [KiClockTimerAlwaysOnPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab377, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5fa, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dbc7, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5fa, 0x1fe000 bytes
    //
    _v67(sdk::unknown_ptr) clock_timer_always_on_present;
    
    // [KiClockTimerHighLatency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab32c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5ae, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dbbf, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5ae, 0x1fe000 bytes
    //
    _v68(sdk::unknown_ptr) clock_timer_high_latency;
    
    // [KiClockTimerNextTickTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30ecb0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31500, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41720, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31450, 0x1fe000 bytes
    //
    _v69(sdk::unknown_ptr) clock_timer_next_tick_time;
    
    // [KiClockTimerOneShotEndTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30ed18, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31510, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41730, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31458, 0x1fe000 bytes
    //
    _v70(sdk::unknown_ptr) clock_timer_one_shot_end_time;
    
    // [KiClockTimerOneShotStartTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30ed10, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31518, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41738, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31440, 0x1fe000 bytes
    //
    _v71(sdk::unknown_ptr) clock_timer_one_shot_start_time;
    
    // [KiClockTimerOwner]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30ed24, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31508, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41740, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31448, 0x1fe000 bytes
    //
    _v72(sdk::unknown_ptr) clock_timer_owner;
    
    // [KiClockTimerPerCpu]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab249, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb457, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da64, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb457, 0x1fe000 bytes
    //
    _v73(sdk::unknown_ptr) clock_timer_per_cpu;
    
    // [KiCommitThreadWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4f670, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e3920, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c8150, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x264c30, 0x1fe000 bytes
    //
    _v74(sdk::unknown_ptr) commit_thread_wait;
    
    // [KiCompareVarMtrr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d24fc, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x995e74, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa788d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x995214, 0x1fe000 bytes
    //
    _v75(sdk::unknown_ptr) compare_var_mtrr;
    
    // [KiCompleteDirectSwitchThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x98d14, 0x32828 bytes
    // ntoskrnl.exe .text:0x28b878, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x363334, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x330ff8, 0x1fe000 bytes
    //
    _v76(sdk::unknown_ptr) complete_direct_switch_thread;
    
    // [KiCompleteKernelInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d5684, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x999bac, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa767dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9992b4, 0x1fe000 bytes
    //
    _v77(sdk::unknown_ptr) complete_kernel_init;
    
    // [KiComputeCpuSetAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9730c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a1048, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2124ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3376bc, 0x1fe000 bytes
    //
    _v78(sdk::unknown_ptr) compute_cpu_set_affinity;
    
    // [KiComputeCpuSetAffinityMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1da188, 0x32828 bytes
    // ntoskrnl.exe .text:0x517338, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56207c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x517148, 0x1fe000 bytes
    //
    _v79(sdk::unknown_ptr) compute_cpu_set_affinity_mask;
    
    // [KiComputeDueTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ca00, 0x32828 bytes
    // ntoskrnl.exe .text:0x290790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b6fe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26a120, 0x1fe000 bytes
    //
    _v80(sdk::unknown_ptr) compute_due_time;
    
    // [KiComputeGroupSchedulingRank]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbc27c, 0x32828 bytes
    // ntoskrnl.exe .text:0x28d270, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32c6ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x332b60, 0x1fe000 bytes
    //
    _v81(sdk::unknown_ptr) compute_group_scheduling_rank;
    
    // [KiComputeNewPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5cf60, 0x32828 bytes
    // ntoskrnl.exe .text:0x28cf70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21a690, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x332860, 0x1fe000 bytes
    //
    _v82(sdk::unknown_ptr) compute_new_priority;
    
    // [KiComputeNewSystemTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x58a40, 0x32828 bytes
    // ntoskrnl.exe .text:0x2457ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36b310, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x240bc0, 0x1fe000 bytes
    //
    _v83(sdk::unknown_ptr) compute_new_system_time;
    
    // [KiComputeNumaCosts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x791d44, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa45df4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb60dd8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa401dc, 0x1fe000 bytes
    //
    _v84(sdk::unknown_ptr) compute_numa_costs;
    
    // [KiComputeProcessorDataSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d2b58, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99afb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa78cec, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99a034, 0x1fe000 bytes
    //
    _v85(sdk::unknown_ptr) compute_processor_data_size;
    
    // [KiComputeThreadAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x97170, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a0f70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2121b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3375e4, 0x1fe000 bytes
    //
    _v86(sdk::unknown_ptr) compute_thread_affinity;
    
    // [KiConfigureCpuSetSchedulingInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d4a28, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b0f7c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ad910, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ac9dc, 0x1fe000 bytes
    //
    _v87(sdk::unknown_ptr) configure_cpu_set_scheduling_information;
    
    // [KiConfigureDynamicProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dd6d8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9acca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8b52c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9abc10, 0x1fe000 bytes
    //
    _v88(sdk::unknown_ptr) configure_dynamic_processor;
    
    // [KiConfigureHeteroProcessorsTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dd0c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x50c090, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5575e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50be50, 0x1fe000 bytes
    //
    _v89(sdk::unknown_ptr) configure_hetero_processors_target;
    
    // [KiConfigureInitialNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x139f20, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b023c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c9eb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3abc9c, 0x1fe000 bytes
    //
    _v90(sdk::unknown_ptr) configure_initial_nodes;
    
    // [KiConfigureProcessorBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d4ca8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99b430, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa78d1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99a4b4, 0x1fe000 bytes
    //
    _v91(sdk::unknown_ptr) configure_processor_block;
    
    // [KiConfigureSchedulingInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d4778, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99bc3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa77c8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99acbc, 0x1fe000 bytes
    //
    _v92(sdk::unknown_ptr) configure_scheduling_information;
    
    // [KiConnectInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12b4bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x37326c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x388e1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3745ec, 0x1fe000 bytes
    //
    _v93(sdk::unknown_ptr) connect_interrupt;
    
    // [KiConnectSecondaryInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d81a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5132a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d7ac4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5130b4, 0x1fe000 bytes
    //
    _v94(sdk::unknown_ptr) connect_secondary_interrupt;
    
    // [KiConnectSwInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bc9a8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa90424, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb81614, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8f6a4, 0x1fe000 bytes
    //
    _v95(sdk::unknown_ptr) connect_sw_interrupt;
    
    // [KiConsiderTimerRebasing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30ef00, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31a30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41d58, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31a40, 0x1fe000 bytes
    //
    _v96(sdk::unknown_ptr) consider_timer_rebasing;
    
    // [KiContinueEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa07e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x287fd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20fae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32ef40, 0x1fe000 bytes
    //
    _v97(sdk::unknown_ptr) continue_ex;
    
    // [KiContinuePreviousModeUser]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa5514, 0x32828 bytes
    // ntoskrnl.exe .text:0x288310, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20f6e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32f280, 0x1fe000 bytes
    //
    _v98(sdk::unknown_ptr) continue_previous_mode_user;
    
    // [KiConvertDynamicHeteroPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1da5b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5193b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45f920, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5191c0, 0x1fe000 bytes
    //
    _v99(sdk::unknown_ptr) convert_dynamic_hetero_policy;
    
    // [KiConvertToGuiThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15efe0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f7b40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42c820, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f9420, 0x1fe000 bytes
    //
    _w00(sdk::unknown_ptr) convert_to_gui_thread;
    
    // [KiCopyCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d97d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x516070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55fc40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x515e80, 0x1fe000 bytes
    //
    _w01(sdk::unknown_ptr) copy_counters;
    
    // [KiCopyCountersWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x654e20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b92a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9691a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b7a58, 0x1fe000 bytes
    //
    _w02(sdk::unknown_ptr) copy_counters_worker;
    
    // [KiCopyXStateArea]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d8ccc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5141e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55e0b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x513ff0, 0x1fe000 bytes
    //
    _w03(sdk::unknown_ptr) copy_x_state_area;
    
    // [KiCpuSetAffinities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab428, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6e0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd50, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6e8, 0x1fe000 bytes
    //
    _w04(sdk::unknown_ptr) cpu_set_affinities;
    
    // [KiCpuSetAffinitiesShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab430, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6e8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd58, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6e0, 0x1fe000 bytes
    //
    _w05(sdk::unknown_ptr) cpu_set_affinities_shadow;
    
    // [KiCpuSetAffinitySize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab50c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb908, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dec4, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb904, 0x1fe000 bytes
    //
    _w06(sdk::unknown_ptr) cpu_set_affinity_size;
    
    // [KiCpuSetCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab828, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbc38, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1eeb0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbc38, 0x1fe000 bytes
    //
    _w07(sdk::unknown_ptr) cpu_set_count;
    
    // [KiCpuSetData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab680, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfba90, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e1b8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfba90, 0x1fe000 bytes
    //
    _w08(sdk::unknown_ptr) cpu_set_data;
    
    // [KiCpuSetLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f218, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31b68, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41e20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31b60, 0x1fe000 bytes
    //
    _w09(sdk::unknown_ptr) cpu_set_lock;
    
    // [KiCpuSetSequence]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab2f8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb550, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db70, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb550, 0x1fe000 bytes
    //
    _w10(sdk::unknown_ptr) cpu_set_sequence;
    
    // [KiCreateCpuSetForProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d57d4, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x999d98, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa76a74, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9994a0, 0x1fe000 bytes
    //
    _w11(sdk::unknown_ptr) create_cpu_set_for_processor;
    
    // [KiCurrentErrLogBufferBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30ec38, 0x32828 bytes
    // ntoskrnl.exe .data:0xc313e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc42398, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31350, 0x1fe000 bytes
    //
    _w12(sdk::unknown_ptr) current_err_log_buffer_base;
    
    // [KiCurrentErrLogBufferOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30ec30, 0x32828 bytes
    // ntoskrnl.exe .data:0xc313e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc423a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31340, 0x1fe000 bytes
    //
    _w13(sdk::unknown_ptr) current_err_log_buffer_offset;
    
    // [KiCurrentEtwBufferBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30ec28, 0x32828 bytes
    // ntoskrnl.exe .data:0xc313f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc42388, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b330, 0x1fe000 bytes
    //
    _w14(sdk::unknown_ptr) current_etw_buffer_base;
    
    // [KiCurrentEtwBufferOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30ec20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc313f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc42390, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31348, 0x1fe000 bytes
    //
    _w15(sdk::unknown_ptr) current_etw_buffer_offset;
    
    // [KiCustomAccessHandler0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165e80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe500, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x432f10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ffde0, 0x1fe000 bytes
    //
    _w16(sdk::unknown_ptr) custom_access_handler0;
    
    // [KiCustomAccessHandler1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165120, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fdfc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4329d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ff8a0, 0x1fe000 bytes
    //
    _w17(sdk::unknown_ptr) custom_access_handler1;
    
    // [KiCustomAccessHandler2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1651e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe080, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x432a90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ff960, 0x1fe000 bytes
    //
    _w18(sdk::unknown_ptr) custom_access_handler2;
    
    // [KiCustomAccessHandler3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165b80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe200, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x432c10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ffae0, 0x1fe000 bytes
    //
    _w19(sdk::unknown_ptr) custom_access_handler3;
    
    // [KiCustomAccessHandler4]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x164fa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fdf00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x432fd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ff7e0, 0x1fe000 bytes
    //
    _w20(sdk::unknown_ptr) custom_access_handler4;
    
    // [KiCustomAccessHandler5]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165060, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fde40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x433090, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ff720, 0x1fe000 bytes
    //
    _w21(sdk::unknown_ptr) custom_access_handler5;
    
    // [KiCustomAccessHandler6]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165ac0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe140, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x432b50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ffa20, 0x1fe000 bytes
    //
    _w22(sdk::unknown_ptr) custom_access_handler6;
    
    // [KiCustomAccessHandler7]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165c40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe2c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x432cd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ffba0, 0x1fe000 bytes
    //
    _w23(sdk::unknown_ptr) custom_access_handler7;
    
    // [KiCustomAccessHandler8]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165d00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x432d90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ffc60, 0x1fe000 bytes
    //
    _w24(sdk::unknown_ptr) custom_access_handler8;
    
    // [KiCustomAccessHandler9]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165dc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe440, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x432e50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ffd20, 0x1fe000 bytes
    //
    _w25(sdk::unknown_ptr) custom_access_handler9;
    
    // [KiCustomAccessRoutine0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165f00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe580, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x432f90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ffe60, 0x1fe000 bytes
    //
    _w26(sdk::unknown_ptr) custom_access_routine0;
    
    // [KiCustomAccessRoutine1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1651a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe040, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x432a50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ff920, 0x1fe000 bytes
    //
    _w27(sdk::unknown_ptr) custom_access_routine1;
    
    // [KiCustomAccessRoutine2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165260, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe100, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x432b10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ff9e0, 0x1fe000 bytes
    //
    _w28(sdk::unknown_ptr) custom_access_routine2;
    
    // [KiCustomAccessRoutine3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165c00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe280, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x432c90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ffb60, 0x1fe000 bytes
    //
    _w29(sdk::unknown_ptr) custom_access_routine3;
    
    // [KiCustomAccessRoutine4]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165020, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fdf80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x433050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ff860, 0x1fe000 bytes
    //
    _w30(sdk::unknown_ptr) custom_access_routine4;
    
    // [KiCustomAccessRoutine5]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1650e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fdec0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x433110, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ff7a0, 0x1fe000 bytes
    //
    _w31(sdk::unknown_ptr) custom_access_routine5;
    
    // [KiCustomAccessRoutine6]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165b40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe1c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x432bd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ffaa0, 0x1fe000 bytes
    //
    _w32(sdk::unknown_ptr) custom_access_routine6;
    
    // [KiCustomAccessRoutine7]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165cc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe340, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x432d50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ffc20, 0x1fe000 bytes
    //
    _w33(sdk::unknown_ptr) custom_access_routine7;
    
    // [KiCustomAccessRoutine8]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165d80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe400, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x432e10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ffce0, 0x1fe000 bytes
    //
    _w34(sdk::unknown_ptr) custom_access_routine8;
    
    // [KiCustomAccessRoutine9]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165e40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe4c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x432ed0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ffda0, 0x1fe000 bytes
    //
    _w35(sdk::unknown_ptr) custom_access_routine9;
    
    // [KiCustomRecurseRoutine0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165ee0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe560, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x432f70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ffe40, 0x1fe000 bytes
    //
    _w36(sdk::unknown_ptr) custom_recurse_routine0;
    
    // [KiCustomRecurseRoutine1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165180, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe020, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x432a30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ff900, 0x1fe000 bytes
    //
    _w37(sdk::unknown_ptr) custom_recurse_routine1;
    
    // [KiCustomRecurseRoutine2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165240, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe0e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x432af0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ff9c0, 0x1fe000 bytes
    //
    _w38(sdk::unknown_ptr) custom_recurse_routine2;
    
    // [KiCustomRecurseRoutine3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165be0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe260, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x432c70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ffb40, 0x1fe000 bytes
    //
    _w39(sdk::unknown_ptr) custom_recurse_routine3;
    
    // [KiCustomRecurseRoutine4]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165000, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fdf60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x433030, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ff840, 0x1fe000 bytes
    //
    _w40(sdk::unknown_ptr) custom_recurse_routine4;
    
    // [KiCustomRecurseRoutine5]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1650c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fdea0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4330f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ff780, 0x1fe000 bytes
    //
    _w41(sdk::unknown_ptr) custom_recurse_routine5;
    
    // [KiCustomRecurseRoutine6]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165b20, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe1a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x432bb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ffa80, 0x1fe000 bytes
    //
    _w42(sdk::unknown_ptr) custom_recurse_routine6;
    
    // [KiCustomRecurseRoutine7]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165ca0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe320, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x432d30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ffc00, 0x1fe000 bytes
    //
    _w43(sdk::unknown_ptr) custom_recurse_routine7;
    
    // [KiCustomRecurseRoutine8]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165d60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe3e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x432df0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ffcc0, 0x1fe000 bytes
    //
    _w44(sdk::unknown_ptr) custom_recurse_routine8;
    
    // [KiCustomRecurseRoutine9]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165e20, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe4a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x432eb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ffd80, 0x1fe000 bytes
    //
    _w45(sdk::unknown_ptr) custom_recurse_routine9;
    
    // [KiCycleDivisorLongTerm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa330, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa360, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c460, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa360, 0x1fe000 bytes
    //
    _w46(sdk::unknown_ptr) cycle_divisor_long_term;
    
    // [KiCycleDivisorShortTerm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa210, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa268, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c2b0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa268, 0x1fe000 bytes
    //
    _w47(sdk::unknown_ptr) cycle_divisor_short_term;
    
    // [KiCyclesPerClockQuantum]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa180, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa140, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c0d0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa140, 0x1fe000 bytes
    //
    _w48(sdk::unknown_ptr) cycles_per_clock_quantum;
    
    // [KiCyclesPerGeneration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa198, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa1e8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c120, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa1e8, 0x1fe000 bytes
    //
    _w49(sdk::unknown_ptr) cycles_per_generation;
    
    // [KiDebugPollInterval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa268, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2bc, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c308, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2bc, 0x1fe000 bytes
    //
    _w50(sdk::unknown_ptr) debug_poll_interval;
    
    // [KiDebugServiceTrap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16c6c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x404980, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x439ac0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x406280, 0x1fe000 bytes
    //
    _w51(sdk::unknown_ptr) debug_service_trap;
    
    // [KiDebugServiceTrapShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23fc00, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa12e40, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae2e40, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa11e40, 0x1fe000 bytes
    //
    _w52(sdk::unknown_ptr) debug_service_trap_shadow;
    
    // [KiDebugTrapOrFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1663c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fec40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x433740, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x400540, 0x1fe000 bytes
    //
    _w53(sdk::unknown_ptr) debug_trap_or_fault;
    
    // [KiDebugTrapOrFaultShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23f080, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa12180, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae2180, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa11180, 0x1fe000 bytes
    //
    _w54(sdk::unknown_ptr) debug_trap_or_fault_shadow;
    
    // [KiDebuggerIsStallOwner]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a520, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4c44, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7ba0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4c40, 0x1fe000 bytes
    //
    _w55(sdk::unknown_ptr) debugger_is_stall_owner;
    
    // [KiDebuggerOwner]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308a50, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b1a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41340, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b128, 0x1fe000 bytes
    //
    _w56(sdk::unknown_ptr) debugger_owner;
    
    // [KiDecodeMcaFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x154960, 0x32828 bytes
    // ntoskrnl.exe .text:0x3d6670, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3f6040, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3d7740, 0x1fe000 bytes
    //
    _w57(sdk::unknown_ptr) decode_mca_fault;
    
    // [KiDecrementProcessStackCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa04d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2dce88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fee18, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25e0f8, 0x1fe000 bytes
    //
    _w58(sdk::unknown_ptr) decrement_process_stack_count;
    
    // [KiDefaultClockIntervalRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30ed40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31740, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41b00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31480, 0x1fe000 bytes
    //
    _w59(sdk::unknown_ptr) default_clock_interval_request;
    
    // [KiDefaultHeteroCpuPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa07c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa078, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c0a4, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa078, 0x1fe000 bytes
    //
    _w60(sdk::unknown_ptr) default_hetero_cpu_policy;
    
    // [KiDeferGroupSchedulingPreemption]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x98764, 0x32828 bytes
    // ntoskrnl.exe .text:0x2899e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2169a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x333640, 0x1fe000 bytes
    //
    _w61(sdk::unknown_ptr) defer_group_scheduling_preemption;
    
    // [KiDeliverApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x525d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e6820, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2176c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x267b30, 0x1fe000 bytes
    //
    _w62(sdk::unknown_ptr) deliver_apc;
    
    // [KiDesiredHeteroCpuPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa0b0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa144, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c17c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa144, 0x1fe000 bytes
    //
    _w63(sdk::unknown_ptr) desired_hetero_cpu_policy;
    
    // [KiDetachProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9fe10, 0x32828 bytes
    // ntoskrnl.exe .text:0x2dd680, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2dee30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25e8f0, 0x1fe000 bytes
    //
    _w64(sdk::unknown_ptr) detach_process;
    
    // [KiDetectFpuLeakage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3c8280, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98c2a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa732d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98b2a0, 0x1fe000 bytes
    //
    _w65(sdk::unknown_ptr) detect_fpu_leakage;
    
    // [KiDetectKvaLeakage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3ddbc8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9990f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa77a7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x998818, 0x1fe000 bytes
    //
    _w66(sdk::unknown_ptr) detect_kva_leakage;
    
    // [KiDirectQuantumTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab3f0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb69c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd08, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb698, 0x1fe000 bytes
    //
    _w67(sdk::unknown_ptr) direct_quantum_target;
    
    // [KiDirectSwitchThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x47dc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x289dc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x218960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x333a20, 0x1fe000 bytes
    //
    _w68(sdk::unknown_ptr) direct_switch_thread;
    
    // [KiDisableCacheErrataSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1db528, 0x32828 bytes
    // ntoskrnl.exe .text:0x51c434, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x564db0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51c234, 0x1fe000 bytes
    //
    _w69(sdk::unknown_ptr) disable_cache_errata_source;
    
    // [KiDisableLightWeightSuspend]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa26c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb924, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dedc, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb924, 0x1fe000 bytes
    //
    _w70(sdk::unknown_ptr) disable_light_weight_suspend;
    
    // [KiDisconnectInterruptCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x121e58, 0x32828 bytes
    // ntoskrnl.exe .text:0x3729dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ddd04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x373d5c, 0x1fe000 bytes
    //
    _w71(sdk::unknown_ptr) disconnect_interrupt_common;
    
    // [KiDisconnectInterruptInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x121f7c, 0x32828 bytes
    // ntoskrnl.exe .text:0x372b24, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dde4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x373ea4, 0x1fe000 bytes
    //
    _w72(sdk::unknown_ptr) disconnect_interrupt_internal;
    
    // [KiDisconnectSecondaryInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d82f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x51345c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55d408, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51326c, 0x1fe000 bytes
    //
    _w73(sdk::unknown_ptr) disconnect_secondary_interrupt;
    
    // [KiDisconnectSecondaryInterruptInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d83c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x5135a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55d550, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5133b0, 0x1fe000 bytes
    //
    _w74(sdk::unknown_ptr) disconnect_secondary_interrupt_internal;
    
    // [KiDispatchCallout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd48b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x243a80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x396810, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x323f40, 0x1fe000 bytes
    //
    _w75(sdk::unknown_ptr) dispatch_callout;
    
    // [KiDispatchException]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa2c50, 0x32828 bytes
    // ntoskrnl.exe .text:0x283b60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20fd10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32aa00, 0x1fe000 bytes
    //
    _w76(sdk::unknown_ptr) dispatch_exception;
    
    // [KiDispatchInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x162690, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fac90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2bb6d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fc570, 0x1fe000 bytes
    //
    _w77(sdk::unknown_ptr) dispatch_interrupt;
    
    // [KiDispatchPassiveInterrupts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dad48, 0x32828 bytes
    // ntoskrnl.exe .text:0x51b5b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x460c20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51b3b0, 0x1fe000 bytes
    //
    _w78(sdk::unknown_ptr) dispatch_passive_interrupts;
    
    // [KiDisplayBlueScreen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d788c, 0x32828 bytes
    // ntoskrnl.exe .text:0x512310, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55610c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x512120, 0x1fe000 bytes
    //
    _w79(sdk::unknown_ptr) display_blue_screen;
    
    // [KiDivideErrorFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x166000, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe900, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x433400, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x400200, 0x1fe000 bytes
    //
    _w80(sdk::unknown_ptr) divide_error_fault;
    
    // [KiDivideErrorFaultShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23f000, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa12100, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae2100, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa11100, 0x1fe000 bytes
    //
    _w81(sdk::unknown_ptr) divide_error_fault_shadow;
    
    // [KiDoubleFaultAbort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x168640, 0x32828 bytes
    // ntoskrnl.exe .text:0x4009c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x435740, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4022c0, 0x1fe000 bytes
    //
    _w82(sdk::unknown_ptr) double_fault_abort;
    
    // [KiDoubleFaultAbortShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23f400, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa12540, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae2540, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa11540, 0x1fe000 bytes
    //
    _w83(sdk::unknown_ptr) double_fault_abort_shadow;
    
    // [KiDpcDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77a190, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa36270, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb20940, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa35270, 0x1fe000 bytes
    //
    _w84(sdk::unknown_ptr) dpc_dispatch;
    
    // [KiDpcInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15f860, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fa0b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42f100, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fb990, 0x1fe000 bytes
    //
    _w85(sdk::unknown_ptr) dpc_interrupt;
    
    // [KiDpcInterruptBypass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15fda0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fa560, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42f640, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fbe40, 0x1fe000 bytes
    //
    _w86(sdk::unknown_ptr) dpc_interrupt_bypass;
    
    // [KiDpcInterruptShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23fd00, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa12f40, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae2f40, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa11f40, 0x1fe000 bytes
    //
    _w87(sdk::unknown_ptr) dpc_interrupt_shadow;
    
    // [KiDpcWatchdog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcf834, 0x32828 bytes
    // ntoskrnl.exe .text:0x26b2d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x568060, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ee360, 0x1fe000 bytes
    //
    _w88(sdk::unknown_ptr) dpc_watchdog;
    
    // [KiDpcWatchdogCaptureStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d48d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x50bff0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5571a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50bdb0, 0x1fe000 bytes
    //
    _w89(sdk::unknown_ptr) dpc_watchdog_capture_stack;
    
    // [KiDumpParameterImages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d7bb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x5126a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5564a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5124b4, 0x1fe000 bytes
    //
    _w90(sdk::unknown_ptr) dump_parameter_images;
    
    // [KiDynamicHeteroCpuPolicyExpectedCycles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa1bc, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa23c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c310, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa23c, 0x1fe000 bytes
    //
    _w91(sdk::unknown_ptr) dynamic_hetero_cpu_policy_expected_cycles;
    
    // [KiDynamicHeteroCpuPolicyExpectedRuntime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa1c0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa148, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c184, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa148, 0x1fe000 bytes
    //
    _w92(sdk::unknown_ptr) dynamic_hetero_cpu_policy_expected_runtime;
    
    // [KiDynamicHeteroCpuPolicyImportantPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa184, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa0cc, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c180, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa0cc, 0x1fe000 bytes
    //
    _w93(sdk::unknown_ptr) dynamic_hetero_cpu_policy_important_priority;
    
    // [KiDynamicHeteroCpuPolicyMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa058, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa030, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c078, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa030, 0x1fe000 bytes
    //
    _w94(sdk::unknown_ptr) dynamic_hetero_cpu_policy_mask;
    
    // [KiDynamicProcessorAddNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d8074, 0x32828 bytes
    // ntoskrnl.exe .text:0x513068, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55d2f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x512e78, 0x1fe000 bytes
    //
    _w95(sdk::unknown_ptr) dynamic_processor_add_notification;
    
    // [KiDynamicProcessorLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f2c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31c80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41f40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31be0, 0x1fe000 bytes
    //
    _w96(sdk::unknown_ptr) dynamic_processor_lock;
    
    // [KiDynamicTickCancellations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30ed20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc3150c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41744, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31464, 0x1fe000 bytes
    //
    _w97(sdk::unknown_ptr) dynamic_tick_cancellations;
    
    // [KiDynamicTickDisableReason]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa270, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2b0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c2fc, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2b0, 0x1fe000 bytes
    //
    _w98(sdk::unknown_ptr) dynamic_tick_disable_reason;
    
    // [KiEmulateAtlThunk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ddbac, 0x32828 bytes
    // ntoskrnl.exe .text:0x520be0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56c924, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5209f0, 0x1fe000 bytes
    //
    _w99(sdk::unknown_ptr) emulate_atl_thunk;
    
    // [KiEnableGroupScheduling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1488ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c6d4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e3988, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c7c1c, 0x1fe000 bytes
    //
    _x00(sdk::unknown_ptr) enable_group_scheduling;
    
    // [KiEnableKvaShadowing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3ddc7c, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99b66c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa79214, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99a6f0, 0x1fe000 bytes
    //
    _x01(sdk::unknown_ptr) enable_kva_shadowing;
    
    // [KiEnableXSave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d27e8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9974d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa762e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x996874, 0x1fe000 bytes
    //
    _x02(sdk::unknown_ptr) enable_x_save;
    
    // [KiEncls]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15c420, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f4d40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x429030, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f6620, 0x1fe000 bytes
    //
    _x03(sdk::unknown_ptr) encls;
    
    // [KiEnclsDebugRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15c440, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f4d60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x429050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f6640, 0x1fe000 bytes
    //
    _x04(sdk::unknown_ptr) encls_debug_read;
    
    // [KiEndCounterAccumulation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d9838, 0x32828 bytes
    // ntoskrnl.exe .text:0x516160, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55fd64, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x515f70, 0x1fe000 bytes
    //
    _x05(sdk::unknown_ptr) end_counter_accumulation;
    
    // [KiEndDebugAccumulation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7a5e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x517fc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x207730, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x517dd0, 0x1fe000 bytes
    //
    _x06(sdk::unknown_ptr) end_debug_accumulation;
    
    // [KiEndThreadAccountingPeriod]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5d2a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x303330, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2bd660, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26d7b0, 0x1fe000 bytes
    //
    _x07(sdk::unknown_ptr) end_thread_accounting_period;
    
    // [KiEndThreadCycleAccumulation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5d210, 0x32828 bytes
    // ntoskrnl.exe .text:0x28ae80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21d150, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x330600, 0x1fe000 bytes
    //
    _x08(sdk::unknown_ptr) end_thread_cycle_accumulation;
    
    // [KiEntropyDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc9fb4, 0x32828 bytes
    // ntoskrnl.exe .text:0x2631a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36f710, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x313790, 0x1fe000 bytes
    //
    _x09(sdk::unknown_ptr) entropy_dpc_routine;
    
    // [KiEntropyQueueDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xca6d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x264450, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x370fc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x314690, 0x1fe000 bytes
    //
    _x10(sdk::unknown_ptr) entropy_queue_dpc;
    
    // [KiEntropyTimingRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab538, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb970, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1df38, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb978, 0x1fe000 bytes
    //
    _x11(sdk::unknown_ptr) entropy_timing_routine;
    
    // [KiEnumerateCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd5510, 0x32828 bytes
    // ntoskrnl.exe .text:0x37c910, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39c810, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37dc90, 0x1fe000 bytes
    //
    _x12(sdk::unknown_ptr) enumerate_callback;
    
    // [KiEnumerateNextProcessorNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x99398, 0x32828 bytes
    // ntoskrnl.exe .text:0x30adf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b4ff4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2762e0, 0x1fe000 bytes
    //
    _x13(sdk::unknown_ptr) enumerate_next_processor_number;
    
    // [KiErrata671Present]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITKDBG:0x2535d0, 0x32828 bytes
    // ntoskrnl.exe INITKDBG:0xa0f180, 0x1fe000 bytes
    // ntoskrnl.exe INITKDBG:0xaff5f0, 0x1fd000 bytes
    // ntoskrnl.exe INITKDBG:0xa0e180, 0x1fe000 bytes
    //
    _x14(sdk::unknown_ptr) errata671_present;
    
    // [KiEvaluateGroupSchedulingPreemption]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x47c00, 0x32828 bytes
    // ntoskrnl.exe .text:0x289c20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21a180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x333880, 0x1fe000 bytes
    //
    _x15(sdk::unknown_ptr) evaluate_group_scheduling_preemption;
    
    // [KiEventClockStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbfe14, 0x32828 bytes
    // ntoskrnl.exe .text:0x291838, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33c800, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x24187c, 0x1fe000 bytes
    //
    _x16(sdk::unknown_ptr) event_clock_state_change;
    
    // [KiExceptionDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16dbc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x405e80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x43b0c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x407780, 0x1fe000 bytes
    //
    _x17(sdk::unknown_ptr) exception_dispatch;
    
    // [KiExecuteAllDpcs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4dd00, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e9730, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b9370, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x207510, 0x1fe000 bytes
    //
    _x18(sdk::unknown_ptr) execute_all_dpcs;
    
    // [KiExecuteDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x139e30, 0x32828 bytes
    // ntoskrnl.exe .text:0x3aff90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d6ce0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ab9f0, 0x1fe000 bytes
    //
    _x19(sdk::unknown_ptr) execute_dpc;
    
    // [KiExitDispatcher]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b160, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c9720, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c1f40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x24a750, 0x1fe000 bytes
    //
    _x20(sdk::unknown_ptr) exit_dispatcher;
    
    // [KiExitThreadWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa17a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x27f320, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x215c90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x329af0, 0x1fe000 bytes
    //
    _x21(sdk::unknown_ptr) exit_thread_wait;
    
    // [KiExpandKernelStackAndCalloutOnStackSegment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x963b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b8ad0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x24d5b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x354650, 0x1fe000 bytes
    //
    _x22(sdk::unknown_ptr) expand_kernel_stack_and_callout_on_stack_segment;
    
    // [KiExpandKernelStackAndCalloutSwitchStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x961b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b8970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2cf8a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3544f0, 0x1fe000 bytes
    //
    _x23(sdk::unknown_ptr) expand_kernel_stack_and_callout_switch_stack;
    
    // [KiExpireTimer2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfbac0, 0x32828 bytes
    // ntoskrnl.exe .text:0x28e3a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x27bae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x243360, 0x1fe000 bytes
    //
    _x24(sdk::unknown_ptr) expire_timer2;
    
    // [KiExpireTimerTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12147c, 0x32828 bytes
    // ntoskrnl.exe .text:0x384d60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5680b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x385b20, 0x1fe000 bytes
    //
    _x25(sdk::unknown_ptr) expire_timer_table;
    
    // [KiExtendProcessAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dc260, 0x32828 bytes
    // ntoskrnl.exe .text:0x51e60c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56a8d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51e41c, 0x1fe000 bytes
    //
    _x26(sdk::unknown_ptr) extend_process_affinity;
    
    // [KiFastExitThreadWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa171c, 0x32828 bytes
    // ntoskrnl.exe .text:0x27f234, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x215c04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x329a04, 0x1fe000 bytes
    //
    _x27(sdk::unknown_ptr) fast_exit_thread_wait;
    
    // [KiFastFailDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16de80, 0x32828 bytes
    // ntoskrnl.exe .text:0x4061c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x43b440, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x407ac0, 0x1fe000 bytes
    //
    _x28(sdk::unknown_ptr) fast_fail_dispatch;
    
    // [KiFastGetCallersAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77a2f4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa3669c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb21148, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa36040, 0x1fe000 bytes
    //
    _x29(sdk::unknown_ptr) fast_get_callers_address;
    
    // [KiFastReadyThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa169c, 0x32828 bytes
    // ntoskrnl.exe .text:0x27f17c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x214c1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32994c, 0x1fe000 bytes
    //
    _x30(sdk::unknown_ptr) fast_ready_thread;
    
    // [KiFatalExceptionFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a6a70, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6ed6c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4b698, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6e324, 0x1fe000 bytes
    //
    _x31(sdk::unknown_ptr) fatal_exception_filter;
    
    // [KiFatalExceptionHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d549c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f4d2c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x536748, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f4aec, 0x1fe000 bytes
    //
    _x32(sdk::unknown_ptr) fatal_exception_handler;
    
    // [KiFatalFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d54c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x50ed80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x558b90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50eb90, 0x1fe000 bytes
    //
    _x33(sdk::unknown_ptr) fatal_filter;
    
    // [KiFeatureSettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308820, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b240, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41480, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b1a0, 0x1fe000 bytes
    //
    _x34(sdk::unknown_ptr) feature_settings;
    
    // [KiFilterFiberContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763a80, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19ba0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03c30, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18ba0, 0x1fe000 bytes
    //
    _x35(sdk::unknown_ptr) filter_fiber_context;
    
    // [KiFinalizeTimer2Disablement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc39b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x290cdc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f97a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35b970, 0x1fe000 bytes
    //
    _x36(sdk::unknown_ptr) finalize_timer2_disablement;
    
    // [KiFindFirstAvailableNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13a17c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b057c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b7d20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3abfdc, 0x1fe000 bytes
    //
    _x37(sdk::unknown_ptr) find_first_available_node;
    
    // [KiFindNextTimerDueTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x584b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3098c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x22b280, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x273670, 0x1fe000 bytes
    //
    _x38(sdk::unknown_ptr) find_next_timer_due_time;
    
    // [KiFloatingErrorFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16a480, 0x32828 bytes
    // ntoskrnl.exe .text:0x402340, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x437200, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x403c40, 0x1fe000 bytes
    //
    _x39(sdk::unknown_ptr) floating_error_fault;
    
    // [KiFloatingErrorFaultShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23f780, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa128c0, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae28c0, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa118c0, 0x1fe000 bytes
    //
    _x40(sdk::unknown_ptr) floating_error_fault_shadow;
    
    // [KiFlushAddressSpaceTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d89e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x38babc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x395be0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38cb5c, 0x1fe000 bytes
    //
    _x41(sdk::unknown_ptr) flush_address_space_tb;
    
    // [KiFlushCacheLines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15f150, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f7e20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42cb30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f9700, 0x1fe000 bytes
    //
    _x42(sdk::unknown_ptr) flush_cache_lines;
    
    // [KiFlushCurrentTbWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b130, 0x32828 bytes
    // ntoskrnl.exe .text:0x24dd00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35aa00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fb5d0, 0x1fe000 bytes
    //
    _x43(sdk::unknown_ptr) flush_current_tb_worker;
    
    // [KiFlushPcid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab220, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb409, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da06, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb409, 0x1fe000 bytes
    //
    _x44(sdk::unknown_ptr) flush_pcid;
    
    // [KiFlushProcessTbWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dcea4, 0x32828 bytes
    // ntoskrnl.exe .text:0x25f380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x373ce0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30f9d0, 0x1fe000 bytes
    //
    _x45(sdk::unknown_ptr) flush_process_tb_worker;
    
    // [KiFlushQueueApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa0940, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b79e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x214158, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x355df0, 0x1fe000 bytes
    //
    _x46(sdk::unknown_ptr) flush_queue_apc;
    
    // [KiFlushQueuedDpcsWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x99818, 0x32828 bytes
    // ntoskrnl.exe .text:0x268c80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x378f70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x319e50, 0x1fe000 bytes
    //
    _x47(sdk::unknown_ptr) flush_queued_dpcs_worker;
    
    // [KiFlushRangeAllCaches]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d8abc, 0x32828 bytes
    // ntoskrnl.exe .text:0x513dc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55db90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x513bd0, 0x1fe000 bytes
    //
    _x48(sdk::unknown_ptr) flush_range_all_caches;
    
    // [KiFlushRangeTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12dbcc, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c4190, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39e160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c4f00, 0x1fe000 bytes
    //
    _x49(sdk::unknown_ptr) flush_range_tb;
    
    // [KiFlushRangeWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x36290, 0x32828 bytes
    // ntoskrnl.exe .text:0x23e710, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34b370, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2eb360, 0x1fe000 bytes
    //
    _x50(sdk::unknown_ptr) flush_range_worker;
    
    // [KiFlushReadyLists]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dd414, 0x32828 bytes
    // ntoskrnl.exe .text:0x51fd0c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5697d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51fb1c, 0x1fe000 bytes
    //
    _x51(sdk::unknown_ptr) flush_ready_lists;
    
    // [KiFlushSingleTbWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dcef8, 0x32828 bytes
    // ntoskrnl.exe .text:0x261ec0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36d260, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x312470, 0x1fe000 bytes
    //
    _x52(sdk::unknown_ptr) flush_single_tb_worker;
    
    // [KiFlushWriteBuffersTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _x53(sdk::unknown_ptr) flush_write_buffers_target;
    
    // [KiForceSymbolReferences]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bc934, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa9011c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb81368, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8f39c, 0x1fe000 bytes
    //
    _x54(sdk::unknown_ptr) force_symbol_references;
    
    // [KiForceSymbolReferencesTrigger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f530, 0x32828 bytes
    // ntoskrnl.exe .data:0xc32058, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc422f8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc32008, 0x1fe000 bytes
    //
    _x55(sdk::unknown_ptr) force_symbol_references_trigger;
    
    // [KiForegroundState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f300, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31cc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41f80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31c20, 0x1fe000 bytes
    //
    _x56(sdk::unknown_ptr) foreground_state;
    
    // [KiForegroundTimerCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xca224, 0x32828 bytes
    // ntoskrnl.exe .text:0x260490, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39b2f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x310d10, 0x1fe000 bytes
    //
    _x57(sdk::unknown_ptr) foreground_timer_callback;
    
    // [KiForwardTick]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x58b90, 0x32828 bytes
    // ntoskrnl.exe .text:0x30a8d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x396570, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x275dc0, 0x1fe000 bytes
    //
    _x58(sdk::unknown_ptr) forward_tick;
    
    // [KiFpuLeakage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab46c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb724, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd90, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb724, 0x1fe000 bytes
    //
    _x59(sdk::unknown_ptr) fpu_leakage;
    
    // [KiFreezeExecutionLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be300, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd222c0, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd482c0, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd222c0, 0x1fe000 bytes
    //
    _x60(sdk::unknown_ptr) freeze_execution_lock;
    
    // [KiFreezeFlag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f1cc, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31b2c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41dec, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31a8c, 0x1fe000 bytes
    //
    _x61(sdk::unknown_ptr) freeze_flag;
    
    // [KiFreezeLockBackup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3bea00, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd22940, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd48900, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd22940, 0x1fe000 bytes
    //
    _x62(sdk::unknown_ptr) freeze_lock_backup;
    
    // [KiFreezeOwner]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308a38, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b198, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41330, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b118, 0x1fe000 bytes
    //
    _x63(sdk::unknown_ptr) freeze_owner;
    
    // [KiFreezeSingleThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8aeac, 0x32828 bytes
    // ntoskrnl.exe .text:0x20bd10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30893c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x358dac, 0x1fe000 bytes
    //
    _x64(sdk::unknown_ptr) freeze_single_thread;
    
    // [KiFreezeStallOwner]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308a48, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b1b8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41350, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b130, 0x1fe000 bytes
    //
    _x65(sdk::unknown_ptr) freeze_stall_owner;
    
    // [KiFreezeTargetExecution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7a440, 0x32828 bytes
    // ntoskrnl.exe .text:0x518070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x207110, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x517e80, 0x1fe000 bytes
    //
    _x66(sdk::function<void(nt::trapframe*, nt::exframe*)>*) freeze_target_execution;
    
    // [KiFreezeTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f7c78, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12568, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0bb58, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc125d8, 0x1fe000 bytes
    //
    _x67(sdk::unknown_ptr) freeze_timeout;
    
    // [KiGeneralProtectionFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x169980, 0x32828 bytes
    // ntoskrnl.exe .text:0x4019c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x436840, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4032c0, 0x1fe000 bytes
    //
    _x68(sdk::unknown_ptr) general_protection_fault;
    
    // [KiGeneralProtectionFaultShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23f680, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa127c0, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae27c0, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa117c0, 0x1fe000 bytes
    //
    _x69(sdk::unknown_ptr) general_protection_fault_shadow;
    
    // [KiGenerateHeteroSets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1da644, 0x32828 bytes
    // ntoskrnl.exe .text:0x5194c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45f978, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5192d8, 0x1fe000 bytes
    //
    _x70(sdk::unknown_ptr) generate_hetero_sets;
    
    // [KiGenerationEndTick]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f508, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31fc8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc422a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31f60, 0x1fe000 bytes
    //
    _x71(sdk::unknown_ptr) generation_end_tick;
    
    // [KiGenerationTicks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab3e8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb694, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd00, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb694, 0x1fe000 bytes
    //
    _x72(sdk::unknown_ptr) generation_ticks;
    
    // [KiGetComparisonRanks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcbdb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x265460, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37ccd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x315840, 0x1fe000 bytes
    //
    _x73(sdk::unknown_ptr) get_comparison_ranks;
    
    // [KiGetCpuSetData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd5610, 0x32828 bytes
    // ntoskrnl.exe .text:0x271654, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38594c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3231e4, 0x1fe000 bytes
    //
    _x74(sdk::unknown_ptr) get_cpu_set_data;
    
    // [KiGetCpuVendor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d43f8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x997e98, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa741c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9975a4, 0x1fe000 bytes
    //
    _x75(sdk::unknown_ptr) get_cpu_vendor;
    
    // [KiGetCurrentGroupCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd56c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x271848, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385c90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3233d8, 0x1fe000 bytes
    //
    _x76(sdk::unknown_ptr) get_current_group_count;
    
    // [KiGetDeepIdleProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xaa534, 0x32828 bytes
    // ntoskrnl.exe .text:0x204cf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33a100, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x326850, 0x1fe000 bytes
    //
    _x77(sdk::unknown_ptr) get_deep_idle_processors;
    
    // [KiGetGdtIdt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITKDBG:0x253480, 0x32828 bytes
    // ntoskrnl.exe INITKDBG:0xa0ef60, 0x1fe000 bytes
    // ntoskrnl.exe INITKDBG:0xaff3d0, 0x1fd000 bytes
    // ntoskrnl.exe INITKDBG:0xa0df60, 0x1fe000 bytes
    //
    _x78(sdk::unknown_ptr) get_gdt_idt;
    
    // [KiGetHalExtensionList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bc9b4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa7103c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb81664, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa702d0, 0x1fe000 bytes
    //
    _x79(sdk::unknown_ptr) get_hal_extension_list;
    
    // [KiGetHalExtensionModuleFromLinks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bc9cc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa90440, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb81680, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8f6c0, 0x1fe000 bytes
    //
    _x80(sdk::unknown_ptr) get_hal_extension_module_from_links;
    
    // [KiGetInterruptObjectAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xccf20, 0x32828 bytes
    // ntoskrnl.exe .text:0x375000, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x398fd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x376380, 0x1fe000 bytes
    //
    _x81(sdk::unknown_ptr) get_interrupt_object_address;
    
    // [KiGetL2L3AssociativityAmd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dd6e0, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9accb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8b544, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9abc28, 0x1fe000 bytes
    //
    _x82(sdk::unknown_ptr) get_l2l3_associativity_amd;
    
    // [KiGetLoadOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bc9d4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa710e4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8168c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa70328, 0x1fe000 bytes
    //
    _x83(sdk::unknown_ptr) get_load_options;
    
    // [KiGetNextTimerExpirationDueTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb50c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3095e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x22af00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x273390, 0x1fe000 bytes
    //
    _x84(sdk::unknown_ptr) get_next_timer_expiration_due_time;
    
    // [KiGetPendingTick]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xccf04, 0x32828 bytes
    // ntoskrnl.exe .text:0x25bef0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a635c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30ba40, 0x1fe000 bytes
    //
    _x85(sdk::unknown_ptr) get_pending_tick;
    
    // [KiGetProcessCpuSetMaskPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1da230, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c13e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d2be8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c21f0, 0x1fe000 bytes
    //
    _x86(sdk::unknown_ptr) get_process_cpu_set_mask_pointer;
    
    // [KiGetProcessorInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x144134, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b6fcc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d1c10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b787c, 0x1fe000 bytes
    //
    _x87(sdk::unknown_ptr) get_processor_information;
    
    // [KiGetThreadCpuSetMaskPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x973b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a1188, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x212b20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3377fc, 0x1fe000 bytes
    //
    _x88(sdk::unknown_ptr) get_thread_cpu_set_mask_pointer;
    
    // [KiGetThreadEffectiveRankNonZero]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x99040, 0x32828 bytes
    // ntoskrnl.exe .text:0x28aa80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21a3d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3346e0, 0x1fe000 bytes
    //
    _x89(sdk::unknown_ptr) get_thread_effective_rank_non_zero;
    
    // [KiGetTrapFrameMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xce5f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x390650, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39c570, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3916a0, 0x1fe000 bytes
    //
    _x90(sdk::unknown_ptr) get_trap_frame_mode;
    
    // [KiGetXSaveSupportedFeatures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x143fec, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a3c80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d1a4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a9600, 0x1fe000 bytes
    //
    _x91(sdk::unknown_ptr) get_x_save_supported_features;
    
    // [KiGlobalSecondaryIDT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308b88, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b3a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41608, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b310, 0x1fe000 bytes
    //
    _x92(sdk::unknown_ptr) global_secondary_idt;
    
    // [KiGroupBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ad730, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfca30, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1f580, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfca30, 0x1fe000 bytes
    //
    _x93(sdk::unknown_ptr) group_block;
    
    // [KiGroupSchedulingEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab222, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb43e, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da65, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb43e, 0x1fe000 bytes
    //
    _x94(sdk::unknown_ptr) group_scheduling_enabled;
    
    // [KiGroupSchedulingGenerationEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5cff0, 0x32828 bytes
    // ntoskrnl.exe .text:0x28ab24, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32c110, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3302a0, 0x1fe000 bytes
    //
    _x95(sdk::unknown_ptr) group_scheduling_generation_end;
    
    // [KiGroupSchedulingMinimumRate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f1d4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31b30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41e14, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31aa0, 0x1fe000 bytes
    //
    _x96(sdk::unknown_ptr) group_scheduling_minimum_rate;
    
    // [KiGroupSchedulingMinimumWeight]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f1f0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31b34, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41e18, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31ac0, 0x1fe000 bytes
    //
    _x97(sdk::unknown_ptr) group_scheduling_minimum_weight;
    
    // [KiGroupSchedulingMoveThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x99cf0, 0x32828 bytes
    // ntoskrnl.exe .text:0x29087c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21b660, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3363ec, 0x1fe000 bytes
    //
    _x98(sdk::unknown_ptr) group_scheduling_move_thread;
    
    // [KiGroupSchedulingNumerator]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa1b4, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa234, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c27c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa234, 0x1fe000 bytes
    //
    _x99(sdk::unknown_ptr) group_scheduling_numerator;
    
    // [KiGroupSchedulingOverQuotaMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f7bd0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc110c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0ba50, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11130, 0x1fe000 bytes
    //
    _y00(sdk::unknown_ptr) group_scheduling_over_quota_mask;
    
    // [KiGroupSchedulingQuantumEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5cc10, 0x32828 bytes
    // ntoskrnl.exe .text:0x28c5f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21827c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x331d70, 0x1fe000 bytes
    //
    _y01(sdk::unknown_ptr) group_scheduling_quantum_end;
    
    // [KiGroupSchedulingTotalWeight]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f210, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31b60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41df0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31aa8, 0x1fe000 bytes
    //
    _y02(sdk::unknown_ptr) group_scheduling_total_weight;
    
    // [KiHandleBound]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d54e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x50edc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x558c00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50ebd0, 0x1fe000 bytes
    //
    _y03(sdk::unknown_ptr) handle_bound;
    
    // [KiHardwareTrigger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30ec88, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31448, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc4167c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31388, 0x1fe000 bytes
    //
    _y04(sdk::unknown_ptr) hardware_trigger;
    
    // [KiHardwareTriggerLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fb960, 0x32828 bytes
    // ntoskrnl.exe .data:0xc13bf8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0ec80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc13c68, 0x1fe000 bytes
    //
    _y05(sdk::unknown_ptr) hardware_trigger_lock;
    
    // [KiHeadlessDisplayString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d7d04, 0x32828 bytes
    // ntoskrnl.exe .text:0x512808, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55661c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x512618, 0x1fe000 bytes
    //
    _y06(sdk::unknown_ptr) headless_display_string;
    
    // [KiHeteroChooseTargetProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1da6b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x519710, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45fbee, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x519520, 0x1fe000 bytes
    //
    _y07(sdk::unknown_ptr) hetero_choose_target_processor;
    
    // [KiHvInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15fde0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f84b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42d210, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f9d90, 0x1fe000 bytes
    //
    _y08(sdk::unknown_ptr) hv_interrupt;
    
    // [KiHvInterruptShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23fd80, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa12fc0, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae2fc0, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa11fc0, 0x1fe000 bytes
    //
    _y09(sdk::unknown_ptr) hv_interrupt_shadow;
    
    // [KiHwCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308a60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b200, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41440, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b160, 0x1fe000 bytes
    //
    _y10(sdk::unknown_ptr) hw_counters;
    
    // [KiHwCountersCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x343124, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9cf8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17c54, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9cf8, 0x1fe000 bytes
    //
    _y11(sdk::unknown_ptr) hw_counters_count;
    
    // [KiHwPolicyDriverImageBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30ec90, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31468, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc416b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc313a8, 0x1fe000 bytes
    //
    _y12(sdk::unknown_ptr) hw_policy_driver_image_base;
    
    // [KiHwPolicyDriverNotPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30ec8c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31470, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc416b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc313b0, 0x1fe000 bytes
    //
    _y13(sdk::unknown_ptr) hw_policy_driver_not_present;
    
    // [KiHwPolicyFindDriverImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79ed98, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5d978, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4f8c8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5d818, 0x1fe000 bytes
    //
    _y14(sdk::unknown_ptr) hw_policy_find_driver_image;
    
    // [KiHypervisorInitiatedCrashDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x343120, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9ce8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd172f8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9ce8, 0x1fe000 bytes
    //
    _y15(sdk::unknown_ptr) hypervisor_initiated_crash_dump;
    
    // [KiIa32MiscEnable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab6c0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbad0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e1c8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbad0, 0x1fe000 bytes
    //
    _y16(sdk::unknown_ptr) ia32_misc_enable;
    
    // [KiIdealDpcRate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa178, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa158, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c178, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa158, 0x1fe000 bytes
    //
    _y17(sdk::unknown_ptr) ideal_dpc_rate;
    
    // [KiIdleLoop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ee70, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f7970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42c010, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f9250, 0x1fe000 bytes
    //
    _y18(sdk::unknown_ptr) idle_loop;
    
    // [KiIdleSchedule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5d180, 0x32828 bytes
    // ntoskrnl.exe .text:0x28ad90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21cf60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x330510, 0x1fe000 bytes
    //
    _y19(sdk::unknown_ptr) idle_schedule;
    
    // [KiInSwapProcesses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbdea4, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c3598, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3623f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2445c8, 0x1fe000 bytes
    //
    _y20(sdk::unknown_ptr) in_swap_processes;
    
    // [KiInSwapSingleProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa05b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x242f40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x362edc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ef380, 0x1fe000 bytes
    //
    _y21(sdk::unknown_ptr) in_swap_single_process;
    
    // [KiIncrementConcurrencyCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc3ecc, 0x32828 bytes
    // ntoskrnl.exe .text:0x270c1c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x308400, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3223dc, 0x1fe000 bytes
    //
    _y22(sdk::unknown_ptr) increment_concurrency_count;
    
    // [KiInitData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce490, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd545c0, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f5c0, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd545c0, 0x1fe000 bytes
    //
    _y23(sdk::unknown_ptr) init_data;
    
    // [KiInitDynamicProcessorIpi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d80dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5130e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55d370, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x512ef0, 0x1fe000 bytes
    //
    _y24(sdk::unknown_ptr) init_dynamic_processor_ipi;
    
    // [KiInitMachineDependent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x139c74, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b008c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d6ae8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3abaec, 0x1fe000 bytes
    //
    _y25(sdk::unknown_ptr) init_machine_dependent;
    
    // [KiInitPrcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d3520, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9986a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa758b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x997dc8, 0x1fe000 bytes
    //
    _y26(sdk::unknown_ptr) init_prcb;
    
    // [KiInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79e8c8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa64030, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4e0f4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5ff00, 0x1fe000 bytes
    //
    _y27(sdk::unknown_ptr) init_system;
    
    // [KiInitialProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3bf940, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd23a00, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd48f40, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd23a00, 0x1fe000 bytes
    //
    _y28(sdk::unknown_ptr) initial_process;
    
    // [KiInitialThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3c0940, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd26600, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd4c6c0, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd26600, 0x1fe000 bytes
    //
    _y29(sdk::unknown_ptr) initial_thread;
    
    // [KiInitializeBootStructures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d300c, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x998070, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa752c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9977a0, 0x1fe000 bytes
    //
    _y30(sdk::unknown_ptr) initialize_boot_structures;
    
    // [KiInitializeCacheErrataSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bd0e4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa90bfc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb81f8c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8fe7c, 0x1fe000 bytes
    //
    _y31(sdk::unknown_ptr) initialize_cache_errata_support;
    
    // [KiInitializeContextThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x95d80, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b843c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x212f8c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3550ac, 0x1fe000 bytes
    //
    _y32(sdk::unknown_ptr) initialize_context_thread;
    
    // [KiInitializeDescriptorIst]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1db590, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b03b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b7e30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3abe18, 0x1fe000 bytes
    //
    _y33(sdk::unknown_ptr) initialize_descriptor_ist;
    
    // [KiInitializeDpcList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd5640, 0x32828 bytes
    // ntoskrnl.exe .text:0x2716e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385ad8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x323278, 0x1fe000 bytes
    //
    _y34(sdk::unknown_ptr) initialize_dpc_list;
    
    // [KiInitializeDynamicProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dd460, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9ac6e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8af28, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9ab650, 0x1fe000 bytes
    //
    _y35(sdk::unknown_ptr) initialize_dynamic_processor;
    
    // [KiInitializeDynamicProcessorDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dd4b8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9ac750, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8af90, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9ab6c0, 0x1fe000 bytes
    //
    _y36(sdk::unknown_ptr) initialize_dynamic_processor_dpc;
    
    // [KiInitializeIdt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dd718, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99b8d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7bfc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99a958, 0x1fe000 bytes
    //
    _y37(sdk::unknown_ptr) initialize_idt;
    
    // [KiInitializeKernel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d4e24, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x999250, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa75c40, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x998980, 0x1fe000 bytes
    //
    _y38(sdk::unknown_ptr) initialize_kernel;
    
    // [KiInitializeMTRR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x791890, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa459d8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb510dc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3fdc0, 0x1fe000 bytes
    //
    _y39(sdk::unknown_ptr) initialize_mtrr;
    
    // [KiInitializeMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10b0d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2489a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x356c0c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2debe8, 0x1fe000 bytes
    //
    _y40(sdk::unknown_ptr) initialize_mutant;
    
    // [KiInitializeNxSupportDiscard]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x785bec, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa37414, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5e3a8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa378c4, 0x1fe000 bytes
    //
    _y41(sdk::unknown_ptr) initialize_nx_support_discard;
    
    // [KiInitializePrcbContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d4b08, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99b27c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa790ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99a300, 0x1fe000 bytes
    //
    _y42(sdk::unknown_ptr) initialize_prcb_context;
    
    // [KiInitializeProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d44ec, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99afe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa78bac, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99a064, 0x1fe000 bytes
    //
    _y43(sdk::unknown_ptr) initialize_processor;
    
    // [KiInitializeProcessorGroupSchedulingData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16efa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x51da88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x568fac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51d888, 0x1fe000 bytes
    //
    _y44(sdk::unknown_ptr) initialize_processor_group_scheduling_data;
    
    // [KiInitializeTimer2Data]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13a2fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b0c90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e57e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ac6f0, 0x1fe000 bytes
    //
    _y45(sdk::unknown_ptr) initialize_timer2_data;
    
    // [KiInitializeUserApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc687c, 0x32828 bytes
    // ntoskrnl.exe .text:0x282840, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20b610, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3292f0, 0x1fe000 bytes
    //
    _y46(sdk::unknown_ptr) initialize_user_apc;
    
    // [KiInitializeXSave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d5e60, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x997b70, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7c320, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9972b0, 0x1fe000 bytes
    //
    _y47(sdk::unknown_ptr) initialize_x_save;
    
    // [KiInitiateUserApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15f780, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f83d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42d130, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f9cb0, 0x1fe000 bytes
    //
    _y48(sdk::unknown_ptr) initiate_user_apc;
    
    // [KiInsertDeferredPreemptionApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8b7a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x20d1a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x307c38, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x356fec, 0x1fe000 bytes
    //
    _y49(sdk::unknown_ptr) insert_deferred_preemption_apc;
    
    // [KiInsertInterruptObjectOrdered]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dad50, 0x32828 bytes
    // ntoskrnl.exe .text:0x51b5c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3db4fc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51b3c8, 0x1fe000 bytes
    //
    _y50(sdk::unknown_ptr) insert_interrupt_object_ordered;
    
    // [KiInsertNonMaxOverQuotaScb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbd400, 0x32828 bytes
    // ntoskrnl.exe .text:0x253bfc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32d844, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3359ac, 0x1fe000 bytes
    //
    _y51(sdk::unknown_ptr) insert_non_max_over_quota_scb;
    
    // [KiInsertQueueApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8baa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x20d404, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x308048, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35724c, 0x1fe000 bytes
    //
    _y52(sdk::unknown_ptr) insert_queue_apc;
    
    // [KiInsertQueueDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x53f60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3037f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b58c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26dc70, 0x1fe000 bytes
    //
    _y53(sdk::unknown_ptr) insert_queue_dpc;
    
    // [KiInsertQueueInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa85bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x25c164, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f8ba8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30bf38, 0x1fe000 bytes
    //
    _y54(sdk::unknown_ptr) insert_queue_internal;
    
    // [KiInsertSchedulingGroupQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbd458, 0x32828 bytes
    // ntoskrnl.exe .text:0x253c5c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32d8a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x335a0c, 0x1fe000 bytes
    //
    _y55(sdk::unknown_ptr) insert_scheduling_group_queue;
    
    // [KiInsertTimer2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xff1f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x28eae0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x27c048, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x241cf8, 0x1fe000 bytes
    //
    _y56(sdk::unknown_ptr) insert_timer2;
    
    // [KiInsertTimer2WithCollectionLockHeld]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfc2e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x30ef30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x27b5c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x242ae0, 0x1fe000 bytes
    //
    _y57(sdk::unknown_ptr) insert_timer2_with_collection_lock_held;
    
    // [KiInsertTimerTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e7d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e5970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b73d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x266c80, 0x1fe000 bytes
    //
    _y58(sdk::unknown_ptr) insert_timer_table;
    
    // [KiIntRedirectConnnect]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12bd00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a10ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56c7e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a256c, 0x1fe000 bytes
    //
    _y59(sdk::unknown_ptr) int_redirect_connnect;
    
    // [KiIntRedirectQueueRequestOnProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xddf6c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2809a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56c870, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x328108, 0x1fe000 bytes
    //
    _y60(sdk::unknown_ptr) int_redirect_queue_request_on_processor;
    
    // [KiIntSteerAffinitizedInterrupts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308980, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b0e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41140, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b060, 0x1fe000 bytes
    //
    _y61(sdk::unknown_ptr) int_steer_affinitized_interrupts;
    
    // [KiIntSteerAssignCpuSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1db8dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x51c93c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x565960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51c73c, 0x1fe000 bytes
    //
    _y62(sdk::unknown_ptr) int_steer_assign_cpu_set;
    
    // [KiIntSteerCalculateDistribution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xaa7d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x30c270, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28d2f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x277980, 0x1fe000 bytes
    //
    _y63(sdk::unknown_ptr) int_steer_calculate_distribution;
    
    // [KiIntSteerChooseInitialTargetProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12bba0, 0x32828 bytes
    // ntoskrnl.exe .text:0x373944, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3883fc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x374cc4, 0x1fe000 bytes
    //
    _y64(sdk::unknown_ptr) int_steer_choose_initial_target_processors;
    
    // [KiIntSteerClearCpuSetAssignment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1db934, 0x32828 bytes
    // ntoskrnl.exe .text:0x51c998, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x565b60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51c798, 0x1fe000 bytes
    //
    _y65(sdk::unknown_ptr) int_steer_clear_cpu_set_assignment;
    
    // [KiIntSteerComputeCpuSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1db958, 0x32828 bytes
    // ntoskrnl.exe .text:0x51c9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x565b88, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51c7c0, 0x1fe000 bytes
    //
    _y66(sdk::unknown_ptr) int_steer_compute_cpu_set;
    
    // [KiIntSteerConnect]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12b78c, 0x32828 bytes
    // ntoskrnl.exe .text:0x373554, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3890a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3748d4, 0x1fe000 bytes
    //
    _y67(sdk::unknown_ptr) int_steer_connect;
    
    // [KiIntSteerDisable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x121ae8, 0x32828 bytes
    // ntoskrnl.exe .text:0x37274c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dbda8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x373acc, 0x1fe000 bytes
    //
    _y68(sdk::unknown_ptr) int_steer_disable;
    
    // [KiIntSteerDistributeInterrupts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6d890, 0x32828 bytes
    // ntoskrnl.exe .text:0x30bd40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28d1a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x277450, 0x1fe000 bytes
    //
    _y69(sdk::unknown_ptr) int_steer_distribute_interrupts;
    
    // [KiIntSteerEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308970, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b188, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41248, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b108, 0x1fe000 bytes
    //
    _y70(sdk::unknown_ptr) int_steer_enabled;
    
    // [KiIntSteerEtwEventEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12bb88, 0x32828 bytes
    // ntoskrnl.exe .text:0x3045c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21d2a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26ea40, 0x1fe000 bytes
    //
    _y71(sdk::unknown_ptr) int_steer_etw_event_enabled;
    
    // [KiIntSteerEtwHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x33ee68, 0x32828 bytes
    // ntoskrnl.exe .data:0xcec808, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7ba8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcec808, 0x1fe000 bytes
    //
    _y72(sdk::unknown_ptr) int_steer_etw_handle;
    
    // [KiIntSteerEventTraceControlCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571af4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b6cd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x870510, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be870, 0x1fe000 bytes
    //
    _y73(sdk::unknown_ptr) int_steer_event_trace_control_callback;
    
    // [KiIntSteerInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x791bd0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa45ce0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb20e78, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa400c8, 0x1fe000 bytes
    //
    _y74(sdk::unknown_ptr) int_steer_init;
    
    // [KiIntSteerInitPrcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd5668, 0x32828 bytes
    // ntoskrnl.exe .text:0x2716f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3acb2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x323288, 0x1fe000 bytes
    //
    _y75(sdk::unknown_ptr) int_steer_init_prcb;
    
    // [KiIntSteerLoadPercent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308968, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b010, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41000, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2af94, 0x1fe000 bytes
    //
    _y76(sdk::unknown_ptr) int_steer_load_percent;
    
    // [KiIntSteerLogState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12bb28, 0x32828 bytes
    // ntoskrnl.exe .text:0x3738e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x389544, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x374c64, 0x1fe000 bytes
    //
    _y77(sdk::unknown_ptr) int_steer_log_state;
    
    // [KiIntSteerLogStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dbbb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x51ca3c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28d5c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51c83c, 0x1fe000 bytes
    //
    _y78(sdk::unknown_ptr) int_steer_log_status;
    
    // [KiIntSteerMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3088c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b020, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41020, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2afa0, 0x1fe000 bytes
    //
    _y79(sdk::unknown_ptr) int_steer_mask;
    
    // [KiIntSteerPreviousPerfSnap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3243c8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c378, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64458, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c358, 0x1fe000 bytes
    //
    _y80(sdk::unknown_ptr) int_steer_previous_perf_snap;
    
    // [KiIntSteerSetDestination]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6da14, 0x32828 bytes
    // ntoskrnl.exe .text:0x263360, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38836c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3139b0, 0x1fe000 bytes
    //
    _y81(sdk::unknown_ptr) int_steer_set_destination;
    
    // [KiIntSteerVerifyDestination]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6da8c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2633dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3883c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x313a2c, 0x1fe000 bytes
    //
    _y82(sdk::unknown_ptr) int_steer_verify_destination;
    
    // [KiIntTrackRootCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308888, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b008, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41270, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2af80, 0x1fe000 bytes
    //
    _y83(sdk::unknown_ptr) int_track_root_count;
    
    // [KiIntTrackRootEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308884, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b00c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40ff4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2af64, 0x1fe000 bytes
    //
    _y84(sdk::unknown_ptr) int_track_root_enabled;
    
    // [KiIntTrackRootList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3088a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2aff0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41260, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2af70, 0x1fe000 bytes
    //
    _y85(sdk::unknown_ptr) int_track_root_list;
    
    // [KiIntTrackSpinlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308890, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b000, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40ff8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2af88, 0x1fe000 bytes
    //
    _y86(sdk::unknown_ptr) int_track_spinlock;
    
    // [KiInterruptControllerInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30896c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b18c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41004, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b048, 0x1fe000 bytes
    //
    _y87(sdk::unknown_ptr) interrupt_controller_info;
    
    // [KiInterruptDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15cf10, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f5960, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x429d30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f7240, 0x1fe000 bytes
    //
    _y88(sdk::unknown_ptr) interrupt_dispatch;
    
    // [KiInterruptDispatchCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dadd4, 0x32828 bytes
    // ntoskrnl.exe .text:0x51b648, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d7e64, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51b448, 0x1fe000 bytes
    //
    _y89(sdk::unknown_ptr) interrupt_dispatch_common;
    
    // [KiInterruptDispatchNoEOI]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15d630, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f6110, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42a570, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f79f0, 0x1fe000 bytes
    //
    _y90(sdk::unknown_ptr) interrupt_dispatch_no_eoi;
    
    // [KiInterruptDispatchNoLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15d170, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f5bf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x429ff0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f74d0, 0x1fe000 bytes
    //
    _y91(sdk::unknown_ptr) interrupt_dispatch_no_lock;
    
    // [KiInterruptDispatchNoLockNoEtw]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15d3d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f5e80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42a2b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f7760, 0x1fe000 bytes
    //
    _y92(sdk::unknown_ptr) interrupt_dispatch_no_lock_no_etw;
    
    // [KiInterruptHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d6774, 0x32828 bytes
    // ntoskrnl.exe .text:0x512ee4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55d294, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x512cf4, 0x1fe000 bytes
    //
    _y93(sdk::unknown_ptr) interrupt_handler;
    
    // [KiInterruptInitTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce170, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd54270, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f270, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54270, 0x1fe000 bytes
    //
    _y94(sdk::unknown_ptr) interrupt_init_table;
    
    // [KiInterruptMessageDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xddf64, 0x32828 bytes
    // ntoskrnl.exe .text:0x250570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3566e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fe7b0, 0x1fe000 bytes
    //
    _y95(sdk::unknown_ptr) interrupt_message_dispatch;
    
    // [KiInterruptSubDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15cbb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f55b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x429980, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f6e90, 0x1fe000 bytes
    //
    _y96(sdk::unknown_ptr) interrupt_sub_dispatch;
    
    // [KiInterruptSubDispatchNoLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15cce0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f5700, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x429ad0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f6fe0, 0x1fe000 bytes
    //
    _y97(sdk::unknown_ptr) interrupt_sub_dispatch_no_lock;
    
    // [KiInterruptSubDispatchNoLockNoEtw]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ce10, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f5850, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x429c20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f7130, 0x1fe000 bytes
    //
    _y98(sdk::unknown_ptr) interrupt_sub_dispatch_no_lock_no_etw;
    
    // [KiInterruptThunk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165960, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe640, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4331d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fff20, 0x1fe000 bytes
    //
    _y99(sdk::unknown_ptr) interrupt_thunk;
    
    // [KiInterruptTimeErrorAccumulator]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x326cf8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50448, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64440, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50448, 0x1fe000 bytes
    //
    _z00(sdk::unknown_ptr) interrupt_time_error_accumulator;
    
    // [KiIntersectFeaturesWithPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d60f0, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99c9f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7cb14, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99ba70, 0x1fe000 bytes
    //
    _z01(sdk::unknown_ptr) intersect_features_with_policy;
    
    // [KiInvalidOpcodeFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x167d00, 0x32828 bytes
    // ntoskrnl.exe .text:0x4001c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x434e80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x401ac0, 0x1fe000 bytes
    //
    _z02(sdk::unknown_ptr) invalid_opcode_fault;
    
    // [KiInvalidOpcodeFaultShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23f300, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa12440, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae2440, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa11440, 0x1fe000 bytes
    //
    _z03(sdk::unknown_ptr) invalid_opcode_fault_shadow;
    
    // [KiInvalidTssFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x168dc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x400fc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x435dc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4028c0, 0x1fe000 bytes
    //
    _z04(sdk::unknown_ptr) invalid_tss_fault;
    
    // [KiInvalidTssFaultShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23f500, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa12640, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae2640, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa11640, 0x1fe000 bytes
    //
    _z05(sdk::unknown_ptr) invalid_tss_fault_shadow;
    
    // [KiInvokeBugCheckEntryCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d7d30, 0x32828 bytes
    // ntoskrnl.exe .text:0x5129f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x556828, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x512808, 0x1fe000 bytes
    //
    _z06(sdk::unknown_ptr) invoke_bug_check_entry_callbacks;
    
    // [KiInvokeInterruptServiceRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1db100, 0x32828 bytes
    // ntoskrnl.exe .text:0x51bb8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d8534, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51b98c, 0x1fe000 bytes
    //
    _z07(sdk::unknown_ptr) invoke_interrupt_service_routine;
    
    // [KiIpiGenericCallTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12ded4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a05a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d87d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a1a60, 0x1fe000 bytes
    //
    _z08(sdk::unknown_ptr) ipi_generic_call_target;
    
    // [KiIpiInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x161f10, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fa5a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42f680, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fbe80, 0x1fe000 bytes
    //
    _z09(sdk::unknown_ptr) ipi_interrupt;
    
    // [KiIpiInterruptShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x240000, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa13240, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae3240, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa12240, 0x1fe000 bytes
    //
    _z10(sdk::unknown_ptr) ipi_interrupt_shadow;
    
    // [KiIpiInterruptSubDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x162510, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fab00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42fc70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fc3e0, 0x1fe000 bytes
    //
    _z11(sdk::unknown_ptr) ipi_interrupt_sub_dispatch;
    
    // [KiIpiProcessRequests]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xaaa40, 0x32828 bytes
    // ntoskrnl.exe .text:0x23f1d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34d090, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ec760, 0x1fe000 bytes
    //
    _z12(sdk::unknown_ptr) ipi_process_requests;
    
    // [KiIpiSendPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8a7f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x23c2c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x213540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x359070, 0x1fe000 bytes
    //
    _z13(sdk::unknown_ptr) ipi_send_packet;
    
    // [KiIpiSendRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x363b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x23c320, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b5310, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3590d0, 0x1fe000 bytes
    //
    _z14(sdk::unknown_ptr) ipi_send_request;
    
    // [KiIpiSendRequestEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38bd0, 0x32828 bytes
    // ntoskrnl.exe .text:0x320d60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30fe28, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2932a0, 0x1fe000 bytes
    //
    _z15(sdk::unknown_ptr) ipi_send_request_ex;
    
    // [KiIpiUpdateThreadTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10c0c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x367e30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e8af0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3691e0, 0x1fe000 bytes
    //
    _z16(sdk::unknown_ptr) ipi_update_thread_tag;
    
    // [KiIsInterruptTypeSecondary]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12bcf0, 0x32828 bytes
    // ntoskrnl.exe .text:0x373ac4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3894bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x374e44, 0x1fe000 bytes
    //
    _z17(sdk::unknown_ptr) is_interrupt_type_secondary;
    
    // [KiIsKernelStackSwappable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dbf9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x51cce8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x565d60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51cae8, 0x1fe000 bytes
    //
    _z18(sdk::unknown_ptr) is_kernel_stack_swappable;
    
    // [KiIsKvaLeakSimulated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dd098, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b0408, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b7e1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3abe68, 0x1fe000 bytes
    //
    _z19(sdk::unknown_ptr) is_kva_leak_simulated;
    
    // [KiIsKvaShadowConfigDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab376, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5b7, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dbc6, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5b7, 0x1fe000 bytes
    //
    _z20(sdk::unknown_ptr) is_kva_shadow_config_disabled;
    
    // [KiIsKvaShadowDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dd0a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b041c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b7e08, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3abe7c, 0x1fe000 bytes
    //
    _z21(sdk::unknown_ptr) is_kva_shadow_disabled;
    
    // [KiIsNodeFull]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13a1d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b05dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b9a28, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ac03c, 0x1fe000 bytes
    //
    _z22(sdk::unknown_ptr) is_node_full;
    
    // [KiIsNXSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d44ac, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x997b20, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7d898, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x997260, 0x1fe000 bytes
    //
    _z23(sdk::unknown_ptr) is_nx_supported;
    
    // [KiIsSecureProcessFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x66e18, 0x32828 bytes
    // ntoskrnl.exe .text:0x320e90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30fc68, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2933d0, 0x1fe000 bytes
    //
    _z24(sdk::unknown_ptr) is_secure_process_flush;
    
    // [KiIsThreadRankBiased]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dc1e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x51dabc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x460c38, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51d8bc, 0x1fe000 bytes
    //
    _z25(sdk::unknown_ptr) is_thread_rank_biased;
    
    // [KiIsThreadRankNonZero]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x98fb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x28a9d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21888c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x334630, 0x1fe000 bytes
    //
    _z26(sdk::unknown_ptr) is_thread_rank_non_zero;
    
    // [KiIsXSaveFeatureAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d6230, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99cb50, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7cc60, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99bbd0, 0x1fe000 bytes
    //
    _z27(sdk::unknown_ptr) is_x_save_feature_allowed;
    
    // [KiIsrLinkage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15e321, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f6e71, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42b351, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f8751, 0x1fe000 bytes
    //
    _z28(sdk::unknown_ptr) isr_linkage;
    
    // [KiIsrThunk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15db10, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f6660, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42ab40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f7f40, 0x1fe000 bytes
    //
    _z29(sdk::unknown_ptr) isr_thunk;
    
    // [KiIsrThunkShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x240080, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa132c0, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae32c0, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa122c0, 0x1fe000 bytes
    //
    _z30(sdk::unknown_ptr) isr_thunk_shadow;
    
    // [KiKernelExit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x240940, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa13b80, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae3b80, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa12b80, 0x1fe000 bytes
    //
    _z31(sdk::unknown_ptr) kernel_exit;
    
    // [KiKernelIstExit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x2409c0, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa13c40, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae3c40, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa12c40, 0x1fe000 bytes
    //
    _z32(sdk::unknown_ptr) kernel_ist_exit;
    
    // [KiKernelIstMceExit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x240a40, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa13cc0, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae3cc0, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa12cc0, 0x1fe000 bytes
    //
    _z33(sdk::unknown_ptr) kernel_ist_mce_exit;
    
    // [KiKernelIstMceExitEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x240aa6, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa13d98, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae3d98, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa12d98, 0x1fe000 bytes
    //
    _z34(sdk::unknown_ptr) kernel_ist_mce_exit_end;
    
    // [KiKernelIstMceExitStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x240a40, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa13cc0, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae3cc0, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa12cc0, 0x1fe000 bytes
    //
    _z35(sdk::unknown_ptr) kernel_ist_mce_exit_start;
    
    // [KiKernelSysretExit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x240ac0, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa13dc0, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae3dc0, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa12dc0, 0x1fe000 bytes
    //
    _z36(sdk::unknown_ptr) kernel_sysret_exit;
    
    // [KiKvaLeakage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3243c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50b40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a900, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50b38, 0x1fe000 bytes
    //
    _z37(sdk::unknown_ptr) kva_leakage;
    
    // [KiKvaLeakageSimulate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab2d7, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb535, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db53, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb535, 0x1fe000 bytes
    //
    _z38(sdk::unknown_ptr) kva_leakage_simulate;
    
    // [KiKvaShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa002, 0x32828 bytes
    // ntoskrnl.exe CFGRO:0xe01840, 0x1fe000 bytes
    // ntoskrnl.exe CFGRO:0xe01840, 0x1fd000 bytes
    // ntoskrnl.exe CFGRO:0xe01840, 0x1fe000 bytes
    //
    _z39(sdk::unknown_ptr) kva_shadow;
    
    // [KiKvaShadowMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab468, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb720, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd8c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb720, 0x1fe000 bytes
    //
    _z40(sdk::unknown_ptr) kva_shadow_mode;
    
    // [KiLargestCacheSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa17c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa13c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c170, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa13c, 0x1fe000 bytes
    //
    _z41(sdk::unknown_ptr) largest_cache_size;
    
    // [KiLastBranchFromBaseMSR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab384, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb60c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dc64, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb60c, 0x1fe000 bytes
    //
    _z42(sdk::unknown_ptr) last_branch_from_base_msr;
    
    // [KiLastBranchToBaseMSR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab38c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb650, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dca8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb650, 0x1fe000 bytes
    //
    _z43(sdk::unknown_ptr) last_branch_to_base_msr;
    
    // [KiLastBranchTOSMSR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab508, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb900, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dec0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb900, 0x1fe000 bytes
    //
    _z44(sdk::unknown_ptr) last_branch_tosmsr;
    
    // [KiLastExceptionFromBaseMSR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab474, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb728, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd94, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb728, 0x1fe000 bytes
    //
    _z45(sdk::unknown_ptr) last_exception_from_base_msr;
    
    // [KiLastExceptionToBaseMSR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab470, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb72c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd98, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb72c, 0x1fe000 bytes
    //
    _z46(sdk::unknown_ptr) last_exception_to_base_msr;
    
    // [KiLastForwardedHand]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3243b4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c364, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a114, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c344, 0x1fe000 bytes
    //
    _z47(sdk::unknown_ptr) last_forwarded_hand;
    
    // [KiLastNonHrTimerExpiration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3243b8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c370, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64450, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c350, 0x1fe000 bytes
    //
    _z48(sdk::unknown_ptr) last_non_hr_timer_expiration;
    
    // [KiLastProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3243d0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c380, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64460, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c360, 0x1fe000 bytes
    //
    _z49(sdk::unknown_ptr) last_processor;
    
    // [KiLastRequestedTimeIncrement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30ed2c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31524, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41728, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31468, 0x1fe000 bytes
    //
    _z50(sdk::unknown_ptr) last_requested_time_increment;
    
    // [KiLastStallTick]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308a40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b1b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41328, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b110, 0x1fe000 bytes
    //
    _z51(sdk::unknown_ptr) last_stall_tick;
    
    // [KiLeaveCriticalRegionUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4aa00, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c7680, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x29b220, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2486b0, 0x1fe000 bytes
    //
    _z52(sdk::unknown_ptr) leave_critical_region_unsafe;
    
    // [KiLoadMTRRTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d65d8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99d910, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa78630, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99ca10, 0x1fe000 bytes
    //
    _z53(sdk::unknown_ptr) load_mtrr_target;
    
    // [KiLoadPolicyFromImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d62c0, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99cbe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7ccf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99bc60, 0x1fe000 bytes
    //
    _z54(sdk::unknown_ptr) load_policy_from_image;
    
    // [KiLockExtendedServiceTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x154a48, 0x32828 bytes
    // ntoskrnl.exe .text:0x3d67f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3f61c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3d78c8, 0x1fe000 bytes
    //
    _z55(sdk::unknown_ptr) lock_extended_service_table;
    
    // [KiLockQuantumTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab480, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb738, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dbcc, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb738, 0x1fe000 bytes
    //
    _z56(sdk::unknown_ptr) lock_quantum_target;
    
    // [KiLockServiceTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12bea4, 0x32828 bytes
    // ntoskrnl.exe .text:0x39a694, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ca110, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39bb54, 0x1fe000 bytes
    //
    _z57(sdk::unknown_ptr) lock_service_table;
    
    // [KiLockStepExecution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d22ac, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x995c14, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7888c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x994fb4, 0x1fe000 bytes
    //
    _z58(sdk::unknown_ptr) lock_step_execution;
    
    // [KiMachineCheckControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165a10, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe740, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4332d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x400020, 0x1fe000 bytes
    //
    _z59(sdk::unknown_ptr) machine_check_control;
    
    // [KiMarkBugCheckRegions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1550f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3d7108, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3f6ad4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3d81d8, 0x1fe000 bytes
    //
    _z60(sdk::unknown_ptr) mark_bug_check_regions;
    
    // [KiMaskInterruptDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d92fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x514fd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55f030, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x514de0, 0x1fe000 bytes
    //
    _z61(sdk::unknown_ptr) mask_interrupt_dpc;
    
    // [KiMaskInterruptInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x121d5c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a286c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dc110, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a3dbc, 0x1fe000 bytes
    //
    _z62(sdk::unknown_ptr) mask_interrupt_internal;
    
    // [KiMaskSecondaryInterruptInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d84f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x513758, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55d5d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x513568, 0x1fe000 bytes
    //
    _z63(sdk::unknown_ptr) mask_secondary_interrupt_internal;
    
    // [KiMaskToLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d4704, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99b1f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7cd48, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99a278, 0x1fe000 bytes
    //
    _z64(sdk::unknown_ptr) mask_to_length;
    
    // [KiMatchLoadOption]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d638c, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99d8d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7c6b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99c954, 0x1fe000 bytes
    //
    _z65(sdk::unknown_ptr) match_load_option;
    
    // [KiMaxDynamicTickDuration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa0c0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa0e0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c110, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa0e0, 0x1fe000 bytes
    //
    _z66(sdk::unknown_ptr) max_dynamic_tick_duration;
    
    // [KiMaxDynamicTickDurationSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa30c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa348, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c440, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa348, 0x1fe000 bytes
    //
    _z67(sdk::unknown_ptr) max_dynamic_tick_duration_size;
    
    // [KiMaximizeGroupsCreated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab25b, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4fc, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db03, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4fc, 0x1fe000 bytes
    //
    _z68(sdk::unknown_ptr) maximize_groups_created;
    
    // [KiMaximumDpcQueueDepth]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa074, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa084, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c0a0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa084, 0x1fe000 bytes
    //
    _z69(sdk::unknown_ptr) maximum_dpc_queue_depth;
    
    // [KiMaximumGroupSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa014, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa020, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c040, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa020, 0x1fe000 bytes
    //
    _z70(sdk::unknown_ptr) maximum_group_size;
    
    // [KiMaximumGroups]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa010, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa018, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c020, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa018, 0x1fe000 bytes
    //
    _z71(sdk::unknown_ptr) maximum_groups;
    
    // [KiMaximumIncrementReciprocal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab690, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbaa8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e1c0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbaa0, 0x1fe000 bytes
    //
    _z72(sdk::unknown_ptr) maximum_increment_reciprocal;
    
    // [KiMaximumIncrementShiftCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab32e, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5b2, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dbc2, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5b2, 0x1fe000 bytes
    //
    _z73(sdk::unknown_ptr) maximum_increment_shift_count;
    
    // [KiMaximumSharedReadyQueueSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa260, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2b4, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c30c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2b4, 0x1fe000 bytes
    //
    _z74(sdk::unknown_ptr) maximum_shared_ready_queue_size;
    
    // [KiMayStealStandbyThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50b20, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e5230, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21b620, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x266540, 0x1fe000 bytes
    //
    _z75(sdk::unknown_ptr) may_steal_standby_thread;
    
    // [KiMcaDeferredRecoveryService]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1652f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4331a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ffef0, 0x1fe000 bytes
    //
    _z76(sdk::unknown_ptr) mca_deferred_recovery_service;
    
    // [KiMcheckAbort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16ac80, 0x32828 bytes
    // ntoskrnl.exe .text:0x402a40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x437900, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x404340, 0x1fe000 bytes
    //
    _z77(sdk::unknown_ptr) mcheck_abort;
    
    // [KiMcheckAbortShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23f880, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa129c0, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae29c0, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa119c0, 0x1fe000 bytes
    //
    _z78(sdk::unknown_ptr) mcheck_abort_shadow;
    
    // [KiMcheckAlternateReturn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ddb78, 0x32828 bytes
    // ntoskrnl.exe .text:0x520890, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56c300, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5206a0, 0x1fe000 bytes
    //
    _z79(sdk::unknown_ptr) mcheck_alternate_return;
    
    // [KiMinDynamicTickDuration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa098, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa0a4, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c0cc, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa0a4, 0x1fe000 bytes
    //
    _z80(sdk::unknown_ptr) min_dynamic_tick_duration;
    
    // [KiMinimumDpcRate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa094, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa0a8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c0d4, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa0a8, 0x1fe000 bytes
    //
    _z81(sdk::unknown_ptr) minimum_dpc_rate;
    
    // [KiMismatchSummary]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fb958, 0x32828 bytes
    // ntoskrnl.exe .data:0xc13c00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0ec78, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc13c60, 0x1fe000 bytes
    //
    _z82(sdk::unknown_ptr) mismatch_summary;
    
    // [KiMonitorCacheErrata]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1db5d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x51c4b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x564e20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51c2b0, 0x1fe000 bytes
    //
    _z83(sdk::unknown_ptr) monitor_cache_errata;
    
    // [KiMoveApcState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa0450, 0x32828 bytes
    // ntoskrnl.exe .text:0x2dcfa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35e770, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25e210, 0x1fe000 bytes
    //
    _z84(sdk::unknown_ptr) move_apc_state;
    
    // [KiMoveScbThreadsToNewReadylist]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5e6b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x379d6c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32cc50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37b0ec, 0x1fe000 bytes
    //
    _z85(sdk::unknown_ptr) move_scb_threads_to_new_readylist;
    
    // [KiMtrrInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308aa0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b260, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc414a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b1c0, 0x1fe000 bytes
    //
    _z86(sdk::unknown_ptr) mtrr_info;
    
    // [KiMtrrMaskBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5ee8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0f310, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc099d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f360, 0x1fe000 bytes
    //
    _z87(sdk::unknown_ptr) mtrr_mask_base;
    
    // [KiMtrrMaskMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5ef8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0f318, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc099e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f368, 0x1fe000 bytes
    //
    _z88(sdk::unknown_ptr) mtrr_mask_mask;
    
    // [KiMtrrMaxRangeShift]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5ef0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0f320, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc099d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f370, 0x1fe000 bytes
    //
    _z89(sdk::unknown_ptr) mtrr_max_range_shift;
    
    // [KiMxCsrMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa05c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa060, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c100, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa060, 0x1fe000 bytes
    //
    _z90(sdk::unknown_ptr) mx_csr_mask;
    
    // [KiNextTimer2DueTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f2a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31b70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41eb8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31b58, 0x1fe000 bytes
    //
    _z91(sdk::unknown_ptr) next_timer2_due_time;
    
    // [KiNmiCallbackListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30eca8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31478, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc422d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc313b8, 0x1fe000 bytes
    //
    _z92(sdk::unknown_ptr) nmi_callback_list_head;
    
    // [KiNmiCallbackListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30eca0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31480, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc422d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc313c0, 0x1fe000 bytes
    //
    _z93(sdk::unknown_ptr) nmi_callback_list_lock;
    
    // [KiNmiInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f7c80, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12570, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0b940, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc125e0, 0x1fe000 bytes
    //
    _z94(sdk::unknown_ptr) nmi_in_progress;
    
    // [KiNmiInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x166840, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ff140, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x433d40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x400a40, 0x1fe000 bytes
    //
    _z95(sdk::unknown_ptr) nmi_interrupt;
    
    // [KiNmiInterruptEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x166e38, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ff4d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x43416e, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x400dd8, 0x1fe000 bytes
    //
    _z96(sdk::unknown_ptr) nmi_interrupt_end;
    
    // [KiNmiInterruptShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23f100, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa12240, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae2240, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa11240, 0x1fe000 bytes
    //
    _z97(sdk::unknown_ptr) nmi_interrupt_shadow;
    
    // [KiNmiInterruptShadowEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23f175, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa122b5, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae22b5, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa112b5, 0x1fe000 bytes
    //
    _z98(sdk::unknown_ptr) nmi_interrupt_shadow_end;
    
    // [KiNmiInterruptShadowStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23f100, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa12240, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae2240, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa11240, 0x1fe000 bytes
    //
    _z99(sdk::unknown_ptr) nmi_interrupt_shadow_start;
    
    // [KiNmiInterruptStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x166840, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ff140, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x433d40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x400a40, 0x1fe000 bytes
    //
    _a00(sdk::unknown_ptr) nmi_interrupt_start;
    
    // [KiNMILock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be6c0, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd22680, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd48400, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd22680, 0x1fe000 bytes
    //
    _a01(sdk::unknown_ptr) nmi_lock;
    
    // [KiNodeCostSort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bd508, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa90400, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb815f0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8f680, 0x1fe000 bytes
    //
    _a02(sdk::unknown_ptr) node_cost_sort;
    
    // [KiNodeGraph]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f528, 0x32828 bytes
    // ntoskrnl.exe .data:0xc32018, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc42300, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31fe0, 0x1fe000 bytes
    //
    _a03(sdk::unknown_ptr) node_graph;
    
    // [KiNodeInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x755700, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd37340, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd54770, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd37340, 0x1fe000 bytes
    //
    _a04(sdk::unknown_ptr) node_init;
    
    // [KiNonNumaDistance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab670, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfba1c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e180, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfba1c, 0x1fe000 bytes
    //
    _a05(sdk::unknown_ptr) non_numa_distance;
    
    // [KiNonNumaQueryNodeCapacity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d5e48, 0x32828 bytes
    // ntoskrnl.exe .text:0x50fc10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55c3d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50fa20, 0x1fe000 bytes
    //
    _a06(sdk::unknown_ptr) non_numa_query_node_capacity;
    
    // [KiNonNumaQueryNodeDistance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d5e60, 0x32828 bytes
    // ntoskrnl.exe .text:0x50fc30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55c3f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50fa40, 0x1fe000 bytes
    //
    _a07(sdk::unknown_ptr) non_numa_query_node_distance;
    
    // [KiNonParkedCpuSets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ac110, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfc610, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1ef20, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfc610, 0x1fe000 bytes
    //
    _a08(sdk::unknown_ptr) non_parked_cpu_sets;
    
    // [KiNPIEPEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab3f4, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6a0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd10, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6a0, 0x1fe000 bytes
    //
    _a09(sdk::unknown_ptr) npiep_enabled;
    
    // [KiNpxNotAvailableFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x168280, 0x32828 bytes
    // ntoskrnl.exe .text:0x4006c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x435380, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x401fc0, 0x1fe000 bytes
    //
    _a10(sdk::unknown_ptr) npx_not_available_fault;
    
    // [KiNpxNotAvailableFaultShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23f380, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa124c0, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae24c0, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa114c0, 0x1fe000 bytes
    //
    _a11(sdk::unknown_ptr) npx_not_available_fault_shadow;
    
    // [KiNpxSegmentOverrunAbort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x168a00, 0x32828 bytes
    // ntoskrnl.exe .text:0x400cc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x435a80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4025c0, 0x1fe000 bytes
    //
    _a12(sdk::unknown_ptr) npx_segment_overrun_abort;
    
    // [KiNpxSegmentOverrunAbortShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23f480, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa125c0, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae25c0, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa115c0, 0x1fe000 bytes
    //
    _a13(sdk::unknown_ptr) npx_segment_overrun_abort_shadow;
    
    // [KiNumaQueryProcessorNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327190, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31450, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41698, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31398, 0x1fe000 bytes
    //
    _a14(sdk::unknown_ptr) numa_query_processor_node;
    
    // [KiNxForceEnable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32719a, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50b3e, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a8fe, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50b36, 0x1fe000 bytes
    //
    _a15(sdk::unknown_ptr) nx_force_enable;
    
    // [KiObjectRundownLocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3c1140, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd25600, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd4b6c0, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd25600, 0x1fe000 bytes
    //
    _a16(sdk::unknown_ptr) object_rundown_locks;
    
    // [KiOldIrql]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308a30, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b194, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41320, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b120, 0x1fe000 bytes
    //
    _a17(sdk::unknown_ptr) old_irql;
    
    // [KiOpComputeLinearAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dc464, 0x32828 bytes
    // ntoskrnl.exe .text:0x51e7bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56b1e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51e5cc, 0x1fe000 bytes
    //
    _a18(sdk::unknown_ptr) op_compute_linear_address;
    
    // [KiOpDecode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa3990, 0x32828 bytes
    // ntoskrnl.exe .text:0x284720, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x210b54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32b5c0, 0x1fe000 bytes
    //
    _a19(sdk::unknown_ptr) op_decode;
    
    // [KiOpDecodeModRM]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dc5ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c9f4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x210e44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cafcc, 0x1fe000 bytes
    //
    _a20(sdk::unknown_ptr) op_decode_mod_rm;
    
    // [KiOpDescriptorTableStoreSkip]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308828, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2af38, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40d38, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2aeb8, 0x1fe000 bytes
    //
    _a21(sdk::unknown_ptr) op_descriptor_table_store_skip;
    
    // [KiOp_Div]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dc948, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c7ea0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56b7c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c8d70, 0x1fe000 bytes
    //
    _a22(sdk::unknown_ptr) op_div;
    
    // [KiOpFetchBytes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbdd4c, 0x32828 bytes
    // ntoskrnl.exe .text:0x51e8fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e9958, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51e70c, 0x1fe000 bytes
    //
    _a23(sdk::unknown_ptr) op_fetch_bytes;
    
    // [KiOpGdtr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x281150, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x33928, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3f8e0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33c68, 0x1fe000 bytes
    //
    _a24(sdk::unknown_ptr) op_gdtr;
    
    // [KiOpIdtr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x281160, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x33938, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3f908, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33c78, 0x1fe000 bytes
    //
    _a25(sdk::unknown_ptr) op_idtr;
    
    // [KiOp_Illegal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16efd0, 0x32828 bytes
    // ntoskrnl.exe .text:0x361660, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391670, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362a80, 0x1fe000 bytes
    //
    _a26(sdk::unknown_ptr) op_illegal;
    
    // [KiOp_INT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dca44, 0x32828 bytes
    // ntoskrnl.exe .text:0x51eaf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56b8d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51e900, 0x1fe000 bytes
    //
    _a27(sdk::unknown_ptr) op_int;
    
    // [KiOpInt2D]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308824, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2aee0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40d40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2ae6c, 0x1fe000 bytes
    //
    _a28(sdk::unknown_ptr) op_int2d;
    
    // [KiOpIsPrefix]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa3ac0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2848d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x210ce4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32b770, 0x1fe000 bytes
    //
    _a29(sdk::unknown_ptr) op_is_prefix;
    
    // [KiOpLocateDecodeEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa3b60, 0x32828 bytes
    // ntoskrnl.exe .text:0x284974, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x210d88, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32b814, 0x1fe000 bytes
    //
    _a30(sdk::unknown_ptr) op_locate_decode_entry;
    
    // [KiOp_MOVAPS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dcaa8, 0x32828 bytes
    // ntoskrnl.exe .text:0x51eb60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56b9a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51e970, 0x1fe000 bytes
    //
    _a31(sdk::unknown_ptr) op_movaps;
    
    // [KiOp_MOVDQA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dcb14, 0x32828 bytes
    // ntoskrnl.exe .text:0x51ebe0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56ba20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51e9f0, 0x1fe000 bytes
    //
    _a32(sdk::unknown_ptr) op_movdqa;
    
    // [KiOpOneByteTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2581c0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2500, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1d10, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2a60, 0x1fe000 bytes
    //
    _a33(sdk::unknown_ptr) op_one_byte_table;
    
    // [KiOpPatchCode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dc654, 0x32828 bytes
    // ntoskrnl.exe .text:0x51e944, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56b370, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51e754, 0x1fe000 bytes
    //
    _a34(sdk::unknown_ptr) op_patch_code;
    
    // [KiOp_PREFETCH3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16efe4, 0x32828 bytes
    // ntoskrnl.exe .text:0x361680, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391690, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362aa0, 0x1fe000 bytes
    //
    _a35(sdk::unknown_ptr) op_prefetch3;
    
    // [KiOpPrefetchPatchSkip]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308878, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2af3c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40d44, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2aebc, 0x1fe000 bytes
    //
    _a36(sdk::unknown_ptr) op_prefetch_patch_skip;
    
    // [KiOpPrefixTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26d610, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x118b0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x16250, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x11a30, 0x1fe000 bytes
    //
    _a37(sdk::unknown_ptr) op_prefix_table;
    
    // [KiOp_Priv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16f004, 0x32828 bytes
    // ntoskrnl.exe .text:0x3616b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3916c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362ad0, 0x1fe000 bytes
    //
    _a38(sdk::unknown_ptr) op_priv;
    
    // [KiOpRetrieveRegMemAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dc7f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c7fa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56b65c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c8e70, 0x1fe000 bytes
    //
    _a39(sdk::unknown_ptr) op_retrieve_reg_mem_address;
    
    // [KiOpSegmentOffsetTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x281138, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x33910, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3f8f0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33c50, 0x1fe000 bytes
    //
    _a40(sdk::unknown_ptr) op_segment_offset_table;
    
    // [KiOp_SGDTSIDT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dcb78, 0x32828 bytes
    // ntoskrnl.exe .text:0x51ec50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56ba90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51ea60, 0x1fe000 bytes
    //
    _a41(sdk::unknown_ptr) op_sgdtsidt;
    
    // [KiOpTwoByteTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2570c0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2610, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x19f0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2b70, 0x1fe000 bytes
    //
    _a42(sdk::unknown_ptr) op_two_byte_table;
    
    // [KiOutSwapKernelStacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc5eec, 0x32828 bytes
    // ntoskrnl.exe .text:0x2833e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe8ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32a27c, 0x1fe000 bytes
    //
    _a43(sdk::unknown_ptr) out_swap_kernel_stacks;
    
    // [KiOutSwapProcesses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xba030, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c3750, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3620ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x244780, 0x1fe000 bytes
    //
    _a44(sdk::unknown_ptr) out_swap_processes;
    
    // [KiOverflowTrap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x167380, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ff940, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x434600, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x401240, 0x1fe000 bytes
    //
    _a45(sdk::unknown_ptr) overflow_trap;
    
    // [KiOverflowTrapShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23f200, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa12340, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae2340, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa11340, 0x1fe000 bytes
    //
    _a46(sdk::unknown_ptr) overflow_trap_shadow;
    
    // [KiPageFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x169d80, 0x32828 bytes
    // ntoskrnl.exe .text:0x401d00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x436b80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x403600, 0x1fe000 bytes
    //
    _a47(sdk::unknown_ptr) page_fault;
    
    // [KiPageFaultShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23f700, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa12840, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae2840, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa11840, 0x1fe000 bytes
    //
    _a48(sdk::unknown_ptr) page_fault_shadow;
    
    // [KiParseLoadOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d6314, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99d850, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7c62c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99c8d0, 0x1fe000 bytes
    //
    _a49(sdk::unknown_ptr) parse_load_options;
    
    // [KiPassiveIsrWatchdog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1db37c, 0x32828 bytes
    // ntoskrnl.exe .text:0x51bed0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x565c10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51bcd0, 0x1fe000 bytes
    //
    _a50(sdk::unknown_ptr) passive_isr_watchdog;
    
    // [KiPassiveWatchdogTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9bd0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11f50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cb80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11fb0, 0x1fe000 bytes
    //
    _a51(sdk::unknown_ptr) passive_watchdog_timeout;
    
    // [KiPcToFileHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d7dc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x512ac0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5568f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5128d0, 0x1fe000 bytes
    //
    _a52(sdk::unknown_ptr) pc_to_file_header;
    
    // [KiPendingTimerBitmaps]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ac1b0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfc730, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1f280, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfc730, 0x1fe000 bytes
    //
    _a53(sdk::unknown_ptr) pending_timer_bitmaps;
    
    // [KiPendingTimersMask0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3c2140, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd26ec0, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd4cfc0, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd26ec0, 0x1fe000 bytes
    //
    _a54(sdk::unknown_ptr) pending_timers_mask0;
    
    // [KiPerformGroupConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x792938, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa468ac, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb55b44, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa40c94, 0x1fe000 bytes
    //
    _a55(sdk::unknown_ptr) perform_group_configuration;
    
    // [KiPeriodicCountThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa318, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa33c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c44c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa33c, 0x1fe000 bytes
    //
    _a56(sdk::unknown_ptr) periodic_count_threshold;
    
    // [KiPollFreezeExecution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd5018, 0x32828 bytes
    // ntoskrnl.exe .text:0x271378, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5626e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x322da8, 0x1fe000 bytes
    //
    _a57(sdk::unknown_ptr) poll_freeze_execution;
    
    // [KiPollSlot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3243b0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9cdc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd172fc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9cd8, 0x1fe000 bytes
    //
    _a58(sdk::unknown_ptr) poll_slot;
    
    // [KiPollSlotNext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3243ac, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9cd8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17c4c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9cdc, 0x1fe000 bytes
    //
    _a59(sdk::unknown_ptr) poll_slot_next;
    
    // [KiPowerOffFrozenProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa310, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa34c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c450, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa34c, 0x1fe000 bytes
    //
    _a60(sdk::unknown_ptr) power_off_frozen_processors;
    
    // [KiPreBugcheckStackSaveArea]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308c20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b3e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc423c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b340, 0x1fe000 bytes
    //
    _a61(sdk::unknown_ptr) pre_bugcheck_stack_save_area;
    
    // [KiPrepareFlushParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d8a48, 0x32828 bytes
    // ntoskrnl.exe .text:0x38c64c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39785c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38d6dc, 0x1fe000 bytes
    //
    _a62(sdk::unknown_ptr) prepare_flush_parameters;
    
    // [KiPrepareReadyThreadForRescheduling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x44a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x245954, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32cfc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x337b70, 0x1fe000 bytes
    //
    _a63(sdk::unknown_ptr) prepare_ready_thread_for_rescheduling;
    
    // [KiPreprocessFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa31d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x284170, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21053c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32b010, 0x1fe000 bytes
    //
    _a64(sdk::unknown_ptr) preprocess_fault;
    
    // [KiPriQueueThreadPriorityChanged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x798ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x24826c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x216878, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30f754, 0x1fe000 bytes
    //
    _a65(sdk::unknown_ptr) pri_queue_thread_priority_changed;
    
    // [KiProcessDeferredReadyList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5dfb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x302b80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x29a1e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26d000, 0x1fe000 bytes
    //
    _a66(sdk::unknown_ptr) process_deferred_ready_list;
    
    // [KiProcessDisconnectList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1db3b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x51bf0c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d81c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51bd0c, 0x1fe000 bytes
    //
    _a67(sdk::unknown_ptr) process_disconnect_list;
    
    // [KiProcessExpiredTimerList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10bcd8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c3d70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b7650, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x244da0, 0x1fe000 bytes
    //
    _a68(sdk::unknown_ptr) process_expired_timer_list;
    
    // [KiProcessInSwapListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f478, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31e98, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc42138, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31df8, 0x1fe000 bytes
    //
    _a69(sdk::unknown_ptr) process_in_swap_list_head;
    
    // [KiProcessListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f1e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31b40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc421e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31a90, 0x1fe000 bytes
    //
    _a70(sdk::unknown_ptr) process_list_head;
    
    // [KiProcessListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be680, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd22640, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd483c0, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd22640, 0x1fe000 bytes
    //
    _a71(sdk::unknown_ptr) process_list_lock;
    
    // [KiProcessNMI]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7a1f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x50cce0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x206a80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50cad0, 0x1fe000 bytes
    //
    _a72(sdk::unknown_ptr) process_nmi;
    
    // [KiProcessNodeSeed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f1d0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31b38, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41da0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31aa4, 0x1fe000 bytes
    //
    _a73(sdk::unknown_ptr) process_node_seed;
    
    // [KiProcessOutSwapListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f470, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31e68, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc42140, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31e00, 0x1fe000 bytes
    //
    _a74(sdk::unknown_ptr) process_out_swap_list_head;
    
    // [KiProcessPendingDisconnect]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1db400, 0x32828 bytes
    // ntoskrnl.exe .text:0x51bf64, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d8110, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51bd64, 0x1fe000 bytes
    //
    _a75(sdk::unknown_ptr) process_pending_disconnect;
    
    // [KiProcessPendingForegroundBoosts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x98094, 0x32828 bytes
    // ntoskrnl.exe .text:0x28fc50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x399a40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x335cf0, 0x1fe000 bytes
    //
    _a76(sdk::unknown_ptr) process_pending_foreground_boosts;
    
    // [KiProcessProfileList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d98a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x5161d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55fdd4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x515fe0, 0x1fe000 bytes
    //
    _a77(sdk::unknown_ptr) process_profile_list;
    
    // [KiProcessSecondarySignalList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d85c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x513900, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55d780, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x513710, 0x1fe000 bytes
    //
    _a78(sdk::unknown_ptr) process_secondary_signal_list;
    
    // [KiProcessThreadWaitList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb1e60, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c3380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b6730, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2443b0, 0x1fe000 bytes
    //
    _a79(sdk::unknown_ptr) process_thread_wait_list;
    
    // [KiProcessorBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ac300, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfcc80, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1f980, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfcc80, 0x1fe000 bytes
    //
    _a80(sdk::unknown_ptr) processor_block;
    
    // [KiProcessorCallbackNop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _a81(sdk::unknown_ptr) processor_callback_nop;
    
    // [KiProcessorIndexToNumberMappingTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ae380, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xd01480, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd279b0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd01480, 0x1fe000 bytes
    //
    _a82(sdk::unknown_ptr) processor_index_to_number_mapping_table;
    
    // [KiProcessorNumberToIndexMappingTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aed90, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xd00080, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd259b0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd00080, 0x1fe000 bytes
    //
    _a83(sdk::unknown_ptr) processor_number_to_index_mapping_table;
    
    // [KiProfileAlignmentFixupInterval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f214, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31b64, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41e10, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31ac4, 0x1fe000 bytes
    //
    _a84(sdk::unknown_ptr) profile_alignment_fixup_interval;
    
    // [KiProfileIrql]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa038, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa040, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c023, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa040, 0x1fe000 bytes
    //
    _a85(sdk::unknown_ptr) profile_irql;
    
    // [KiProfileListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f420, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31e40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc42150, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31de0, 0x1fe000 bytes
    //
    _a86(sdk::unknown_ptr) profile_list_head;
    
    // [KiProfileSourceListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f460, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31e50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc42100, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31da0, 0x1fe000 bytes
    //
    _a87(sdk::unknown_ptr) profile_source_list_head;
    
    // [KiQuantumEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c330, 0x32828 bytes
    // ntoskrnl.exe .text:0x28bb00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21b850, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x331280, 0x1fe000 bytes
    //
    _a88(sdk::unknown_ptr) quantum_end;
    
    // [KiQueryProcessorNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13a0a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b049c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b7c50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3abefc, 0x1fe000 bytes
    //
    _a89(sdk::unknown_ptr) query_processor_node;
    
    // [KiQueryUnbiasedInterruptTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xffc64, 0x32828 bytes
    // ntoskrnl.exe .text:0x29b5c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x213bf4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23f4a4, 0x1fe000 bytes
    //
    _a90(sdk::unknown_ptr) query_unbiased_interrupt_time;
    
    // [KiQueueReadyThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5e880, 0x32828 bytes
    // ntoskrnl.exe .text:0x2893d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2bbef0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x333030, 0x1fe000 bytes
    //
    _a91(sdk::unknown_ptr) queue_ready_thread;
    
    // [KiQueuedLockTableSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa31c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa340, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c444, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa344, 0x1fe000 bytes
    //
    _a92(sdk::unknown_ptr) queued_lock_table_size;
    
    // [KiRaiseAssertion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16c2c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x404640, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x439780, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x405f40, 0x1fe000 bytes
    //
    _a93(sdk::unknown_ptr) raise_assertion;
    
    // [KiRaiseAssertionShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23fb80, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa12dc0, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae2dc0, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa11dc0, 0x1fe000 bytes
    //
    _a94(sdk::unknown_ptr) raise_assertion_shadow;
    
    // [KiRaiseException]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10ef4c, 0x32828 bytes
    // ntoskrnl.exe .text:0x51c0b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5644d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51beb0, 0x1fe000 bytes
    //
    _a95(sdk::unknown_ptr) raise_exception;
    
    // [KiRaiseSecurityCheckFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16bec0, 0x32828 bytes
    // ntoskrnl.exe .text:0x404300, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x439440, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x405c00, 0x1fe000 bytes
    //
    _a96(sdk::unknown_ptr) raise_security_check_failure;
    
    // [KiRaiseSecurityCheckFailureShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23fb00, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa12d40, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae2d40, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa11d40, 0x1fe000 bytes
    //
    _a97(sdk::unknown_ptr) raise_security_check_failure_shadow;
    
    // [KiReadFixedMtrr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d23f4, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x995d68, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa78994, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x995108, 0x1fe000 bytes
    //
    _a98(sdk::unknown_ptr) read_fixed_mtrr;
    
    // [KiReadKernelDr7]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d4b04, 0x32828 bytes
    // ntoskrnl.exe .text:0x50ce70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x557f5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50cc60, 0x1fe000 bytes
    //
    _a99(sdk::unknown_ptr) read_kernel_dr7;
    
    // [KiReadyDeferredReadyList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5e0b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x302d10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e5890, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26d190, 0x1fe000 bytes
    //
    _b00(sdk::unknown_ptr) ready_deferred_ready_list;
    
    // [KiReadyOutSwappedThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xebb30, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c39f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x362560, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x244a20, 0x1fe000 bytes
    //
    _b01(sdk::unknown_ptr) ready_out_swapped_threads;
    
    // [KiRecomputeGroupSchedulingRank]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbd274, 0x32828 bytes
    // ntoskrnl.exe .text:0x28ee80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32c008, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x334b34, 0x1fe000 bytes
    //
    _b02(sdk::unknown_ptr) recompute_group_scheduling_rank;
    
    // [KiReduceByEffectiveIdleSmtSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc1210, 0x32828 bytes
    // ntoskrnl.exe .text:0x255c54, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x397284, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x304ff4, 0x1fe000 bytes
    //
    _b03(sdk::unknown_ptr) reduce_by_effective_idle_smt_set;
    
    // [KiReleaseQueuedSpinLockInstrumented]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d627c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5106dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55cf18, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5104ec, 0x1fe000 bytes
    //
    _b04(sdk::unknown_ptr) release_queued_spin_lock_instrumented;
    
    // [KiReleaseSpinLockInstrumented]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d64ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x510be8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55d218, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5109f8, 0x1fe000 bytes
    //
    _b05(sdk::unknown_ptr) release_spin_lock_instrumented;
    
    // [KiRemoveBoostThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x98d90, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e64a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21c760, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2677b0, 0x1fe000 bytes
    //
    _b06(sdk::unknown_ptr) remove_boost_thread;
    
    // [KiRemoveEntryTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10fbe0, 0x32828 bytes
    // ntoskrnl.exe .text:0x238700, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b6980, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2edc60, 0x1fe000 bytes
    //
    _b07(sdk::unknown_ptr) remove_entry_timer;
    
    // [KiRemoveQueueApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10aab0, 0x32828 bytes
    // ntoskrnl.exe .text:0x238db4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x378d0c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33ebe8, 0x1fe000 bytes
    //
    _b08(sdk::unknown_ptr) remove_queue_apc;
    
    // [KiRemoveSchedulingGroupQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x99e8c, 0x32828 bytes
    // ntoskrnl.exe .text:0x290a40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32da70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3365b0, 0x1fe000 bytes
    //
    _b09(sdk::unknown_ptr) remove_scheduling_group_queue;
    
    // [KiRemoveThreadFromAnyReadyQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xca69c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2459e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32d770, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x337c00, 0x1fe000 bytes
    //
    _b10(sdk::unknown_ptr) remove_thread_from_any_ready_queue;
    
    // [KiRemoveThreadFromReadyQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10f1a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x245bd8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32c0b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x337df8, 0x1fe000 bytes
    //
    _b11(sdk::unknown_ptr) remove_thread_from_ready_queue;
    
    // [KiRemoveThreadFromScbQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x99df8, 0x32828 bytes
    // ntoskrnl.exe .text:0x290990, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32d5cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x336500, 0x1fe000 bytes
    //
    _b12(sdk::unknown_ptr) remove_thread_from_scb_queue;
    
    // [KiRemoveThreadFromSchedulingGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8aa6c, 0x32828 bytes
    // ntoskrnl.exe .text:0x244bb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x372a1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3114e4, 0x1fe000 bytes
    //
    _b13(sdk::unknown_ptr) remove_thread_from_scheduling_group;
    
    // [KiRemoveThreadFromSharedReadyQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9872c, 0x32828 bytes
    // ntoskrnl.exe .text:0x245b78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32d7c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x337d98, 0x1fe000 bytes
    //
    _b14(sdk::unknown_ptr) remove_thread_from_shared_ready_queue;
    
    // [KiRemoveTimer2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3aa10, 0x32828 bytes
    // ntoskrnl.exe .text:0x28e1c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x273330, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x243180, 0x1fe000 bytes
    //
    _b15(sdk::unknown_ptr) remove_timer2;
    
    // [KiRequestProcessInSwap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa0650, 0x32828 bytes
    // ntoskrnl.exe .text:0x243010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x362f7c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ef450, 0x1fe000 bytes
    //
    _b16(sdk::unknown_ptr) request_process_in_swap;
    
    // [KiRequestSoftwareInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x53ed0, 0x32828 bytes
    // ntoskrnl.exe .text:0x20dd38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x308d5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3599b8, 0x1fe000 bytes
    //
    _b17(sdk::unknown_ptr) request_software_interrupt;
    
    // [KiRequestTimer2Expiration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8b228, 0x32828 bytes
    // ntoskrnl.exe .text:0x252890, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e8228, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x302760, 0x1fe000 bytes
    //
    _b18(sdk::unknown_ptr) request_timer2_expiration;
    
    // [KiRescheduleThreadAfterAffinityChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9841c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a0eac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32a360, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ca37c, 0x1fe000 bytes
    //
    _b19(sdk::unknown_ptr) reschedule_thread_after_affinity_change;
    
    // [KiResetBootProcessorApicMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571dd8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b7a94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec47c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b6244, 0x1fe000 bytes
    //
    _b20(sdk::unknown_ptr) reset_boot_processor_apic_mask;
    
    // [KiResetGlobalDpcWatchdogProfiler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d496c, 0x32828 bytes
    // ntoskrnl.exe .text:0x28eb80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x557320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ee388, 0x1fe000 bytes
    //
    _b21(sdk::unknown_ptr) reset_global_dpc_watchdog_profiler;
    
    // [KiResetScb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbd08c, 0x32828 bytes
    // ntoskrnl.exe .text:0x358354, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32bb9c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dc760, 0x1fe000 bytes
    //
    _b22(sdk::unknown_ptr) reset_scb;
    
    // [KiResortScbQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbd524, 0x32828 bytes
    // ntoskrnl.exe .text:0x253d8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32daf8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x337a44, 0x1fe000 bytes
    //
    _b23(sdk::unknown_ptr) resort_scb_queue;
    
    // [KiRestoreDebugRegisterState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15bb50, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f4370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4285c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5c50, 0x1fe000 bytes
    //
    _b24(sdk::unknown_ptr) restore_debug_register_state;
    
    // [KiRestoreFeatureBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x111fd0, 0x32828 bytes
    // ntoskrnl.exe .text:0x380310, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x562128, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x381100, 0x1fe000 bytes
    //
    _b25(sdk::unknown_ptr) restore_feature_bits;
    
    // [KiRestoreProcessorControlState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b940, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f4120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x428370, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5a00, 0x1fe000 bytes
    //
    _b26(sdk::unknown_ptr) restore_processor_control_state;
    
    // [KiRestoreProcessorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7a688, 0x32828 bytes
    // ntoskrnl.exe .text:0x51f508, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x207874, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51f318, 0x1fe000 bytes
    //
    _b27(sdk::unknown_ptr) restore_processor_state;
    
    // [KiRestoreSetContextState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15c460, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f4e00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4290f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f66e0, 0x1fe000 bytes
    //
    _b28(sdk::unknown_ptr) restore_set_context_state;
    
    // [KiRestoreXSaveSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3cc7ec, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x991a8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8b304, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x990a9c, 0x1fe000 bytes
    //
    _b29(sdk::unknown_ptr) restore_x_save_support;
    
    // [KiRestrictedSystemCpuSetsActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab478, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb730, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dda0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb730, 0x1fe000 bytes
    //
    _b30(sdk::unknown_ptr) restricted_system_cpu_sets_active;
    
    // [KiResumeClockTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1120b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x37f988, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55b818, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x380778, 0x1fe000 bytes
    //
    _b31(sdk::unknown_ptr) resume_clock_timer;
    
    // [KiResumeForReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342340, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9ce0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64439, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9ce0, 0x1fe000 bytes
    //
    _b32(sdk::unknown_ptr) resume_for_reboot;
    
    // [KiResumeThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa0b64, 0x32828 bytes
    // ntoskrnl.exe .text:0x20c6a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x214a80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x356100, 0x1fe000 bytes
    //
    _b33(sdk::unknown_ptr) resume_thread;
    
    // [KiRetireDpcList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4cce0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e8b30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b80e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x206910, 0x1fe000 bytes
    //
    _b34(sdk::unknown_ptr) retire_dpc_list;
    
    // [KiReverseStallIpiLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be380, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd22340, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd48340, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd22340, 0x1fe000 bytes
    //
    _b35(sdk::unknown_ptr) reverse_stall_ipi_lock;
    
    // [KiRundownMutants]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa1214, 0x32828 bytes
    // ntoskrnl.exe .text:0x25c694, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x213d4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x356978, 0x1fe000 bytes
    //
    _b36(sdk::unknown_ptr) rundown_mutants;
    
    // [KiSanitizeProfileInterval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1db724, 0x32828 bytes
    // ntoskrnl.exe .text:0x51c6e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x565028, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51c4e0, 0x1fe000 bytes
    //
    _b37(sdk::unknown_ptr) sanitize_profile_interval;
    
    // [KiSanitizedProfileInterval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308a28, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b190, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41274, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b10c, 0x1fe000 bytes
    //
    _b38(sdk::unknown_ptr) sanitized_profile_interval;
    
    // [KiSatisfyThreadWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dbfc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x51cd14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x565d8c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51cb14, 0x1fe000 bytes
    //
    _b39(sdk::unknown_ptr) satisfy_thread_wait;
    
    // [KiSaveCurrentEtwTraceBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d7e8c, 0x32828 bytes
    // ntoskrnl.exe .text:0x512b90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5569c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5129a0, 0x1fe000 bytes
    //
    _b40(sdk::unknown_ptr) save_current_etw_trace_buffer;
    
    // [KiSaveDebugRegisterState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15bbc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f43f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x428640, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5cd0, 0x1fe000 bytes
    //
    _b41(sdk::unknown_ptr) save_debug_register_state;
    
    // [KiSaveInitialProcessorControlState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b8f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f40d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x428320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f59b0, 0x1fe000 bytes
    //
    _b42(sdk::unknown_ptr) save_initial_processor_control_state;
    
    // [KiSaveNpxState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7a98c, 0x32828 bytes
    // ntoskrnl.exe .text:0x51f5c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x207ae4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51f3d0, 0x1fe000 bytes
    //
    _b43(sdk::unknown_ptr) save_npx_state;
    
    // [KiSaveProcessorControlState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ba00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f41f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x428440, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5ad0, 0x1fe000 bytes
    //
    _b44(sdk::unknown_ptr) save_processor_control_state;
    
    // [KiSaveProcessorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7a738, 0x32828 bytes
    // ntoskrnl.exe .text:0x51f620, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x207690, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51f430, 0x1fe000 bytes
    //
    _b45(sdk::unknown_ptr) save_processor_state;
    
    // [KiScanBugCheckCallbackList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d7fa8, 0x32828 bytes
    // ntoskrnl.exe .text:0x512cbc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x556aec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x512acc, 0x1fe000 bytes
    //
    _b46(sdk::unknown_ptr) scan_bug_check_callback_list;
    
    // [KiScanInterruptObjectList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15c9e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f53d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4297a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f6cb0, 0x1fe000 bytes
    //
    _b47(sdk::unknown_ptr) scan_interrupt_object_list;
    
    // [KiScheduleNextForegroundBoost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc3e34, 0x32828 bytes
    // ntoskrnl.exe .text:0x28d738, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x399ebc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x334784, 0x1fe000 bytes
    //
    _b48(sdk::unknown_ptr) schedule_next_foreground_boost;
    
    // [KiSchedulerApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa0e64, 0x32828 bytes
    // ntoskrnl.exe .text:0x20c9d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2146f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x356430, 0x1fe000 bytes
    //
    _b49(sdk::unknown_ptr) scheduler_apc;
    
    // [KiSchedulerApcNop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _b50(sdk::unknown_ptr) scheduler_apc_nop;
    
    // [KiSchedulerApcRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _b51(sdk::unknown_ptr) scheduler_apc_rundown;
    
    // [KiSchedulerApcTerminate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x485f50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f4520, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c6f10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d22b0, 0x1fe000 bytes
    //
    _b52(sdk::unknown_ptr) scheduler_apc_terminate;
    
    // [KiSchedulingGroupList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f200, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31b50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41e00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31ab0, 0x1fe000 bytes
    //
    _b53(sdk::unknown_ptr) scheduling_group_list;
    
    // [KiSchedulingGroupLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be200, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd22200, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd48200, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd22200, 0x1fe000 bytes
    //
    _b54(sdk::unknown_ptr) scheduling_group_lock;
    
    // [KiSearchForNewThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50310, 0x32828 bytes
    // ntoskrnl.exe .text:0x28af14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c7320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x330694, 0x1fe000 bytes
    //
    _b55(sdk::unknown_ptr) search_for_new_thread;
    
    // [KiSearchForNewThreadOnProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x506b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e4ce0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21a970, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x265ff0, 0x1fe000 bytes
    //
    _b56(sdk::unknown_ptr) search_for_new_thread_on_processor;
    
    // [KiSecondaryInterruptServicesEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308be0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b348, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41610, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b318, 0x1fe000 bytes
    //
    _b57(sdk::unknown_ptr) secondary_interrupt_services_enabled;
    
    // [KiSecondarySignalDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308ba0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b360, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41620, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b2c0, 0x1fe000 bytes
    //
    _b58(sdk::unknown_ptr) secondary_signal_dpc;
    
    // [KiSecondarySignalDpcRunning]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308c00, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b3a8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41678, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b328, 0x1fe000 bytes
    //
    _b59(sdk::unknown_ptr) secondary_signal_dpc_running;
    
    // [KiSecondarySignalList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308bf0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b3b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41660, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b300, 0x1fe000 bytes
    //
    _b60(sdk::unknown_ptr) secondary_signal_list;
    
    // [KiSecondarySignalListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308be8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b3c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41670, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b320, 0x1fe000 bytes
    //
    _b61(sdk::unknown_ptr) secondary_signal_list_lock;
    
    // [KiSegmentNotPresentFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x169180, 0x32828 bytes
    // ntoskrnl.exe .text:0x4012c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x436100, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x402bc0, 0x1fe000 bytes
    //
    _b62(sdk::unknown_ptr) segment_not_present_fault;
    
    // [KiSegmentNotPresentFaultShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23f580, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa126c0, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae26c0, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa116c0, 0x1fe000 bytes
    //
    _b63(sdk::unknown_ptr) segment_not_present_fault_shadow;
    
    // [KiSelectActiveTimerTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1289f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x24e6c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b80a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fbf94, 0x1fe000 bytes
    //
    _b64(sdk::unknown_ptr) select_active_timer_table;
    
    // [KiSelectCandidateProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dd4a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x51fdb4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x460f5e, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51fbc4, 0x1fe000 bytes
    //
    _b65(sdk::unknown_ptr) select_candidate_processor;
    
    // [KiSelectIdealProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7b08, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a12a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x211cb8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ca520, 0x1fe000 bytes
    //
    _b66(sdk::unknown_ptr) select_ideal_processor;
    
    // [KiSelectIdleProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1315a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x38c168, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5632b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38d208, 0x1fe000 bytes
    //
    _b67(sdk::unknown_ptr) select_idle_processor;
    
    // [KiSelectProcessorToPreempt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1da98c, 0x32828 bytes
    // ntoskrnl.exe .text:0x519f94, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x460254, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x519d98, 0x1fe000 bytes
    //
    _b68(sdk::unknown_ptr) select_processor_to_preempt;
    
    // [KiSendClockInterruptToClockOwner]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbfbd4, 0x32828 bytes
    // ntoskrnl.exe .text:0x25dd64, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32e078, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30e4b4, 0x1fe000 bytes
    //
    _b69(sdk::unknown_ptr) send_clock_interrupt_to_clock_owner;
    
    // [KiSendFreeze]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7b4c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x518390, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2085c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5181a0, 0x1fe000 bytes
    //
    _b70(sdk::unknown_ptr) send_freeze;
    
    // [KiSendThawExecution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7ac9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x518460, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2083d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x518270, 0x1fe000 bytes
    //
    _b71(sdk::unknown_ptr) send_thaw_execution;
    
    // [KiSerializeTimerExpiration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa01c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa024, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c034, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa024, 0x1fe000 bytes
    //
    _b72(sdk::unknown_ptr) serialize_timer_expiration;
    
    // [KiServiceInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16d1c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x405340, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x43a500, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x406c40, 0x1fe000 bytes
    //
    _b73(sdk::unknown_ptr) service_internal;
    
    // [KiServiceLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2f2628, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xc893c, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xcd848, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc8b3c, 0x1fe000 bytes
    //
    _b74(sdk::unknown_ptr) service_limit;
    
    // [KiServiceLinkage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15f000, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f7d00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42c9e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f95e0, 0x1fe000 bytes
    //
    _b75(sdk::unknown_ptr) service_linkage;
    
    // [KiServiceTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2f1f20, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xc81e0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xcd0b0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc83e0, 0x1fe000 bytes
    //
    _b76(sdk::unknown_ptr) service_table;
    
    // [KiServiceTablesLocked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce010, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd54010, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f010, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54010, 0x1fe000 bytes
    //
    _b77(sdk::unknown_ptr) service_tables_locked;
    
    // [KiSetAddressPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1db73c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2dda50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2df250, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25ecc0, 0x1fe000 bytes
    //
    _b78(sdk::function<void(uint32_t)>*) set_address_policy;
    
    // [KiSetAffinityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x97e9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a0c70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32a06c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ca140, 0x1fe000 bytes
    //
    _b79(sdk::unknown_ptr) set_affinity_thread;
    
    // [KiSetBasePriorityAndClearDecrement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x78778, 0x32828 bytes
    // ntoskrnl.exe .text:0x290260, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x217284, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x336300, 0x1fe000 bytes
    //
    _b80(sdk::unknown_ptr) set_base_priority_and_clear_decrement;
    
    // [KiSetCacheInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d5b4c, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99a158, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa76460, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x999910, 0x1fe000 bytes
    //
    _b81(sdk::unknown_ptr) set_cache_information;
    
    // [KiSetCacheInformationAmd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dd8bc, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9accfc, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8b588, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9abc6c, 0x1fe000 bytes
    //
    _b82(sdk::unknown_ptr) set_cache_information_amd;
    
    // [KiSetCacheInformationIntel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d5c60, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99a248, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa76550, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x999a00, 0x1fe000 bytes
    //
    _b83(sdk::unknown_ptr) set_cache_information_intel;
    
    // [KiSetClockInterval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbfc3c, 0x32828 bytes
    // ntoskrnl.exe .text:0x25de1c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32bd64, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30e56c, 0x1fe000 bytes
    //
    _b84(sdk::unknown_ptr) set_clock_interval;
    
    // [KiSetClockIntervalToMinimumRequested]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbfcd8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2911fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55ba1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2407d0, 0x1fe000 bytes
    //
    _b85(sdk::unknown_ptr) set_clock_interval_to_minimum_requested;
    
    // [KiSetClockTickRate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbfd04, 0x32828 bytes
    // ntoskrnl.exe .text:0x2912c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391484, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x24089c, 0x1fe000 bytes
    //
    _b86(sdk::unknown_ptr) set_clock_tick_rate;
    
    // [KiSetDebuggerOwner]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7ae00, 0x32828 bytes
    // ntoskrnl.exe .text:0x518624, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x208580, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x518434, 0x1fe000 bytes
    //
    _b87(sdk::unknown_ptr) set_debugger_owner;
    
    // [KiSetFeatureBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d38e0, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x998a84, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa77228, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9981ac, 0x1fe000 bytes
    //
    _b88(sdk::unknown_ptr) set_feature_bits;
    
    // [KiSetHeteroPolicyThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1daac0, 0x32828 bytes
    // ntoskrnl.exe .text:0x51a580, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x563610, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51a384, 0x1fe000 bytes
    //
    _b89(sdk::unknown_ptr) set_hetero_policy_thread;
    
    // [KiSetIdealNodeProcessByGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7a5c, 0x32828 bytes
    // ntoskrnl.exe .text:0x209aac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ee814, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x337f8c, 0x1fe000 bytes
    //
    _b90(sdk::unknown_ptr) set_ideal_node_process_by_group;
    
    // [KiSetIntervalWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10e1e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x368ed0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55fea0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a280, 0x1fe000 bytes
    //
    _b91(sdk::unknown_ptr) set_interval_worker;
    
    // [KiSetPageAttributesTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d2584, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x995940, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa766ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x994cdc, 0x1fe000 bytes
    //
    _b92(sdk::unknown_ptr) set_page_attributes_table;
    
    // [KiSetPendingTick]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbfe50, 0x32828 bytes
    // ntoskrnl.exe .text:0x2918bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33c7d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x24184c, 0x1fe000 bytes
    //
    _b93(sdk::unknown_ptr) set_pending_tick;
    
    // [KiSetPriorityBoost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x40c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2458cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x217e80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30bcb4, 0x1fe000 bytes
    //
    _b94(sdk::unknown_ptr) set_priority_boost;
    
    // [KiSetPriorityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5d700, 0x32828 bytes
    // ntoskrnl.exe .text:0x302250, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b4530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26c6d0, 0x1fe000 bytes
    //
    _b95(sdk::unknown_ptr) set_priority_thread;
    
    // [KiSetProcessorIdle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcef08, 0x32828 bytes
    // ntoskrnl.exe .text:0x28b478, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3540a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x330bf8, 0x1fe000 bytes
    //
    _b96(sdk::unknown_ptr) set_processor_idle;
    
    // [KiSetStandardizedCacheInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d5cb8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99a2a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa76c4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x999a60, 0x1fe000 bytes
    //
    _b97(sdk::unknown_ptr) set_standardized_cache_information;
    
    // [KiSetSystemAffinityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x988e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x28fa94, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33c2c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x335b3c, 0x1fe000 bytes
    //
    _b98(sdk::unknown_ptr) set_system_affinity_thread;
    
    // [KiSetSystemAffinityThreadToProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x139edc, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b01f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d6e38, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3abc54, 0x1fe000 bytes
    //
    _b99(sdk::unknown_ptr) set_system_affinity_thread_to_processor;
    
    // [KiSetSystemTimeDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x128848, 0x32828 bytes
    // ntoskrnl.exe .text:0x3994b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d0770, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39a970, 0x1fe000 bytes
    //
    _c00(sdk::unknown_ptr) set_system_time_dpc;
    
    // [KiSetThreadSchedulingGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8a9a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x244ae0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37286c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35b158, 0x1fe000 bytes
    //
    _c01(sdk::unknown_ptr) set_thread_scheduling_group;
    
    // [KiSetTimerEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x72dc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x290450, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b2bd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x236270, 0x1fe000 bytes
    //
    _c02(sdk::unknown_ptr) set_timer_ex;
    
    // [KiSetUserTbFlushPending]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15c6c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f5070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4293a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f6950, 0x1fe000 bytes
    //
    _c03(sdk::unknown_ptr) set_user_tb_flush_pending;
    
    // [KiSetupForInstrumentationReturn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xce764, 0x32828 bytes
    // ntoskrnl.exe .text:0x368b98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55c960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x369f48, 0x1fe000 bytes
    //
    _c04(sdk::unknown_ptr) setup_for_instrumentation_return;
    
    // [KiSetupTimeIncrement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x148270, 0x32828 bytes
    // ntoskrnl.exe .text:0x3af210, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3df688, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c61ec, 0x1fe000 bytes
    //
    _c05(sdk::unknown_ptr) setup_time_increment;
    
    // [KiShadowProcessorAllocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3ddde4, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99b800, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa793b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99a884, 0x1fe000 bytes
    //
    _c06(sdk::unknown_ptr) shadow_processor_allocation;
    
    // [KiShortExecutionCycles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab3ec, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb698, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd04, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb69c, 0x1fe000 bytes
    //
    _c07(sdk::unknown_ptr) short_execution_cycles;
    
    // [KiShouldActivateHRTimerClock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc5328, 0x32828 bytes
    // ntoskrnl.exe .text:0x28e92c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3630c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2438ec, 0x1fe000 bytes
    //
    _c08(sdk::unknown_ptr) should_activate_hr_timer_clock;
    
    // [KiShouldPreemptionBeDeferred]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x988c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x289bf4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21a484, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x333854, 0x1fe000 bytes
    //
    _c09(sdk::unknown_ptr) should_preemption_be_deferred;
    
    // [KiShouldScanSharedReadyQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc3c9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x28d04c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x217c9c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33293c, 0x1fe000 bytes
    //
    _c10(sdk::unknown_ptr) should_scan_shared_ready_queue;
    
    // [KiSignalThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeb050, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c56a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30836c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2466d0, 0x1fe000 bytes
    //
    _c11(sdk::unknown_ptr) signal_thread;
    
    // [KiSignalThreadForApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8b920, 0x32828 bytes
    // ntoskrnl.exe .text:0x20d280, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x308108, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3570c8, 0x1fe000 bytes
    //
    _c12(sdk::unknown_ptr) signal_thread_for_apc;
    
    // [KiSignalWaitDisconnectLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1db478, 0x32828 bytes
    // ntoskrnl.exe .text:0x51bfe4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x565c4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51bde4, 0x1fe000 bytes
    //
    _c13(sdk::unknown_ptr) signal_wait_disconnect_lock;
    
    // [KiSpuriousDispatchNoEOI]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15d880, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f6390, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42a830, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f7c70, 0x1fe000 bytes
    //
    _c14(sdk::unknown_ptr) spurious_dispatch_no_eoi;
    
    // [KiStackAttachProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9eba0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b2110, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2df6f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a88c0, 0x1fe000 bytes
    //
    _c15(sdk::unknown_ptr) stack_attach_process;
    
    // [KiStackFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x169580, 0x32828 bytes
    // ntoskrnl.exe .text:0x401680, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4364c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x402f80, 0x1fe000 bytes
    //
    _c16(sdk::unknown_ptr) stack_fault;
    
    // [KiStackFaultShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23f600, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa12740, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae2740, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa11740, 0x1fe000 bytes
    //
    _c17(sdk::unknown_ptr) stack_fault_shadow;
    
    // [KiStackInSwapListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f480, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31e70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc42198, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31df0, 0x1fe000 bytes
    //
    _c18(sdk::unknown_ptr) stack_in_swap_list_head;
    
    // [KiStackOutSwapRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341ed0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4298, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16b30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4298, 0x1fe000 bytes
    //
    _c19(sdk::unknown_ptr) stack_out_swap_request;
    
    // [KiStackProtectTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30887c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2af40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40d80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2aec0, 0x1fe000 bytes
    //
    _c20(sdk::unknown_ptr) stack_protect_time;
    
    // [KiStartDebugAccumulation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7a7c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x51867c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20759c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51848c, 0x1fe000 bytes
    //
    _c21(sdk::unknown_ptr) start_debug_accumulation;
    
    // [KiStartDpcThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x550ed8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77c500, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82d728, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x781210, 0x1fe000 bytes
    //
    _c22(sdk::unknown_ptr) start_dpc_thread;
    
    // [KiStartDynamicProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65403c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b7abc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x967a78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b626c, 0x1fe000 bytes
    //
    _c23(sdk::unknown_ptr) start_dynamic_processor;
    
    // [KiStartProfileTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d9968, 0x32828 bytes
    // ntoskrnl.exe .text:0x5162b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55fed0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5160c0, 0x1fe000 bytes
    //
    _c24(sdk::unknown_ptr) start_profile_target;
    
    // [KiStartSystemThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x162ce0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fb4d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42c1e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fcdb0, 0x1fe000 bytes
    //
    _c25(sdk::unknown_ptr) start_system_thread;
    
    // [KiStartThreadCycleAccumulation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5e300, 0x32828 bytes
    // ntoskrnl.exe .text:0x303210, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21dfe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26d690, 0x1fe000 bytes
    //
    _c26(sdk::unknown_ptr) start_thread_cycle_accumulation;
    
    // [KiStartUserThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x163100, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fb840, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42c5c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fd120, 0x1fe000 bytes
    //
    _c27(sdk::unknown_ptr) start_user_thread;
    
    // [KiStartUserThreadReturn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x163090, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fb7d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42c550, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fd0b0, 0x1fe000 bytes
    //
    _c28(sdk::unknown_ptr) start_user_thread_return;
    
    // [KiStopProfileTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d9b64, 0x32828 bytes
    // ntoskrnl.exe .text:0x516570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x560220, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x516380, 0x1fe000 bytes
    //
    _c29(sdk::unknown_ptr) stop_profile_target;
    
    // [KiSuspendThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8b534, 0x32828 bytes
    // ntoskrnl.exe .text:0x20cee4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x307de0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x356d2c, 0x1fe000 bytes
    //
    _c30(sdk::unknown_ptr) suspend_thread;
    
    // [KiSwInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x165320, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f9af0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42eaa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fb3d0, 0x1fe000 bytes
    //
    _c31(sdk::unknown_ptr) sw_interrupt;
    
    // [KiSwInterruptDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15547c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3d7550, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3f6f20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3d8620, 0x1fe000 bytes
    //
    _c32(sdk::unknown_ptr) sw_interrupt_dispatch;
    
    // [KiSwInterruptPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a9bb4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa44508, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb224f0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3e8f0, 0x1fe000 bytes
    //
    _c33(sdk::unknown_ptr) sw_interrupt_present;
    
    // [KiSwInterruptShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23fa80, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa12cc0, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae2cc0, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa11cc0, 0x1fe000 bytes
    //
    _c34(sdk::unknown_ptr) sw_interrupt_shadow;
    
    // [KiSwapContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1625b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fabb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42fda0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fc490, 0x1fe000 bytes
    //
    _c35(sdk::unknown_ptr) swap_context;
    
    // [KiSwapDirectoryTableBaseTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dc2d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x383d50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x201860, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x384b10, 0x1fe000 bytes
    //
    _c36(sdk::unknown_ptr) swap_directory_table_base_target;
    
    // [KiSwapEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f440, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31e80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc42120, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31dc0, 0x1fe000 bytes
    //
    _c37(sdk::unknown_ptr) swap_event;
    
    // [KiSwapThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4fba0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e4040, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c6360, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x265350, 0x1fe000 bytes
    //
    _c38(sdk::unknown_ptr) swap_thread;
    
    // [KiSwitchKernelStackAndCallout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ebf0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f76c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42bd10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f8fa0, 0x1fe000 bytes
    //
    _c39(sdk::unknown_ptr) switch_kernel_stack_and_callout;
    
    // [KiSwitchKernelStackContinue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ec6d, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f773c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42bd8c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f901c, 0x1fe000 bytes
    //
    _c40(sdk::unknown_ptr) switch_kernel_stack_continue;
    
    // [KiSwitchPriQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd26cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x26d840, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37ef00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31ef34, 0x1fe000 bytes
    //
    _c41(sdk::unknown_ptr) switch_pri_queue;
    
    // [KiSwitchQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc6c6c, 0x32828 bytes
    // ntoskrnl.exe .text:0x248344, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3088b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x358b60, 0x1fe000 bytes
    //
    _c42(sdk::unknown_ptr) switch_queue;
    
    // [KiSynchCounterSetCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x654694, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b82e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9680f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b6a90, 0x1fe000 bytes
    //
    _c43(sdk::unknown_ptr) synch_counter_set_callback;
    
    // [KiSynchNumaCounterSetCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x654794, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b83f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x968210, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b6ba0, 0x1fe000 bytes
    //
    _c44(sdk::unknown_ptr) synch_numa_counter_set_callback;
    
    // [KiSynchronizeAddressPolicyTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dc3b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x268c40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x376d40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x319e10, 0x1fe000 bytes
    //
    _c45(sdk::unknown_ptr) synchronize_address_policy_target;
    
    // [KiSynchronizePassiveInterruptExecution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1db4a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x51c020, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x565c80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51be20, 0x1fe000 bytes
    //
    _c46(sdk::unknown_ptr) synchronize_passive_interrupt_execution;
    
    // [KiSystemAllowedCpuSets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab840, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfc8f0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1f080, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfc8f0, 0x1fe000 bytes
    //
    _c47(sdk::unknown_ptr) system_allowed_cpu_sets;
    
    // [KiSystemCall32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16ccc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x404f00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x43a080, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x406800, 0x1fe000 bytes
    //
    _c48(sdk::unknown_ptr) system_call32;
    
    // [KiSystemCall32Shadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x240b40, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa13e40, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae3e40, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa12e40, 0x1fe000 bytes
    //
    _c49(sdk::unknown_ptr) system_call32_shadow;
    
    // [KiSystemCall64]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16d240, 0x32828 bytes
    // ntoskrnl.exe .text:0x4053c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x43a580, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x406cc0, 0x1fe000 bytes
    //
    _c50(sdk::unknown_ptr) system_call64;
    
    // [KiSystemCall64Shadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x240fc0, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa14180, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae41c0, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa13180, 0x1fe000 bytes
    //
    _c51(sdk::unknown_ptr) system_call64_shadow;
    
    // [KiSystemCallSelector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce134, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd5415c, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f15c, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd5415c, 0x1fe000 bytes
    //
    _c52(sdk::unknown_ptr) system_call_selector;
    
    // [KiSystemFullyCoherent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f7d28, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11168, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0bc68, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc111d8, 0x1fe000 bytes
    //
    _c53(sdk::unknown_ptr) system_fully_coherent;
    
    // [KiSystemService]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16cac0, 0x32828 bytes
    // ntoskrnl.exe .text:0x404cc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x439e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4065c0, 0x1fe000 bytes
    //
    _c54(sdk::unknown_ptr) system_service;
    
    // [KiSystemService32User]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16cce7, 0x32828 bytes
    // ntoskrnl.exe .text:0x404f27, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x43a0b7, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x406827, 0x1fe000 bytes
    //
    _c55(sdk::unknown_ptr) system_service32_user;
    
    // [KiSystemServiceCopyEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16d670, 0x32828 bytes
    // ntoskrnl.exe .text:0x405890, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x43aa40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x407190, 0x1fe000 bytes
    //
    _c56(sdk::unknown_ptr) system_service_copy_end;
    
    // [KiSystemServiceCopyStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16d600, 0x32828 bytes
    // ntoskrnl.exe .text:0x405820, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x43a9d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x407120, 0x1fe000 bytes
    //
    _c57(sdk::unknown_ptr) system_service_copy_start;
    
    // [KiSystemServiceExit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16d68b, 0x32828 bytes
    // ntoskrnl.exe .text:0x4058c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x43aa70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4071c0, 0x1fe000 bytes
    //
    _c58(sdk::unknown_ptr) system_service_exit;
    
    // [KiSystemServiceExitPico]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16d8ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x405b35, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x43ad23, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x407435, 0x1fe000 bytes
    //
    _c59(sdk::unknown_ptr) system_service_exit_pico;
    
    // [KiSystemServiceGdiTebAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16d567, 0x32828 bytes
    // ntoskrnl.exe .text:0x405787, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x43a937, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x407087, 0x1fe000 bytes
    //
    _c60(sdk::unknown_ptr) system_service_gdi_teb_access;
    
    // [KiSystemServiceHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16d0c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x405240, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x43a400, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x406b40, 0x1fe000 bytes
    //
    _c61(sdk::unknown_ptr) system_service_handler;
    
    // [KiSystemServiceRepeat]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16d514, 0x32828 bytes
    // ntoskrnl.exe .text:0x405734, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x43a8e4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x407034, 0x1fe000 bytes
    //
    _c62(sdk::unknown_ptr) system_service_repeat;
    
    // [KiSystemServiceShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23fc80, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa12ec0, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae2ec0, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa11ec0, 0x1fe000 bytes
    //
    _c63(sdk::unknown_ptr) system_service_shadow;
    
    // [KiSystemServiceStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16d500, 0x32828 bytes
    // ntoskrnl.exe .text:0x405720, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x43a8d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x407020, 0x1fe000 bytes
    //
    _c64(sdk::unknown_ptr) system_service_start;
    
    // [KiSystemServiceUser]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16d40b, 0x32828 bytes
    // ntoskrnl.exe .text:0x405600, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x43a802, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x406f00, 0x1fe000 bytes
    //
    _c65(sdk::unknown_ptr) system_service_user;
    
    // [KiSystemStartup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3c8010, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98c010, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa73010, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98b010, 0x1fe000 bytes
    //
    _c66(sdk::unknown_ptr) system_startup;
    
    // [KiSystemTimeErrorAccumulator]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x326f98, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50528, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a118, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50528, 0x1fe000 bytes
    //
    _c67(sdk::unknown_ptr) system_time_error_accumulator;
    
    // [KiTableInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fb968, 0x32828 bytes
    // ntoskrnl.exe .data:0xc13c08, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0ec8c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc13c58, 0x1fe000 bytes
    //
    _c68(sdk::unknown_ptr) table_information;
    
    // [KiTargetPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308acc, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b288, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc414c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b1a8, 0x1fe000 bytes
    //
    _c69(sdk::unknown_ptr) target_phase;
    
    // [KiTbFlushTimeStamp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be080, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd22080, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd48080, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd22080, 0x1fe000 bytes
    //
    _c70(sdk::unknown_ptr) tb_flush_time_stamp;
    
    // [KiTestDividend]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be040, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd22040, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd48040, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd22040, 0x1fe000 bytes
    //
    _c71(sdk::unknown_ptr) test_dividend;
    
    // [KiTestForAlertPending]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcf458, 0x32828 bytes
    // ntoskrnl.exe .text:0x20d920, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34e860, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x300548, 0x1fe000 bytes
    //
    _c72(sdk::unknown_ptr) test_for_alert_pending;
    
    // [KiThawSingleThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8752c, 0x32828 bytes
    // ntoskrnl.exe .text:0x20b9cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x375bf4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30b39c, 0x1fe000 bytes
    //
    _c73(sdk::unknown_ptr) thaw_single_thread;
    
    // [KiTickOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3246c4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c6a8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc647e8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c6a8, 0x1fe000 bytes
    //
    _c74(sdk::unknown_ptr) tick_offset;
    
    // [KiTimer2CollectionLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be640, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd22600, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd48380, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd22600, 0x1fe000 bytes
    //
    _c75(sdk::unknown_ptr) timer2_collection_lock;
    
    // [KiTimer2Collections]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f220, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31b80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41e40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31ae0, 0x1fe000 bytes
    //
    _c76(sdk::unknown_ptr) timer2_collections;
    
    // [KiTimer2Combinations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26d4f8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1a5b0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x16b80, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1a538, 0x1fe000 bytes
    //
    _c77(sdk::unknown_ptr) timer2_combinations;
    
    // [KiTimer2Expiration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ea40, 0x32828 bytes
    // ntoskrnl.exe .text:0x28dea0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b6ad0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x242e60, 0x1fe000 bytes
    //
    _c78(sdk::unknown_ptr) timer2_expiration;
    
    // [KiTimerDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITKDBG:0x2535d8, 0x32828 bytes
    // ntoskrnl.exe INITKDBG:0xa0f350, 0x1fe000 bytes
    // ntoskrnl.exe INITKDBG:0xaff7c0, 0x1fd000 bytes
    // ntoskrnl.exe INITKDBG:0xa0e350, 0x1fe000 bytes
    //
    _c79(sdk::unknown_ptr) timer_dispatch;
    
    // [KiTimerExpiration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x121330, 0x32828 bytes
    // ntoskrnl.exe .text:0x384ba0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5682b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x385960, 0x1fe000 bytes
    //
    _c80(sdk::unknown_ptr) timer_expiration;
    
    // [KiTimerExpirationDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x121260, 0x32828 bytes
    // ntoskrnl.exe .text:0x384a80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5684c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x385840, 0x1fe000 bytes
    //
    _c81(sdk::unknown_ptr) timer_expiration_dpc;
    
    // [KiTimerRebaseThresholdOnDripsExit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa264, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2b8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c300, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2b8, 0x1fe000 bytes
    //
    _c82(sdk::unknown_ptr) timer_rebase_threshold_on_drips_exit;
    
    // [KiTimerTableSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa320, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa344, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c448, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa340, 0x1fe000 bytes
    //
    _c83(sdk::unknown_ptr) timer_table_size;
    
    // [KiTimerWaitTest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d710, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c40c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b7a00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2450f0, 0x1fe000 bytes
    //
    _c84(sdk::unknown_ptr) timer_wait_test;
    
    // [KiTLBCOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab328, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb588, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dba0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb588, 0x1fe000 bytes
    //
    _c85(sdk::unknown_ptr) tlbc_override;
    
    // [KiTotalCpuSetCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab510, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb904, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dec8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb908, 0x1fe000 bytes
    //
    _c86(sdk::unknown_ptr) total_cpu_set_count;
    
    // [KiTraceCancelTimer2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dbc7c, 0x32828 bytes
    // ntoskrnl.exe .text:0x51dcdc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x460c98, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51dae4, 0x1fe000 bytes
    //
    _c87(sdk::unknown_ptr) trace_cancel_timer2;
    
    // [KiTraceSetTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dbd0c, 0x32828 bytes
    // ntoskrnl.exe .text:0x51dd74, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x460d30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51db7c, 0x1fe000 bytes
    //
    _c88(sdk::unknown_ptr) trace_set_timer;
    
    // [KiTraceSetTimer2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dbe14, 0x32828 bytes
    // ntoskrnl.exe .text:0x51dea8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x569084, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51dcb0, 0x1fe000 bytes
    //
    _c89(sdk::unknown_ptr) trace_set_timer2;
    
    // [KiTransitionSchedulingGroupGeneration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5e3d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x28d320, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32c8ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x332c10, 0x1fe000 bytes
    //
    _c90(sdk::unknown_ptr) transition_scheduling_group_generation;
    
    // [KiTriggerForegroundBoostDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcaec0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2602b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39b0e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x310b30, 0x1fe000 bytes
    //
    _c91(sdk::unknown_ptr) trigger_foreground_boost_dpc;
    
    // [KiTryScheduleNextForegroundBoost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa1d68, 0x32828 bytes
    // ntoskrnl.exe .text:0x28ca70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21b7f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x332358, 0x1fe000 bytes
    //
    _c92(sdk::unknown_ptr) try_schedule_next_foreground_boost;
    
    // [KiTryToAcquireQueuedSpinLockInstrumented]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d62f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x510758, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45e6fe, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x510568, 0x1fe000 bytes
    //
    _c93(sdk::unknown_ptr) try_to_acquire_queued_spin_lock_instrumented;
    
    // [KiTryToAcquireSpinLockInstrumented]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d64c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x510c14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45e99c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x510a24, 0x1fe000 bytes
    //
    _c94(sdk::unknown_ptr) try_to_acquire_spin_lock_instrumented;
    
    // [KiTryToEndDpcProcessing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xceee4, 0x32828 bytes
    // ntoskrnl.exe .text:0x26a4e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x568654, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31bb78, 0x1fe000 bytes
    //
    _c95(sdk::unknown_ptr) try_to_end_dpc_processing;
    
    // [KiTryUnwaitThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c800, 0x32828 bytes
    // ntoskrnl.exe .text:0x2cb330, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2be040, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x24c350, 0x1fe000 bytes
    //
    _c96(sdk::unknown_ptr) try_unwait_thread;
    
    // [KiTryUnwaitThreadWithPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x780f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c4900, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x308434, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x245930, 0x1fe000 bytes
    //
    _c97(sdk::unknown_ptr) try_unwait_thread_with_priority;
    
    // [KiUnlockKobjectArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbb4bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a2eb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34eaa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2cda5c, 0x1fe000 bytes
    //
    _c98(sdk::unknown_ptr) unlock_kobject_array;
    
    // [KiUnmaskSecondaryInterruptInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d86ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x513a64, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55d8e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x513874, 0x1fe000 bytes
    //
    _c99(sdk::unknown_ptr) unmask_secondary_interrupt_internal;
    
    // [KiUnshadowProcessorAllocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dded0, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9ad00c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8b9cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9abf7c, 0x1fe000 bytes
    //
    _d00(sdk::unknown_ptr) unshadow_processor_allocation;
    
    // [KiUnstackDetachProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa01d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2dd020, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2dfaf4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25e290, 0x1fe000 bytes
    //
    _d01(sdk::unknown_ptr) unstack_detach_process;
    
    // [KiUpdateChildrenCpuTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbc9fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x51dc38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x568fe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51da40, 0x1fe000 bytes
    //
    _d02(sdk::unknown_ptr) update_children_cpu_target;
    
    // [KiUpdateCpuTargetByRate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbce20, 0x32828 bytes
    // ntoskrnl.exe .text:0x357e08, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32af10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dc214, 0x1fe000 bytes
    //
    _d03(sdk::unknown_ptr) update_cpu_target_by_rate;
    
    // [KiUpdateCpuTargetByWeight]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbd0b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x357b30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32ad2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dbf3c, 0x1fe000 bytes
    //
    _d04(sdk::unknown_ptr) update_cpu_target_by_weight;
    
    // [KiUpdateGlobalCpuSetConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10ff3c, 0x32828 bytes
    // ntoskrnl.exe .text:0x245388, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d3238, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x202694, 0x1fe000 bytes
    //
    _d05(sdk::unknown_ptr) update_global_cpu_set_configuration;
    
    // [KiUpdateMinimumWeight]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbcbb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x357ce8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32abe8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dc0f4, 0x1fe000 bytes
    //
    _d06(sdk::unknown_ptr) update_minimum_weight;
    
    // [KiUpdateNodeAffinitizedFlag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa1d90, 0x32828 bytes
    // ntoskrnl.exe .text:0x288e14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x212320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32fd84, 0x1fe000 bytes
    //
    _d07(sdk::unknown_ptr) update_node_affinitized_flag;
    
    // [KiUpdateNumberProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dd610, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9ac974, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8b1b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9ab8e4, 0x1fe000 bytes
    //
    _d08(sdk::unknown_ptr) update_number_processors;
    
    // [KiUpdateNumberProcessorsIpi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dd674, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9ac9f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8b230, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9ab960, 0x1fe000 bytes
    //
    _d09(sdk::unknown_ptr) update_number_processors_ipi;
    
    // [KiUpdateProcessorCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d4c18, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99b390, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa78e14, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99a414, 0x1fe000 bytes
    //
    _d10(sdk::unknown_ptr) update_processor_count;
    
    // [KiUpdateSharedReadyQueueAffinityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa1d18, 0x32828 bytes
    // ntoskrnl.exe .text:0x302da0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x212b5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26d220, 0x1fe000 bytes
    //
    _d11(sdk::unknown_ptr) update_shared_ready_queue_affinity_thread;
    
    // [KiUpdateSystemTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x130ea4, 0x32828 bytes
    // ntoskrnl.exe .text:0x393828, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a3838, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x394888, 0x1fe000 bytes
    //
    _d12(sdk::unknown_ptr) update_system_time;
    
    // [KiUpdateThreadCpuSets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1da278, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c12fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d3d50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c210c, 0x1fe000 bytes
    //
    _d13(sdk::unknown_ptr) update_thread_cpu_sets;
    
    // [KiUpdateThreadPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x43f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x302e00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21a4d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26d280, 0x1fe000 bytes
    //
    _d14(sdk::unknown_ptr) update_thread_priority;
    
    // [KiUpdateTimeAssist]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7aeb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x245624, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36b1b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2409f8, 0x1fe000 bytes
    //
    _d15(sdk::unknown_ptr) update_time_assist;
    
    // [KiUpdateTimer2Flags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfc1f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x28ebac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f9708, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35b8d4, 0x1fe000 bytes
    //
    _d16(sdk::unknown_ptr) update_timer2_flags;
    
    // [KiUpdateTotalCyclesCurrentThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5e818, 0x32828 bytes
    // ntoskrnl.exe .text:0x28d1b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21ce7c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x332aa0, 0x1fe000 bytes
    //
    _d17(sdk::unknown_ptr) update_total_cycles_current_thread;
    
    // [KiUpdateXSaveSizeAndVolatileFeatures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d6078, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99d710, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7c6e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99c790, 0x1fe000 bytes
    //
    _d18(sdk::unknown_ptr) update_x_save_size_and_volatile_features;
    
    // [KiUserCodePatchMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308840, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2af00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40d00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2ae80, 0x1fe000 bytes
    //
    _d19(sdk::unknown_ptr) user_code_patch_mutex;
    
    // [KiValidateCpuSetMasks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x110044, 0x32828 bytes
    // ntoskrnl.exe .text:0x245884, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d2e68, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x202930, 0x1fe000 bytes
    //
    _d20(sdk::unknown_ptr) validate_cpu_set_masks;
    
    // [KiVerifyPass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce4e8, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd54620, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f620, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54620, 0x1fe000 bytes
    //
    _d21(sdk::unknown_ptr) verify_pass;
    
    // [KiVerifyPdata]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79a64c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5efb4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4bf0c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5ee54, 0x1fe000 bytes
    //
    _d22(sdk::unknown_ptr) verify_pdata;
    
    // [KiVerifyScopesExecute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79a068, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5e8d0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4b7e0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5e770, 0x1fe000 bytes
    //
    _d23(sdk::unknown_ptr) verify_scopes_execute;
    
    // [KiVerifyXcpt0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79a14c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5e9d0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4bad0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5e870, 0x1fe000 bytes
    //
    _d24(sdk::unknown_ptr) verify_xcpt0;
    
    // [KiVerifyXcpt1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79a18c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5ea20, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4ba80, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5e8c0, 0x1fe000 bytes
    //
    _d25(sdk::unknown_ptr) verify_xcpt1;
    
    // [KiVerifyXcpt10]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79a3bc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5ece0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4bd90, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5eb80, 0x1fe000 bytes
    //
    _d26(sdk::unknown_ptr) verify_xcpt10;
    
    // [KiVerifyXcpt11]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79a4b8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5edf0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4b930, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5ec90, 0x1fe000 bytes
    //
    _d27(sdk::unknown_ptr) verify_xcpt11;
    
    // [KiVerifyXcpt12]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79a500, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5ee40, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4bd00, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5ece0, 0x1fe000 bytes
    //
    _d28(sdk::unknown_ptr) verify_xcpt12;
    
    // [KiVerifyXcpt13]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79a568, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5eeb0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4b8e0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5ed50, 0x1fe000 bytes
    //
    _d29(sdk::unknown_ptr) verify_xcpt13;
    
    // [KiVerifyXcpt14]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79a5b0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5ef00, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4bb20, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5eda0, 0x1fe000 bytes
    //
    _d30(sdk::unknown_ptr) verify_xcpt14;
    
    // [KiVerifyXcpt15]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7632e0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19320, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03320, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18320, 0x1fe000 bytes
    //
    _d31(sdk::unknown_ptr) verify_xcpt15;
    
    // [KiVerifyXcpt2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79a028, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5e87c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4b784, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5e71c, 0x1fe000 bytes
    //
    _d32(sdk::unknown_ptr) verify_xcpt2;
    
    // [KiVerifyXcpt3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79a1cc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5ea70, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4ba30, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5e910, 0x1fe000 bytes
    //
    _d33(sdk::unknown_ptr) verify_xcpt3;
    
    // [KiVerifyXcpt4]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79a20c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5eac0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4b9e0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5e960, 0x1fe000 bytes
    //
    _d34(sdk::unknown_ptr) verify_xcpt4;
    
    // [KiVerifyXcpt5]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79a24c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5eb10, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4b990, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5e9b0, 0x1fe000 bytes
    //
    _d35(sdk::unknown_ptr) verify_xcpt5;
    
    // [KiVerifyXcpt6]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79a28c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5eb60, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4bca0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5ea00, 0x1fe000 bytes
    //
    _d36(sdk::unknown_ptr) verify_xcpt6;
    
    // [KiVerifyXcpt7]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79a2d8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5ebc0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4bc40, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5ea60, 0x1fe000 bytes
    //
    _d37(sdk::unknown_ptr) verify_xcpt7;
    
    // [KiVerifyXcpt8]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79a324, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5ec20, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4bbe0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5eac0, 0x1fe000 bytes
    //
    _d38(sdk::unknown_ptr) verify_xcpt8;
    
    // [KiVerifyXcpt9]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79a370, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5ec80, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4bb80, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5eb20, 0x1fe000 bytes
    //
    _d39(sdk::unknown_ptr) verify_xcpt9;
    
    // [KiVerifyXcptFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79a604, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5ef5c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4beb4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5edfc, 0x1fe000 bytes
    //
    _d40(sdk::unknown_ptr) verify_xcpt_filter;
    
    // [KiVerifyXcptFinally]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79a61c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5ef7c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4bed4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5ee1c, 0x1fe000 bytes
    //
    _d41(sdk::unknown_ptr) verify_xcpt_finally;
    
    // [KiVerifyXcptRoutines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce0a0, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd540d0, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f0d0, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd540d0, 0x1fe000 bytes
    //
    _d42(sdk::unknown_ptr) verify_xcpt_routines;
    
    // [KiVirtFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32719b, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50b3f, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a8ff, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50b37, 0x1fe000 bytes
    //
    _d43(sdk::unknown_ptr) virt_flags;
    
    // [KiVmbusInterrupt0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x160490, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f8790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42d550, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fa070, 0x1fe000 bytes
    //
    _d44(sdk::unknown_ptr) vmbus_interrupt0;
    
    // [KiVmbusInterrupt0Shadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23fe00, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa13040, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae3040, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa12040, 0x1fe000 bytes
    //
    _d45(sdk::unknown_ptr) vmbus_interrupt0_shadow;
    
    // [KiVmbusInterrupt1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x160b30, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f8a70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42d890, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fa350, 0x1fe000 bytes
    //
    _d46(sdk::unknown_ptr) vmbus_interrupt1;
    
    // [KiVmbusInterrupt1Shadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23fe80, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa130c0, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae30c0, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa120c0, 0x1fe000 bytes
    //
    _d47(sdk::unknown_ptr) vmbus_interrupt1_shadow;
    
    // [KiVmbusInterrupt2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1611d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f8d50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42dbd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fa630, 0x1fe000 bytes
    //
    _d48(sdk::unknown_ptr) vmbus_interrupt2;
    
    // [KiVmbusInterrupt2Shadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23ff00, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa13140, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae3140, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa12140, 0x1fe000 bytes
    //
    _d49(sdk::unknown_ptr) vmbus_interrupt2_shadow;
    
    // [KiVmbusInterrupt3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x161870, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f9030, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42df10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fa910, 0x1fe000 bytes
    //
    _d50(sdk::unknown_ptr) vmbus_interrupt3;
    
    // [KiVmbusInterrupt3Shadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23ff80, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa131c0, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae31c0, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa121c0, 0x1fe000 bytes
    //
    _d51(sdk::unknown_ptr) vmbus_interrupt3_shadow;
    
    // [KiWaitAlways]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab650, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb9f8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e0f0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb9f8, 0x1fe000 bytes
    //
    _d52(sdk::unknown_ptr) wait_always;
    
    // [KiWaitForAllObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbb11c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a2a28, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34e104, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2cd0f4, 0x1fe000 bytes
    //
    _d53(sdk::unknown_ptr) wait_for_all_objects;
    
    // [KiWaitForContextSwap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa0a90, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c34e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2feddc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x244514, 0x1fe000 bytes
    //
    _d54(sdk::unknown_ptr) wait_for_context_swap;
    
    // [KiWaitForReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16ee8c, 0x32828 bytes
    // ntoskrnl.exe .text:0x50cea0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x557f90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50cc90, 0x1fe000 bytes
    //
    _d55(sdk::function<void()>*) wait_for_reboot;
    
    // [KiWaitNever]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab4c8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb7f8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1de58, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb7f8, 0x1fe000 bytes
    //
    _d56(sdk::unknown_ptr) wait_never;
    
    // [KiWaitSatisfyMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbb4f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x27eda8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x302c20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2cda98, 0x1fe000 bytes
    //
    _d57(sdk::unknown_ptr) wait_satisfy_mutant;
    
    // [KiWaitSatisfyOther]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbb494, 0x32828 bytes
    // ntoskrnl.exe .text:0x28eb50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34e5b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2cda2c, 0x1fe000 bytes
    //
    _d58(sdk::unknown_ptr) wait_satisfy_other;
    
    // [KiWakeOtherQueueWaiters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa8540, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c52b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f8b00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2462e0, 0x1fe000 bytes
    //
    _d59(sdk::unknown_ptr) wake_other_queue_waiters;
    
    // [KiWakePriQueueWaiter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x78070, 0x32828 bytes
    // ntoskrnl.exe .text:0x2bdfb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x308798, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x358a90, 0x1fe000 bytes
    //
    _d60(sdk::unknown_ptr) wake_pri_queue_waiter;
    
    // [KiWakeQueueWaiter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x52d50, 0x32828 bytes
    // ntoskrnl.exe .text:0x28e9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2961e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x243980, 0x1fe000 bytes
    //
    _d61(sdk::unknown_ptr) wake_queue_waiter;
    
    // [KiWriteCpuSetMasks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1da320, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c1394, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d3404, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c21a4, 0x1fe000 bytes
    //
    _d62(sdk::unknown_ptr) write_cpu_set_masks;
    
    // [KiWriteFixedMtrr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d22ec, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x995c5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa78aa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x994ffc, 0x1fe000 bytes
    //
    _d63(sdk::unknown_ptr) write_fixed_mtrr;
    
    // [KiXmmException]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16ba40, 0x32828 bytes
    // ntoskrnl.exe .text:0x403540, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x438540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x404e40, 0x1fe000 bytes
    //
    _d64(sdk::unknown_ptr) xmm_exception;
    
    // [KiXmmExceptionShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23f980, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa12ac0, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae2ac0, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa11ac0, 0x1fe000 bytes
    //
    _d65(sdk::unknown_ptr) xmm_exception_shadow;
    
    // [KiRaiseUserExceptionDispatcher]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa9cc0, 0x67960 bytes
    // ntdll.dll .text:0x9fc90, 0x6fc38 bytes
    // ntdll.dll .text:0xa2e50, 0x74648 bytes
    // ntdll.dll .text:0x9fc70, 0x6fc38 bytes
    //
    _d66(sdk::unknown_ptr) raise_user_exception_dispatcher;
    
    // [KiUserApcDispatch]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa9b00, 0x67960 bytes
    // ntdll.dll .text:0x9fac0, 0x6fc38 bytes
    // ntdll.dll .text:0xa2c70, 0x74648 bytes
    // ntdll.dll .text:0x9faa0, 0x6fc38 bytes
    //
    _d67(sdk::unknown_ptr) user_apc_dispatch;
    
    // [KiUserApcDispatcher]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa9b00, 0x67960 bytes
    // ntdll.dll .text:0x9fac0, 0x6fc38 bytes
    // ntdll.dll .text:0xa2c70, 0x74648 bytes
    // ntdll.dll .text:0x9faa0, 0x6fc38 bytes
    //
    _d68(sdk::unknown_ptr) user_apc_dispatcher;
    
    // [KiUserApcHandler]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa9a80, 0x67960 bytes
    // ntdll.dll .text:0x9fa40, 0x6fc38 bytes
    // ntdll.dll .text:0xa2bf0, 0x74648 bytes
    // ntdll.dll .text:0x9fa20, 0x6fc38 bytes
    //
    _d69(sdk::unknown_ptr) user_apc_handler;
    
    // [KiUserCallForwarder]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa9ab0, 0x67960 bytes
    // ntdll.dll .text:0x9fa70, 0x6fc38 bytes
    // ntdll.dll .text:0xa2c20, 0x74648 bytes
    // ntdll.dll .text:0x9fa50, 0x6fc38 bytes
    //
    _d70(sdk::unknown_ptr) user_call_forwarder;
    
    // [KiUserCallbackDispatch]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa9c00, 0x67960 bytes
    // ntdll.dll .text:0x9fbd0, 0x6fc38 bytes
    // ntdll.dll .text:0xa2d90, 0x74648 bytes
    // ntdll.dll .text:0x9fbb0, 0x6fc38 bytes
    //
    _d71(sdk::unknown_ptr) user_callback_dispatch;
    
    // [KiUserCallbackDispatcher]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa9c00, 0x67960 bytes
    // ntdll.dll .text:0x9fbd0, 0x6fc38 bytes
    // ntdll.dll .text:0xa2d90, 0x74648 bytes
    // ntdll.dll .text:0x9fbb0, 0x6fc38 bytes
    //
    _d72(sdk::unknown_ptr) user_callback_dispatcher;
    
    // [KiUserCallbackDispatcherContinue]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa9c24, 0x67960 bytes
    // ntdll.dll .text:0x9fbf4, 0x6fc38 bytes
    // ntdll.dll .text:0xa2db4, 0x74648 bytes
    // ntdll.dll .text:0x9fbd4, 0x6fc38 bytes
    //
    _d73(sdk::unknown_ptr) user_callback_dispatcher_continue;
    
    // [KiUserCallbackDispatcherHandler]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa9b70, 0x67960 bytes
    // ntdll.dll .text:0x9fb40, 0x6fc38 bytes
    // ntdll.dll .text:0xa2d00, 0x74648 bytes
    // ntdll.dll .text:0x9fb20, 0x6fc38 bytes
    //
    _d74(sdk::unknown_ptr) user_callback_dispatcher_handler;
    
    // [KiUserExceptionDispatch]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa9c50, 0x67960 bytes
    // ntdll.dll .text:0x9fc20, 0x6fc38 bytes
    // ntdll.dll .text:0xa2de0, 0x74648 bytes
    // ntdll.dll .text:0x9fc00, 0x6fc38 bytes
    //
    _d75(sdk::unknown_ptr) user_exception_dispatch;
    
    // [KiUserExceptionDispatcher]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa9c50, 0x67960 bytes
    // ntdll.dll .text:0x9fc20, 0x6fc38 bytes
    // ntdll.dll .text:0xa2de0, 0x74648 bytes
    // ntdll.dll .text:0x9fc00, 0x6fc38 bytes
    //
    _d76(sdk::unknown_ptr) user_exception_dispatcher;
};
#include "magic/api.end.hpp"
