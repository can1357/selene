#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/mdl_t.hpp"
#include "../nt/kapc_t.hpp"
#include "../nt/kdpc_t.hpp"
#include "../nt/kpcr_t.hpp"
#include "../nt/kprcb_t.hpp"
#include "../nt/kevent_t.hpp"
#include "../nt/kqueue_t.hpp"
#include "../nt/ktimer_t.hpp"
#include "../nt/kmutant_t.hpp"
#include "../nt/kthread_t.hpp"
#include "../nt/client_id_t.hpp"
#include "../nt/wait_type_t.hpp"
#include "../nt/event_type_t.hpp"
#include "../nt/fast_mutex_t.hpp"
#include "../nt/kapc_state_t.hpp"
#include "../nt/kinterrupt_t.hpp"
#include "../nt/ksemaphore_t.hpp"
#include "../nt/timer_type_t.hpp"
#include "../nt/kstack_type_t.hpp"
#include "../nt/kwait_block_t.hpp"
#include "../nt/xstate_save_t.hpp"
#include "../nt/kaffinity_ex_t.hpp"
#include "../nt/kwait_reason_t.hpp"
#include "../nt/kdevice_queue_t.hpp"
#include "../nt/group_affinity_t.hpp"
#include "../nt/kfloating_save_t.hpp"
#include "../nt/kdpc_importance_t.hpp"
#include "../nt/kprofile_source_t.hpp"
#include "../nt/hardware_counter_t.hpp"
#include "../nt/kapc_environment_t.hpp"
#include "../nt/processor_number_t.hpp"
#include "../nt/klock_queue_handle_t.hpp"
#include "../nt/kdevice_queue_entry_t.hpp"
#include "../nt/bound_callback_status_t.hpp"
#include "../nt/kbugcheck_callback_reason_t.hpp"
#include "../nt/kbugcheck_callback_record_t.hpp"
#include "../nt/kdpc_watchdog_information_t.hpp"
#include "../nt/logical_processor_relationship_t.hpp"
#include "../nt/kbugcheck_reason_callback_record_t.hpp"
#include "../nt/system_logical_processor_information_ex_t.hpp"

namespace nt { struct kpriqueue_t; }
namespace nt { struct kprocess_t;  }

#include "magic/api.start.hpp"
namespace ke
{
    // [KeAbPostAcquire]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x391660, 0x1fd000 bytes
    //
    _m00(sdk::unknown_ptr) ab_post_acquire;
    
    // [KeAbPreWakeupHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2e5864, 0x1fd000 bytes
    //
    _m01(sdk::unknown_ptr) ab_pre_wakeup_handle;
    
    // [KeAcquireQueuedSpinLockAtDpcLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x5094, 0x32828 bytes
    //
    _m02(sdk::unknown_ptr) acquire_queued_spin_lock_at_dpc_level;
    
    // [KeAndAffinityEx2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x55abe0, 0x1fd000 bytes
    //
    _m03(sdk::unknown_ptr) and_affinity_ex2;
    
    // [KeApplyWobBamQos]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x29aa50, 0x1fd000 bytes
    //
    _m04(sdk::unknown_ptr) apply_wob_bam_qos;
    
    // [KeAssignCpuPartitionsToProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x560564, 0x1fd000 bytes
    //
    _m05(sdk::unknown_ptr) assign_cpu_partitions_to_process;
    
    // [KeBugCheckUnicodeToAnsi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1d747c, 0x32828 bytes
    //
    _m06(sdk::unknown_ptr) bug_check_unicode_to_ansi;
    
    // [KeCheckedKernelInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb03b50, 0x1fd000 bytes
    //
    _m07(sdk::unknown_ptr) checked_kernel_initialize;
    
    // [KeClearSystemPriorityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5626ec, 0x1fd000 bytes
    //
    _m08(sdk::unknown_ptr) clear_system_priority_thread;
    
    // [KeComplementAffinityEx2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x55ac30, 0x1fd000 bytes
    //
    _m09(sdk::unknown_ptr) complement_affinity_ex2;
    
    // [KeCopyAffinityEx2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e91d0, 0x1fd000 bytes
    //
    _m10(sdk::function<void(struct nt::kaffinity_ex_t*, struct nt::kaffinity_ex_t*)>*) copy_affinity_ex2;
    
    // [KeCopyXfdMaskToPeb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x304b70, 0x1fd000 bytes
    //
    _m11(sdk::unknown_ptr) copy_xfd_mask_to_peb;
    
    // [KeCopyXfdMaskToTeb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x55de70, 0x1fd000 bytes
    //
    _m12(sdk::unknown_ptr) copy_xfd_mask_to_teb;
    
    // [KeCpuPartitionMoveCpus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x56090c, 0x1fd000 bytes
    //
    _m13(sdk::unknown_ptr) cpu_partition_move_cpus;
    
    // [KeDecoupledStateSaveAreaLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1db80, 0x1fd000 bytes
    //
    _m14(sdk::unknown_ptr) decoupled_state_save_area_length;
    
    // [KeDeleteCpuPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9692a8, 0x1fd000 bytes
    //
    _m15(sdk::unknown_ptr) delete_cpu_partition;
    
    // [KeDisableForceIdle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x568760, 0x1fd000 bytes
    //
    _m16(sdk::unknown_ptr) disable_force_idle;
    
    // [KeDpcCumulativeSoftTimeoutMs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1c03c, 0x1fd000 bytes
    //
    _m17(sdk::unknown_ptr) dpc_cumulative_soft_timeout_ms;
    
    // [KeDpcSoftTimeoutMs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1c038, 0x1fd000 bytes
    //
    _m18(sdk::unknown_ptr) dpc_soft_timeout_ms;
    
    // [KeDpcTimeoutMs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1c030, 0x1fd000 bytes
    //
    _m19(sdk::unknown_ptr) dpc_timeout_ms;
    
    // [KeDpcWatchdogPeriodMs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1c02c, 0x1fd000 bytes
    //
    _m20(sdk::unknown_ptr) dpc_watchdog_period_ms;
    
    // [KeDpcWatchdogProfileBufferSizeBytes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1c044, 0x1fd000 bytes
    //
    _m21(sdk::unknown_ptr) dpc_watchdog_profile_buffer_size_bytes;
    
    // [KeDpcWatchdogProfileCumulativeDpcThresholdMs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1c024, 0x1fd000 bytes
    //
    _m22(sdk::unknown_ptr) dpc_watchdog_profile_cumulative_dpc_threshold_ms;
    
    // [KeDpcWatchdogProfileOffsetMs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1ded4, 0x1fd000 bytes
    //
    _m23(sdk::unknown_ptr) dpc_watchdog_profile_offset_ms;
    
    // [KeDpcWatchdogProfileSingleDpcThresholdMs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1c028, 0x1fd000 bytes
    //
    _m24(sdk::unknown_ptr) dpc_watchdog_profile_single_dpc_threshold_ms;
    
    // [KeEnableOptionalXStateFeaturesApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x55dfa0, 0x1fd000 bytes
    //
    _m25(sdk::unknown_ptr) enable_optional_x_state_features_apc;
    
    // [KeEnabledSupervisorXStateFeatures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1dbf0, 0x1fd000 bytes
    //
    _m26(sdk::unknown_ptr) enabled_supervisor_x_state_features;
    
    // [KeEnumerateNextSchedulerSubNodeInNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x33bf98, 0x1fd000 bytes
    //
    _m27(sdk::unknown_ptr) enumerate_next_scheduler_sub_node_in_node;
    
    // [KeEtwInitializeCpuStarvationProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e1bcc, 0x1fd000 bytes
    //
    _m28(sdk::unknown_ptr) etw_initialize_cpu_starvation_provider;
    
    // [KeFastAcquireInStackQueuedSpinLockAndRaise]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xb249c, 0x32828 bytes
    //
    _m29(sdk::unknown_ptr) fast_acquire_in_stack_queued_spin_lock_and_raise;
    
    // [KeGenericCallDpcEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x34dae4, 0x1fd000 bytes
    //
    _m30(sdk::unknown_ptr) generic_call_dpc_ex;
    
    // [KeGetBugMessageResourceEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1d7504, 0x32828 bytes
    //
    _m31(sdk::unknown_ptr) get_bug_message_resource_entry;
    
    // [KeGetCurrentNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3d9a4c, 0x1fd000 bytes
    //
    _m32(sdk::unknown_ptr) get_current_node;
    
    // [KeGetHeteroPolicies]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3c9478, 0x1fd000 bytes
    //
    _m33(sdk::unknown_ptr) get_hetero_policies;
    
    // [KeGetHeteroSetByPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3c9528, 0x1fd000 bytes
    //
    _m34(sdk::unknown_ptr) get_hetero_set_by_policy;
    
    // [KeGetHeteroSetByQoS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x558338, 0x1fd000 bytes
    //
    _m35(sdk::unknown_ptr) get_hetero_set_by_qo_s;
    
    // [KeGetIdealNodeNumberThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x55c130, 0x1fd000 bytes
    //
    _m36(sdk::unknown_ptr) get_ideal_node_number_thread;
    
    // [KeGetMostEfficientProcessorInMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5604bc, 0x1fd000 bytes
    //
    _m37(sdk::unknown_ptr) get_most_efficient_processor_in_mask;
    
    // [KeGetNodePrimarySubNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x33a664, 0x1fd000 bytes
    //
    _m38(sdk::unknown_ptr) get_node_primary_sub_node;
    
    // [KeGetProcessorNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3857ec, 0x1fd000 bytes
    //
    _m39(sdk::unknown_ptr) get_processor_node;
    
    // [KeGetProcessorNodeNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x380624, 0x1fd000 bytes
    //
    _m40(sdk::function<uint16_t(struct nt::kprcb_t*)>*) get_processor_node_number;
    
    // [KeGetProcessorNodeNumberByIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x214bc4, 0x1fd000 bytes
    //
    _m41(sdk::unknown_ptr) get_processor_node_number_by_index;
    
    // [KeGetThreadPpmPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x56270c, 0x1fd000 bytes
    //
    _m42(sdk::unknown_ptr) get_thread_ppm_policy;
    
    // [KeGetThreadWorkloadClassCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x385bd0, 0x1fd000 bytes
    //
    _m43(sdk::unknown_ptr) get_thread_workload_class_count;
    
    // [KeGetTopologyIdForProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x55c158, 0x1fd000 bytes
    //
    _m44(sdk::unknown_ptr) get_topology_id_for_processor;
    
    // [KeHotpatchTestMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1c304, 0x1fd000 bytes
    //
    _m45(sdk::unknown_ptr) hotpatch_test_mode;
    
    // [KeInitializeAffinityEx2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2134c0, 0x1fd000 bytes
    //
    _m46(sdk::function<void(struct nt::kaffinity_ex_t*, uint16_t)>*) initialize_affinity_ex2;
    
    // [KeInitializeBootProcessorShadowState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGELK:0x3dd42c, 0x32828 bytes
    //
    _m47(sdk::unknown_ptr) initialize_boot_processor_shadow_state;
    
    // [KeInitializeClockOtherProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa77ff0, 0x1fd000 bytes
    //
    _m48(sdk::unknown_ptr) initialize_clock_other_processors;
    
    // [KeInitializeCpuPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3ac038, 0x1fd000 bytes
    //
    _m49(sdk::unknown_ptr) initialize_cpu_partition;
    
    // [KeInitializeIdealProcessorAssignmentBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2ee9c8, 0x1fd000 bytes
    //
    _m50(sdk::unknown_ptr) initialize_ideal_processor_assignment_block;
    
    // [KeInitializeProcessUserCetLogging]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x969524, 0x1fd000 bytes
    //
    _m51(sdk::unknown_ptr) initialize_process_user_cet_logging;
    
    // [KeInitializeSchedulerSubNodeEnumerationContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3c9460, 0x1fd000 bytes
    //
    _m52(sdk::unknown_ptr) initialize_scheduler_sub_node_enumeration_context;
    
    // [KeIsBugCheckActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2f4da0, 0x1fd000 bytes
    //
    _m53(sdk::unknown_ptr) is_bug_check_active;
    
    // [KeIsCoreIsolationMitigationPolicyEnforceable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2ee984, 0x1fd000 bytes
    //
    _m54(sdk::unknown_ptr) is_core_isolation_mitigation_policy_enforceable;
    
    // [KeIsImageIATProtected]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x55842c, 0x1fd000 bytes
    //
    _m55(sdk::unknown_ptr) is_image_iat_protected;
    
    // [KeIsImportOptimizationEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x206b44, 0x1fd000 bytes
    //
    _m56(sdk::unknown_ptr) is_import_optimization_enabled;
    
    // [KeIsKernelCetAuditModeEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e9f08, 0x1fd000 bytes
    //
    _m57(sdk::unknown_ptr) is_kernel_cet_audit_mode_enabled;
    
    // [KeIsMultiCoreClassesEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3c940c, 0x1fd000 bytes
    //
    _m58(sdk::unknown_ptr) is_multi_core_classes_enabled;
    
    // [KeIsNmiCallbackRegisteredForDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x558440, 0x1fd000 bytes
    //
    _m59(sdk::unknown_ptr) is_nmi_callback_registered_for_driver;
    
    // [KeIstStackSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1c4ac, 0x1fd000 bytes
    //
    _m60(sdk::unknown_ptr) ist_stack_size;
    
    // [KeKernelCetWrssEnabledScenarios]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe CFGRO:0xe01842, 0x1fd000 bytes
    //
    _m61(sdk::unknown_ptr) kernel_cet_wrss_enabled_scenarios;
    
    // [KeKernelShadowStackRestoreContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x567540, 0x1fd000 bytes
    //
    _m62(sdk::unknown_ptr) kernel_shadow_stack_restore_context;
    
    // [KeMarkDynamicTracingHiberPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x56aa98, 0x1fd000 bytes
    //
    _m63(sdk::unknown_ptr) mark_dynamic_tracing_hiber_phase;
    
    // [KeModifySystemAllowedCpuSets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3d2c18, 0x1fd000 bytes
    //
    _m64(sdk::unknown_ptr) modify_system_allowed_cpu_sets;
    
    // [KeOrAffinityEx2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x55ace0, 0x1fd000 bytes
    //
    _m65(sdk::unknown_ptr) or_affinity_ex2;
    
    // [KePrepareNonClockOwnerForIdle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x34d700, 0x1fd000 bytes
    //
    _m66(sdk::unknown_ptr) prepare_non_clock_owner_for_idle;
    
    // [KeQueryActiveProcessorAffinity2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3c7810, 0x1fd000 bytes
    //
    _m67(sdk::unknown_ptr) query_active_processor_affinity2;
    
    // [KeQueryCpuPartitionAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e1df8, 0x1fd000 bytes
    //
    _m68(sdk::unknown_ptr) query_cpu_partition_affinity;
    
    // [KeQueryDpcWatchdogConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x556ca4, 0x1fd000 bytes
    //
    _m69(sdk::unknown_ptr) query_dpc_watchdog_configuration;
    
    // [KeQueryInterruptPartitionCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x388880, 0x1fd000 bytes
    //
    _m70(sdk::unknown_ptr) query_interrupt_partition_count;
    
    // [KeQueryInterruptPartitionInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x388810, 0x1fd000 bytes
    //
    _m71(sdk::unknown_ptr) query_interrupt_partition_information;
    
    // [KeQueryNodeActiveAffinity2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x383560, 0x1fd000 bytes
    //
    _m72(sdk::unknown_ptr) query_node_active_affinity2;
    
    // [KeQueryNodeActiveAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x33ba50, 0x1fd000 bytes
    //
    _m73(sdk::unknown_ptr) query_node_active_affinity_ex;
    
    // [KeQueryNodeActiveProcessorCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e7ca0, 0x1fd000 bytes
    //
    _m74(sdk::unknown_ptr) query_node_active_processor_count;
    
    // [KeQueryPrimaryGroupAffinityProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x304b88, 0x1fd000 bytes
    //
    _m75(sdk::unknown_ptr) query_primary_group_affinity_process;
    
    // [KeQueryPrimaryGroupAffinityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x55a6b4, 0x1fd000 bytes
    //
    _m76(sdk::unknown_ptr) query_primary_group_affinity_thread;
    
    // [KeQueryPrimaryGroupProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3a6468, 0x1fd000 bytes
    //
    _m77(sdk::unknown_ptr) query_primary_group_process;
    
    // [KeQueryProcessorTaggedCyclesImprecise]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x37b2e0, 0x1fd000 bytes
    //
    _m78(sdk::unknown_ptr) query_processor_tagged_cycles_imprecise;
    
    // [KeQueryProcessorTotalCyclesImprecise]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x37fa00, 0x1fd000 bytes
    //
    _m79(sdk::unknown_ptr) query_processor_total_cycles_imprecise;
    
    // [KeQuerySystemCpuPartitionAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e1dd0, 0x1fd000 bytes
    //
    _m80(sdk::unknown_ptr) query_system_cpu_partition_affinity;
    
    // [KeQueryTypeEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x55d250, 0x1fd000 bytes
    //
    _m81(sdk::unknown_ptr) query_type_event;
    
    // [KeQueryUserAffinityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3a8f10, 0x1fd000 bytes
    //
    _m82(sdk::unknown_ptr) query_user_affinity_thread;
    
    // [KeRebootSystemForRecovery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x565e8c, 0x1fd000 bytes
    //
    _m83(sdk::unknown_ptr) reboot_system_for_recovery;
    
    // [KeRegisterObjectDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x554468, 0x1fd000 bytes
    //
    _m84(sdk::unknown_ptr) register_object_dpc;
    
    // [KeReinitializeAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2128e0, 0x1fd000 bytes
    //
    _m85(sdk::unknown_ptr) reinitialize_affinity_ex;
    
    // [KeRemovePriorityBoost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1d5618, 0x32828 bytes
    //
    _m86(sdk::unknown_ptr) remove_priority_boost;
    
    // [KeResetKernelShadowStackRstorssp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x968570, 0x1fd000 bytes
    //
    _m87(sdk::unknown_ptr) reset_kernel_shadow_stack_rstorssp;
    
    // [KeResumeDynamicTracing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x56abc4, 0x1fd000 bytes
    //
    _m88(sdk::unknown_ptr) resume_dynamic_tracing;
    
    // [KeRevertToUserMultipleGroupAffinityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x380d94, 0x1fd000 bytes
    //
    _m89(sdk::unknown_ptr) revert_to_user_multiple_group_affinity_thread;
    
    // [KeSaveProcessorSpecificFeatures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x557f10, 0x1fd000 bytes
    //
    _m90(sdk::unknown_ptr) save_processor_specific_features;
    
    // [KeSelectGroupFromNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x37ab30, 0x1fd000 bytes
    //
    _m91(sdk::unknown_ptr) select_group_from_node;
    
    // [KeSelectInitialIdealProcessorForThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x211bc0, 0x1fd000 bytes
    //
    _m92(sdk::unknown_ptr) select_initial_ideal_processor_for_thread;
    
    // [KeSetProcessPpmPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x36cb74, 0x1fd000 bytes
    //
    _m93(sdk::unknown_ptr) set_process_ppm_policy;
    
    // [KeSetSystemMultipleGroupAffinityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x383a18, 0x1fd000 bytes
    //
    _m94(sdk::unknown_ptr) set_system_multiple_group_affinity_thread;
    
    // [KeSetSystemPriorityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x562720, 0x1fd000 bytes
    //
    _m95(sdk::unknown_ptr) set_system_priority_thread;
    
    // [KeSetThreadPpmPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x36be9c, 0x1fd000 bytes
    //
    _m96(sdk::unknown_ptr) set_thread_ppm_policy;
    
    // [KeSetUserAffinityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3a5058, 0x1fd000 bytes
    //
    _m97(sdk::unknown_ptr) set_user_affinity_thread;
    
    // [KeSetUserCetAppcompatOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5675a8, 0x1fd000 bytes
    //
    _m98(sdk::unknown_ptr) set_user_cet_appcompat_options;
    
    // [KeSizeOfAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x55d2e0, 0x1fd000 bytes
    //
    _m99(sdk::unknown_ptr) size_of_affinity_ex;
    
    // [KeSkNtFunctionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe CFGRO:0xe00008, 0x1fd000 bytes
    //
    _n00(sdk::unknown_ptr) sk_nt_function_table;
    
    // [KeSkNtFunctions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe CFGRO:0xe01a80, 0x1fd000 bytes
    //
    _n01(sdk::unknown_ptr) sk_nt_functions;
    
    // [KeSoftParkSmtPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc41f24, 0x1fd000 bytes
    //
    _n02(sdk::unknown_ptr) soft_park_smt_policy;
    
    // [KeStartIdealProcessorAssignmentBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2ee998, 0x1fd000 bytes
    //
    _n03(sdk::unknown_ptr) start_ideal_processor_assignment_block;
    
    // [KeSubtractAffinityEx2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x55ad50, 0x1fd000 bytes
    //
    _n04(sdk::unknown_ptr) subtract_affinity_ex2;
    
    // [KeSupportedPhysicalAddressBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb60cc0, 0x1fd000 bytes
    //
    _n05(sdk::unknown_ptr) supported_physical_address_bits;
    
    // [KeSuspendDynamicTracing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x56abd4, 0x1fd000 bytes
    //
    _n06(sdk::unknown_ptr) suspend_dynamic_tracing;
    
    // [KeSwapProcessOrStackThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1ddd8, 0x1fd000 bytes
    //
    _n07(sdk::unknown_ptr) swap_process_or_stack_thread;
    
    // [KeThawMultiProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x37595c, 0x1fd000 bytes
    //
    _n08(sdk::unknown_ptr) thaw_multi_process;
    
    // [KeTimeAdjustment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe ALMOSTRO:0x3ab3b0, 0x32828 bytes
    //
    _n09(sdk::unknown_ptr) time_adjustment;
    
    // [KeTraceHgsPlusRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x562738, 0x1fd000 bytes
    //
    _n10(sdk::unknown_ptr) trace_hgs_plus_rundown;
    
    // [KeUninitThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7eb4c8, 0x1fd000 bytes
    //
    _n11(sdk::unknown_ptr) uninit_thread;
    
    // [KeUpdateDpcWatchdogConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x556f40, 0x1fd000 bytes
    //
    _n12(sdk::unknown_ptr) update_dpc_watchdog_configuration;
    
    // [KeUpdateSoftParkRankList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3c8ff8, 0x1fd000 bytes
    //
    _n13(sdk::unknown_ptr) update_soft_park_rank_list;
    
    // [KeUpdateThreadHeteroPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGELK:0x3dd09c, 0x32828 bytes
    //
    _n14(sdk::unknown_ptr) update_thread_hetero_policy;
    
    // [KeActiveTracepointsPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3896b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38a1d0, 0x1fe000 bytes
    //
    _n15(sdk::unknown_ptr) active_tracepoints_present;
    
    // [KeClearSystemPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x300e00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x26b280, 0x1fe000 bytes
    //
    _n16(sdk::unknown_ptr) clear_system_priority;
    
    // [KeGetProcessQosFromPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50e478, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50e288, 0x1fe000 bytes
    //
    _n17(sdk::unknown_ptr) get_process_qos_from_policy;
    
    // [KeIsCetCapable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3e9f1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ec190, 0x1fe000 bytes
    //
    _n18(sdk::unknown_ptr) is_cet_capable;
    
    // [KeIsKernelCetEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b1e5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1180, 0x1fe000 bytes
    //
    _n19(sdk::unknown_ptr) is_kernel_cet_enabled;
    
    // [KeIsNmiCallbackRegistered]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50e490, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50e2a0, 0x1fe000 bytes
    //
    _n20(sdk::unknown_ptr) is_nmi_callback_registered;
    
    // [KeQueryNodeActiveDpcGangAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x367ac8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x368e6c, 0x1fe000 bytes
    //
    _n21(sdk::unknown_ptr) query_node_active_dpc_gang_affinity;
    
    // [KeQueryReadyQueueStatsProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50e728, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50e538, 0x1fe000 bytes
    //
    _n22(sdk::unknown_ptr) query_ready_queue_stats_processor;
    
    // [KeRaiseExceptionForReturnAddressHijack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb9f0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb9f0, 0x1fe000 bytes
    //
    _n23(sdk::unknown_ptr) raise_exception_for_return_address_hijack;
    
    // [KeSetDisableBoostProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x96863c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71f9bc, 0x1fe000 bytes
    //
    _n24(sdk::unknown_ptr) set_disable_boost_process;
    
    // [KeSetThreadBamQosLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5187b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5185c0, 0x1fe000 bytes
    //
    _n25(sdk::unknown_ptr) set_thread_bam_qos_level;
    
    // [KeTryToAcquireInStackQueuedSpinLockAtDpcLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe .text:0x85fdc, 0x32828 bytes
    // ntoskrnl.exe .text:0x343ecc, 0x1fd000 bytes
    //
    _n26(sdk::function<uint32_t(uint64_t*, struct nt::klock_queue_handle_t*)>*) try_to_acquire_in_stack_queued_spin_lock_at_dpc_level;
    
    // [KeUpdateQosGroupingSets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x39477c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3957dc, 0x1fe000 bytes
    //
    _n27(sdk::unknown_ptr) update_qos_grouping_sets;
    
    // [KeAbCrossThreadDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51b098, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x565050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51ae98, 0x1fe000 bytes
    //
    _n28(sdk::unknown_ptr) ab_cross_thread_delete;
    
    // [KeAbCrossThreadDeleteDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51b560, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x565690, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51b360, 0x1fe000 bytes
    //
    _n29(sdk::unknown_ptr) ab_cross_thread_delete_dpc_routine;
    
    // [KeAbCrossThreadDeleteNopDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x270d00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3849c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3224c0, 0x1fe000 bytes
    //
    _n30(sdk::unknown_ptr) ab_cross_thread_delete_nop_dpc_routine;
    
    // [KeAbCrossThreadRelease]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38a0c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x394b30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38b160, 0x1fe000 bytes
    //
    _n31(sdk::unknown_ptr) ab_cross_thread_release;
    
    // [KeAbEntryFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x86f50, 0x32828 bytes
    // ntoskrnl.exe .text:0x228234, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x340fe4, 0x1fe000 bytes
    //
    _n32(sdk::unknown_ptr) ab_entry_free;
    
    // [KeAbMarkCrossThreadReleasable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38b2f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x393a2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38c394, 0x1fe000 bytes
    //
    _n33(sdk::unknown_ptr) ab_mark_cross_thread_releasable;
    
    // [KeAbPreWakeupThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20f5d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e4fb4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35a9c0, 0x1fe000 bytes
    //
    _n34(sdk::unknown_ptr) ab_pre_wakeup_thread;
    
    // [KeAddTriageDumpDataBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c4c60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dcb00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c59d0, 0x1fe000 bytes
    //
    _n35(sdk::unknown_ptr) add_triage_dump_data_block;
    
    // [KeAdjustTimerDelayProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50da3c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55ad78, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50d82c, 0x1fe000 bytes
    //
    _n36(sdk::unknown_ptr) adjust_timer_delay_process;
    
    // [KeAllocateProcessorProfileStructures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b0cd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ddb10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ac730, 0x1fe000 bytes
    //
    _n37(sdk::unknown_ptr) allocate_processor_profile_structures;
    
    // [KeBlockEnclavePage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50f31c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55bd68, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50f12c, 0x1fe000 bytes
    //
    _n38(sdk::unknown_ptr) block_enclave_page;
    
    // [KeBugCheckTriageDumpDataArrayListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc32000, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41d90, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31f90, 0x1fe000 bytes
    //
    _n39(sdk::unknown_ptr) bug_check_triage_dump_data_array_list_head;
    
    // [KeBuildPrimaryThreadContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x655b24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8baebc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8b966c, 0x1fe000 bytes
    //
    _n40(sdk::unknown_ptr) build_primary_thread_context;
    
    // [KeCanChangeEnclavePageProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50f36c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55bdb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50f17c, 0x1fe000 bytes
    //
    _n41(sdk::unknown_ptr) can_change_enclave_page_protection;
    
    // [KeCaptureWaitChainHeadEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38b740, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x331800, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38c7e0, 0x1fe000 bytes
    //
    _n42(sdk::unknown_ptr) capture_wait_chain_head_ex;
    
    // [KeChangeEnclavePageProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50f434, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55be70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50f244, 0x1fe000 bytes
    //
    _n43(sdk::unknown_ptr) change_enclave_page_protection;
    
    // [KeCheckAndApplyBamQos]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5186b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45f640, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5184c0, 0x1fe000 bytes
    //
    _n44(sdk::unknown_ptr) check_and_apply_bam_qos;
    
    // [KeCleanupImageTracepoints]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x756a84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec1a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75e4d4, 0x1fe000 bytes
    //
    _n45(sdk::unknown_ptr) cleanup_image_tracepoints;
    
    // [KeClearForceIdle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51d098, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x568680, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51ce98, 0x1fe000 bytes
    //
    _n46(sdk::unknown_ptr) clear_force_idle;
    
    // [KeClearUmsThreadKernelLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x655168, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ba494, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8b8c44, 0x1fe000 bytes
    //
    _n47(sdk::unknown_ptr) clear_ums_thread_kernel_lock;
    
    // [KeCommitSmtState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c84cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ab9dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c939c, 0x1fe000 bytes
    //
    _n48(sdk::unknown_ptr) commit_smt_state;
    
    // [KeConfigureHeteroPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x79ddac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x840fac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a542c, 0x1fe000 bytes
    //
    _n49(sdk::unknown_ptr) configure_hetero_policy;
    
    // [KeCopyContextFromUch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x655e18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bb1a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8b9950, 0x1fe000 bytes
    //
    _n50(sdk::unknown_ptr) copy_context_from_uch;
    
    // [KeCopyContextFromUmsContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6560d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bb45c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8b9c0c, 0x1fe000 bytes
    //
    _n51(sdk::unknown_ptr) copy_context_from_ums_context;
    
    // [KeCopyContextToUch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x656284, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bb610, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8b9dc0, 0x1fe000 bytes
    //
    _n52(sdk::unknown_ptr) copy_context_to_uch;
    
    // [KeCopyContextToUmsContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6564e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bb87c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8ba02c, 0x1fe000 bytes
    //
    _n53(sdk::unknown_ptr) copy_context_to_ums_context;
    
    // [KeCreateEnclaveMetadataPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50f53c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55bf70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50f34c, 0x1fe000 bytes
    //
    _n54(sdk::unknown_ptr) create_enclave_metadata_page;
    
    // [KeDeleteMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x24e3a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x359bc8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fbc78, 0x1fe000 bytes
    //
    _n55(sdk::unknown_ptr) delete_mutant;
    
    // [KeDeregisterObjectNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa84bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x207fc4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e2798, 0x1fe000 bytes
    //
    _n56(sdk::unknown_ptr) deregister_object_notification;
    
    // [KeDisableLowQosTimerResolution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb5b1, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c062, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5b1, 0x1fe000 bytes
    //
    _n57(sdk::unknown_ptr) disable_low_qos_timer_resolution;
    
    // [KeDoesSystemHaveHeterogeneousCoreTypes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3eaca0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea330, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebe84, 0x1fe000 bytes
    //
    _n58(sdk::unknown_ptr) does_system_have_heterogeneous_core_types;
    
    // [KeDoesTebMatchThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dde4c, 0x32828 bytes
    // ntoskrnl.exe .text:0x520e80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520c90, 0x1fe000 bytes
    //
    _n59(sdk::unknown_ptr) does_teb_match_thread;
    
    // [KeDpcWatchdogPeriod]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa028, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa034, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa034, 0x1fe000 bytes
    //
    _n60(sdk::unknown_ptr) dpc_watchdog_period;
    
    // [KeDpcWatchdogProfileOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa054, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb578, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb578, 0x1fe000 bytes
    //
    _n61(sdk::unknown_ptr) dpc_watchdog_profile_offset;
    
    // [KeExecuteUmsThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab6b0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbac8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbac0, 0x1fe000 bytes
    //
    _n62(sdk::unknown_ptr) execute_ums_thread;
    
    // [KeExitRetpoline]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x243ce4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a8c54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3241a4, 0x1fe000 bytes
    //
    _n63(sdk::unknown_ptr) exit_retpoline;
    
    // [KeFeatureBits2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb518, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db08, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb518, 0x1fe000 bytes
    //
    _n64(sdk::unknown_ptr) feature_bits2;
    
    // [KeFixUserSwitchContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6566b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bba40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8ba1f0, 0x1fe000 bytes
    //
    _n65(sdk::unknown_ptr) fix_user_switch_context;
    
    // [KeFlushRsb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x515468, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55f3b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x515278, 0x1fe000 bytes
    //
    _n66(sdk::unknown_ptr) flush_rsb;
    
    // [KeForceAttachProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2b005c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35edf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a680c, 0x1fe000 bytes
    //
    _n67(sdk::unknown_ptr) force_attach_process;
    
    // [KeForceDetachProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x258d80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37efb8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x308534, 0x1fe000 bytes
    //
    _n68(sdk::unknown_ptr) force_detach_process;
    
    // [KeGetCurrentPrcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x31f1f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3acae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x291730, 0x1fe000 bytes
    //
    _n69(sdk::function<struct nt::kprcb_t*()>*) get_current_prcb;
    
    // [KeGetCurrentProcessorIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x240af0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x324020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ee3c0, 0x1fe000 bytes
    //
    _n70(sdk::function<uint32_t()>*) get_current_processor_index;
    
    // [KeGetCurrentUmsTeb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dde64, 0x32828 bytes
    // ntoskrnl.exe .text:0x520e9c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520cac, 0x1fe000 bytes
    //
    _n71(sdk::unknown_ptr) get_current_ums_teb;
    
    // [KeGetPcr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a3bf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3acac0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a9570, 0x1fe000 bytes
    //
    _n72(sdk::function<struct nt::kpcr_t*()>*) get_pcr;
    
    // [KeGetSupervisorStateExtensionHost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5140a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55e01c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x513eb0, 0x1fe000 bytes
    //
    _n73(sdk::unknown_ptr) get_supervisor_state_extension_host;
    
    // [KeGetTbSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa4dda0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb40f74, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4dc24, 0x1fe000 bytes
    //
    _n74(sdk::unknown_ptr) get_tb_size;
    
    // [KeGuardCheckICall]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITKDBG:0xa0f340, 0x1fe000 bytes
    // ntoskrnl.exe INITKDBG:0xaff7b0, 0x1fd000 bytes
    // ntoskrnl.exe INITKDBG:0xa0e340, 0x1fe000 bytes
    //
    _n75(sdk::unknown_ptr) guard_check_i_call;
    
    // [KeGuardDispatchICall]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITKDBG:0xa0f330, 0x1fe000 bytes
    // ntoskrnl.exe INITKDBG:0xaff7a0, 0x1fd000 bytes
    // ntoskrnl.exe INITKDBG:0xa0e330, 0x1fe000 bytes
    //
    _n76(sdk::unknown_ptr) guard_dispatch_i_call;
    
    // [KeHeteroSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb508, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dad0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb508, 0x1fe000 bytes
    //
    _n77(sdk::unknown_ptr) hetero_system;
    
    // [KeHeteroSystemQos]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb570, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db9c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb570, 0x1fe000 bytes
    //
    _n78(sdk::unknown_ptr) hetero_system_qos;
    
    // [KeHeteroSystemVirtual]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb654, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dc68, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb654, 0x1fe000 bytes
    //
    _n79(sdk::unknown_ptr) hetero_system_virtual;
    
    // [KeIdleSpecCtrl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x515570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55f4c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x515380, 0x1fe000 bytes
    //
    _n80(sdk::unknown_ptr) idle_spec_ctrl;
    
    // [KeInitializeCatRegisters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a3088, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b1ec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a45b8, 0x1fe000 bytes
    //
    _n81(sdk::unknown_ptr) initialize_cat_registers;
    
    // [KeInitializeIRTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x37d2c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385d04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37e640, 0x1fe000 bytes
    //
    _n82(sdk::unknown_ptr) initialize_ir_timer;
    
    // [KeInitializeMutantEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x248990, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x356bf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2debd0, 0x1fe000 bytes
    //
    _n83(sdk::unknown_ptr) initialize_mutant_ex;
    
    // [KeInitializeSchedulerAssist]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa44a64, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb60c68, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3ee4c, 0x1fe000 bytes
    //
    _n84(sdk::unknown_ptr) initialize_scheduler_assist;
    
    // [KeInitializeTriageDumpDataArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c4e70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dcd40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c5be0, 0x1fe000 bytes
    //
    _n85(sdk::unknown_ptr) initialize_triage_dump_data_array;
    
    // [KeInitializeUmsThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6551bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ba4f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8b8ca4, 0x1fe000 bytes
    //
    _n86(sdk::unknown_ptr) initialize_ums_thread;
    
    // [KeInitializeVelocity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7779f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x825b5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x779c88, 0x1fe000 bytes
    //
    _n87(sdk::unknown_ptr) initialize_velocity;
    
    // [KeInitializeWaitChain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x271754, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x344bc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3232e4, 0x1fe000 bytes
    //
    _n88(sdk::unknown_ptr) initialize_wait_chain;
    
    // [KeIntSteerPeriodic]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x30bc10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28d074, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x277270, 0x1fe000 bytes
    //
    _n89(sdk::unknown_ptr) int_steer_periodic;
    
    // [KeIsForceIdleEngaged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x30ee88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b19ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x242a38, 0x1fe000 bytes
    //
    _n90(sdk::unknown_ptr) is_force_idle_engaged;
    
    // [KeIsRetpolineEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x243d58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x206b30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x324218, 0x1fe000 bytes
    //
    _n91(sdk::unknown_ptr) is_retpoline_enabled;
    
    // [KeIsTraceCallbackAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51e064, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x569240, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51de6c, 0x1fe000 bytes
    //
    _n92(sdk::unknown_ptr) is_trace_callback_allowed;
    
    // [KeIsUserCetAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x209a98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ee970, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x337f78, 0x1fe000 bytes
    //
    _n93(sdk::unknown_ptr) is_user_cet_allowed;
    
    // [KeIsUserVaAccessAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x28d7d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2bbeb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33481c, 0x1fe000 bytes
    //
    _n94(sdk::unknown_ptr) is_user_va_access_allowed;
    
    // [KeKeepData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa70878, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x557554, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6fc24, 0x1fe000 bytes
    //
    _n95(sdk::unknown_ptr) keep_data;
    
    // [KeOptimizeSpecCtrlSettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c2020, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d6f24, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c2e30, 0x1fe000 bytes
    //
    _n96(sdk::unknown_ptr) optimize_spec_ctrl_settings;
    
    // [KeOutPageEnclavePage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50f580, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55bfac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50f390, 0x1fe000 bytes
    //
    _n97(sdk::unknown_ptr) out_page_enclave_page;
    
    // [KePopulateContinuationContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x282df4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20bcc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3298a4, 0x1fe000 bytes
    //
    _n98(sdk::unknown_ptr) populate_continuation_context;
    
    // [KePrepareToDispatchVirtualProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5156c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45ec90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5154d0, 0x1fe000 bytes
    //
    _n99(sdk::unknown_ptr) prepare_to_dispatch_virtual_processor;
    
    // [KePseudoHrTimeIncrement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb560, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1daf4, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb55c, 0x1fe000 bytes
    //
    _o00(sdk::unknown_ptr) pseudo_hr_time_increment;
    
    // [KeQueryActualAffinityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d55a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x50d2f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50d0e0, 0x1fe000 bytes
    //
    _o01(sdk::unknown_ptr) query_actual_affinity_thread;
    
    // [KeQueryAffinityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1339ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x270080, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3218a0, 0x1fe000 bytes
    //
    _o02(sdk::unknown_ptr) query_affinity_thread;
    
    // [KeQueryCurrentStackInformationEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2ea580, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2cca30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x208360, 0x1fe000 bytes
    //
    _o03(sdk::unknown_ptr) query_current_stack_information_ex;
    
    // [KeQueryCycleTimeStatsProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x25c660, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36edcc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30d0a0, 0x1fe000 bytes
    //
    _o04(sdk::unknown_ptr) query_cycle_time_stats_processor;
    
    // [KeQueryImplementedPhysicalBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51c424, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x564da0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51c224, 0x1fe000 bytes
    //
    _o05(sdk::unknown_ptr) query_implemented_physical_bits;
    
    // [KeQueryKvaShadowRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x356684, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3996d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33b904, 0x1fe000 bytes
    //
    _o06(sdk::unknown_ptr) query_kva_shadow_region;
    
    // [KeQuerySecureSpeculationInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x515830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55f604, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x515640, 0x1fe000 bytes
    //
    _o07(sdk::unknown_ptr) query_secure_speculation_information;
    
    // [KeQueryTimelineBitmapTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2d92d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x305048, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25a350, 0x1fe000 bytes
    //
    _o08(sdk::unknown_ptr) query_timeline_bitmap_time;
    
    // [KeQueryWakeSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50e8fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5586d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50e70c, 0x1fe000 bytes
    //
    _o09(sdk::unknown_ptr) query_wake_source;
    
    // [KeRaiseUserExceptionDispatcher]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab688, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfba98, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfba98, 0x1fe000 bytes
    //
    _o10(sdk::unknown_ptr) raise_user_exception_dispatcher;
    
    // [KeRecomputeCpuSetAffinityProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x516b48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x560d9c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x516958, 0x1fe000 bytes
    //
    _o11(sdk::unknown_ptr) recompute_cpu_set_affinity_process;
    
    // [KeReenterRetpolinedCode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3eaf60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x422ea0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ec590, 0x1fe000 bytes
    //
    _o12(sdk::unknown_ptr) reenter_retpolined_code;
    
    // [KeRemoveUmsThreadCidOwnership]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65529c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ba5dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8b8d8c, 0x1fe000 bytes
    //
    _o13(sdk::unknown_ptr) remove_ums_thread_cid_ownership;
    
    // [KeRequestTerminationProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b8174, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x968524, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b6924, 0x1fe000 bytes
    //
    _o14(sdk::unknown_ptr) request_termination_process;
    
    // [KeRestoreIptStateAfterProcessorComesOnline]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x37fb38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55e02c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x380928, 0x1fe000 bytes
    //
    _o15(sdk::unknown_ptr) restore_ipt_state_after_processor_comes_online;
    
    // [KeRestoreSupervisorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5140b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x207630, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x513ec0, 0x1fe000 bytes
    //
    _o16(sdk::unknown_ptr) restore_supervisor_state;
    
    // [KeRootProcNumaNodeLps]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcff480, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd23980, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcff480, 0x1fe000 bytes
    //
    _o17(sdk::unknown_ptr) root_proc_numa_node_lps;
    
    // [KeRootProcNumaNodeLpsSpecified]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb43c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da2f, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb43c, 0x1fe000 bytes
    //
    _o18(sdk::unknown_ptr) root_proc_numa_node_lps_specified;
    
    // [KeRootProcNumaNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfc6b0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e500, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfc6b0, 0x1fe000 bytes
    //
    _o19(sdk::unknown_ptr) root_proc_numa_nodes;
    
    // [KeRootProcNumaNodesSpecified]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb4f8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dad8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4f8, 0x1fe000 bytes
    //
    _o20(sdk::unknown_ptr) root_proc_numa_nodes_specified;
    
    // [KeRootProcPerCoreSpecified]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb5f0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dbd8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5f0, 0x1fe000 bytes
    //
    _o21(sdk::unknown_ptr) root_proc_per_core_specified;
    
    // [KeRundownPriQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51e67c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56a9bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51e48c, 0x1fe000 bytes
    //
    _o22(sdk::unknown_ptr) rundown_pri_queue;
    
    // [KeRundownQueueCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x24e12c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x359974, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fb9fc, 0x1fe000 bytes
    //
    _o23(sdk::unknown_ptr) rundown_queue_common;
    
    // [KeSaveIptStateBeforeProcessorGoesOffline]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x380228, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55e068, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x381018, 0x1fe000 bytes
    //
    _o24(sdk::unknown_ptr) save_ipt_state_before_processor_goes_offline;
    
    // [KeSaveSupervisorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x514148, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2075c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x513f58, 0x1fe000 bytes
    //
    _o25(sdk::unknown_ptr) save_supervisor_state;
    
    // [KeSetCurrentUmsTeb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dde94, 0x32828 bytes
    // ntoskrnl.exe .text:0x520ee4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520cf4, 0x1fe000 bytes
    //
    _o26(sdk::unknown_ptr) set_current_ums_teb;
    
    // [KeSetForceIdle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51d1c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x568774, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51cfc8, 0x1fe000 bytes
    //
    _o27(sdk::unknown_ptr) set_force_idle;
    
    // [KeSetGroupMaskProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x209c0c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ee804, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3380ec, 0x1fe000 bytes
    //
    _o28(sdk::unknown_ptr) set_group_mask_process;
    
    // [KeSetLastBranchRecordInUse]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b8280, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x968090, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b6a30, 0x1fe000 bytes
    //
    _o29(sdk::unknown_ptr) set_last_branch_record_in_use;
    
    // [KeSetLegacyAffinityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x990f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a0a60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c9f30, 0x1fe000 bytes
    //
    _o30(sdk::unknown_ptr) set_legacy_affinity_thread;
    
    // [KeSetSystemAllowedCpuSets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10fc64, 0x32828 bytes
    // ntoskrnl.exe .text:0x245030, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20233c, 0x1fe000 bytes
    //
    _o31(sdk::unknown_ptr) set_system_allowed_cpu_sets;
    
    // [KeSetSystemServiceCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b9df0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x969800, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b85a0, 0x1fe000 bytes
    //
    _o32(sdk::unknown_ptr) set_system_service_callback;
    
    // [KeSetThreadSchedulerAssist]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5187d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55914c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5185e8, 0x1fe000 bytes
    //
    _o33(sdk::unknown_ptr) set_thread_scheduler_assist;
    
    // [KeSetTracepoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b93b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x969cb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b7b60, 0x1fe000 bytes
    //
    _o34(sdk::unknown_ptr) set_tracepoint;
    
    // [KeSetUmsThreadKernelLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6552f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ba638, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8b8de8, 0x1fe000 bytes
    //
    _o35(sdk::unknown_ptr) set_ums_thread_kernel_lock;
    
    // [KeSmapEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb54c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db30, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb54c, 0x1fe000 bytes
    //
    _o36(sdk::unknown_ptr) smap_enabled;
    
    // [KeSoftParkedQueueThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc31c64, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41f20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31bc4, 0x1fe000 bytes
    //
    _o37(sdk::unknown_ptr) soft_parked_queue_threshold;
    
    // [KeSpecialUserApcKernelRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b9c20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x969360, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b83d0, 0x1fe000 bytes
    //
    _o38(sdk::unknown_ptr) special_user_apc_kernel_routine;
    
    // [KeSynchronizeSecurityDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23bfe8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x308bc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30cd2c, 0x1fe000 bytes
    //
    _o39(sdk::unknown_ptr) synchronize_security_domain;
    
    // [KeSynchronizeUmsThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x655358, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ba6a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8b8e58, 0x1fe000 bytes
    //
    _o40(sdk::unknown_ptr) synchronize_ums_thread;
    
    // [KeThawProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x87410, 0x32828 bytes
    // ntoskrnl.exe .text:0x20d7c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30b240, 0x1fe000 bytes
    //
    _o41(sdk::unknown_ptr) thaw_process;
    
    // [KeTimeAdjustmentFrequency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb980, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1df48, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb980, 0x1fe000 bytes
    //
    _o42(sdk::unknown_ptr) time_adjustment_frequency;
    
    // [KeTrackEnclaveTbFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50f684, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55c0ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50f494, 0x1fe000 bytes
    //
    _o43(sdk::unknown_ptr) track_enclave_tb_flush;
    
    // [KeUmsExecuteYieldThreadEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab6b8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbac0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbac8, 0x1fe000 bytes
    //
    _o44(sdk::unknown_ptr) ums_execute_yield_thread_end;
    
    // [KeUmsThreadYield]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab658, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfba00, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfba00, 0x1fe000 bytes
    //
    _o45(sdk::unknown_ptr) ums_thread_yield;
    
    // [KeUnInitializeUmsThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6553b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ba708, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8b8eb8, 0x1fe000 bytes
    //
    _o46(sdk::unknown_ptr) un_initialize_ums_thread;
    
    // [KeUpdatePendingQosRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x519070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45f754, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x518e80, 0x1fe000 bytes
    //
    _o47(sdk::unknown_ptr) update_pending_qos_request;
    
    // [KeUpdatePrimaryThreadContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x656768, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bbafc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8ba2ac, 0x1fe000 bytes
    //
    _o48(sdk::unknown_ptr) update_primary_thread_context;
    
    // [KeUpdateThreadCpuSets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c114c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d3450, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c1f5c, 0x1fe000 bytes
    //
    _o49(sdk::unknown_ptr) update_thread_cpu_sets;
    
    // [KeUpdateThreadSchedulingProperties]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8abf8, 0x32828 bytes
    // ntoskrnl.exe .text:0x244d60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x311694, 0x1fe000 bytes
    //
    _o50(sdk::unknown_ptr) update_thread_scheduling_properties;
    
    // [KeUpdateUmsThreadState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x655418, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ba77c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8b8f2c, 0x1fe000 bytes
    //
    _o51(sdk::unknown_ptr) update_ums_thread_state;
    
    // [KeUserApcDispatcher]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab698, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbaa0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbaa8, 0x1fe000 bytes
    //
    _o52(sdk::unknown_ptr) user_apc_dispatcher;
    
    // [KeUserCallbackDispatcher]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab800, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbc08, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbc08, 0x1fe000 bytes
    //
    _o53(sdk::unknown_ptr) user_callback_dispatcher;
    
    // [KeUserExceptionDispatcher]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab6a0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbab8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbab0, 0x1fe000 bytes
    //
    _o54(sdk::unknown_ptr) user_exception_dispatcher;
    
    // [KeUserInvertedFunctionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab540, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb988, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb988, 0x1fe000 bytes
    //
    _o55(sdk::unknown_ptr) user_inverted_function_table;
    
    // [KeUserPopEntrySListEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab6a8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbab0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbab8, 0x1fe000 bytes
    //
    _o56(sdk::unknown_ptr) user_pop_entry_s_list_end;
    
    // [KeUserPopEntrySListFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab648, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb9e8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb9e8, 0x1fe000 bytes
    //
    _o57(sdk::unknown_ptr) user_pop_entry_s_list_fault;
    
    // [KeUserPopEntrySListResume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab548, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb990, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb990, 0x1fe000 bytes
    //
    _o58(sdk::unknown_ptr) user_pop_entry_s_list_resume;
    
    // [KeVerifyContextIpForUserCet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3ead80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20fcb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ec1a4, 0x1fe000 bytes
    //
    _o59(sdk::unknown_ptr) verify_context_ip_for_user_cet;
    
    // [KeVerifyContextXStateCetU]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x284d18, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20eed8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32bc88, 0x1fe000 bytes
    //
    _o60(sdk::unknown_ptr) verify_context_x_state_cet_u;
    
    // [KeWaitPhysicalFaultCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51e16c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x564948, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51df7c, 0x1fe000 bytes
    //
    _o61(sdk::unknown_ptr) wait_physical_fault_completion;
    
    // [KeWriteProtectProcessorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x99bb90, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7d600, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99ac10, 0x1fe000 bytes
    //
    _o62(sdk::unknown_ptr) write_protect_processor_state;
    
    // [KeXorAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d665c, 0x32828 bytes
    // ntoskrnl.exe .text:0x50d968, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50d758, 0x1fe000 bytes
    //
    _o63(sdk::unknown_ptr) xor_affinity_ex;
    
    // [KeYieldExecution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x290e10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2bc8b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x336660, 0x1fe000 bytes
    //
    _o64(sdk::unknown_ptr) yield_execution;
    
    // [KeAbInitializeThreadState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x96024, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b8730, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x212ed0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3553a0, 0x1fe000 bytes
    //
    _o65(sdk::unknown_ptr) ab_initialize_thread_state;
    
    // [KeAbPostRelease]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xea930, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e2900, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c91c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x263c10, 0x1fe000 bytes
    //
    _o66(sdk::unknown_ptr) ab_post_release;
    
    // [KeAbPostReleaseEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x86e9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x228120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x272c10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x340ed0, 0x1fe000 bytes
    //
    _o67(sdk::unknown_ptr) ab_post_release_ex;
    
    // [KeAbPreAcquire]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bd40, 0x32828 bytes
    // ntoskrnl.exe .text:0x2deff0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c8eb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x260280, 0x1fe000 bytes
    //
    _o68(sdk::unknown_ptr) ab_pre_acquire;
    
    // [KeAbPreWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x88ab0, 0x32828 bytes
    // ntoskrnl.exe .text:0x20e5b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e6460, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35a1d0, 0x1fe000 bytes
    //
    _o69(sdk::unknown_ptr) ab_pre_wait;
    
    // [KeAbProcessBaseIoPriorityChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x77cfc, 0x32828 bytes
    // ntoskrnl.exe .text:0x35198c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34f4d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x234b1c, 0x1fe000 bytes
    //
    _o70(sdk::unknown_ptr) ab_process_base_io_priority_change;
    
    // [KeAbProcessBaseIoPriorityChangeInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x77d28, 0x32828 bytes
    // ntoskrnl.exe .text:0x3519c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34f504, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x234b58, 0x1fe000 bytes
    //
    _o71(sdk::unknown_ptr) ab_process_base_io_priority_change_internal;
    
    // [KeAbProcessEffectiveIoPriorityChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe20b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3585bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34f32c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2db7b0, 0x1fe000 bytes
    //
    _o72(sdk::unknown_ptr) ab_process_effective_io_priority_change;
    
    // [KeAccumulateTicks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57b20, 0x32828 bytes
    // ntoskrnl.exe .text:0x308450, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x223f00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x272200, 0x1fe000 bytes
    //
    _o73(sdk::unknown_ptr) accumulate_ticks;
    
    // [KeAcquireGuardedMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bc30, 0x32828 bytes
    // ntoskrnl.exe .text:0x20dee0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e5d60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x359b00, 0x1fe000 bytes
    //
    _o74(sdk::function<void(struct nt::fast_mutex_t*)>*) acquire_guarded_mutex;
    
    // [KeAcquireGuardedMutexUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d4848, 0x32828 bytes
    // ntoskrnl.exe .text:0x3aff10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45e250, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ab970, 0x1fe000 bytes
    //
    _o75(sdk::function<void(struct nt::fast_mutex_t*)>*) acquire_guarded_mutex_unsafe;
    
    // [KeAcquireInStackQueuedSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x60fa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x34ae50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x297410, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22dfe0, 0x1fe000 bytes
    //
    _o76(sdk::function<void(uint64_t*, struct nt::klock_queue_handle_t*)>*) acquire_in_stack_queued_spin_lock;
    
    // [KeAcquireInStackQueuedSpinLockAtDpcLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x60f60, 0x32828 bytes
    // ntoskrnl.exe .text:0x348f10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x22f6c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22c0a0, 0x1fe000 bytes
    //
    _o77(sdk::function<void(uint64_t*, struct nt::klock_queue_handle_t*)>*) acquire_in_stack_queued_spin_lock_at_dpc_level;
    
    // [KeAcquireInStackQueuedSpinLockForDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xced04, 0x32828 bytes
    // ntoskrnl.exe .text:0x5108a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55cfe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5106b0, 0x1fe000 bytes
    //
    _o78(sdk::function<void(uint64_t*, struct nt::klock_queue_handle_t*)>*) acquire_in_stack_queued_spin_lock_for_dpc;
    
    // [KeAcquireInStackQueuedSpinLockRaiseToSynch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d5ff0, 0x32828 bytes
    // ntoskrnl.exe .text:0x5102f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55cbe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x510100, 0x1fe000 bytes
    //
    _o79(sdk::unknown_ptr) acquire_in_stack_queued_spin_lock_raise_to_synch;
    
    // [KeAcquireInterruptSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcf9e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x265f40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b0150, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3166d0, 0x1fe000 bytes
    //
    _o80(sdk::function<uint8_t(struct nt::kinterrupt_t*)>*) acquire_interrupt_spin_lock;
    
    // [KeAcquireQueuedSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf120, 0x32828 bytes
    // ntoskrnl.exe .text:0x3487d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x232af0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22b960, 0x1fe000 bytes
    //
    _o81(sdk::function<uint8_t(uint64_t)>*) acquire_queued_spin_lock;
    
    // [KeAcquireQueuedSpinLockRaiseToSynch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d6018, 0x32828 bytes
    // ntoskrnl.exe .text:0x510380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55cc70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x510190, 0x1fe000 bytes
    //
    _o82(sdk::unknown_ptr) acquire_queued_spin_lock_raise_to_synch;
    
    // [KeAcquireSpinLockAtDpcLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb50a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x23df90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28d4a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2773a0, 0x1fe000 bytes
    //
    _o83(sdk::function<void(uint64_t*)>*) acquire_spin_lock_at_dpc_level;
    
    // [KeAcquireSpinLockForDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d6388, 0x32828 bytes
    // ntoskrnl.exe .text:0x5108f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55d020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x510700, 0x1fe000 bytes
    //
    _o84(sdk::function<uint8_t(uint64_t*)>*) acquire_spin_lock_for_dpc;
    
    // [KeAcquireSpinLockRaiseToDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xff810, 0x32828 bytes
    // ntoskrnl.exe .text:0x30ed20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28d4e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e4740, 0x1fe000 bytes
    //
    _o85(sdk::function<uint8_t(uint64_t*)>*) acquire_spin_lock_raise_to_dpc;
    
    // [KeAcquireSpinLockRaiseToSynch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d63dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x510a60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55d1a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x510870, 0x1fe000 bytes
    //
    _o86(sdk::function<uint8_t(uint64_t*)>*) acquire_spin_lock_raise_to_synch;
    
    // [KeActiveProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab590, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb830, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dfc0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb830, 0x1fe000 bytes
    //
    _o87(sdk::unknown_ptr) active_processors;
    
    // [KeAddEnclavePage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e85d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x50f1a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55bc08, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50efb8, 0x1fe000 bytes
    //
    _o88(sdk::unknown_ptr) add_enclave_page;
    
    // [KeAddGroupAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7c40, 0x32828 bytes
    // ntoskrnl.exe .text:0x50d770, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33c590, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50d560, 0x1fe000 bytes
    //
    _o89(sdk::unknown_ptr) add_group_affinity_ex;
    
    // [KeAddProcessorAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xed318, 0x32828 bytes
    // ntoskrnl.exe .text:0x30bb10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21eb40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x277170, 0x1fe000 bytes
    //
    _o90(sdk::unknown_ptr) add_processor_affinity_ex;
    
    // [KeAddProcessorGroupAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d6550, 0x32828 bytes
    // ntoskrnl.exe .text:0x50d790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3be500, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50d580, 0x1fe000 bytes
    //
    _o91(sdk::unknown_ptr) add_processor_group_affinity;
    
    // [KeAddSystemServiceTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55d4ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x799360, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x847ae0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79eeb0, 0x1fe000 bytes
    //
    _o92(sdk::function<uint8_t(uint64_t*, uint32_t*, uint32_t, uint8_t*, uint32_t)>*) add_system_service_table;
    
    // [KeAdjustInterruptTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x124578, 0x32828 bytes
    // ntoskrnl.exe .text:0x38914c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5580b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x389c6c, 0x1fe000 bytes
    //
    _o93(sdk::unknown_ptr) adjust_interrupt_time;
    
    // [KeAlertResumeThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d5544, 0x32828 bytes
    // ntoskrnl.exe .text:0x50d1d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55a564, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50cfc0, 0x1fe000 bytes
    //
    _o94(sdk::unknown_ptr) alert_resume_thread;
    
    // [KeAlertThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8b448, 0x32828 bytes
    // ntoskrnl.exe .text:0x20d520, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x307ae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x357ce0, 0x1fe000 bytes
    //
    _o95(sdk::function<uint8_t(struct nt::kthread_t*, char)>*) alert_thread;
    
    // [KeAlertThreadByThreadId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xebdb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x21738c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x308208, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x204570, 0x1fe000 bytes
    //
    _o96(sdk::unknown_ptr) alert_thread_by_thread_id;
    
    // [KeAllocateCalloutStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x531a80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a9520, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85c320, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b0ea0, 0x1fe000 bytes
    //
    _o97(sdk::function<void*(uint8_t)>*) allocate_callout_stack;
    
    // [KeAllocateCalloutStackEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x531ab4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7636a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x812e70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76a940, 0x1fe000 bytes
    //
    _o98(sdk::function<int32_t(enum nt::kstack_type_t, uint8_t, uint64_t, void**)>*) allocate_callout_stack_ex;
    
    // [KeAllocateInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12b32c, 0x32828 bytes
    // ntoskrnl.exe .text:0x37304c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3889cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3743cc, 0x1fe000 bytes
    //
    _o99(sdk::unknown_ptr) allocate_interrupt;
    
    // [KeAllocateXStateContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7ac30, 0x32828 bytes
    // ntoskrnl.exe .text:0x261144, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x207d00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3113a4, 0x1fe000 bytes
    //
    _p00(sdk::unknown_ptr) allocate_x_state_context;
    
    // [KeAndAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xaa5a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x30c4f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55abc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x277c00, 0x1fe000 bytes
    //
    _p01(sdk::unknown_ptr) and_affinity_ex;
    
    // [KeAndGroupAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x130cc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x370310, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b5060, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x371690, 0x1fe000 bytes
    //
    _p02(sdk::function<uint32_t(struct nt::kaffinity_ex_t*, struct nt::group_affinity_t*, struct nt::group_affinity_t*)>*) and_group_affinity_ex;
    
    // [KeAreAllApcsDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1087f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b70a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f58c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a5d40, 0x1fe000 bytes
    //
    _p03(sdk::function<uint8_t()>*) are_all_apcs_disabled;
    
    // [KeAreApcsDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x106fa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x214ca0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f9f50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35c810, 0x1fe000 bytes
    //
    _p04(sdk::function<uint8_t()>*) are_apcs_disabled;
    
    // [KeAreInterruptsEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x46660, 0x32828 bytes
    // ntoskrnl.exe .text:0x2ea7b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ccc40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x208590, 0x1fe000 bytes
    //
    _p05(sdk::function<uint8_t()>*) are_interrupts_enabled;
    
    // [KeAttachProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xce6e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x262c00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37ad00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3131f0, 0x1fe000 bytes
    //
    _p06(sdk::function<void(struct nt::kprocess_t*)>*) attach_process;
    
    // [KeBalanceSetManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13c19c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b4430, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ca720, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b4ce0, 0x1fe000 bytes
    //
    _p07(sdk::unknown_ptr) balance_set_manager;
    
    // [KeBoostPriorityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x74920, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a000c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3795c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c94e4, 0x1fe000 bytes
    //
    _p08(sdk::unknown_ptr) boost_priority_thread;
    
    // [KeBootTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab418, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6c8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd48, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6d0, 0x1fe000 bytes
    //
    _p09(sdk::unknown_ptr) boot_time;
    
    // [KeBootTimeBias]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab550, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb978, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1df40, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb970, 0x1fe000 bytes
    //
    _p10(sdk::unknown_ptr) boot_time_bias;
    
    // [KeBootprocSpecified]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab388, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb614, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dc78, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb614, 0x1fe000 bytes
    //
    _p11(sdk::unknown_ptr) bootproc_specified;
    
    // [KeBugCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b6b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3e80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4280d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5760, 0x1fe000 bytes
    //
    _p12(sdk::function<void(uint32_t)>*) bug_check;
    
    // [KeBugCheck2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d680c, 0x32828 bytes
    // ntoskrnl.exe .text:0x510d20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x554610, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x510b30, 0x1fe000 bytes
    //
    _p13(sdk::unknown_ptr) bug_check2;
    
    // [KeBugCheckAddRemovePagesCallbackListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f170, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31fe0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41d70, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31f80, 0x1fe000 bytes
    //
    _p14(sdk::unknown_ptr) bug_check_add_remove_pages_callback_list_head;
    
    // [KeBugCheckCallbackListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f510, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31fd0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc422c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31f70, 0x1fe000 bytes
    //
    _p15(sdk::unknown_ptr) bug_check_callback_list_head;
    
    // [KeBugCheckCallbackLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f430, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31e60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc422b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31dd8, 0x1fe000 bytes
    //
    _p16(sdk::unknown_ptr) bug_check_callback_lock;
    
    // [KeBugCheckEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b6c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3ea0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4280f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5780, 0x1fe000 bytes
    //
    _p17(sdk::function<void(uint32_t, uint64_t, uint64_t, uint64_t, uint64_t)>*) bug_check_ex;
    
    // [KeBugCheckReasonCallbackListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f180, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31ff0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41d80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31fa0, 0x1fe000 bytes
    //
    _p18(sdk::unknown_ptr) bug_check_reason_callback_list_head;
    
    // [KeBuildLogicalProcessorSystemInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4888d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x664958, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bbf44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d7cb8, 0x1fe000 bytes
    //
    _p19(sdk::unknown_ptr) build_logical_processor_system_information;
    
    // [KeCancelTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x91320, 0x32828 bytes
    // ntoskrnl.exe .text:0x291ae0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b64b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2364d0, 0x1fe000 bytes
    //
    _p20(sdk::function<uint8_t(struct nt::ktimer_t*)>*) cancel_timer;
    
    // [KeCancelTimer2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa81d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x291ce0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f95c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35b5d0, 0x1fe000 bytes
    //
    _p21(sdk::unknown_ptr) cancel_timer2;
    
    // [KeCancelTimerInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcee50, 0x32828 bytes
    // ntoskrnl.exe .text:0x2677f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37e4c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3187b4, 0x1fe000 bytes
    //
    _p22(sdk::unknown_ptr) cancel_timer_internal;
    
    // [KeCapturePersistentThreadState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cad7c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ff020, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x540ed0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fede0, 0x1fe000 bytes
    //
    _p23(sdk::unknown_ptr) capture_persistent_thread_state;
    
    // [KeCheckForTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d4660, 0x32828 bytes
    // ntoskrnl.exe .text:0x50fd4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55c4bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50fb5c, 0x1fe000 bytes
    //
    _p24(sdk::unknown_ptr) check_for_timer;
    
    // [KeCheckForZeroPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15f020, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f7d20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42ca00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f9600, 0x1fe000 bytes
    //
    _p25(sdk::unknown_ptr) check_for_zero_page;
    
    // [KeCheckProcessorAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x95b00, 0x32828 bytes
    // ntoskrnl.exe .text:0x30bb60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21eb90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2771c0, 0x1fe000 bytes
    //
    _p26(sdk::unknown_ptr) check_processor_affinity_ex;
    
    // [KeCheckProcessorGroupAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7b94, 0x32828 bytes
    // ntoskrnl.exe .text:0x395160, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a80f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3961c0, 0x1fe000 bytes
    //
    _p27(sdk::unknown_ptr) check_processor_group_affinity;
    
    // [KeCheckStackAndTargetAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x2539d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35b7c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x303810, 0x1fe000 bytes
    //
    _p28(sdk::unknown_ptr) check_stack_and_target_address;
    
    // [KeCleanupThreadState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8c09c, 0x32828 bytes
    // ntoskrnl.exe .text:0x29b598, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2136d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23f478, 0x1fe000 bytes
    //
    _p29(sdk::unknown_ptr) cleanup_thread_state;
    
    // [KeClockInterruptNotify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x550d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3050d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x220ca0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26f550, 0x1fe000 bytes
    //
    _p30(sdk::unknown_ptr) clock_interrupt_notify;
    
    // [KeClockTimerPowerChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d4d78, 0x32828 bytes
    // ntoskrnl.exe .text:0x50de00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55b130, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50dbf0, 0x1fe000 bytes
    //
    _p31(sdk::unknown_ptr) clock_timer_power_change;
    
    // [KeCompactServiceTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12be3c, 0x32828 bytes
    // ntoskrnl.exe .text:0x39a634, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ca0b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39baf4, 0x1fe000 bytes
    //
    _p32(sdk::unknown_ptr) compact_service_table;
    
    // [KeComplementAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xaa690, 0x32828 bytes
    // ntoskrnl.exe .text:0x30c6a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55ac10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x277db0, 0x1fe000 bytes
    //
    _p33(sdk::unknown_ptr) complement_affinity_ex;
    
    // [KeComputeParallelSha256]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d4f90, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b8570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x558150, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b8f00, 0x1fe000 bytes
    //
    _p34(sdk::unknown_ptr) compute_parallel_sha256;
    
    // [KeComputeParallelSha256StateSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d5064, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cad58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x558210, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe28, 0x1fe000 bytes
    //
    _p35(sdk::unknown_ptr) compute_parallel_sha256_state_size;
    
    // [KeComputeSha256]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d506c, 0x32828 bytes
    // ntoskrnl.exe .text:0x395110, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a6990, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x396170, 0x1fe000 bytes
    //
    _p36(sdk::unknown_ptr) compute_sha256;
    
    // [KeConfigureDynamicMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d49b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x50cfb8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55a410, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50cda8, 0x1fe000 bytes
    //
    _p37(sdk::unknown_ptr) configure_dynamic_memory;
    
    // [KeConfigureHeteroProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dcf80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b7798, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x966b58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b5f48, 0x1fe000 bytes
    //
    _p38(sdk::unknown_ptr) configure_hetero_processors;
    
    // [KeConnectInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12b3d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3730fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x388be4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37447c, 0x1fe000 bytes
    //
    _p39(sdk::unknown_ptr) connect_interrupt;
    
    // [KeConnectInterruptForHal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12e418, 0x32828 bytes
    // ntoskrnl.exe .text:0x39dca0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bd170, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39f160, 0x1fe000 bytes
    //
    _p40(sdk::unknown_ptr) connect_interrupt_for_hal;
    
    // [KeContextFromKframes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa3340, 0x32828 bytes
    // ntoskrnl.exe .text:0x284340, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2106f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32b1e0, 0x1fe000 bytes
    //
    _p41(sdk::unknown_ptr) context_from_kframes;
    
    // [KeContextToKframes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15b7f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f3fd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x428220, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f58b0, 0x1fe000 bytes
    //
    _p42(sdk::unknown_ptr) context_to_kframes;
    
    // [KeConvertAuxiliaryCounterToPerformanceCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d5074, 0x32828 bytes
    // ntoskrnl.exe .text:0x50e340, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45e2b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50e150, 0x1fe000 bytes
    //
    _p43(sdk::unknown_ptr) convert_auxiliary_counter_to_performance_counter;
    
    // [KeConvertPerformanceCounterToAuxiliaryCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d507c, 0x32828 bytes
    // ntoskrnl.exe .text:0x50e360, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x558220, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50e170, 0x1fe000 bytes
    //
    _p44(sdk::unknown_ptr) convert_performance_counter_to_auxiliary_counter;
    
    // [KeCopyAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38e00, 0x32828 bytes
    // ntoskrnl.exe .text:0x30c220, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55ac50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x277930, 0x1fe000 bytes
    //
    _p45(sdk::unknown_ptr) copy_affinity_ex;
    
    // [KeCopyExceptionRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16ef4c, 0x32828 bytes
    // ntoskrnl.exe .text:0x27149c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x564468, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x323028, 0x1fe000 bytes
    //
    _p46(sdk::unknown_ptr) copy_exception_record;
    
    // [KeCopyLastBranchInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa36d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x288c60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x210b00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32fbd0, 0x1fe000 bytes
    //
    _p47(sdk::unknown_ptr) copy_last_branch_information;
    
    // [KeCopyPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15f1a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f7e70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42cb80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f9750, 0x1fe000 bytes
    //
    _p48(sdk::unknown_ptr) copy_page;
    
    // [KeCopyPrivilegedPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d4a38, 0x32828 bytes
    // ntoskrnl.exe .text:0x50d040, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55a4bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50ce30, 0x1fe000 bytes
    //
    _p49(sdk::unknown_ptr) copy_privileged_page;
    
    // [KeCountSetBitsAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8a850, 0x32828 bytes
    // ntoskrnl.exe .text:0x23c830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21cdd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3595e0, 0x1fe000 bytes
    //
    _p50(sdk::unknown_ptr) count_set_bits_affinity_ex;
    
    // [KeCountSetBitsGroupAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d679c, 0x32828 bytes
    // ntoskrnl.exe .text:0x512f10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e9110, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x512d20, 0x1fe000 bytes
    //
    _p51(sdk::unknown_ptr) count_set_bits_group_affinity;
    
    // [KeCpuSetQueryUnparkRecommendation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d9cec, 0x32828 bytes
    // ntoskrnl.exe .text:0x5167c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45f592, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5165d0, 0x1fe000 bytes
    //
    _p52(sdk::unknown_ptr) cpu_set_query_unpark_recommendation;
    
    // [KeCpuSetReportParkedProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10fd48, 0x32828 bytes
    // ntoskrnl.exe .text:0x245150, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d2eb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x20245c, 0x1fe000 bytes
    //
    _p53(sdk::unknown_ptr) cpu_set_report_parked_processors;
    
    // [KeCreateEnclave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e8714, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b88dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x968664, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b708c, 0x1fe000 bytes
    //
    _p54(sdk::unknown_ptr) create_enclave;
    
    // [KeDebugReadEnclaveMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e8820, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b8a0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x968794, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b71bc, 0x1fe000 bytes
    //
    _p55(sdk::unknown_ptr) debug_read_enclave_memory;
    
    // [KeDebugWriteEnclaveMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e88a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b8a9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96881c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b724c, 0x1fe000 bytes
    //
    _p56(sdk::unknown_ptr) debug_write_enclave_memory;
    
    // [KeDelayExecutionThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x61ff0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c2b30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2bc6d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2295b0, 0x1fe000 bytes
    //
    _p57(sdk::function<int32_t(char, uint8_t, int64_t*)>*) delay_execution_thread;
    
    // [KeDeleteThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa0a0c, 0x32828 bytes
    // ntoskrnl.exe .text:0x283818, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2febcc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32a6b8, 0x1fe000 bytes
    //
    _p58(sdk::unknown_ptr) delete_thread;
    
    // [KeDeregisterBoundCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d5084, 0x32828 bytes
    // ntoskrnl.exe .text:0x50e380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x558240, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50e190, 0x1fe000 bytes
    //
    _p59(sdk::function<int32_t(void*)>*) deregister_bound_callback;
    
    // [KeDeregisterBugCheckCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1240a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x511b30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x555570, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x511940, 0x1fe000 bytes
    //
    _p60(sdk::function<uint8_t(struct nt::kbugcheck_callback_record_t*)>*) deregister_bug_check_callback;
    
    // [KeDeregisterBugCheckReasonCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f5e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a04c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x382810, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a1980, 0x1fe000 bytes
    //
    _p61(sdk::function<uint8_t(struct nt::kbugcheck_reason_callback_record_t*)>*) deregister_bug_check_reason_callback;
    
    // [KeDeregisterNmiCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d512c, 0x32828 bytes
    // ntoskrnl.exe .text:0x50e460, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x558320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50e270, 0x1fe000 bytes
    //
    _p62(sdk::function<int32_t(void*)>*) deregister_nmi_callback;
    
    // [KeDeregisterProcessorChangeCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x654a34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b8be0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x968950, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b7390, 0x1fe000 bytes
    //
    _p63(sdk::unknown_ptr) deregister_processor_change_callback;
    
    // [KeDetachProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd09d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x26b800, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3807d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31ce50, 0x1fe000 bytes
    //
    _p64(sdk::function<void()>*) detach_process;
    
    // [KeDisableProfiling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d94c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x515d34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55f8d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x515b44, 0x1fe000 bytes
    //
    _p65(sdk::unknown_ptr) disable_profiling;
    
    // [KeDisableQueueingPriorityIncrement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6e634, 0x32828 bytes
    // ntoskrnl.exe .text:0x208dd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f8d0c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c0820, 0x1fe000 bytes
    //
    _p66(sdk::unknown_ptr) disable_queueing_priority_increment;
    
    // [KeDisableTimer2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc3aac, 0x32828 bytes
    // ntoskrnl.exe .text:0x290ac8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f92d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35b6c0, 0x1fe000 bytes
    //
    _p67(sdk::unknown_ptr) disable_timer2;
    
    // [KeDisconnectInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1219fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x372664, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dbcb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3739e4, 0x1fe000 bytes
    //
    _p68(sdk::unknown_ptr) disconnect_interrupt;
    
    // [KeDispatchSecondaryInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d80e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x513100, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d7d30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x512f10, 0x1fe000 bytes
    //
    _p69(sdk::unknown_ptr) dispatch_secondary_interrupt;
    
    // [KeDpcWatchdogProfileGlobalTriageBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa540, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa320, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c340, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa320, 0x1fe000 bytes
    //
    _p70(sdk::unknown_ptr) dpc_watchdog_profile_global_triage_block;
    
    // [KeDynamicPartitioningSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab248, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb40b, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da2d, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb40b, 0x1fe000 bytes
    //
    _p71(sdk::unknown_ptr) dynamic_partitioning_supported;
    
    // [KeEnableProfiling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x654bb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b9014, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x968d58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b77c4, 0x1fe000 bytes
    //
    _p72(sdk::unknown_ptr) enable_profiling;
    
    // [KeEnableWatchdogTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab25a, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb47f, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da66, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb47f, 0x1fe000 bytes
    //
    _p73(sdk::unknown_ptr) enable_watchdog_timeout;
    
    // [KeEnterCriticalRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xaa2e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2ddad0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x344c50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25ed60, 0x1fe000 bytes
    //
    _p74(sdk::function<void()>*) enter_critical_region;
    
    // [KeEnterCriticalRegionThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13239c, 0x32828 bytes
    // ntoskrnl.exe .text:0x341f30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39d1c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a46d0, 0x1fe000 bytes
    //
    _p75(sdk::function<void(struct nt::kthread_t*)>*) enter_critical_region_thread;
    
    // [KeEnterGuardedRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xabb20, 0x32828 bytes
    // ntoskrnl.exe .text:0x23caa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34ace0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e92a0, 0x1fe000 bytes
    //
    _p76(sdk::function<void()>*) enter_guarded_region;
    
    // [KeEnterKernelDebugger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d74b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x511c70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5556c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x511a80, 0x1fe000 bytes
    //
    _p77(sdk::unknown_ptr) enter_kernel_debugger;
    
    // [KeEnumerateKernelStackSegments]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x95c68, 0x32828 bytes
    // ntoskrnl.exe .text:0x28372c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fec94, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32a5cc, 0x1fe000 bytes
    //
    _p78(sdk::unknown_ptr) enumerate_kernel_stack_segments;
    
    // [KeEnumerateNextProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6e040, 0x32828 bytes
    // ntoskrnl.exe .text:0x30bb90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21fa10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2771f0, 0x1fe000 bytes
    //
    _p79(sdk::unknown_ptr) enumerate_next_processor;
    
    // [KeEnumerateProcessorDpcs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d8b50, 0x32828 bytes
    // ntoskrnl.exe .text:0x513e5c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55dc2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x513c6c, 0x1fe000 bytes
    //
    _p80(sdk::function<void(uint32_t, sdk::function<void(void*, uint32_t, void*)>*, void*, uint32_t*)>*) enumerate_processor_dpcs;
    
    // [KeEnumerateQueueApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d8f00, 0x32828 bytes
    // ntoskrnl.exe .text:0x514880, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55ea00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x514690, 0x1fe000 bytes
    //
    _p81(sdk::function<void(struct nt::kthread_t*, sdk::function<void(void*, uint32_t, void*)>*, void*, char*)>*) enumerate_queue_apc;
    
    // [KeEstimateClockTickDuration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x139464, 0x32828 bytes
    // ntoskrnl.exe .text:0x50de10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55b140, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50dc00, 0x1fe000 bytes
    //
    _p82(sdk::unknown_ptr) estimate_clock_tick_duration;
    
    // [KeExpandKernelStackAndCallout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd47d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x271040, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39c9d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3227f0, 0x1fe000 bytes
    //
    _p83(sdk::function<int32_t(sdk::function<void(void*)>*, void*, uint64_t)>*) expand_kernel_stack_and_callout;
    
    // [KeExpandKernelStackAndCalloutEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x960d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b8860, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2cf790, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3543e0, 0x1fe000 bytes
    //
    _p84(sdk::function<int32_t(sdk::function<void(void*)>*, void*, uint64_t, uint8_t, void*)>*) expand_kernel_stack_and_callout_ex;
    
    // [KeExpandKernelStackAndCalloutInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x960f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b8890, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2cf7c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x354410, 0x1fe000 bytes
    //
    _p85(sdk::unknown_ptr) expand_kernel_stack_and_callout_internal;
    
    // [KeFeatureBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab268, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb458, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da70, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb458, 0x1fe000 bytes
    //
    _p86(sdk::unknown_ptr) feature_bits;
    
    // [KeFindConfigurationEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a6ca4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa90b20, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb81eb0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8fda0, 0x1fe000 bytes
    //
    _p87(sdk::unknown_ptr) find_configuration_entry;
    
    // [KeFindConfigurationNextEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a6cc4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5ca40, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3f760, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5c8e0, 0x1fe000 bytes
    //
    _p88(sdk::unknown_ptr) find_configuration_next_entry;
    
    // [KeFindFirstSetLeftAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d656c, 0x32828 bytes
    // ntoskrnl.exe .text:0x50d7c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x353ca0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50d5b0, 0x1fe000 bytes
    //
    _p89(sdk::unknown_ptr) find_first_set_left_affinity_ex;
    
    // [KeFindFirstSetLeftGroupAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc76d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x261de0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36b4f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x312390, 0x1fe000 bytes
    //
    _p90(sdk::unknown_ptr) find_first_set_left_group_affinity;
    
    // [KeFindFirstSetRightAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d65ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x50d800, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55ac70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50d5f0, 0x1fe000 bytes
    //
    _p91(sdk::unknown_ptr) find_first_set_right_affinity_ex;
    
    // [KeFindFirstSetRightGroupAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xde7ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x280a50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28d9b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3281b0, 0x1fe000 bytes
    //
    _p92(sdk::unknown_ptr) find_first_set_right_group_affinity;
    
    // [KeFirstGroupAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcbe6c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2620d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33c8b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x312850, 0x1fe000 bytes
    //
    _p93(sdk::unknown_ptr) first_group_affinity_ex;
    
    // [KeFlushCurrentTbImmediately]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d87c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x39bf80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3adb20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39d440, 0x1fe000 bytes
    //
    _p94(sdk::unknown_ptr) flush_current_tb_immediately;
    
    // [KeFlushCurrentTbOnly]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d87e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b1cb8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b4af4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b2568, 0x1fe000 bytes
    //
    _p95(sdk::unknown_ptr) flush_current_tb_only;
    
    // [KeFlushEntireTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13a854, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b1910, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ccd10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ad390, 0x1fe000 bytes
    //
    _p96(sdk::unknown_ptr) flush_entire_tb;
    
    // [KeFlushIoBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbea80, 0x32828 bytes
    // ntoskrnl.exe .text:0x24dd50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35d780, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fb620, 0x1fe000 bytes
    //
    _p97(sdk::function<void(struct nt::mdl_t*, uint8_t, uint8_t)>*) flush_io_buffers;
    
    // [KeFlushMultipleRangeCurrentTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12db18, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c40ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b4a10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c4e1c, 0x1fe000 bytes
    //
    _p98(sdk::unknown_ptr) flush_multiple_range_current_tb;
    
    // [KeFlushMultipleRangeTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d88f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x320fe0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b3dd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x293520, 0x1fe000 bytes
    //
    _p99(sdk::unknown_ptr) flush_multiple_range_tb;
    
    // [KeFlushProcessTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5980, 0x32828 bytes
    // ntoskrnl.exe .text:0x35c44c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ffb50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d52e4, 0x1fe000 bytes
    //
    _q00(sdk::unknown_ptr) flush_process_tb;
    
    // [KeFlushProcessWriteBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8a708, 0x32828 bytes
    // ntoskrnl.exe .text:0x23c17c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21333c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x358f2c, 0x1fe000 bytes
    //
    _q01(sdk::unknown_ptr) flush_process_write_buffers;
    
    // [KeFlushQueuedDpcs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6de18, 0x32828 bytes
    // ntoskrnl.exe .text:0x204c00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x339fc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x326760, 0x1fe000 bytes
    //
    _q02(sdk::function<void()>*) flush_queued_dpcs;
    
    // [KeFlushSingleCurrentTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12ac70, 0x32828 bytes
    // ntoskrnl.exe .text:0x385778, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b4dd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x386538, 0x1fe000 bytes
    //
    _q03(sdk::unknown_ptr) flush_single_current_tb;
    
    // [KeFlushSingleTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x85590, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a732c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30fb1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x34c0ec, 0x1fe000 bytes
    //
    _q04(sdk::unknown_ptr) flush_single_tb;
    
    // [KeFlushTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x66d08, 0x32828 bytes
    // ntoskrnl.exe .text:0x30be90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b3ae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2775a0, 0x1fe000 bytes
    //
    _q05(sdk::unknown_ptr) flush_tb;
    
    // [KeFlushWriteBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x163f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _q06(sdk::function<void()>*) flush_write_buffer;
    
    // [KeFoldProcessStatisticsThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8c128, 0x32828 bytes
    // ntoskrnl.exe .text:0x29b67c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x213598, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23f55c, 0x1fe000 bytes
    //
    _q07(sdk::unknown_ptr) fold_process_statistics_thread;
    
    // [KeForceEnableNx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d2cc8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x996410, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa79630, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9957b0, 0x1fe000 bytes
    //
    _q08(sdk::unknown_ptr) force_enable_nx;
    
    // [KeForceGroupAwareness]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab259, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4b0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da7b, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4b0, 0x1fe000 bytes
    //
    _q09(sdk::unknown_ptr) force_group_awareness;
    
    // [KeForceResumeProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8ac50, 0x32828 bytes
    // ntoskrnl.exe .text:0x20bb48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x375ac0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x358be4, 0x1fe000 bytes
    //
    _q10(sdk::unknown_ptr) force_resume_process;
    
    // [KeForceResumeThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa0ab8, 0x32828 bytes
    // ntoskrnl.exe .text:0x20c5dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x214964, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35603c, 0x1fe000 bytes
    //
    _q11(sdk::unknown_ptr) force_resume_thread;
    
    // [KeFreeCalloutStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x522bc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75ff30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80f980, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x767980, 0x1fe000 bytes
    //
    _q12(sdk::function<void(void*)>*) free_callout_stack;
    
    // [KeFreeInitializationCode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763a58, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19b5c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03bf4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18b5c, 0x1fe000 bytes
    //
    _q13(sdk::unknown_ptr) free_initialization_code;
    
    // [KeFreeInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1219e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x37263c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dbc88, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3739bc, 0x1fe000 bytes
    //
    _q14(sdk::unknown_ptr) free_interrupt;
    
    // [KeFreeXStateContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7a954, 0x32828 bytes
    // ntoskrnl.exe .text:0x2628b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x207aa4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x312ea0, 0x1fe000 bytes
    //
    _q15(sdk::unknown_ptr) free_x_state_context;
    
    // [KeFreezeExecution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x79e28, 0x32828 bytes
    // ntoskrnl.exe .text:0x517900, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x207dc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x517710, 0x1fe000 bytes
    //
    _q16(sdk::unknown_ptr) freeze_execution;
    
    // [KeFreezeProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8add4, 0x32828 bytes
    // ntoskrnl.exe .text:0x20ba48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3089e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x358e0c, 0x1fe000 bytes
    //
    _q17(sdk::unknown_ptr) freeze_process;
    
    // [KeFrozenProcessorCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1da374, 0x32828 bytes
    // ntoskrnl.exe .text:0x517c90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x562594, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x517aa0, 0x1fe000 bytes
    //
    _q18(sdk::unknown_ptr) frozen_processor_count;
    
    // [KeGenericCallDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc0cc4, 0x32828 bytes
    // ntoskrnl.exe .text:0x253270, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3837f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x303140, 0x1fe000 bytes
    //
    _q19(sdk::function<void(sdk::function<void(struct nt::kdpc_t*, void*, void*, void*)>*, void*)>*) generic_call_dpc;
    
    // [KeGenericProcessorCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x991e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x27d954, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33ad24, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x337838, 0x1fe000 bytes
    //
    _q20(sdk::unknown_ptr) generic_processor_callback;
    
    // [KeGetAffinitizedInterruptsInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1db75c, 0x32828 bytes
    // ntoskrnl.exe .text:0x51c708, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5656d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51c508, 0x1fe000 bytes
    //
    _q21(sdk::unknown_ptr) get_affinitized_interrupts_info;
    
    // [KeGetBugMessageText]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d7530, 0x32828 bytes
    // ntoskrnl.exe .text:0x511d14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x555764, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x511b24, 0x1fe000 bytes
    //
    _q22(sdk::unknown_ptr) get_bug_message_text;
    
    // [KeGetClockOwner]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d4d80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ead70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x422e10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ec180, 0x1fe000 bytes
    //
    _q23(sdk::unknown_ptr) get_clock_owner;
    
    // [KeGetClockTimerResolution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d4d88, 0x32828 bytes
    // ntoskrnl.exe .text:0x50df10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55b260, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50dd20, 0x1fe000 bytes
    //
    _q24(sdk::unknown_ptr) get_clock_timer_resolution;
    
    // [KeGetCurrentIrql]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38850, 0x32828 bytes
    // ntoskrnl.exe .text:0x33a390, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x346bf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2815b0, 0x1fe000 bytes
    //
    _q25(sdk::function<uint8_t()>*) get_current_irql;
    
    // [KeGetCurrentNodeNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb9bc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x244ac0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34b1a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2efad0, 0x1fe000 bytes
    //
    _q26(sdk::function<uint16_t()>*) get_current_node_number;
    
    // [KeGetCurrentProcessorNumberEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb1060, 0x32828 bytes
    // ntoskrnl.exe .text:0x292480, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38a0d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x236d20, 0x1fe000 bytes
    //
    _q27(sdk::function<uint32_t(struct nt::processor_number_t*)>*) get_current_processor_number_ex;
    
    // [KeGetCurrentStackPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15bd10, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f4580, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4287d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5e60, 0x1fe000 bytes
    //
    _q28(sdk::unknown_ptr) get_current_stack_pointer;
    
    // [KeGetCurrentThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9e998, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d1e20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x307840, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x252e40, 0x1fe000 bytes
    //
    _q29(sdk::function<struct nt::kthread_t*()>*) get_current_thread;
    
    // [KeGetDynamicTickDisableReason]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd56cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x2169b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55b2c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33c55c, 0x1fe000 bytes
    //
    _q30(sdk::unknown_ptr) get_dynamic_tick_disable_reason;
    
    // [KeGetEffectiveIrql]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x46644, 0x32828 bytes
    // ntoskrnl.exe .text:0x238a40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x347c60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x236140, 0x1fe000 bytes
    //
    _q31(sdk::function<uint8_t()>*) get_effective_irql;
    
    // [KeGetExecuteOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48f52c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x666610, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dd48c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d9b30, 0x1fe000 bytes
    //
    _q32(sdk::unknown_ptr) get_execute_options;
    
    // [KeGetNextClockTickDuration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d4d9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x50df30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55b2e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50dd40, 0x1fe000 bytes
    //
    _q33(sdk::unknown_ptr) get_next_clock_tick_duration;
    
    // [KeGetNextKernelStackSegment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x95cec, 0x32828 bytes
    // ntoskrnl.exe .text:0x2837c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fed50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32a668, 0x1fe000 bytes
    //
    _q34(sdk::unknown_ptr) get_next_kernel_stack_segment;
    
    // [KeGetPrcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xee5e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x30b5c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21fac4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x276c20, 0x1fe000 bytes
    //
    _q35(sdk::unknown_ptr) get_prcb;
    
    // [KeGetProcessorIndexFromNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xee6f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x27ffd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b6460, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x205810, 0x1fe000 bytes
    //
    _q36(sdk::unknown_ptr) get_processor_index_from_number;
    
    // [KeGetProcessorNumberFromIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x95974, 0x32828 bytes
    // ntoskrnl.exe .text:0x35ab20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f3e50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1310, 0x1fe000 bytes
    //
    _q37(sdk::unknown_ptr) get_processor_number_from_index;
    
    // [KeGetRecommendedSharedDataAlignment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b28, 0x32828 bytes
    // ntoskrnl.exe .text:0x211a50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3469f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33f760, 0x1fe000 bytes
    //
    _q38(sdk::function<uint32_t()>*) get_recommended_shared_data_alignment;
    
    // [KeGetSchedulingGroupSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbc40c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3576c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32e2cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dbad0, 0x1fe000 bytes
    //
    _q39(sdk::unknown_ptr) get_scheduling_group_size;
    
    // [KeGetXSaveFeatureFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13a510, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a42f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3acce0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a9c70, 0x1fe000 bytes
    //
    _q40(sdk::unknown_ptr) get_x_save_feature_flags;
    
    // [KeHwPolicyLocateResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79ecf8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5d8d0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4f820, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5d770, 0x1fe000 bytes
    //
    _q41(sdk::unknown_ptr) hw_policy_locate_resource;
    
    // [KeHypervisorNumprocSpecified]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab3e0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6a8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dcb0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6a8, 0x1fe000 bytes
    //
    _q42(sdk::unknown_ptr) hypervisor_numproc_specified;
    
    // [KeInitAmd64SpecificState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77d3b4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa58228, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5de0c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa580c8, 0x1fe000 bytes
    //
    _q43(sdk::unknown_ptr) init_amd64_specific_state;
    
    // [KeInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7910ec, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa44cb0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2e2f4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3f098, 0x1fe000 bytes
    //
    _q44(sdk::unknown_ptr) init_system;
    
    // [KeInitThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3c84a8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98d004, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa73400, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98bda4, 0x1fe000 bytes
    //
    _q45(sdk::unknown_ptr) init_thread;
    
    // [KeInitializeAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xde730, 0x32828 bytes
    // ntoskrnl.exe .text:0x30bae0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45e3e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x277140, 0x1fe000 bytes
    //
    _q46(sdk::unknown_ptr) initialize_affinity_ex;
    
    // [KeInitializeApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x96068, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b8790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x212f10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x355400, 0x1fe000 bytes
    //
    _q47(sdk::function<void(struct nt::kapc_t*, struct nt::kthread_t*, enum nt::kapc_environment_t, sdk::function<void(struct nt::kapc_t*, sdk::function<void(void*, void*, void*)>**, void**, void**, void**)>*, sdk::function<void(struct nt::kapc_t*)>*, sdk::function<void(void*, void*, void*)>*, char, void*)>*) initialize_apc;
    
    // [KeInitializeClock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a4314, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa42bc0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb572d4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa69bf8, 0x1fe000 bytes
    //
    _q48(sdk::unknown_ptr) initialize_clock;
    
    // [KeInitializeCrashDumpHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cb3d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ff670, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5414d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ff430, 0x1fe000 bytes
    //
    _q49(sdk::function<int32_t(uint32_t, uint32_t, void*, uint32_t, uint32_t*)>*) initialize_crash_dump_header;
    
    // [KeInitializeDeviceQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x25d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x375500, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3558b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x376880, 0x1fe000 bytes
    //
    _q50(sdk::function<void(struct nt::kdevice_queue_t*)>*) initialize_device_queue;
    
    // [KeInitializeDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6e0b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x27fe70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33e590, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x204f10, 0x1fe000 bytes
    //
    _q51(sdk::function<void(struct nt::kdpc_t*, sdk::function<void(struct nt::kdpc_t*, void*, void*, void*)>*, void*)>*) initialize_dpc;
    
    // [KeInitializeEnclave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e892c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b8b28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9688a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b72d8, 0x1fe000 bytes
    //
    _q52(sdk::unknown_ptr) initialize_enclave;
    
    // [KeInitializeEntropySystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56e254, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b3d14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86c688, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bb8a4, 0x1fe000 bytes
    //
    _q53(sdk::unknown_ptr) initialize_entropy_system;
    
    // [KeInitializeEnumerationContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6e0d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2806d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21cd30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x205100, 0x1fe000 bytes
    //
    _q54(sdk::unknown_ptr) initialize_enumeration_context;
    
    // [KeInitializeEnumerationContextFromAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d67fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x512f80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55d2c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x512d90, 0x1fe000 bytes
    //
    _q55(sdk::unknown_ptr) initialize_enumeration_context_from_affinity;
    
    // [KeInitializeEnumerationContextFromGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f860, 0x32828 bytes
    // ntoskrnl.exe .text:0x512fa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45ea30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x512db0, 0x1fe000 bytes
    //
    _q56(sdk::unknown_ptr) initialize_enumeration_context_from_group;
    
    // [KeInitializeEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf5880, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d3540, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d4250, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x254560, 0x1fe000 bytes
    //
    _q57(sdk::function<void(struct nt::kevent_t*, enum nt::event_type_t, uint8_t)>*) initialize_event;
    
    // [KeInitializeGate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcf904, 0x32828 bytes
    // ntoskrnl.exe .text:0x270be0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x301cdc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3223a0, 0x1fe000 bytes
    //
    _q58(sdk::unknown_ptr) initialize_gate;
    
    // [KeInitializeGuardedMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7a34, 0x32828 bytes
    // ntoskrnl.exe .text:0x211030, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fb480, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2df510, 0x1fe000 bytes
    //
    _q59(sdk::function<void(struct nt::fast_mutex_t*)>*) initialize_guarded_mutex;
    
    // [KeInitializeInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12b174, 0x32828 bytes
    // ntoskrnl.exe .text:0x39dd10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bd1e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39f1d0, 0x1fe000 bytes
    //
    _q60(sdk::unknown_ptr) initialize_interrupt;
    
    // [KeInitializeInterruptEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12b1f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x372f0c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x388a7c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37428c, 0x1fe000 bytes
    //
    _q61(sdk::unknown_ptr) initialize_interrupt_ex;
    
    // [KeInitializeMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10b0c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x248990, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39d220, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2debd0, 0x1fe000 bytes
    //
    _q62(sdk::function<void(struct nt::kmutant_t*, uint8_t)>*) initialize_mutant;
    
    // [KeInitializeMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10b0bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x248970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x356bd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2debb0, 0x1fe000 bytes
    //
    _q63(sdk::function<void(struct nt::kmutant_t*, uint32_t)>*) initialize_mutex;
    
    // [KeInitializePriQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x145b5c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c1dc4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d9a78, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c2bd4, 0x1fe000 bytes
    //
    _q64(sdk::function<void(struct nt::kpriqueue_t*, uint32_t)>*) initialize_pri_queue;
    
    // [KeInitializeProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f7308, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f3294, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fbc60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f6a70, 0x1fe000 bytes
    //
    _q65(sdk::unknown_ptr) initialize_process;
    
    // [KeInitializeProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x654c8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b90f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x968e24, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b78a0, 0x1fe000 bytes
    //
    _q66(sdk::unknown_ptr) initialize_profile;
    
    // [KeInitializeProfileCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x654d10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b917c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x968ee0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b792c, 0x1fe000 bytes
    //
    _q67(sdk::unknown_ptr) initialize_profile_callback;
    
    // [KeInitializeQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6e0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x2813e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36a160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3282c0, 0x1fe000 bytes
    //
    _q68(sdk::function<void(struct nt::kqueue_t*, uint32_t)>*) initialize_queue;
    
    // [KeInitializeSecondaryInterruptServices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x654ae4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b8cb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x851200, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b7460, 0x1fe000 bytes
    //
    _q69(sdk::unknown_ptr) initialize_secondary_interrupt_services;
    
    // [KeInitializeSemaphore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x97140, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b83d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d4fb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x355480, 0x1fe000 bytes
    //
    _q70(sdk::function<void(struct nt::ksemaphore_t*, int32_t, int32_t)>*) initialize_semaphore;
    
    // [KeInitializeThreadedDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1398e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3af850, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b1fd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ab2b0, 0x1fe000 bytes
    //
    _q71(sdk::function<void(struct nt::kdpc_t*, sdk::function<void(struct nt::kdpc_t*, void*, void*, void*)>*, void*)>*) initialize_threaded_dpc;
    
    // [KeInitializeTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x95d44, 0x32828 bytes
    // ntoskrnl.exe .text:0x27c870, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x373e30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c26d0, 0x1fe000 bytes
    //
    _q72(sdk::function<void(struct nt::ktimer_t*)>*) initialize_timer;
    
    // [KeInitializeTimer2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6dd1c, 0x32828 bytes
    // ntoskrnl.exe .text:0x208c80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f8f80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c06d0, 0x1fe000 bytes
    //
    _q73(sdk::unknown_ptr) initialize_timer2;
    
    // [KeInitializeTimerEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x95d60, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b8410, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28e750, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x355080, 0x1fe000 bytes
    //
    _q74(sdk::function<void(struct nt::ktimer_t*, enum nt::timer_type_t)>*) initialize_timer_ex;
    
    // [KeInitializeTimerTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5511c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77c9c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8323d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7816d0, 0x1fe000 bytes
    //
    _q75(sdk::unknown_ptr) initialize_timer_table;
    
    // [KeInsertByKeyDeviceQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d9040, 0x32828 bytes
    // ntoskrnl.exe .text:0x514b10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45ea90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x514920, 0x1fe000 bytes
    //
    _q76(sdk::function<uint8_t(struct nt::kdevice_queue_t*, struct nt::kdevice_queue_entry_t*, uint32_t)>*) insert_by_key_device_queue;
    
    // [KeInsertDeviceQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcebf0, 0x32828 bytes
    // ntoskrnl.exe .text:0x514bd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55ec40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5149e0, 0x1fe000 bytes
    //
    _q77(sdk::function<uint8_t(struct nt::kdevice_queue_t*, struct nt::kdevice_queue_entry_t*)>*) insert_device_queue;
    
    // [KeInsertHeadQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d9328, 0x32828 bytes
    // ntoskrnl.exe .text:0x5151d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55f240, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x514fe0, 0x1fe000 bytes
    //
    _q78(sdk::function<int32_t(struct nt::kqueue_t*, nt::list_entry_t*)>*) insert_head_queue;
    
    // [KeInsertPriQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeb240, 0x32828 bytes
    // ntoskrnl.exe .text:0x2be340, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b3420, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x229fa0, 0x1fe000 bytes
    //
    _q79(sdk::function<uint8_t(struct nt::kpriqueue_t*, nt::list_entry_t*, int32_t, int32_t, uint32_t)>*) insert_pri_queue;
    
    // [KeInsertQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc5a98, 0x32828 bytes
    // ntoskrnl.exe .text:0x26ba80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x377190, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31d080, 0x1fe000 bytes
    //
    _q80(sdk::function<int32_t(struct nt::kqueue_t*, nt::list_entry_t*)>*) insert_queue;
    
    // [KeInsertQueueApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8b840, 0x32828 bytes
    // ntoskrnl.exe .text:0x20c040, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x240970, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x357530, 0x1fe000 bytes
    //
    _q81(sdk::function<uint8_t(struct nt::kapc_t*, void*, void*, int32_t)>*) insert_queue_apc;
    
    // [KeInsertQueueDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x53f40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3037d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b58a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26dc50, 0x1fe000 bytes
    //
    _q82(sdk::function<uint8_t(struct nt::kdpc_t*, void*, void*)>*) insert_queue_dpc;
    
    // [KeInsertQueueEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6e35c, 0x32828 bytes
    // ntoskrnl.exe .text:0x28dccc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f9d60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fbfc8, 0x1fe000 bytes
    //
    _q83(sdk::unknown_ptr) insert_queue_ex;
    
    // [KeInsertSchedulingGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbc5c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x357290, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32a6c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dc82c, 0x1fe000 bytes
    //
    _q84(sdk::unknown_ptr) insert_scheduling_group;
    
    // [KeIntSteerAssignCpuSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1db7a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x51c75c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56570c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51c55c, 0x1fe000 bytes
    //
    _q85(sdk::unknown_ptr) int_steer_assign_cpu_set;
    
    // [KeIntSteerAssignCpuSetForGsiv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1db838, 0x32828 bytes
    // ntoskrnl.exe .text:0x51c83c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5657f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51c63c, 0x1fe000 bytes
    //
    _q86(sdk::unknown_ptr) int_steer_assign_cpu_set_for_gsiv;
    
    // [KeIntSteerGetSteeringMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12bc80, 0x32828 bytes
    // ntoskrnl.exe .text:0x373a50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x388648, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x374dd0, 0x1fe000 bytes
    //
    _q87(sdk::unknown_ptr) int_steer_get_steering_mode;
    
    // [KeIntSteerIsSteeringEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd5718, 0x32828 bytes
    // ntoskrnl.exe .text:0x27188c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x386478, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32341c, 0x1fe000 bytes
    //
    _q88(sdk::unknown_ptr) int_steer_is_steering_enabled;
    
    // [KeIntSteerSnapPerf]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xaa300, 0x32828 bytes
    // ntoskrnl.exe .text:0x30c710, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x350d70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x277e20, 0x1fe000 bytes
    //
    _q89(sdk::unknown_ptr) int_steer_snap_perf;
    
    // [KeInterlockedClearProcessorAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd14fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x50d850, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x329570, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50d640, 0x1fe000 bytes
    //
    _q90(sdk::unknown_ptr) interlocked_clear_processor_affinity_ex;
    
    // [KeInterlockedSetProcessorAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbc3c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a42a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3295e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a9c20, 0x1fe000 bytes
    //
    _q91(sdk::unknown_ptr) interlocked_set_processor_affinity_ex;
    
    // [KeInvalidAccessAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc53a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x24c960, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35ac40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f6560, 0x1fe000 bytes
    //
    _q92(sdk::unknown_ptr) invalid_access_allowed;
    
    // [KeInvalidateAllCaches]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd5314, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a0300, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30d040, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a17c0, 0x1fe000 bytes
    //
    _q93(sdk::function<uint8_t()>*) invalidate_all_caches;
    
    // [KeInvalidateRangeAllCaches]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d9440, 0x32828 bytes
    // ntoskrnl.exe .text:0x515340, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45eb50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x515150, 0x1fe000 bytes
    //
    _q94(sdk::function<void(void*, uint32_t)>*) invalidate_range_all_caches;
    
    // [KeInvalidateRangeAllCachesNoIpi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x63720, 0x32828 bytes
    // ntoskrnl.exe .text:0x2bdd80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x31c760, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x353360, 0x1fe000 bytes
    //
    _q95(sdk::unknown_ptr) invalidate_range_all_caches_no_ipi;
    
    // [KeIpiGenericCall]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12dde4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a0020, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d6fa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a14e0, 0x1fe000 bytes
    //
    _q96(sdk::function<uint64_t(sdk::function<uint64_t(uint64_t)>*, uint64_t)>*) ipi_generic_call;
    
    // [KeIsApcRunningThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d8f98, 0x32828 bytes
    // ntoskrnl.exe .text:0x514a50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55eb70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x514860, 0x1fe000 bytes
    //
    _q97(sdk::unknown_ptr) is_apc_running_thread;
    
    // [KeIsAttachedProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3ebc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c2800, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x215ac0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x226260, 0x1fe000 bytes
    //
    _q98(sdk::function<uint8_t()>*) is_attached_process;
    
    // [KeIsEmptyAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb5250, 0x32828 bytes
    // ntoskrnl.exe .text:0x30ae60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2128a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x276350, 0x1fe000 bytes
    //
    _q99(sdk::unknown_ptr) is_empty_affinity_ex;
    
    // [KeIsEqualAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x141020, 0x32828 bytes
    // ntoskrnl.exe .text:0x3be550, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x212430, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bf290, 0x1fe000 bytes
    //
    _r00(sdk::unknown_ptr) is_equal_affinity_ex;
    
    // [KeIsExecutingDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xccb54, 0x32828 bytes
    // ntoskrnl.exe .text:0x24ff40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3591e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fd960, 0x1fe000 bytes
    //
    _r01(sdk::function<uint32_t()>*) is_executing_dpc;
    
    // [KeIsSingleGroupAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xccb64, 0x32828 bytes
    // ntoskrnl.exe .text:0x264e60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37f6a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3152b0, 0x1fe000 bytes
    //
    _r02(sdk::unknown_ptr) is_single_group_affinity_ex;
    
    // [KeIsSubsetAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d65f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x50d8b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x329fd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50d6a0, 0x1fe000 bytes
    //
    _r03(sdk::unknown_ptr) is_subset_affinity_ex;
    
    // [KeIsThreadRunning]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d5580, 0x32828 bytes
    // ntoskrnl.exe .text:0x50d2c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55a664, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50d0b4, 0x1fe000 bytes
    //
    _r04(sdk::unknown_ptr) is_thread_running;
    
    // [KeIsWaitListEmpty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65402c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b7780, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x966b40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b5f30, 0x1fe000 bytes
    //
    _r05(sdk::function<uint8_t(void*)>*) is_wait_list_empty;
    
    // [KeKernelStackSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa030, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa038, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c04c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa038, 0x1fe000 bytes
    //
    _r06(sdk::unknown_ptr) kernel_stack_size;
    
    // [KeKvaShadowingActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1db520, 0x32828 bytes
    // ntoskrnl.exe .text:0x35ab84, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x380338, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1374, 0x1fe000 bytes
    //
    _r07(sdk::unknown_ptr) kva_shadowing_active;
    
    // [KeLargestCacheLine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa0ac, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa0c8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c0fc, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa0c8, 0x1fe000 bytes
    //
    _r08(sdk::unknown_ptr) largest_cache_line;
    
    // [KeLastBranchMSR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ad728, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbb1c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e23c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbb1c, 0x1fe000 bytes
    //
    _r09(uint32_t*) last_branch_msr;
    
    // [KeLeaveCriticalRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe9770, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e0170, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c93b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x261420, 0x1fe000 bytes
    //
    _r10(sdk::function<void()>*) leave_critical_region;
    
    // [KeLeaveCriticalRegionThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe9b10, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c7680, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x29b220, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2486b0, 0x1fe000 bytes
    //
    _r11(sdk::function<void(struct nt::kthread_t*)>*) leave_critical_region_thread;
    
    // [KeLeaveGuardedRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x880b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x20dc90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x346c90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x359910, 0x1fe000 bytes
    //
    _r12(sdk::function<void()>*) leave_guarded_region;
    
    // [KeLoadMTRR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d20d0, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x995a30, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa78650, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x994dd0, 0x1fe000 bytes
    //
    _r13(sdk::unknown_ptr) load_mtrr;
    
    // [KeLoaderBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab278, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb460, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da58, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb460, 0x1fe000 bytes
    //
    _r14(sdk::unknown_ptr) loader_block;
    
    // [KeLoaderBlockExported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aed80, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfc898, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd23e88, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfc898, 0x1fe000 bytes
    //
    _r15(sdk::unknown_ptr) loader_block_exported;
    
    // [KeMakeKernelDirectoryTableBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dce7c, 0x32828 bytes
    // ntoskrnl.exe .text:0x281a04, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe73c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x328534, 0x1fe000 bytes
    //
    _r16(sdk::unknown_ptr) make_kernel_directory_table_base;
    
    // [KeMakeUserDirectoryTableBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dce90, 0x32828 bytes
    // ntoskrnl.exe .text:0x282828, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe754, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3292d8, 0x1fe000 bytes
    //
    _r17(sdk::unknown_ptr) make_user_directory_table_base;
    
    // [KeMarkHiberPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d1960, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9ac348, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8a6e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9ab2b8, 0x1fe000 bytes
    //
    _r18(sdk::unknown_ptr) mark_hiber_phase;
    
    // [KeMaskInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x121c40, 0x32828 bytes
    // ntoskrnl.exe .text:0x372870, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dbfa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x373bf0, 0x1fe000 bytes
    //
    _r19(sdk::unknown_ptr) mask_interrupt;
    
    // [KeMaximumIncrement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab208, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb418, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da14, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb418, 0x1fe000 bytes
    //
    _r20(sdk::unknown_ptr) maximum_increment;
    
    // [KeMaximumProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab254, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb46c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da60, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb46c, 0x1fe000 bytes
    //
    _r21(sdk::unknown_ptr) maximum_processors;
    
    // [KeMinimumIncrement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab318, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4c4, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da7c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4c4, 0x1fe000 bytes
    //
    _r22(sdk::unknown_ptr) minimum_increment;
    
    // [KeMtrrComparisonFailed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308ac8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b248, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41488, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b1ac, 0x1fe000 bytes
    //
    _r23(sdk::unknown_ptr) mtrr_comparison_failed;
    
    // [KeNodeBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be440, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd22380, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd486c0, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd22380, 0x1fe000 bytes
    //
    _r24(sdk::unknown_ptr) node_block;
    
    // [KeNodeDistance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa080, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa068, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c090, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa068, 0x1fe000 bytes
    //
    _r25(sdk::unknown_ptr) node_distance;
    
    // [KeNonHrTimeIncrement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab47c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb55c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db2c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb560, 0x1fe000 bytes
    //
    _r26(sdk::unknown_ptr) non_hr_time_increment;
    
    // [KeNotifyProcessorFreezeSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _r27(sdk::unknown_ptr) notify_processor_freeze_supported;
    
    // [KeNumaInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a96d0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa70370, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5ff10, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6f6b4, 0x1fe000 bytes
    //
    _r28(sdk::unknown_ptr) numa_initialize;
    
    // [KeNumberNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa000, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa000, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c000, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa000, 0x1fe000 bytes
    //
    _r29(sdk::unknown_ptr) number_nodes;
    
    // [KeNumberProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab204, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb404, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da00, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb404, 0x1fe000 bytes
    //
    _r30(volatile char*) number_processors;
    
    // [KeNumberProcessorsGroup0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab32d, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5b0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dbc1, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5af, 0x1fe000 bytes
    //
    _r31(sdk::unknown_ptr) number_processors_group0;
    
    // [KeNumprocSpecified]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab304, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb564, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db88, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb564, 0x1fe000 bytes
    //
    _r32(sdk::unknown_ptr) numproc_specified;
    
    // [KeOrAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb9590, 0x32828 bytes
    // ntoskrnl.exe .text:0x30de20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55acc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x279530, 0x1fe000 bytes
    //
    _r33(sdk::unknown_ptr) or_affinity_ex;
    
    // [KePersistMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15f170, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f7e40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42cb50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f9720, 0x1fe000 bytes
    //
    _r34(sdk::unknown_ptr) persist_memory;
    
    // [KePrepareClockTimerForIdle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x54400, 0x32828 bytes
    // ntoskrnl.exe .text:0x291430, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33bb40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x241d70, 0x1fe000 bytes
    //
    _r35(sdk::unknown_ptr) prepare_clock_timer_for_idle;
    
    // [KeProcessorArchitecture]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa048, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa058, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c074, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa058, 0x1fe000 bytes
    //
    _r36(sdk::unknown_ptr) processor_architecture;
    
    // [KeProcessorGroupAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd2328, 0x32828 bytes
    // ntoskrnl.exe .text:0x26b330, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28d9e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31c980, 0x1fe000 bytes
    //
    _r37(sdk::unknown_ptr) processor_group_affinity;
    
    // [KeProcessorLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab2cc, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb520, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db28, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb520, 0x1fe000 bytes
    //
    _r38(sdk::unknown_ptr) processor_level;
    
    // [KeProcessorProfileControlArea]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d523c, 0x32828 bytes
    // ntoskrnl.exe .text:0x50e51c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5584cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50e32c, 0x1fe000 bytes
    //
    _r39(sdk::unknown_ptr) processor_profile_control_area;
    
    // [KeProcessorRevision]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab374, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5f8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dc1c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5f8, 0x1fe000 bytes
    //
    _r40(sdk::unknown_ptr) processor_revision;
    
    // [KeProfileInterruptWithSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d9514, 0x32828 bytes
    // ntoskrnl.exe .text:0x515d90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55f930, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x515ba0, 0x1fe000 bytes
    //
    _r41(sdk::function<void(nt::trapframe*, enum nt::kprofile_source_t)>*) profile_interrupt_with_source;
    
    // [KePulseEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6bf10, 0x32828 bytes
    // ntoskrnl.exe .text:0x29de00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3178b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f6b10, 0x1fe000 bytes
    //
    _r42(sdk::function<int32_t(struct nt::kevent_t*, int32_t, uint8_t)>*) pulse_event;
    
    // [KeQueryActiveGroupCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x74fb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a0a50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e93f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c9f20, 0x1fe000 bytes
    //
    _r43(sdk::function<uint16_t()>*) query_active_group_count;
    
    // [KeQueryActiveProcessorAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14118c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3be600, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55c170, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bf340, 0x1fe000 bytes
    //
    _r44(sdk::function<uint32_t(struct nt::kaffinity_ex_t*)>*) query_active_processor_affinity;
    
    // [KeQueryActiveProcessorCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d5984, 0x32828 bytes
    // ntoskrnl.exe .text:0x50f710, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea1d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50f520, 0x1fe000 bytes
    //
    _r45(sdk::function<uint32_t(uint64_t*)>*) query_active_processor_count;
    
    // [KeQueryActiveProcessorCountEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xecd30, 0x32828 bytes
    // ntoskrnl.exe .text:0x281440, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21fb00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x328320, 0x1fe000 bytes
    //
    _r46(sdk::function<uint32_t(uint16_t)>*) query_active_processor_count_ex;
    
    // [KeQueryActiveProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d5a00, 0x32828 bytes
    // ntoskrnl.exe .text:0x50f7a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x205150, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50f5b0, 0x1fe000 bytes
    //
    _r47(sdk::function<uint64_t()>*) query_active_processors;
    
    // [KeQueryAffinityProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x120b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x217590, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f5f30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x204350, 0x1fe000 bytes
    //
    _r48(sdk::unknown_ptr) query_affinity_process;
    
    // [KeQueryAuxiliaryCounterFrequency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d5380, 0x32828 bytes
    // ntoskrnl.exe .text:0x50e6f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5586a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50e500, 0x1fe000 bytes
    //
    _r49(sdk::unknown_ptr) query_auxiliary_counter_frequency;
    
    // [KeQueryBasePriorityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa5800, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d93e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35cdd8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25a464, 0x1fe000 bytes
    //
    _r50(sdk::unknown_ptr) query_base_priority_thread;
    
    // [KeQueryBootTimeValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcd434, 0x32828 bytes
    // ntoskrnl.exe .text:0x25df00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x369e28, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30e650, 0x1fe000 bytes
    //
    _r51(sdk::unknown_ptr) query_boot_time_values;
    
    // [KeQueryCpuSetInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5690f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a8e88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85d1cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b0808, 0x1fe000 bytes
    //
    _r52(sdk::unknown_ptr) query_cpu_set_information;
    
    // [KeQueryCpuSetsProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d9d88, 0x32828 bytes
    // ntoskrnl.exe .text:0x516864, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x560b0c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x516674, 0x1fe000 bytes
    //
    _r53(sdk::unknown_ptr) query_cpu_sets_process;
    
    // [KeQueryCpuSetsThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d9e04, 0x32828 bytes
    // ntoskrnl.exe .text:0x5169a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x560c50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5167b0, 0x1fe000 bytes
    //
    _r54(sdk::unknown_ptr) query_cpu_sets_thread;
    
    // [KeQueryCurrentStackInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x41d70, 0x32828 bytes
    // ntoskrnl.exe .text:0x284cd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20f0f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32bc40, 0x1fe000 bytes
    //
    _r55(sdk::unknown_ptr) query_current_stack_information;
    
    // [KeQueryDpcWatchdogInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb0480, 0x32828 bytes
    // ntoskrnl.exe .text:0x2427e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x346c00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ee4b0, 0x1fe000 bytes
    //
    _r56(sdk::function<int32_t(struct nt::kdpc_watchdog_information_t*)>*) query_dpc_watchdog_information;
    
    // [KeQueryEffectiveBasePriorityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x99f28, 0x32828 bytes
    // ntoskrnl.exe .text:0x29e2d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32734c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x336ea8, 0x1fe000 bytes
    //
    _r57(sdk::unknown_ptr) query_effective_base_priority_thread;
    
    // [KeQueryEffectivePriorityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10f1a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x374990, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e2af0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x375d10, 0x1fe000 bytes
    //
    _r58(sdk::function<int32_t(struct nt::kthread_t*)>*) query_effective_priority_thread;
    
    // [KeQueryGroupAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa664c, 0x32828 bytes
    // ntoskrnl.exe .text:0x355f90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36b9d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33b210, 0x1fe000 bytes
    //
    _r59(sdk::function<uint64_t(uint16_t)>*) query_group_affinity;
    
    // [KeQueryGroupAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeee64, 0x32828 bytes
    // ntoskrnl.exe .text:0x50d930, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55ad10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50d720, 0x1fe000 bytes
    //
    _r60(sdk::unknown_ptr) query_group_affinity_ex;
    
    // [KeQueryGroupMaskProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa6098, 0x32828 bytes
    // ntoskrnl.exe .text:0x2176d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36b9c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x20433c, 0x1fe000 bytes
    //
    _r61(sdk::unknown_ptr) query_group_mask_process;
    
    // [KeQueryHardwareCounterConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x654d88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b9200, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x968f80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b79b0, 0x1fe000 bytes
    //
    _r62(sdk::function<int32_t(struct nt::hardware_counter_t*, uint32_t, uint32_t*)>*) query_hardware_counter_configuration;
    
    // [KeQueryHeteroCpuPolicyThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d55fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x50d480, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55a690, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50d270, 0x1fe000 bytes
    //
    _r63(sdk::unknown_ptr) query_hetero_cpu_policy_thread;
    
    // [KeQueryHighestNodeNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x74fb8, 0x32828 bytes
    // ntoskrnl.exe .text:0x281300, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33a5f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3281e0, 0x1fe000 bytes
    //
    _r64(sdk::function<uint16_t()>*) query_highest_node_number;
    
    // [KeQueryInterruptTimePrecise]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x128840, 0x32828 bytes
    // ntoskrnl.exe .text:0x25edb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x220410, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30f2b0, 0x1fe000 bytes
    //
    _r65(sdk::unknown_ptr) query_interrupt_time_precise;
    
    // [KeQueryIntervalProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51b1ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x717f14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x968fd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71f954, 0x1fe000 bytes
    //
    _r66(sdk::unknown_ptr) query_interval_profile;
    
    // [KeQueryKvaShadowInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x654f20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b9cb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x969408, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b8460, 0x1fe000 bytes
    //
    _r67(sdk::unknown_ptr) query_kva_shadow_information;
    
    // [KeQueryLogicalProcessorRelationship]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xddff0, 0x32828 bytes
    // ntoskrnl.exe .text:0x248b20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33af80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3271c0, 0x1fe000 bytes
    //
    _r68(sdk::function<int32_t(struct nt::processor_number_t*, enum nt::logical_processor_relationship_t, struct nt::system_logical_processor_information_ex_t*, uint32_t*)>*) query_logical_processor_relationship;
    
    // [KeQueryMaximumGroupCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9715c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b83c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x212ec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3554b0, 0x1fe000 bytes
    //
    _r69(sdk::function<uint16_t()>*) query_maximum_group_count;
    
    // [KeQueryMaximumProcessorCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d5a08, 0x32828 bytes
    // ntoskrnl.exe .text:0x50f7b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55c1c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50f5c0, 0x1fe000 bytes
    //
    _r70(sdk::function<uint32_t()>*) query_maximum_processor_count;
    
    // [KeQueryMaximumProcessorCountEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10b23c, 0x32828 bytes
    // ntoskrnl.exe .text:0x249330, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21faa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x327110, 0x1fe000 bytes
    //
    _r71(sdk::function<uint32_t(uint16_t)>*) query_maximum_processor_count_ex;
    
    // [KeQueryNodeActiveAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x74fc4, 0x32828 bytes
    // ntoskrnl.exe .text:0x281320, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33a610, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x328200, 0x1fe000 bytes
    //
    _r72(sdk::function<void(uint16_t, struct nt::group_affinity_t*, wchar_t*)>*) query_node_active_affinity;
    
    // [KeQueryNodeMaximumProcessorCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x149e64, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c9150, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e71d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ca040, 0x1fe000 bytes
    //
    _r73(sdk::function<uint16_t(uint16_t)>*) query_node_maximum_processor_count;
    
    // [KeQueryNumaGraph]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bc8dc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa900c0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8130c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8f340, 0x1fe000 bytes
    //
    _r74(sdk::unknown_ptr) query_numa_graph;
    
    // [KeQueryOwnerMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcaef8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5150b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55f11c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x514ec0, 0x1fe000 bytes
    //
    _r75(sdk::function<void(struct nt::kmutant_t*, struct nt::client_id_t*)>*) query_owner_mutant;
    
    // [KeQueryPerformanceCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1940, 0x11e8 bytes
    // ntoskrnl.exe .text:0x30e450, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x220530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x240ca0, 0x1fe000 bytes
    //
    _r76(sdk::function<int64_t(int64_t*)>*) query_performance_counter;
    
    // [KeQueryPrcbAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd4650, 0x32828 bytes
    // ntoskrnl.exe .text:0x50e710, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5586c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50e520, 0x1fe000 bytes
    //
    _r77(sdk::function<struct nt::kprcb_t*(uint32_t)>*) query_prcb_address;
    
    // [KeQueryPriorityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x87780, 0x32828 bytes
    // ntoskrnl.exe .text:0x298e10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e5c70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23ec20, 0x1fe000 bytes
    //
    _r78(sdk::function<int32_t(struct nt::kthread_t*)>*) query_priority_thread;
    
    // [KeQueryRuntimeThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd5484, 0x32828 bytes
    // ntoskrnl.exe .text:0x271560, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385ac0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3230f0, 0x1fe000 bytes
    //
    _r79(sdk::function<uint32_t(struct nt::kthread_t*, uint32_t*)>*) query_runtime_thread;
    
    // [KeQuerySchedulingGroupHistory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x95648, 0x32828 bytes
    // ntoskrnl.exe .text:0x21c674, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20b128, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e15b4, 0x1fe000 bytes
    //
    _r80(sdk::unknown_ptr) query_scheduling_group_history;
    
    // [KeQuerySchedulingGroupReadyTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x95020, 0x32828 bytes
    // ntoskrnl.exe .text:0x257b04, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3783ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x307474, 0x1fe000 bytes
    //
    _r81(sdk::unknown_ptr) query_scheduling_group_ready_time;
    
    // [KeQuerySpeculationControlInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x655010, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b8d88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x968a1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b7538, 0x1fe000 bytes
    //
    _r82(sdk::unknown_ptr) query_speculation_control_information;
    
    // [KeQuerySystemAllowedCpuSetAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x95b24, 0x32828 bytes
    // ntoskrnl.exe .text:0x30c600, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28ef98, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x277d10, 0x1fe000 bytes
    //
    _r83(sdk::unknown_ptr) query_system_allowed_cpu_set_affinity;
    
    // [KeQuerySystemTimePrecise]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x97210, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b82c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x213f10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3554c0, 0x1fe000 bytes
    //
    _r84(sdk::function<void(int64_t*)>*) query_system_time_precise;
    
    // [KeQuerySystemTimeUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x97130, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b83f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x214084, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x355464, 0x1fe000 bytes
    //
    _r85(sdk::unknown_ptr) query_system_time_unsafe;
    
    // [KeQueryTimeIncrement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10b780, 0x32828 bytes
    // ntoskrnl.exe .text:0x27ed70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x302cd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2443a0, 0x1fe000 bytes
    //
    _r86(sdk::function<uint32_t()>*) query_time_increment;
    
    // [KeQueryTimerDueTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d47f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x510058, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55c750, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50fe68, 0x1fe000 bytes
    //
    _r87(sdk::unknown_ptr) query_timer_due_time;
    
    // [KeQueryTotalCycleTimeThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb8728, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d92e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21daf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25a360, 0x1fe000 bytes
    //
    _r88(sdk::unknown_ptr) query_total_cycle_time_thread;
    
    // [KeQueryUnbiasedInterruptTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb9550, 0x32828 bytes
    // ntoskrnl.exe .text:0x209a40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3503d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x337f20, 0x1fe000 bytes
    //
    _r89(sdk::function<uint64_t()>*) query_unbiased_interrupt_time;
    
    // [KeQueryUnbiasedInterruptTimePrecise]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb0970, 0x32828 bytes
    // ntoskrnl.exe .text:0x23a5e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x334a80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2db4a0, 0x1fe000 bytes
    //
    _r90(sdk::unknown_ptr) query_unbiased_interrupt_time_precise;
    
    // [KeQueryValuesThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe97c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x29afa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21fb90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25b510, 0x1fe000 bytes
    //
    _r91(sdk::unknown_ptr) query_values_thread;
    
    // [KeRaiseIrqlToDpcLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd3e08, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c3570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x346b50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2445a0, 0x1fe000 bytes
    //
    _r92(sdk::unknown_ptr) raise_irql_to_dpc_level;
    
    // [KeRaiseUserException]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d5f48, 0x32828 bytes
    // ntoskrnl.exe .text:0x510170, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55c860, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50ff80, 0x1fe000 bytes
    //
    _r93(sdk::unknown_ptr) raise_user_exception;
    
    // [KeReadStateEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb97b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x210e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34f180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f4820, 0x1fe000 bytes
    //
    _r94(sdk::function<int32_t(struct nt::kevent_t*)>*) read_state_event;
    
    // [KeReadStateMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb97b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x210e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34f180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f4820, 0x1fe000 bytes
    //
    _r95(sdk::function<int32_t(struct nt::kmutant_t*)>*) read_state_mutant;
    
    // [KeReadStateQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb97b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x210e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34f180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f4820, 0x1fe000 bytes
    //
    _r96(sdk::function<int32_t(struct nt::kqueue_t*)>*) read_state_queue;
    
    // [KeReadStateSemaphore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb97b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x210e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34f180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f4820, 0x1fe000 bytes
    //
    _r97(sdk::function<int32_t(struct nt::ksemaphore_t*)>*) read_state_semaphore;
    
    // [KeReadStateTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb97b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x510160, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45e5b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50ff70, 0x1fe000 bytes
    //
    _r98(sdk::function<uint8_t(struct nt::ktimer_t*)>*) read_state_timer;
    
    // [KeReadyThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa1e54, 0x32828 bytes
    // ntoskrnl.exe .text:0x288dbc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x212e0c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32fd2c, 0x1fe000 bytes
    //
    _r99(sdk::unknown_ptr) ready_thread;
    
    // [KeRebaselineInterruptTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x111114, 0x32828 bytes
    // ntoskrnl.exe .text:0x380514, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x556e44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3812d0, 0x1fe000 bytes
    //
    _s00(sdk::unknown_ptr) rebaseline_interrupt_time;
    
    // [KeRebaselineSystemTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1110a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x389684, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x556e74, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38a1a4, 0x1fe000 bytes
    //
    _s01(sdk::unknown_ptr) rebaseline_system_time;
    
    // [KeRegisterBoundCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d5388, 0x32828 bytes
    // ntoskrnl.exe .text:0x50eaf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x558930, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50e900, 0x1fe000 bytes
    //
    _s02(sdk::function<void*(sdk::function<enum nt::bound_callback_status_t()>*)>*) register_bound_callback;
    
    // [KeRegisterBugCheckCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12bfe4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c83c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e2cf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c9290, 0x1fe000 bytes
    //
    _s03(sdk::function<uint8_t(struct nt::kbugcheck_callback_record_t*, sdk::function<void(void*, uint32_t)>*, void*, uint32_t, uint8_t*)>*) register_bug_check_callback;
    
    // [KeRegisterBugCheckReasonCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12c0c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x399b60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36c3e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39b020, 0x1fe000 bytes
    //
    _s04(sdk::function<uint8_t(struct nt::kbugcheck_reason_callback_record_t*, sdk::function<void(enum nt::kbugcheck_callback_reason_t, struct nt::kbugcheck_reason_callback_record_t*, void*, uint32_t)>*, enum nt::kbugcheck_callback_reason_t, uint8_t*)>*) register_bug_check_reason_callback;
    
    // [KeRegisterNmiCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d53f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x50eb60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5589a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50e970, 0x1fe000 bytes
    //
    _s05(sdk::function<void*(sdk::function<uint8_t(void*, uint8_t)>*, void*)>*) register_nmi_callback;
    
    // [KeRegisterObjectNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfe7b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x208a3c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2afa20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c048c, 0x1fe000 bytes
    //
    _s06(sdk::unknown_ptr) register_object_notification;
    
    // [KeRegisterProcessorChangeCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x568a2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7aa600, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82d370, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b1f80, 0x1fe000 bytes
    //
    _s07(sdk::unknown_ptr) register_processor_change_callback;
    
    // [KeRegisteredProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab314, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb574, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db98, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb574, 0x1fe000 bytes
    //
    _s08(sdk::unknown_ptr) registered_processors;
    
    // [KeRelaxTimingConstraints]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d4858, 0x32828 bytes
    // ntoskrnl.exe .text:0x50bf68, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x556ea4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50bd28, 0x1fe000 bytes
    //
    _s09(sdk::unknown_ptr) relax_timing_constraints;
    
    // [KeReleaseGuardedMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x898b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x20de80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e59b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x263bb0, 0x1fe000 bytes
    //
    _s10(sdk::function<void(struct nt::fast_mutex_t*)>*) release_guarded_mutex;
    
    // [KeReleaseGuardedMutexUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d4850, 0x32828 bytes
    // ntoskrnl.exe .text:0x3af960, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45e270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ab3c0, 0x1fe000 bytes
    //
    _s11(sdk::function<void(struct nt::fast_mutex_t*)>*) release_guarded_mutex_unsafe;
    
    // [KeReleaseInStackQueuedSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf1f00, 0x32828 bytes
    // ntoskrnl.exe .text:0x35a7d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c35d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2daa90, 0x1fe000 bytes
    //
    _s12(sdk::function<void(struct nt::klock_queue_handle_t*)>*) release_in_stack_queued_spin_lock;
    
    // [KeReleaseInStackQueuedSpinLockForDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcece4, 0x32828 bytes
    // ntoskrnl.exe .text:0x510930, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55d060, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x510740, 0x1fe000 bytes
    //
    _s13(sdk::function<void(struct nt::klock_queue_handle_t*)>*) release_in_stack_queued_spin_lock_for_dpc;
    
    // [KeReleaseInStackQueuedSpinLockFromDpcLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe6c90, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e24e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x294770, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x263790, 0x1fe000 bytes
    //
    _s14(sdk::function<void(struct nt::klock_queue_handle_t*)>*) release_in_stack_queued_spin_lock_from_dpc_level;
    
    // [KeReleaseInterruptSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd015c, 0x32828 bytes
    // ntoskrnl.exe .text:0x268080, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x356730, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x318f90, 0x1fe000 bytes
    //
    _s15(sdk::function<void(struct nt::kinterrupt_t*, uint8_t)>*) release_interrupt_spin_lock;
    
    // [KeReleaseMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa5bc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c8420, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x29aec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x249450, 0x1fe000 bytes
    //
    _s16(sdk::function<int32_t(struct nt::kmutant_t*, int32_t, uint8_t, uint8_t)>*) release_mutant;
    
    // [KeReleaseMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4aa40, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c76c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x29aea0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2486f0, 0x1fe000 bytes
    //
    _s17(sdk::function<int32_t(struct nt::kmutant_t*, uint8_t)>*) release_mutex;
    
    // [KeReleaseQueuedSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf190, 0x32828 bytes
    // ntoskrnl.exe .text:0x348730, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e0c80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22b8c0, 0x1fe000 bytes
    //
    _s18(sdk::function<void(uint64_t, uint8_t)>*) release_queued_spin_lock;
    
    // [KeReleaseSemaphore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x47940, 0x32828 bytes
    // ntoskrnl.exe .text:0x242890, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38b770, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ee560, 0x1fe000 bytes
    //
    _s19(sdk::function<int32_t(struct nt::ksemaphore_t*, int32_t, int32_t, uint8_t)>*) release_semaphore;
    
    // [KeReleaseSemaphoreEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x98a70, 0x32828 bytes
    // ntoskrnl.exe .text:0x28b590, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x295320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x330d10, 0x1fe000 bytes
    //
    _s20(sdk::function<int32_t(struct nt::ksemaphore_t*, int32_t, int32_t, void*, uint32_t)>*) release_semaphore_ex;
    
    // [KeReleaseSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xffc90, 0x32828 bytes
    // ntoskrnl.exe .text:0x23a870, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c4bf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e7ee0, 0x1fe000 bytes
    //
    _s21(sdk::function<void(uint64_t*, uint8_t)>*) release_spin_lock;
    
    // [KeReleaseSpinLockForDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d63bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5109d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55d100, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5107e0, 0x1fe000 bytes
    //
    _s22(sdk::function<void(uint64_t*, uint8_t)>*) release_spin_lock_for_dpc;
    
    // [KeReleaseSpinLockFromDpcLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb7f00, 0x32828 bytes
    // ntoskrnl.exe .text:0x23df50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34b640, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x277410, 0x1fe000 bytes
    //
    _s23(sdk::function<void(uint64_t*)>*) release_spin_lock_from_dpc_level;
    
    // [KeRemoveByKeyDeviceQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d90e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x514c60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55ecd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x514a70, 0x1fe000 bytes
    //
    _s24(sdk::function<struct nt::kdevice_queue_entry_t*(struct nt::kdevice_queue_t*, uint32_t)>*) remove_by_key_device_queue;
    
    // [KeRemoveByKeyDeviceQueueIfBusy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d91ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x514d40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55edb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x514b50, 0x1fe000 bytes
    //
    _s25(sdk::function<struct nt::kdevice_queue_entry_t*(struct nt::kdevice_queue_t*, uint32_t)>*) remove_by_key_device_queue_if_busy;
    
    // [KeRemoveDeviceQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcec68, 0x32828 bytes
    // ntoskrnl.exe .text:0x514e20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55ee80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x514c30, 0x1fe000 bytes
    //
    _s26(sdk::function<struct nt::kdevice_queue_entry_t*(struct nt::kdevice_queue_t*)>*) remove_device_queue;
    
    // [KeRemoveEnclavePage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e89d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x50f640, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55c070, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50f450, 0x1fe000 bytes
    //
    _s27(sdk::unknown_ptr) remove_enclave_page;
    
    // [KeRemoveEntryDeviceQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d9274, 0x32828 bytes
    // ntoskrnl.exe .text:0x514ec0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55ef20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x514cd0, 0x1fe000 bytes
    //
    _s28(sdk::function<uint8_t(struct nt::kdevice_queue_t*, struct nt::kdevice_queue_entry_t*)>*) remove_entry_device_queue;
    
    // [KeRemoveGroupAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d6648, 0x32828 bytes
    // ntoskrnl.exe .text:0x50d950, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55ad30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50d740, 0x1fe000 bytes
    //
    _s29(sdk::unknown_ptr) remove_group_affinity_ex;
    
    // [KeRemovePriQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3e710, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c2160, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x215360, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x225bc0, 0x1fe000 bytes
    //
    _s30(sdk::function<nt::list_entry_t*(struct nt::kpriqueue_t*, char, uint8_t, int64_t*)>*) remove_pri_queue;
    
    // [KeRemoveProcessorAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38dcc, 0x32828 bytes
    // ntoskrnl.exe .text:0x30c1e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b3aa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2778f0, 0x1fe000 bytes
    //
    _s31(sdk::unknown_ptr) remove_processor_affinity_ex;
    
    // [KeRemoveProcessorGroupAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8edf8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2917a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33bfe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x241b20, 0x1fe000 bytes
    //
    _s32(sdk::unknown_ptr) remove_processor_group_affinity;
    
    // [KeRemoveQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc79a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x259820, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36ab00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30a4e0, 0x1fe000 bytes
    //
    _s33(sdk::function<nt::list_entry_t*(struct nt::kqueue_t*, char, int64_t*)>*) remove_queue;
    
    // [KeRemoveQueueApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10aa6c, 0x32828 bytes
    // ntoskrnl.exe .text:0x238cdc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x378c40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33eb10, 0x1fe000 bytes
    //
    _s34(sdk::unknown_ptr) remove_queue_apc;
    
    // [KeRemoveQueueDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb9cb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x238ba0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3460c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33ffa0, 0x1fe000 bytes
    //
    _s35(sdk::function<uint8_t(struct nt::kdpc_t*)>*) remove_queue_dpc;
    
    // [KeRemoveQueueDpcEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb9cb8, 0x32828 bytes
    // ntoskrnl.exe .text:0x238bc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3460e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33ffc0, 0x1fe000 bytes
    //
    _s36(sdk::function<uint8_t(struct nt::kdpc_t*, uint8_t)>*) remove_queue_dpc_ex;
    
    // [KeRemoveQueueEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa8698, 0x32828 bytes
    // ntoskrnl.exe .text:0x2061e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35e1e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3144a0, 0x1fe000 bytes
    //
    _s37(sdk::unknown_ptr) remove_queue_entry;
    
    // [KeRemoveQueueEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe9e20, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e7140, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x29cc40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x268450, 0x1fe000 bytes
    //
    _s38(sdk::function<uint32_t(struct nt::kqueue_t*, char, uint8_t, int64_t*, nt::list_entry_t**, uint32_t)>*) remove_queue_ex;
    
    // [KeRemoveSchedulingGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbc420, 0x32828 bytes
    // ntoskrnl.exe .text:0x3576dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32e12c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dbae8, 0x1fe000 bytes
    //
    _s39(sdk::unknown_ptr) remove_scheduling_group;
    
    // [KeRemoveSystemServiceTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x654608, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b81f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x968000, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b69a0, 0x1fe000 bytes
    //
    _s40(sdk::function<uint8_t(uint32_t)>*) remove_system_service_table;
    
    // [KeReportCacheIncoherentDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d8aa8, 0x32828 bytes
    // ntoskrnl.exe .text:0x513d90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55db60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x513ba0, 0x1fe000 bytes
    //
    _s41(sdk::unknown_ptr) report_cache_incoherent_device;
    
    // [KeRequestTerminationThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8b34c, 0x32828 bytes
    // ntoskrnl.exe .text:0x20bd70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30795c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x357b80, 0x1fe000 bytes
    //
    _s42(sdk::unknown_ptr) request_termination_thread;
    
    // [KeReservePrivilegedPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d4aa8, 0x32828 bytes
    // ntoskrnl.exe .text:0x390e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39d0d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x391ea0, 0x1fe000 bytes
    //
    _s43(sdk::unknown_ptr) reserve_privileged_pages;
    
    // [KeResetEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x104b30, 0x32828 bytes
    // ntoskrnl.exe .text:0x2da690, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28db00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2055d0, 0x1fe000 bytes
    //
    _s44(sdk::function<int32_t(struct nt::kevent_t*)>*) reset_event;
    
    // [KeResetLegacyFloatingPointState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15bd20, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f4590, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4287e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5e70, 0x1fe000 bytes
    //
    _s45(sdk::unknown_ptr) reset_legacy_floating_point_state;
    
    // [KeRestoreExtendedAndSupervisorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7a7f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x262748, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x207948, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x312d38, 0x1fe000 bytes
    //
    _s46(sdk::unknown_ptr) restore_extended_and_supervisor_state;
    
    // [KeRestoreExtendedProcessorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7a7ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x262730, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x207930, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x312d20, 0x1fe000 bytes
    //
    _s47(sdk::function<void(struct nt::xstate_save_t*)>*) restore_extended_processor_state;
    
    // [KeRestoreFloatingPointState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x86a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _s48(sdk::function<int32_t(struct nt::kfloating_save_t*)>*) restore_floating_point_state;
    
    // [KeRestoreLegacyFloatingPointControlWord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15bd40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f45b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x428800, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5e90, 0x1fe000 bytes
    //
    _s49(sdk::unknown_ptr) restore_legacy_floating_point_control_word;
    
    // [KeRestoreMtrrBroadcast]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d472c, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99b220, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7cd74, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99a2a4, 0x1fe000 bytes
    //
    _s50(sdk::unknown_ptr) restore_mtrr_broadcast;
    
    // [KeRestoreProcessorSpecificFeatures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x111f74, 0x32828 bytes
    // ntoskrnl.exe .text:0x3802ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x557e88, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38109c, 0x1fe000 bytes
    //
    _s51(sdk::unknown_ptr) restore_processor_specific_features;
    
    // [KeResumeClockTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1120b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x37f970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55b33c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x380760, 0x1fe000 bytes
    //
    _s52(sdk::unknown_ptr) resume_clock_timer;
    
    // [KeResumeClockTimerFromIdle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x581d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x308c20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x228580, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2729d0, 0x1fe000 bytes
    //
    _s53(sdk::unknown_ptr) resume_clock_timer_from_idle;
    
    // [KeResumeClockTimerSafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d4dcc, 0x32828 bytes
    // ntoskrnl.exe .text:0x50df64, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55b354, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50dd74, 0x1fe000 bytes
    //
    _s54(sdk::unknown_ptr) resume_clock_timer_safe;
    
    // [KeResumeThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x956fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x20c51c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x308e20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x356b50, 0x1fe000 bytes
    //
    _s55(sdk::unknown_ptr) resume_thread;
    
    // [KeRetryOutswapProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd4ecc, 0x32828 bytes
    // ntoskrnl.exe .text:0x50db38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55ae70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50d928, 0x1fe000 bytes
    //
    _s56(sdk::unknown_ptr) retry_outswap_process;
    
    // [KeRevertToUserAffinityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d5744, 0x32828 bytes
    // ntoskrnl.exe .text:0x50d4b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55a800, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50d2a0, 0x1fe000 bytes
    //
    _s57(sdk::function<void()>*) revert_to_user_affinity_thread;
    
    // [KeRevertToUserAffinityThreadEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d5780, 0x32828 bytes
    // ntoskrnl.exe .text:0x50d4f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45e380, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50d2e0, 0x1fe000 bytes
    //
    _s58(sdk::function<void(uint64_t)>*) revert_to_user_affinity_thread_ex;
    
    // [KeRevertToUserGroupAffinityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc63d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x27d800, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33ab80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x337490, 0x1fe000 bytes
    //
    _s59(sdk::function<void(struct nt::group_affinity_t*)>*) revert_to_user_group_affinity_thread;
    
    // [KeRootProcPerNodeSpecified]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab3e4, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5f4, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dbdc, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5f4, 0x1fe000 bytes
    //
    _s60(sdk::unknown_ptr) root_proc_per_node_specified;
    
    // [KeRootProcSpecified]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab370, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb50c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db10, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb50c, 0x1fe000 bytes
    //
    _s61(sdk::unknown_ptr) root_proc_specified;
    
    // [KeRundownApcQueues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x465604, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69ec00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68b6a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70670c, 0x1fe000 bytes
    //
    _s62(sdk::unknown_ptr) rundown_apc_queues;
    
    // [KeRundownQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd4280, 0x32828 bytes
    // ntoskrnl.exe .text:0x24dec0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x359740, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fb790, 0x1fe000 bytes
    //
    _s63(sdk::function<nt::list_entry_t*(struct nt::kqueue_t*)>*) rundown_queue;
    
    // [KeRundownQueueEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa5928, 0x32828 bytes
    // ntoskrnl.exe .text:0x24e048, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x359844, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fb918, 0x1fe000 bytes
    //
    _s64(sdk::unknown_ptr) rundown_queue_ex;
    
    // [KeRundownSecureProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d4b28, 0x32828 bytes
    // ntoskrnl.exe .text:0x50dc8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55afcc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50da7c, 0x1fe000 bytes
    //
    _s65(sdk::unknown_ptr) rundown_secure_process;
    
    // [KeSaveExtendedAndSupervisorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7aa20, 0x32828 bytes
    // ntoskrnl.exe .text:0x260eec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x207b8c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31114c, 0x1fe000 bytes
    //
    _s66(sdk::unknown_ptr) save_extended_and_supervisor_state;
    
    // [KeSaveExtendedProcessorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7a9e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x260ea0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x207b40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x311100, 0x1fe000 bytes
    //
    _s67(sdk::function<int32_t(uint64_t, struct nt::xstate_save_t*)>*) save_extended_processor_state;
    
    // [KeSaveFloatingPointState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x86a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _s68(sdk::function<int32_t(struct nt::kfloating_save_t*)>*) save_floating_point_state;
    
    // [KeSaveLegacyFloatingPointControlWord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15bd30, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f45a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4287f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f5e80, 0x1fe000 bytes
    //
    _s69(sdk::unknown_ptr) save_legacy_floating_point_control_word;
    
    // [KeSaveStateForHibernate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15c310, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f4bb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x428ea0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f6490, 0x1fe000 bytes
    //
    _s70(sdk::unknown_ptr) save_state_for_hibernate;
    
    // [KeSecureProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d4b34, 0x32828 bytes
    // ntoskrnl.exe .text:0x50dcb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55aff0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50daa0, 0x1fe000 bytes
    //
    _s71(sdk::unknown_ptr) secure_process;
    
    // [KeSecureThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d57d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x50d54c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55a840, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50d33c, 0x1fe000 bytes
    //
    _s72(sdk::unknown_ptr) secure_thread;
    
    // [KeSelectIdealProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7ae4, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a11c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x211c10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ca440, 0x1fe000 bytes
    //
    _s73(sdk::unknown_ptr) select_ideal_processor;
    
    // [KeSelectNodeForAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd0424, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a13bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e8ef8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ca648, 0x1fe000 bytes
    //
    _s74(sdk::unknown_ptr) select_node_for_affinity;
    
    // [KeServiceDescriptorTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab780, 0x32828 bytes
    // ntoskrnl.exe CFGRO:0xe018c0, 0x1fe000 bytes
    // ntoskrnl.exe CFGRO:0xe018c0, 0x1fd000 bytes
    // ntoskrnl.exe CFGRO:0xe018c0, 0x1fe000 bytes
    //
    _s75(sdk::unknown_ptr) service_descriptor_table;
    
    // [KeServiceDescriptorTableFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab7c0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbbc0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e280, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbbc0, 0x1fe000 bytes
    //
    _s76(sdk::unknown_ptr) service_descriptor_table_filter;
    
    // [KeServiceDescriptorTableShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab740, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfba40, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e140, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfba40, 0x1fe000 bytes
    //
    _s77(sdk::unknown_ptr) service_descriptor_table_shadow;
    
    // [KeSetActualBasePriorityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5d3a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x302560, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x217370, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26c9e0, 0x1fe000 bytes
    //
    _s78(sdk::function<int32_t(struct nt::kthread_t*, int32_t)>*) set_actual_base_priority_thread;
    
    // [KeSetAffinityProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1483a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c5e7c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e27c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c6d4c, 0x1fe000 bytes
    //
    _s79(sdk::unknown_ptr) set_affinity_process;
    
    // [KeSetAffinityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1329c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x394d4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55a880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x395dac, 0x1fe000 bytes
    //
    _s80(sdk::unknown_ptr) set_affinity_thread;
    
    // [KeSetAutoAlignmentProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41eab0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6eb3d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7701e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6999f8, 0x1fe000 bytes
    //
    _s81(sdk::unknown_ptr) set_auto_alignment_process;
    
    // [KeSetBasePriorityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x78534, 0x32828 bytes
    // ntoskrnl.exe .text:0x28cb00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x216d70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3323f0, 0x1fe000 bytes
    //
    _s82(sdk::function<int32_t(struct nt::kthread_t*, int32_t)>*) set_base_priority_thread;
    
    // [KeSetCheckStackExtentsProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6545e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b81c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x968614, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b6970, 0x1fe000 bytes
    //
    _s83(sdk::unknown_ptr) set_check_stack_extents_process;
    
    // [KeSetCoalescableTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xff5e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x290350, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b2b10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x236170, 0x1fe000 bytes
    //
    _s84(sdk::function<uint8_t(struct nt::ktimer_t*, int64_t, uint32_t, uint32_t, struct nt::kdpc_t*)>*) set_coalescable_timer;
    
    // [KeSetCpuSetsProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d9e8c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c1024, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d2330, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c1e34, 0x1fe000 bytes
    //
    _s85(sdk::unknown_ptr) set_cpu_sets_process;
    
    // [KeSetDisableBoostThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41cf9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x755d7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8702c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75d7cc, 0x1fe000 bytes
    //
    _s86(sdk::unknown_ptr) set_disable_boost_thread;
    
    // [KeSetDisableQuantumProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x54d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x27cfb4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x332240, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d41c4, 0x1fe000 bytes
    //
    _s87(sdk::unknown_ptr) set_disable_quantum_process;
    
    // [KeSetDmaIoCoherency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _s88(sdk::unknown_ptr) set_dma_io_coherency;
    
    // [KeSetEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ad30, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c9200, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c1970, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x24a230, 0x1fe000 bytes
    //
    _s89(sdk::function<int32_t(struct nt::kevent_t*, int32_t, uint8_t)>*) set_event;
    
    // [KeSetEventBoostPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d674c, 0x32828 bytes
    // ntoskrnl.exe .text:0x512eb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55d260, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x512cc0, 0x1fe000 bytes
    //
    _s90(sdk::unknown_ptr) set_event_boost_priority;
    
    // [KeSetEventBoostPriorityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x89958, 0x32828 bytes
    // ntoskrnl.exe .text:0x20f418, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e4dc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35a808, 0x1fe000 bytes
    //
    _s91(sdk::unknown_ptr) set_event_boost_priority_ex;
    
    // [KeSetExecuteOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x788bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x26adac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37e960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31c43c, 0x1fe000 bytes
    //
    _s92(sdk::unknown_ptr) set_execute_options;
    
    // [KeSetHardwareCounterConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x654dd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b9250, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x969040, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b7a00, 0x1fe000 bytes
    //
    _s93(sdk::function<int32_t(struct nt::hardware_counter_t*, uint32_t)>*) set_hardware_counter_configuration;
    
    // [KeSetHeteroCpuPolicyThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d5810, 0x32828 bytes
    // ntoskrnl.exe .text:0x50d590, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55a8a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50d380, 0x1fe000 bytes
    //
    _s94(sdk::unknown_ptr) set_hetero_cpu_policy_thread;
    
    // [KeSetIdealProcessorThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x957a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x376640, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x397970, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3779c0, 0x1fe000 bytes
    //
    _s95(sdk::function<uint8_t(struct nt::kthread_t*, uint8_t)>*) set_ideal_processor_thread;
    
    // [KeSetIdealProcessorThreadByNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x957f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x376694, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3979c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x377a14, 0x1fe000 bytes
    //
    _s96(sdk::unknown_ptr) set_ideal_processor_thread_by_number;
    
    // [KeSetIdealProcessorThreadEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x996fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x204680, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x397a28, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x326a44, 0x1fe000 bytes
    //
    _s97(sdk::unknown_ptr) set_ideal_processor_thread_ex;
    
    // [KeSetImportanceDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12fa2c, 0x32828 bytes
    // ntoskrnl.exe .text:0x37d6a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x384e40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37ea20, 0x1fe000 bytes
    //
    _s98(sdk::function<void(struct nt::kdpc_t*, enum nt::kdpc_importance_t)>*) set_importance_dpc;
    
    // [KeSetIntervalProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51b280, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7181a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x969098, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71fc04, 0x1fe000 bytes
    //
    _s99(sdk::unknown_ptr) set_interval_profile;
    
    // [KeSetKernelStackSwapEnable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x102ed8, 0x32828 bytes
    // ntoskrnl.exe .text:0x24e640, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d4f80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fbf10, 0x1fe000 bytes
    //
    _t00(sdk::function<uint8_t(uint8_t)>*) set_kernel_stack_swap_enable;
    
    // [KeSetMaxDynamicTickDuration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d5470, 0x32828 bytes
    // ntoskrnl.exe .text:0x50eb98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5589b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50e9a8, 0x1fe000 bytes
    //
    _t01(sdk::unknown_ptr) set_max_dynamic_tick_duration;
    
    // [KeSetMaximumCountPriQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dc3f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x51e73c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56aa80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51e54c, 0x1fe000 bytes
    //
    _t02(sdk::unknown_ptr) set_maximum_count_pri_queue;
    
    // [KeSetPagePrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x144d68, 0x32828 bytes
    // ntoskrnl.exe .text:0x50d0e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39ac70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50ced8, 0x1fe000 bytes
    //
    _t03(sdk::unknown_ptr) set_page_privilege;
    
    // [KeSetPriorityAndQuantumProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x78204, 0x32828 bytes
    // ntoskrnl.exe .text:0x28f70c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x332438, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33557c, 0x1fe000 bytes
    //
    _t04(sdk::unknown_ptr) set_priority_and_quantum_process;
    
    // [KeSetPriorityBoost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3ff0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c4730, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x217d04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x245760, 0x1fe000 bytes
    //
    _t05(sdk::unknown_ptr) set_priority_boost;
    
    // [KeSetPriorityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5da80, 0x32828 bytes
    // ntoskrnl.exe .text:0x28b8f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x299720, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x331070, 0x1fe000 bytes
    //
    _t06(sdk::function<int32_t(struct nt::kthread_t*, int32_t)>*) set_priority_thread;
    
    // [KeSetProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7710, 0x32828 bytes
    // ntoskrnl.exe .text:0x27cbc4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x300e34, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d4298, 0x1fe000 bytes
    //
    _t07(sdk::unknown_ptr) set_process;
    
    // [KeSetProcessSchedulingGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8a8f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x20bc3c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3071c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x358cd8, 0x1fe000 bytes
    //
    _t08(sdk::unknown_ptr) set_process_scheduling_group;
    
    // [KeSetProfileIrql]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a9c3c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa3d5f0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb81630, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa36560, 0x1fe000 bytes
    //
    _t09(sdk::unknown_ptr) set_profile_irql;
    
    // [KeSetQuantumProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x78860, 0x32828 bytes
    // ntoskrnl.exe .text:0x29198c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x333254, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x336c74, 0x1fe000 bytes
    //
    _t10(sdk::unknown_ptr) set_quantum_process;
    
    // [KeSetSchedulingGroupCpuRates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbca48, 0x32828 bytes
    // ntoskrnl.exe .text:0x3579a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32aa60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dbdb4, 0x1fe000 bytes
    //
    _t11(sdk::unknown_ptr) set_scheduling_group_cpu_rates;
    
    // [KeSetSchedulingGroupCycleNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dc090, 0x32828 bytes
    // ntoskrnl.exe .text:0x261388, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x568da0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x311784, 0x1fe000 bytes
    //
    _t12(sdk::unknown_ptr) set_scheduling_group_cycle_notification;
    
    // [KeSetSchedulingGroupRankBias]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbcce0, 0x32828 bytes
    // ntoskrnl.exe .text:0x358000, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32b114, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dc40c, 0x1fe000 bytes
    //
    _t13(sdk::unknown_ptr) set_scheduling_group_rank_bias;
    
    // [KeSetSchedulingGroupWeights]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbc93c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3578b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x203cec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dbcc4, 0x1fe000 bytes
    //
    _t14(sdk::unknown_ptr) set_scheduling_group_weights;
    
    // [KeSetSelectedCpuSetsThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d9fb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x516df0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x561620, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x516c00, 0x1fe000 bytes
    //
    _t15(sdk::unknown_ptr) set_selected_cpu_sets_thread;
    
    // [KeSetSystemAffinityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d581c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ca0f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55a8b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb1f0, 0x1fe000 bytes
    //
    _t16(sdk::function<void(uint64_t)>*) set_system_affinity_thread;
    
    // [KeSetSystemAffinityThreadEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d5824, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ca110, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55a8d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb210, 0x1fe000 bytes
    //
    _t17(sdk::function<uint64_t(uint64_t)>*) set_system_affinity_thread_ex;
    
    // [KeSetSystemGroupAffinityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x984f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x291b50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33c120, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x336d20, 0x1fe000 bytes
    //
    _t18(sdk::function<void(struct nt::group_affinity_t*, struct nt::group_affinity_t*)>*) set_system_group_affinity_thread;
    
    // [KeSetSystemTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x124404, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a2fb8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e972c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a44e8, 0x1fe000 bytes
    //
    _t19(sdk::unknown_ptr) set_system_time;
    
    // [KeSetTagCpuSets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1da0b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5171bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x561efc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x516fcc, 0x1fe000 bytes
    //
    _t20(sdk::unknown_ptr) set_tag_cpu_sets;
    
    // [KeSetTargetProcessorDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d8bfc, 0x32828 bytes
    // ntoskrnl.exe .text:0x513fc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55dd90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x513dd0, 0x1fe000 bytes
    //
    _t21(sdk::function<void(struct nt::kdpc_t*, char)>*) set_target_processor_dpc;
    
    // [KeSetTargetProcessorDpcEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd28b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x26f700, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x382a20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x320e80, 0x1fe000 bytes
    //
    _t22(sdk::function<int32_t(struct nt::kdpc_t*, struct nt::processor_number_t*)>*) set_target_processor_dpc_ex;
    
    // [KeSetThreadChargeOnlySchedulingGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5d5c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x28d070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35dafc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x332960, 0x1fe000 bytes
    //
    _t23(sdk::unknown_ptr) set_thread_charge_only_scheduling_group;
    
    // [KeSetTimeAdjustment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13248c, 0x32828 bytes
    // ntoskrnl.exe .text:0x38e144, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x399c14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38f194, 0x1fe000 bytes
    //
    _t24(sdk::unknown_ptr) set_time_adjustment;
    
    // [KeSetTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x72d98, 0x32828 bytes
    // ntoskrnl.exe .text:0x290430, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b6560, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x236250, 0x1fe000 bytes
    //
    _t25(sdk::function<uint8_t(struct nt::ktimer_t*, int64_t, struct nt::kdpc_t*)>*) set_timer;
    
    // [KeSetTimer2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfb570, 0x32828 bytes
    // ntoskrnl.exe .text:0x30e660, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b15b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2426c0, 0x1fe000 bytes
    //
    _t26(sdk::unknown_ptr) set_timer2;
    
    // [KeSetTimerEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ac30, 0x32828 bytes
    // ntoskrnl.exe .text:0x290610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b6e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x269fa0, 0x1fe000 bytes
    //
    _t27(sdk::function<uint8_t(struct nt::ktimer_t*, int64_t, int32_t, struct nt::kdpc_t*)>*) set_timer_ex;
    
    // [KeSetUserHeteroCpuPolicyThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d5864, 0x32828 bytes
    // ntoskrnl.exe .text:0x50d5ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55a924, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50d39c, 0x1fe000 bytes
    //
    _t28(sdk::unknown_ptr) set_user_hetero_cpu_policy_thread;
    
    // [KeShouldYieldProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb7bc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x240a20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34b020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ee280, 0x1fe000 bytes
    //
    _t29(sdk::function<uint32_t()>*) should_yield_processor;
    
    // [KeSignalCallDpcDone]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd3470, 0x32828 bytes
    // ntoskrnl.exe .text:0x26f5a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3837e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x320d20, 0x1fe000 bytes
    //
    _t30(sdk::function<void(void*)>*) signal_call_dpc_done;
    
    // [KeSignalCallDpcSynchronize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d8c64, 0x32828 bytes
    // ntoskrnl.exe .text:0x514030, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55de00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x513e40, 0x1fe000 bytes
    //
    _t31(sdk::function<uint32_t(void*)>*) signal_call_dpc_synchronize;
    
    // [KeSignalGate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc7b10, 0x32828 bytes
    // ntoskrnl.exe .text:0x204320, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3738e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x324750, 0x1fe000 bytes
    //
    _t32(sdk::unknown_ptr) signal_gate;
    
    // [KeSleepingProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308ae0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b2a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41500, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b200, 0x1fe000 bytes
    //
    _t33(sdk::unknown_ptr) sleeping_processors;
    
    // [KeStackAttachProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9eac0, 0x32828 bytes
    // ntoskrnl.exe .text:0x341650, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x367880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a51a0, 0x1fe000 bytes
    //
    _t34(sdk::function<void(struct nt::kprocess_t*, struct nt::kapc_state_t*)>*) stack_attach_process;
    
    // [KeStallExecutionProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1bb0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x30ccf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21ebd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x278400, 0x1fe000 bytes
    //
    _t35(sdk::function<void(uint32_t)>*) stall_execution_processor;
    
    // [KeStallWhileFrozen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb37d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x517cf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5625f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x517b00, 0x1fe000 bytes
    //
    _t36(sdk::unknown_ptr) stall_while_frozen;
    
    // [KeStartAllProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x791ed8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa46044, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3d8d4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4042c, 0x1fe000 bytes
    //
    _t37(sdk::unknown_ptr) start_all_processors;
    
    // [KeStartDynamicProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x654a3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b8c00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x968970, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b73b0, 0x1fe000 bytes
    //
    _t38(sdk::function<int32_t(uint32_t, uint32_t, uint16_t, uint32_t*)>*) start_dynamic_processor;
    
    // [KeStartProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d9558, 0x32828 bytes
    // ntoskrnl.exe .text:0x515ddc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55f97c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x515bec, 0x1fe000 bytes
    //
    _t39(sdk::unknown_ptr) start_profile;
    
    // [KeStartThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa196c, 0x32828 bytes
    // ntoskrnl.exe .text:0x288ec8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x211d68, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32fe38, 0x1fe000 bytes
    //
    _t40(sdk::unknown_ptr) start_thread;
    
    // [KeStopProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d9668, 0x32828 bytes
    // ntoskrnl.exe .text:0x515ef0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55fabc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x515d00, 0x1fe000 bytes
    //
    _t41(sdk::unknown_ptr) stop_profile;
    
    // [KeSubtractAffinityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1410a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x30dae0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45e410, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2791f0, 0x1fe000 bytes
    //
    _t42(sdk::unknown_ptr) subtract_affinity_ex;
    
    // [KeSuspendClockTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1111cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x380248, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55b43c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x381038, 0x1fe000 bytes
    //
    _t43(sdk::unknown_ptr) suspend_clock_timer;
    
    // [KeSuspendClockTimerSafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d4e04, 0x32828 bytes
    // ntoskrnl.exe .text:0x50e040, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55b4a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50de50, 0x1fe000 bytes
    //
    _t44(sdk::unknown_ptr) suspend_clock_timer_safe;
    
    // [KeSuspendThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8b17c, 0x32828 bytes
    // ntoskrnl.exe .text:0x20ce20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x307cdc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x356c68, 0x1fe000 bytes
    //
    _t45(sdk::unknown_ptr) suspend_thread;
    
    // [KeSwapDirectoryTableBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d4bf0, 0x32828 bytes
    // ntoskrnl.exe .text:0x389364, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x205034, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x389e84, 0x1fe000 bytes
    //
    _t46(sdk::unknown_ptr) swap_directory_table_base;
    
    // [KeSwapProcessOrStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13ab04, 0x32828 bytes
    // ntoskrnl.exe .text:0x3aec20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cb6a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b1ec0, 0x1fe000 bytes
    //
    _t47(sdk::unknown_ptr) swap_process_or_stack;
    
    // [KeSweepLocalCaches]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd56c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x37df30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391650, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37f2b0, 0x1fe000 bytes
    //
    _t48(sdk::unknown_ptr) sweep_local_caches;
    
    // [KeSwitchFrozenProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1da3c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x517d10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x562610, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x517b20, 0x1fe000 bytes
    //
    _t49(sdk::unknown_ptr) switch_frozen_processor;
    
    // [KeSynchronizeAddressPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d4c40, 0x32828 bytes
    // ntoskrnl.exe .text:0x35abcc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x376ba8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c13bc, 0x1fe000 bytes
    //
    _t50(sdk::unknown_ptr) synchronize_address_policy;
    
    // [KeSynchronizeExecution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15c710, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f50c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x429460, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f69a0, 0x1fe000 bytes
    //
    _t51(sdk::function<uint8_t(struct nt::kinterrupt_t*, sdk::function<uint8_t(void*)>*, void*)>*) synchronize_execution;
    
    // [KeSynchronizeTimeToQpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1247e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x382360, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x556f10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x383120, 0x1fe000 bytes
    //
    _t52(sdk::unknown_ptr) synchronize_time_to_qpc;
    
    // [KeSynchronizeWithDynamicProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x485960, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x661fb4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76b70c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d5bc8, 0x1fe000 bytes
    //
    _t53(sdk::unknown_ptr) synchronize_with_dynamic_processors;
    
    // [KeSystemFullyCacheCoherent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d8ab4, 0x32828 bytes
    // ntoskrnl.exe .text:0x513db0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55db80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x513bc0, 0x1fe000 bytes
    //
    _t54(sdk::unknown_ptr) system_fully_cache_coherent;
    
    // [KeTerminateThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa1348, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b757c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2142c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x355988, 0x1fe000 bytes
    //
    _t55(sdk::unknown_ptr) terminate_thread;
    
    // [KeTestAlertThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9ea4c, 0x32828 bytes
    // ntoskrnl.exe .text:0x288cc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x210ee0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32fc30, 0x1fe000 bytes
    //
    _t56(sdk::function<uint8_t(char)>*) test_alert_thread;
    
    // [KeTestDisableXSave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342678, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4c30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1768d, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4c38, 0x1fe000 bytes
    //
    _t57(sdk::unknown_ptr) test_disable_x_save;
    
    // [KeTestRemovedFeatureMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342670, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4c38, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17690, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4c30, 0x1fe000 bytes
    //
    _t58(sdk::unknown_ptr) test_removed_feature_mask;
    
    // [KeTestSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb4840, 0x32828 bytes
    // ntoskrnl.exe .text:0x27f4e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f2720, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f1690, 0x1fe000 bytes
    //
    _t59(sdk::function<uint8_t(uint64_t*)>*) test_spin_lock;
    
    // [KeThawExecution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7a134, 0x32828 bytes
    // ntoskrnl.exe .text:0x517df0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x208260, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x517c00, 0x1fe000 bytes
    //
    _t60(sdk::unknown_ptr) thaw_execution;
    
    // [KeThreadDpcEnable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa174, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa154, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c174, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa154, 0x1fe000 bytes
    //
    _t61(sdk::unknown_ptr) thread_dpc_enable;
    
    // [KeThreadSwitchCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f1a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc31b00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41dc0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc31a60, 0x1fe000 bytes
    //
    _t62(sdk::unknown_ptr) thread_switch_counters;
    
    // [KeTimeIncrement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab250, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb468, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1daa0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb468, 0x1fe000 bytes
    //
    _t63(sdk::unknown_ptr) time_increment;
    
    // [KeTimeOutQueueWaiters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc71d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x256420, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3610b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x305960, 0x1fe000 bytes
    //
    _t64(sdk::unknown_ptr) time_out_queue_waiters;
    
    // [KeTimeSynchronization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa02f, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa01b, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c022, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa01b, 0x1fe000 bytes
    //
    _t65(sdk::unknown_ptr) time_synchronization;
    
    // [KeTimerCheckFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9bc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11f40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cb70, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11fa0, 0x1fe000 bytes
    //
    _t66(sdk::unknown_ptr) timer_check_flags;
    
    // [KeTransitionProcessorParkState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1dd0b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x51f6bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56934c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x51f4cc, 0x1fe000 bytes
    //
    _t67(sdk::unknown_ptr) transition_processor_park_state;
    
    // [KeTryToAcquireGuardedMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbd728, 0x32828 bytes
    // ntoskrnl.exe .text:0x227ed0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fdde0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x340c80, 0x1fe000 bytes
    //
    _t68(sdk::function<uint8_t(struct nt::fast_mutex_t*)>*) try_to_acquire_guarded_mutex;
    
    // [KeTryToAcquireQueuedSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d6050, 0x32828 bytes
    // ntoskrnl.exe .text:0x510410, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55cd00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x510220, 0x1fe000 bytes
    //
    _t69(sdk::function<uint32_t(uint64_t, uint8_t*)>*) try_to_acquire_queued_spin_lock;
    
    // [KeTryToAcquireQueuedSpinLockRaiseToSynch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d60a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x510520, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55ce10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x510330, 0x1fe000 bytes
    //
    _t70(sdk::unknown_ptr) try_to_acquire_queued_spin_lock_raise_to_synch;
    
    // [KeTryToAcquireSpinLockAtDpcLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7a10c, 0x32828 bytes
    // ntoskrnl.exe .text:0x26ec50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x396da0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x320400, 0x1fe000 bytes
    //
    _t71(sdk::function<uint8_t(uint64_t*)>*) try_to_acquire_spin_lock_at_dpc_level;
    
    // [KeTryToFreezeThreadStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d58ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x50d5f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55a968, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50d3e8, 0x1fe000 bytes
    //
    _t72(sdk::unknown_ptr) try_to_freeze_thread_stack;
    
    // [KeTryToInsertQueueApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d8fa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x514a60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55eb80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x514870, 0x1fe000 bytes
    //
    _t73(sdk::function<uint8_t(struct nt::kapc_t*, void*, void*)>*) try_to_insert_queue_apc;
    
    // [KeUnmaskInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12317c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3882a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e406c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x388b54, 0x1fe000 bytes
    //
    _t74(sdk::unknown_ptr) unmask_interrupt;
    
    // [KeUnsecureProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d4d1c, 0x32828 bytes
    // ntoskrnl.exe .text:0x50dd78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55b0a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50db68, 0x1fe000 bytes
    //
    _t75(sdk::unknown_ptr) unsecure_process;
    
    // [KeUnsecureThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d5964, 0x32828 bytes
    // ntoskrnl.exe .text:0x50d708, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55ab8c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50d4f8, 0x1fe000 bytes
    //
    _t76(sdk::unknown_ptr) unsecure_thread;
    
    // [KeUnstackDetachProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9eb6c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2dd640, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3688b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25e8b0, 0x1fe000 bytes
    //
    _t77(sdk::function<void(struct nt::kapc_state_t*)>*) unstack_detach_process;
    
    // [KeUpdateGroupSchedulingConstants]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1489a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c6e3c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e3a78, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c7d0c, 0x1fe000 bytes
    //
    _t78(sdk::unknown_ptr) update_group_scheduling_constants;
    
    // [KeUpdateThreadTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10c0d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x367e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37b6b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x369200, 0x1fe000 bytes
    //
    _t79(sdk::unknown_ptr) update_thread_tag;
    
    // [KeUpdateTotalCyclesCurrentThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb8788, 0x32828 bytes
    // ntoskrnl.exe .text:0x50d738, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37a9cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50d528, 0x1fe000 bytes
    //
    _t80(sdk::unknown_ptr) update_total_cycles_current_thread;
    
    // [KeUserModeCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4581f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a03f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68b810, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x704e10, 0x1fe000 bytes
    //
    _t81(sdk::function<int32_t(uint32_t, void*, uint32_t, void**, uint32_t*)>*) user_mode_callback;
    
    // [KeValidateBugCheckCallbackRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d75ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x511de8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x555838, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x511bf8, 0x1fe000 bytes
    //
    _t82(sdk::unknown_ptr) validate_bug_check_callback_record;
    
    // [KeVerifierDpcScalingFactor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa070, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa080, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c054, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa080, 0x1fe000 bytes
    //
    _t83(sdk::unknown_ptr) verifier_dpc_scaling_factor;
    
    // [KeVerifyContextRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa1e98, 0x32828 bytes
    // ntoskrnl.exe .text:0x288bb8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20f994, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32fb28, 0x1fe000 bytes
    //
    _t84(sdk::unknown_ptr) verify_context_record;
    
    // [KeVerifyGroupAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x131240, 0x32828 bytes
    // ntoskrnl.exe .text:0x373ae4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3894f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x374e64, 0x1fe000 bytes
    //
    _t85(sdk::unknown_ptr) verify_group_affinity;
    
    // [KeWaitForAlertByThreadId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x61eb8, 0x32828 bytes
    // ntoskrnl.exe .text:0x24ec58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34e5e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fc3e8, 0x1fe000 bytes
    //
    _t86(sdk::unknown_ptr) wait_for_alert_by_thread_id;
    
    // [KeWaitForGate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbb018, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a290c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34df88, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ccfd8, 0x1fe000 bytes
    //
    _t87(sdk::unknown_ptr) wait_for_gate;
    
    // [KeWaitForMultipleObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ec80, 0x32828 bytes
    // ntoskrnl.exe .text:0x27e470, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x302300, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x243aa0, 0x1fe000 bytes
    //
    _t88(sdk::function<int32_t(uint32_t, void**, enum nt::wait_type_t, enum nt::kwait_reason_t, char, uint8_t, int64_t*, struct nt::kwait_block_t*)>*) wait_for_multiple_objects;
    
    // [KeWaitForSingleObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51210, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e30e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ca680, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2643f0, 0x1fe000 bytes
    //
    _t89(sdk::function<int32_t(void*, enum nt::kwait_reason_t, char, uint8_t, int64_t*)>*) wait_for_single_object;
    
    // [KeWakeProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd14b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x513c70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d91a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x513a80, 0x1fe000 bytes
    //
    _t90(sdk::unknown_ptr) wake_processor;
    
    // [KeWakeWaitChain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb268c, 0x32828 bytes
    // ntoskrnl.exe .text:0x259458, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x294d40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x308cec, 0x1fe000 bytes
    //
    _t91(sdk::unknown_ptr) wake_wait_chain;
    
    // [KeWriteProtectPAT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3ddae8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9acf20, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8b8e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9abe90, 0x1fe000 bytes
    //
    _t92(sdk::unknown_ptr) write_protect_pat;
    
    // [KeXSavePolicyId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9bc8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11f48, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cb78, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11fa8, 0x1fe000 bytes
    //
    _t93(sdk::unknown_ptr) x_save_policy_id;
    
    // [KeXStateLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa068, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa064, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c0a8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa064, 0x1fe000 bytes
    //
    _t94(sdk::unknown_ptr) x_state_length;
    
    // [KeYieldProcessorEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38820, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c3520, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x217cc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x244550, 0x1fe000 bytes
    //
    _t95(sdk::function<void(uint32_t*)>*) yield_processor_ex;
    
    // [KeZeroPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15f0d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f7dd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42cae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f96b0, 0x1fe000 bytes
    //
    _t96(sdk::unknown_ptr) zero_pages;
    
    // [KeZeroSinglePage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15f090, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f7d90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42caa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f9670, 0x1fe000 bytes
    //
    _t97(sdk::unknown_ptr) zero_single_page;
};
#include "magic/api.end.hpp"
