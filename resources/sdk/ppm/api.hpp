#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/api.start.hpp"
namespace ppm
{
    // [PpmCheckComputeMultiClassHeteroResponse]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x582e9c, 0x1fd000 bytes
    //
    _m00(sdk::unknown_ptr) check_compute_multi_class_hetero_response;
    
    // [PpmCheckDelayedPeriodicStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3512c0, 0x1fd000 bytes
    //
    _m01(sdk::unknown_ptr) check_delayed_periodic_start;
    
    // [PpmCheckDelayedStartWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc3bb80, 0x1fd000 bytes
    //
    _m02(sdk::unknown_ptr) check_delayed_start_work_item;
    
    // [PpmCheckDelayedStartWorkerQueued]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc3bba0, 0x1fd000 bytes
    //
    _m03(sdk::unknown_ptr) check_delayed_start_worker_queued;
    
    // [PpmCheckExecutionLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc3bbb0, 0x1fd000 bytes
    //
    _m04(sdk::unknown_ptr) check_execution_lock;
    
    // [PpmCheckForceDisarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc3bb10, 0x1fd000 bytes
    //
    _m05(sdk::unknown_ptr) check_force_disarm;
    
    // [PpmCheckIdleExpirationDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x303880, 0x32828 bytes
    //
    _m06(sdk::unknown_ptr) check_idle_expiration_dpc;
    
    // [PpmCheckLastActualExecutionTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc3bba8, 0x1fd000 bytes
    //
    _m07(sdk::unknown_ptr) check_last_actual_execution_time;
    
    // [PpmCheckLastEffectiveExecutionTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc3bc40, 0x1fd000 bytes
    //
    _m08(sdk::unknown_ptr) check_last_effective_execution_time;
    
    // [PpmComputeEnergyData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc3f150, 0x1fd000 bytes
    //
    _m09(sdk::unknown_ptr) compute_energy_data;
    
    // [PpmComputeIdleDurationHint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x139260, 0x32828 bytes
    //
    _m10(sdk::unknown_ptr) compute_idle_duration_hint;
    
    // [PpmEcoQosProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc38f38, 0x1fd000 bytes
    //
    _m11(sdk::unknown_ptr) eco_qos_profile;
    
    // [PPM_ETW_HETERO_PARKING_SELECTION_COUNT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3b6e0, 0x1fd000 bytes
    //
    _m12(sdk::unknown_ptr) etw_hetero_parking_selection_count;
    
    // [PPM_ETW_HGS_HETERO_ACTIVE_WORKLOAD_CLASS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3b9f8, 0x1fd000 bytes
    //
    _m13(sdk::unknown_ptr) etw_hgs_hetero_active_workload_class;
    
    // [PPM_ETW_HGS_HETERO_FAVORED_CORE_ROTATION_CHANGED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3c5f8, 0x1fd000 bytes
    //
    _m14(sdk::unknown_ptr) etw_hgs_hetero_favored_core_rotation_changed;
    
    // [PPM_ETW_HGS_ORDER_VALUE_TABLE_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3c320, 0x1fd000 bytes
    //
    _m15(sdk::unknown_ptr) etw_hgs_order_value_table_rundown;
    
    // [PPM_ETW_HGS_RAW_HARDWARE_TABLE_CHANGED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3d100, 0x1fd000 bytes
    //
    _m16(sdk::unknown_ptr) etw_hgs_raw_hardware_table_changed;
    
    // [PPM_ETW_HGS_RAW_HARDWARE_TABLE_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3bfe8, 0x1fd000 bytes
    //
    _m17(sdk::unknown_ptr) etw_hgs_raw_hardware_table_rundown;
    
    // [PPM_ETW_MULTI_CLASS_HETERO_RESPONSE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3bc60, 0x1fd000 bytes
    //
    _m18(sdk::unknown_ptr) etw_multi_class_hetero_response;
    
    // [PPM_ETW_MULTI_CLASS_HETERO_RESPONSE_UPDATE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3c668, 0x1fd000 bytes
    //
    _m19(sdk::unknown_ptr) etw_multi_class_hetero_response_update;
    
    // [PPM_ETW_MULTI_CORE_HETERO_SET_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3b040, 0x1fd000 bytes
    //
    _m20(sdk::unknown_ptr) etw_multi_core_hetero_set_rundown;
    
    // [PPM_ETW_MULTI_CORE_HETERO_SET_UPDATE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x12438, 0x1fd000 bytes
    //
    _m21(sdk::unknown_ptr) etw_multi_core_hetero_set_update;
    
    // [PPM_ETW_PARKING_COUNT_SELECTION]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3c3e8, 0x1fd000 bytes
    //
    _m22(sdk::unknown_ptr) etw_parking_count_selection;
    
    // [PPM_ETW_PARKING_SELECTION]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .rdata:0x27f0e8, 0x32828 bytes
    //
    _m23(sdk::unknown_ptr) etw_parking_selection;
    
    // [PPM_ETW_PERF_QOS_CLASS_POLICY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x123e8, 0x1fd000 bytes
    //
    _m24(sdk::unknown_ptr) etw_perf_qos_class_policy;
    
    // [PPM_ETW_PERF_QOS_CLASS_POLICY_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3b010, 0x1fd000 bytes
    //
    _m25(sdk::unknown_ptr) etw_perf_qos_class_policy_rundown;
    
    // [PPM_ETW_PROCESSOR_PERF_STATE_CHANGE_INITIATED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .rdata:0x25f150, 0x32828 bytes
    //
    _m26(sdk::unknown_ptr) etw_processor_perf_state_change_initiated;
    
    // [PPM_ETW_SOFT_PARKING_RANK_LIST_CHANGED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x12408, 0x1fd000 bytes
    //
    _m27(sdk::unknown_ptr) etw_soft_parking_rank_list_changed;
    
    // [PpmEventComputeEnergy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x20bc50, 0x32828 bytes
    //
    _m28(sdk::unknown_ptr) event_compute_energy;
    
    // [PpmEventHeteroFavoredCoreRotationChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5853d8, 0x1fd000 bytes
    //
    _m29(sdk::unknown_ptr) event_hetero_favored_core_rotation_change;
    
    // [PpmEventHgsActiveWorkloadClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x585498, 0x1fd000 bytes
    //
    _m30(sdk::unknown_ptr) event_hgs_active_workload_class;
    
    // [PpmEventHgsCoresUnparkedCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4616e4, 0x1fd000 bytes
    //
    _m31(sdk::unknown_ptr) event_hgs_cores_unparked_count;
    
    // [PpmEventHgsHardwareTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5855ec, 0x1fd000 bytes
    //
    _m32(sdk::unknown_ptr) event_hgs_hardware_table;
    
    // [PpmEventHgsNormalizedTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5857e4, 0x1fd000 bytes
    //
    _m33(sdk::unknown_ptr) event_hgs_normalized_table;
    
    // [PpmEventInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004
    // ntoskrnl.exe INIT:0xa70d88, 0x1fe000 bytes
    //
    _m34(sdk::unknown_ptr) event_initialize;
    
    // [PpmEventParkingCountSelection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5861dc, 0x1fd000 bytes
    //
    _m35(sdk::unknown_ptr) event_parking_count_selection;
    
    // [PpmEventPerfState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x12d9bc, 0x32828 bytes
    //
    _m36(sdk::unknown_ptr) event_perf_state;
    
    // [PpmEventQosClassPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x83fd1c, 0x1fd000 bytes
    //
    _m37(sdk::unknown_ptr) event_qos_class_policy;
    
    // [PpmEventSoftParkRankListChanged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3c8fa0, 0x1fd000 bytes
    //
    _m38(sdk::unknown_ptr) event_soft_park_rank_list_changed;
    
    // [PpmEventTraceCoreParkingSelection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x20c950, 0x32828 bytes
    //
    _m39(sdk::unknown_ptr) event_trace_core_parking_selection;
    
    // [PpmEventTraceDeliveredPerfChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x21d9fc, 0x1fd000 bytes
    //
    _m40(sdk::unknown_ptr) event_trace_delivered_perf_change;
    
    // [PpmEventTraceHeteroSets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x8405a0, 0x1fd000 bytes
    //
    _m41(sdk::unknown_ptr) event_trace_hetero_sets;
    
    // [PpmEventTraceMultiClassHeteroResponse]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x586e84, 0x1fd000 bytes
    //
    _m42(sdk::unknown_ptr) event_trace_multi_class_hetero_response;
    
    // [PpmEventTraceMultiClassHeteroResponseUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x58707c, 0x1fd000 bytes
    //
    _m43(sdk::unknown_ptr) event_trace_multi_class_hetero_response_update;
    
    // [PpmEventTraceRecordedUtility]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x21ea60, 0x1fd000 bytes
    //
    _m44(sdk::unknown_ptr) event_trace_recorded_utility;
    
    // [PpmFrequencyOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc3e5f4, 0x1fd000 bytes
    //
    _m45(sdk::unknown_ptr) frequency_override;
    
    // [PpmGetHeterogeneousClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xed2e8, 0x32828 bytes
    //
    _m46(sdk::unknown_ptr) get_heterogeneous_class;
    
    // [PpmHeteroCapabilitySimulation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1e0d8, 0x1fd000 bytes
    //
    _m47(sdk::unknown_ptr) hetero_capability_simulation;
    
    // [PpmHeteroComputeCoreParkingUtilities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x583214, 0x1fd000 bytes
    //
    _m48(sdk::unknown_ptr) hetero_compute_core_parking_utilities;
    
    // [PpmHeteroComputeMultiClassUnparkCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5833dc, 0x1fd000 bytes
    //
    _m49(sdk::unknown_ptr) hetero_compute_multi_class_unpark_count;
    
    // [PpmHeteroComputeRelativePerformance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x841348, 0x1fd000 bytes
    //
    _m50(sdk::unknown_ptr) hetero_compute_relative_performance;
    
    // [PpmHeteroComputeUnparkCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5836a8, 0x1fd000 bytes
    //
    _m51(sdk::unknown_ptr) hetero_compute_unpark_count;
    
    // [PpmHeteroFavoredCoreRotationTimeoutMs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1c248, 0x1fd000 bytes
    //
    _m52(sdk::unknown_ptr) hetero_favored_core_rotation_timeout_ms;
    
    // [PpmHeteroGetHgsPlusParkingEnablementStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3c93a4, 0x1fd000 bytes
    //
    _m53(sdk::unknown_ptr) hetero_get_hgs_plus_parking_enablement_status;
    
    // [PpmHeteroHgsCapabilityBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xd176c0, 0x1fd000 bytes
    //
    _m54(sdk::unknown_ptr) hetero_hgs_capability_bits;
    
    // [PpmHeteroHgsParkingEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1da07, 0x1fd000 bytes
    //
    _m55(sdk::unknown_ptr) hetero_hgs_parking_enabled;
    
    // [PpmHeteroHgsProcessorThreadFeedbackInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x588c3c, 0x1fd000 bytes
    //
    _m56(sdk::unknown_ptr) hetero_hgs_processor_thread_feedback_init;
    
    // [PpmHeteroHgsTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1e1a8, 0x1fd000 bytes
    //
    _m57(sdk::unknown_ptr) hetero_hgs_table_entry;
    
    // [PpmHeteroHgsThreadDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1dcf0, 0x1fd000 bytes
    //
    _m58(sdk::unknown_ptr) hetero_hgs_thread_disabled;
    
    // [PpmHeteroHgsThreadEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1da2e, 0x1fd000 bytes
    //
    _m59(sdk::unknown_ptr) hetero_hgs_thread_enabled;
    
    // [PpmHeteroInitializeFeedbackClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x588cd0, 0x1fd000 bytes
    //
    _m60(sdk::unknown_ptr) hetero_initialize_feedback_class;
    
    // [PpmHeteroIsMultiClassParkingEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3c7ec4, 0x1fd000 bytes
    //
    _m61(sdk::unknown_ptr) hetero_is_multi_class_parking_enabled;
    
    // [PpmHeteroMultiClassParkingEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1dcec, 0x1fd000 bytes
    //
    _m62(sdk::unknown_ptr) hetero_multi_class_parking_enabled;
    
    // [PpmHeteroMultiClassParkingRegValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1c230, 0x1fd000 bytes
    //
    _m63(sdk::unknown_ptr) hetero_multi_class_parking_reg_value;
    
    // [PpmHeteroMultiCoreClassesEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1dc5c, 0x1fd000 bytes
    //
    _m64(sdk::unknown_ptr) hetero_multi_core_classes_enabled;
    
    // [PpmHeteroMultiCoreClassesRegValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1c0dc, 0x1fd000 bytes
    //
    _m65(sdk::unknown_ptr) hetero_multi_core_classes_reg_value;
    
    // [PpmHeteroWorkloadClasses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0ccfc, 0x1fd000 bytes
    //
    _m66(sdk::unknown_ptr) hetero_workload_classes;
    
    // [PpmHvConsiderNative]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x13a544, 0x32828 bytes
    //
    _m67(sdk::unknown_ptr) hv_consider_native;
    
    // [PpmHvGetRuntimesForProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x20d628, 0x32828 bytes
    //
    _m68(sdk::unknown_ptr) hv_get_runtimes_for_processor;
    
    // [PpmIdleAllocateVetoReasons]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x975684, 0x1fd000 bytes
    //
    _m69(sdk::unknown_ptr) idle_allocate_veto_reasons;
    
    // [PpmIdleCheckCoordinatedProcessorDependency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x570398, 0x1fd000 bytes
    //
    _m70(sdk::unknown_ptr) idle_check_coordinated_processor_dependency;
    
    // [PpmIdleCheckIdleDurationExpiration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe ALMOSTRO:0x3aa02e, 0x32828 bytes
    //
    _m71(sdk::unknown_ptr) idle_check_idle_duration_expiration;
    
    // [PpmIdleDefaultTest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x86a0, 0x32828 bytes
    //
    _m72(sdk::unknown_ptr) idle_default_test;
    
    // [PpmIdleDurationExpiration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x2008ec, 0x32828 bytes
    //
    _m73(sdk::unknown_ptr) idle_duration_expiration;
    
    // [PpmIdleEvaluateConstraints]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x139500, 0x32828 bytes
    //
    _m74(sdk::unknown_ptr) idle_evaluate_constraints;
    
    // [PpmIdleGetConcurrencyStats]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7a493c, 0x1fd000 bytes
    //
    _m75(sdk::unknown_ptr) idle_get_concurrency_stats;
    
    // [PpmIdleGetPackageIdleIntervalStats]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7a4840, 0x1fd000 bytes
    //
    _m76(sdk::unknown_ptr) idle_get_package_idle_interval_stats;
    
    // [PpmIdleInstallNewVetoList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x570a90, 0x1fd000 bytes
    //
    _m77(sdk::unknown_ptr) idle_install_new_veto_list;
    
    // [PpmIdleRecheckCoordinatedIdleMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x200b1c, 0x32828 bytes
    //
    _m78(sdk::unknown_ptr) idle_recheck_coordinated_idle_mask;
    
    // [PpmIdleUpdateIdleReevaluationDuration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5710f4, 0x1fd000 bytes
    //
    _m79(sdk::unknown_ptr) idle_update_idle_reevaluation_duration;
    
    // [PpmMaxCoreClasses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc39f78, 0x1fd000 bytes
    //
    _m80(sdk::unknown_ptr) max_core_classes;
    
    // [PpmPackageIdleIntervalLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1cc90, 0x1fd000 bytes
    //
    _m81(sdk::unknown_ptr) package_idle_interval_limits;
    
    // [PpmParkChooseCoresToUnpark]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x20d888, 0x32828 bytes
    //
    _m82(sdk::unknown_ptr) park_choose_cores_to_unpark;
    
    // [PpmParkEvalualteSmtUnparkPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3c9198, 0x1fd000 bytes
    //
    _m83(sdk::unknown_ptr) park_evalualte_smt_unpark_policy;
    
    // [PpmParkFreeParkNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3c7f18, 0x1fd000 bytes
    //
    _m84(sdk::unknown_ptr) park_free_park_nodes;
    
    // [PpmParkNewSoftParkRankList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc38d08, 0x1fd000 bytes
    //
    _m85(sdk::unknown_ptr) park_new_soft_park_rank_list;
    
    // [PpmParkOldSoftParkRankList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc38d20, 0x1fd000 bytes
    //
    _m86(sdk::unknown_ptr) park_old_soft_park_rank_list;
    
    // [PpmParkSmtUnparkingPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc09a04, 0x1fd000 bytes
    //
    _m87(sdk::unknown_ptr) park_smt_unparking_policy;
    
    // [PpmParkSoftParkCurrentRank]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc38d18, 0x1fd000 bytes
    //
    _m88(sdk::unknown_ptr) park_soft_park_current_rank;
    
    // [PpmParkSoftParkRankListChanged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc38d28, 0x1fd000 bytes
    //
    _m89(sdk::unknown_ptr) park_soft_park_rank_list_changed;
    
    // [PpmPerfAlwaysComputeQosEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1de98, 0x1fd000 bytes
    //
    _m90(sdk::unknown_ptr) perf_always_compute_qos_enabled;
    
    // [PpmPerfCalculateMinMaxStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x140fc8, 0x32828 bytes
    //
    _m91(sdk::unknown_ptr) perf_calculate_min_max_states;
    
    // [PpmPerfCheckCountVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0cb10, 0x1fd000 bytes
    //
    _m92(sdk::unknown_ptr) perf_check_count_version;
    
    // [PpmPerfDomainsToUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x2f9690, 0x32828 bytes
    //
    _m93(sdk::unknown_ptr) perf_domains_to_update;
    
    // [PpmPerfGetFrequencyBandStats]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7a4728, 0x1fd000 bytes
    //
    _m94(sdk::unknown_ptr) perf_get_frequency_band_stats;
    
    // [PpmPerfGetVmPerfConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5785f4, 0x1fd000 bytes
    //
    _m95(sdk::unknown_ptr) perf_get_vm_perf_config;
    
    // [PpmPerfGetVmPerfSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5787f4, 0x1fd000 bytes
    //
    _m96(sdk::unknown_ptr) perf_get_vm_perf_support;
    
    // [PpmPerfProcessorsToUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x2f95e0, 0x32828 bytes
    //
    _m97(sdk::unknown_ptr) perf_processors_to_update;
    
    // [PpmPerfQosHysteresis]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1c478, 0x1fd000 bytes
    //
    _m98(sdk::unknown_ptr) perf_qos_hysteresis;
    
    // [PpmPerfQosSupportedAndAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1dbb9, 0x1fd000 bytes
    //
    _m99(sdk::unknown_ptr) perf_qos_supported_and_allowed;
    
    // [PpmPerfQueryPhysicalCoreCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e1cd0, 0x1fd000 bytes
    //
    _n00(sdk::unknown_ptr) perf_query_physical_core_count;
    
    // [PpmPerfQueryPhysicalCoreId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3ea190, 0x1fd000 bytes
    //
    _n01(sdk::unknown_ptr) perf_query_physical_core_id;
    
    // [PpmPerfQueryProcMeasurementValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7ebeb0, 0x1fd000 bytes
    //
    _n02(sdk::unknown_ptr) perf_query_proc_measurement_values;
    
    // [PpmPerfRecordMostActiveWorkloadClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x353748, 0x1fd000 bytes
    //
    _n03(sdk::unknown_ptr) perf_record_most_active_workload_class;
    
    // [PpmPerfSnapProcessorCyclesWorkloadClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x21da90, 0x1fd000 bytes
    //
    _n04(sdk::unknown_ptr) perf_snap_processor_cycles_workload_class;
    
    // [PpmPerfUpdateDomains]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x534b7c, 0x32828 bytes
    //
    _n05(sdk::unknown_ptr) perf_update_domains;
    
    // [PpmPerfUpdateHwDebugData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x21d380, 0x1fd000 bytes
    //
    _n06(sdk::unknown_ptr) perf_update_hw_debug_data;
    
    // [PpmPerfVmPerfSelectionSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1db52, 0x1fd000 bytes
    //
    _n07(sdk::unknown_ptr) perf_vm_perf_selection_supported;
    
    // [PpmQosClassesOrdered]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0cc90, 0x1fd000 bytes
    //
    _n08(sdk::unknown_ptr) qos_classes_ordered;
    
    // [PpmQosClassesOrderedIndexMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x282e8, 0x1fd000 bytes
    //
    _n09(sdk::unknown_ptr) qos_classes_ordered_index_map;
    
    // [PpmQosProfiles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc07350, 0x1fd000 bytes
    //
    _n10(sdk::unknown_ptr) qos_profiles;
    
    // [PpmUpdateArchitecturalEfficiencyClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb57b08, 0x1fd000 bytes
    //
    _n11(sdk::unknown_ptr) update_architectural_efficiency_class;
    
    // [PpmUtilityQosProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc38f50, 0x1fd000 bytes
    //
    _n12(sdk::unknown_ptr) utility_qos_profile;
    
    // [PpmWmiInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004
    // ntoskrnl.exe INIT:0xa70afc, 0x1fe000 bytes
    //
    _n13(sdk::unknown_ptr) wmi_init;
    
    // [PpmCheckResumeStatisticsCollection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3895a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38a0c0, 0x1fe000 bytes
    //
    _n14(sdk::unknown_ptr) check_resume_statistics_collection;
    
    // [PpmExitCoordinatedIdle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x228120, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x271df0, 0x1fe000 bytes
    //
    _n15(sdk::unknown_ptr) exit_coordinated_idle;
    
    // [PpmHeteroDetectFavoredCores]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe PAGE:0x55e924, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8412ec, 0x1fd000 bytes
    //
    _n16(sdk::unknown_ptr) hetero_detect_favored_cores;
    
    // [PpmHeteroHgsDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfba18, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfba10, 0x1fe000 bytes
    //
    _n17(sdk::unknown_ptr) hetero_hgs_disabled;
    
    // [PpmHeteroUtilityToNormalizedUtility]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57260c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5723fc, 0x1fe000 bytes
    //
    _n18(sdk::unknown_ptr) hetero_utility_to_normalized_utility;
    
    // [PpmParkSnapNodeStatistics]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x30d488, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x278b98, 0x1fe000 bytes
    //
    _n19(sdk::unknown_ptr) park_snap_node_statistics;
    
    // [PpmBackgroundProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1ed50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38f48, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1ed80, 0x1fe000 bytes
    //
    _n20(sdk::unknown_ptr) background_profile;
    
    // [PpmCachedSystemAllowedCpuSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1e760, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38780, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e780, 0x1fe000 bytes
    //
    _n21(sdk::unknown_ptr) cached_system_allowed_cpu_set;
    
    // [PpmCachedSystemAllowedCpuSetVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1e808, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38888, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e828, 0x1fe000 bytes
    //
    _n22(sdk::unknown_ptr) cached_system_allowed_cpu_set_version;
    
    // [PpmCheckContinueExecution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x30dd50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28eee0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x279460, 0x1fe000 bytes
    //
    _n23(sdk::unknown_ptr) check_continue_execution;
    
    // [PpmCheckDeadlineBoostActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc20f70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3bc28, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc20fa0, 0x1fe000 bytes
    //
    _n24(sdk::unknown_ptr) check_deadline_boost_active;
    
    // [PpmCheckInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11
    // ntoskrnl.exe INIT:0x7a8410, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6ff3c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5f970, 0x1fd000 bytes
    //
    _n25(sdk::unknown_ptr) check_init;
    
    // [PpmCheckLastExecutionTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3038e8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc20f80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc20fb0, 0x1fe000 bytes
    //
    _n26(sdk::unknown_ptr) check_last_execution_time;
    
    // [PpmCheckPausePpmEngineForSx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x389630, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5817cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38a150, 0x1fe000 bytes
    //
    _n27(sdk::unknown_ptr) check_pause_ppm_engine_for_sx;
    
    // [PpmCheckProcessorInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c9720, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ace00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ca610, 0x1fe000 bytes
    //
    _n28(sdk::unknown_ptr) check_processor_init;
    
    // [PpmCheckResetProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3be364, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c9610, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bf0a4, 0x1fe000 bytes
    //
    _n29(sdk::unknown_ptr) check_reset_processors;
    
    // [PpmCheckResumePpmEngineFromSx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3895d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x581810, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38a0f8, 0x1fe000 bytes
    //
    _n30(sdk::unknown_ptr) check_resume_ppm_engine_from_sx;
    
    // [PpmCheckSnapAllDeliveredPerformance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x304660, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21f570, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26eae0, 0x1fe000 bytes
    //
    _n31(sdk::unknown_ptr) check_snap_all_delivered_performance;
    
    // [PpmCheckUpdateDeliveredPerformanceIfTracingEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x37a320, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3df5d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37b6a0, 0x1fe000 bytes
    //
    _n32(sdk::unknown_ptr) check_update_delivered_performance_if_tracing_enabled;
    
    // [PpmConvertTimeFrom]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c4074, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dd428, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c4de4, 0x1fe000 bytes
    //
    _n33(sdk::unknown_ptr) convert_time_from;
    
    // [PpmDisableHighPerfRequestDeferredExpiration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5711b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x581c20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x570fa8, 0x1fe000 bytes
    //
    _n34(sdk::unknown_ptr) disable_high_perf_request_deferred_expiration;
    
    // [PpmEntryLevelPerfProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1ed58, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38f30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1ed70, 0x1fe000 bytes
    //
    _n35(sdk::unknown_ptr) entry_level_perf_profile;
    
    // [PPM_ETW_AUTONOMOUS_MODE_CHANGE_HV]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2d868, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b840, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2dba8, 0x1fe000 bytes
    //
    _n36(sdk::unknown_ptr) etw_autonomous_mode_change_hv;
    
    // [PPM_ETW_BIOS_CAP_CHANGE_HV]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xd148, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3da78, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc8d8, 0x1fe000 bytes
    //
    _n37(sdk::unknown_ptr) etw_bios_cap_change_hv;
    
    // [PPM_ETW_CURRENT_PERF_RUNDOWN_HV]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2dc40, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3bc98, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2df80, 0x1fe000 bytes
    //
    _n38(sdk::unknown_ptr) etw_current_perf_rundown_hv;
    
    // [PPM_ETW_DELIVERED_PERF_CHANGE_HV]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xfd20, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xefd8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xf838, 0x1fe000 bytes
    //
    _n39(sdk::unknown_ptr) etw_delivered_perf_change_hv;
    
    // [PPM_ETW_EXPECTED_UTILITY_HV]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xd400, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x124c0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xcb70, 0x1fe000 bytes
    //
    _n40(sdk::unknown_ptr) etw_expected_utility_hv;
    
    // [PPM_ETW_HGS_UPDATE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2e588, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c7f0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e8c8, 0x1fe000 bytes
    //
    _n41(sdk::unknown_ptr) etw_hgs_update;
    
    // [PPM_ETW_HIDDEN_PROCESSOR_BIOS_CAP_CHANGE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2ea08, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3ccb0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ed48, 0x1fe000 bytes
    //
    _n42(sdk::unknown_ptr) etw_hidden_processor_bios_cap_change;
    
    // [PPM_ETW_HIDDEN_PROCESSOR_CURRENT_PERF_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2ebb8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3ced0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2eef8, 0x1fe000 bytes
    //
    _n43(sdk::unknown_ptr) etw_hidden_processor_current_perf_rundown;
    
    // [PPM_ETW_HIDDEN_PROCESSOR_THERMAL_CAP_CHANGE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2e960, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3cbf0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2eca0, 0x1fe000 bytes
    //
    _n44(sdk::unknown_ptr) etw_hidden_processor_thermal_cap_change;
    
    // [PPM_ETW_PARK_NODE_CLASS_STATS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2e1d8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c340, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e518, 0x1fe000 bytes
    //
    _n45(sdk::unknown_ptr) etw_park_node_class_stats;
    
    // [PPM_ETW_PARK_NODE_PARK_HINT_CHANGE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2e5c8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c830, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e908, 0x1fe000 bytes
    //
    _n46(sdk::unknown_ptr) etw_park_node_park_hint_change;
    
    // [PPM_ETW_PERF_DOMAIN_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2e328, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c510, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e668, 0x1fe000 bytes
    //
    _n47(sdk::unknown_ptr) etw_perf_domain_rundown;
    
    // [PPM_ETW_PERF_SELECT_PROCESSOR_STATE_HV]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xfd60, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xefa8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xf898, 0x1fe000 bytes
    //
    _n48(sdk::unknown_ptr) etw_perf_select_processor_state_hv;
    
    // [PPM_ETW_PROCESSOR_PERF_STATE_CHANGE_HV]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xd3e0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x124a0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xcb50, 0x1fe000 bytes
    //
    _n49(sdk::unknown_ptr) etw_processor_perf_state_change_hv;
    
    // [PPM_ETW_QOS_SUPPORT_CHANGED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xd5f8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x123f8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xcd40, 0x1fe000 bytes
    //
    _n50(sdk::unknown_ptr) etw_qos_support_changed;
    
    // [PPM_ETW_QOS_SUPPORT_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2d510, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b020, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d830, 0x1fe000 bytes
    //
    _n51(sdk::unknown_ptr) etw_qos_support_rundown;
    
    // [PPM_ETW_RECORDED_UTILITY_HV]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xfd80, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x14918, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xf8b8, 0x1fe000 bytes
    //
    _n52(sdk::unknown_ptr) etw_recorded_utility_hv;
    
    // [PPM_ETW_SOFT_PARK_STATE_CHANGE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2eab8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3cd80, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2edf8, 0x1fe000 bytes
    //
    _n53(sdk::unknown_ptr) etw_soft_park_state_change;
    
    // [PPM_ETW_SOFT_PARKING_SELECTION]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2ef78, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d418, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f2b8, 0x1fe000 bytes
    //
    _n54(sdk::unknown_ptr) etw_soft_parking_selection;
    
    // [PPM_ETW_THERMAL_CAP_CHANGE_HV]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2da00, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b9d8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2dd40, 0x1fe000 bytes
    //
    _n55(sdk::unknown_ptr) etw_thermal_cap_change_hv;
    
    // [PpmEventCoreParkingSoftParkedStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5735f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58502c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5733e8, 0x1fe000 bytes
    //
    _n56(sdk::unknown_ptr) event_core_parking_soft_parked_state_change;
    
    // [PpmEventCoreParkingStateChangeEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57380c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x585240, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5735fc, 0x1fe000 bytes
    //
    _n57(sdk::unknown_ptr) event_core_parking_state_change_ex;
    
    // [PpmEventGetEventDescriptorAndProcessorId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x39494c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21d9b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3959ac, 0x1fe000 bytes
    //
    _n58(sdk::unknown_ptr) event_get_event_descriptor_and_processor_id;
    
    // [PpmEventHiddenProcessorBiosCapChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5739a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5859a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x573794, 0x1fe000 bytes
    //
    _n59(sdk::unknown_ptr) event_hidden_processor_bios_cap_change;
    
    // [PpmEventHiddenProcessorPerformance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8efd58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x98c368, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ee448, 0x1fe000 bytes
    //
    _n60(sdk::unknown_ptr) event_hidden_processor_performance;
    
    // [PpmEventHiddenProcessorThermalCapChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x573aac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x585ab0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57389c, 0x1fe000 bytes
    //
    _n61(sdk::unknown_ptr) event_hidden_processor_thermal_cap_change;
    
    // [PpmEventLegacyProcessorPerfStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3949b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cec80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x395a14, 0x1fe000 bytes
    //
    _n62(sdk::unknown_ptr) event_legacy_processor_perf_state_change;
    
    // [PpmEventParkNodeClassRecordedStats]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x573ecc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x585eb8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x573cbc, 0x1fe000 bytes
    //
    _n63(sdk::unknown_ptr) event_park_node_class_recorded_stats;
    
    // [PpmEventParkNodeParkHintChanged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x573fe8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x585ff8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x573dd8, 0x1fe000 bytes
    //
    _n64(sdk::unknown_ptr) event_park_node_park_hint_changed;
    
    // [PpmEventQosSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x76ec40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x840150, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7766b0, 0x1fe000 bytes
    //
    _n65(sdk::unknown_ptr) event_qos_support;
    
    // [PpmEventTraceProcessorPerformanceDomainRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8f0d08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x98d37c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ef3f8, 0x1fe000 bytes
    //
    _n66(sdk::unknown_ptr) event_trace_processor_performance_domain_rundown;
    
    // [PpmEventTraceProcessorPerformanceRundownHv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8f0f84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x98d618, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ef674, 0x1fe000 bytes
    //
    _n67(sdk::unknown_ptr) event_trace_processor_performance_rundown_hv;
    
    // [PpmEventTraceSoftCoreParkingSelection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x575240, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x461854, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x575030, 0x1fe000 bytes
    //
    _n68(sdk::unknown_ptr) event_trace_soft_core_parking_selection;
    
    // [PpmEventVpQosChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x575438, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x587738, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x575228, 0x1fe000 bytes
    //
    _n69(sdk::unknown_ptr) event_vp_qos_change;
    
    // [PpmGetPerfPolicyClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x249e7c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21d978, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f47ec, 0x1fe000 bytes
    //
    _n70(sdk::unknown_ptr) get_perf_policy_class;
    
    // [PpmHeteroCapability]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb598, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db40, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb598, 0x1fe000 bytes
    //
    _n71(sdk::unknown_ptr) hetero_capability;
    
    // [PpmHeteroCapabilityTest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb7d8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e198, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb7d8, 0x1fe000 bytes
    //
    _n72(sdk::unknown_ptr) hetero_capability_test;
    
    // [PpmHeteroComputeBias]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8ee6b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x988144, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ecda8, 0x1fe000 bytes
    //
    _n73(sdk::unknown_ptr) hetero_compute_bias;
    
    // [PpmHeteroDesiredPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa228, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c25c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa1f4, 0x1fe000 bytes
    //
    _n74(sdk::unknown_ptr) hetero_desired_policy;
    
    // [PpmHeteroDetectHgsCores]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3be438, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c96e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bf178, 0x1fe000 bytes
    //
    _n75(sdk::unknown_ptr) hetero_detect_hgs_cores;
    
    // [PpmHeteroDispatchHgsInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x571cd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x588b90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x571ac0, 0x1fe000 bytes
    //
    _n76(sdk::unknown_ptr) hetero_dispatch_hgs_interrupt;
    
    // [PpmHeteroGetHgsEnablementStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x361bd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391780, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362ff0, 0x1fe000 bytes
    //
    _n77(sdk::unknown_ptr) hetero_get_hgs_enablement_status;
    
    // [PpmHeteroHgsBackupInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c8774, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e00c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c9644, 0x1fe000 bytes
    //
    _n78(sdk::unknown_ptr) hetero_hgs_backup_init;
    
    // [PpmHeteroHgsBackupProcessorInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x571d60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x588c20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x571b50, 0x1fe000 bytes
    //
    _n79(sdk::unknown_ptr) hetero_hgs_backup_processor_init;
    
    // [PpmHeteroHgsEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb455, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da4e, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb455, 0x1fe000 bytes
    //
    _n80(sdk::unknown_ptr) hetero_hgs_enabled;
    
    // [PpmHeteroHgsHeteroCoreTypes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb5a9, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dbb8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5a8, 0x1fe000 bytes
    //
    _n81(sdk::unknown_ptr) hetero_hgs_hetero_core_types;
    
    // [PpmHeteroHgsInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb760, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e408, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb760, 0x1fe000 bytes
    //
    _n82(sdk::unknown_ptr) hetero_hgs_interface;
    
    // [PpmHeteroHgsPopulated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb5a8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db57, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5a9, 0x1fe000 bytes
    //
    _n83(sdk::unknown_ptr) hetero_hgs_populated;
    
    // [PpmHeteroHgsProcessorInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c974c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ace30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ca63c, 0x1fe000 bytes
    //
    _n84(sdk::unknown_ptr) hetero_hgs_processor_init;
    
    // [PpmHeteroHgsTableMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfba80, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e1a0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfba38, 0x1fe000 bytes
    //
    _n85(sdk::unknown_ptr) hetero_hgs_table_mdl;
    
    // [PpmHeteroHgsUpdateDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfbda0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e640, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbda0, 0x1fe000 bytes
    //
    _n86(sdk::unknown_ptr) hetero_hgs_update_dpc;
    
    // [PpmHeteroHgsUpdateDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x571d80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x588c70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x571b70, 0x1fe000 bytes
    //
    _n87(sdk::unknown_ptr) hetero_hgs_update_dpc_routine;
    
    // [PpmHeteroHgsUpdateQueued]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb8ec, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1de84, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb828, 0x1fe000 bytes
    //
    _n88(sdk::unknown_ptr) hetero_hgs_update_queued;
    
    // [PpmHeteroHgsUpdateWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfbcc0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e448, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbcc0, 0x1fe000 bytes
    //
    _n89(sdk::unknown_ptr) hetero_hgs_update_work_item;
    
    // [PpmHeteroHgsUpdateWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x571da0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x588ca0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x571b90, 0x1fe000 bytes
    //
    _n90(sdk::unknown_ptr) hetero_hgs_update_worker;
    
    // [PpmHeteroHighestPerformanceClasses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb537, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db56, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb537, 0x1fe000 bytes
    //
    _n91(sdk::unknown_ptr) hetero_highest_performance_classes;
    
    // [PpmHeteroImplementationGeneration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa134, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c158, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa134, 0x1fe000 bytes
    //
    _n92(sdk::unknown_ptr) hetero_implementation_generation;
    
    // [PpmHeteroInitializeHgsSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c87b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e0104, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c9684, 0x1fe000 bytes
    //
    _n93(sdk::unknown_ptr) hetero_initialize_hgs_support;
    
    // [PpmHeteroNominalPerformanceClasses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb4b3, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db02, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4b3, 0x1fe000 bytes
    //
    _n94(sdk::unknown_ptr) hetero_nominal_performance_classes;
    
    // [PpmHeteroNormalizedUtilityToUtility]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5724cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x369d2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5722bc, 0x1fe000 bytes
    //
    _n95(sdk::unknown_ptr) hetero_normalized_utility_to_utility;
    
    // [PpmHeteroParkBias]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb704, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd68, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6fc, 0x1fe000 bytes
    //
    _n96(sdk::unknown_ptr) hetero_park_bias;
    
    // [PpmHeteroQosBias]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfbb08, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e318, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbb08, 0x1fe000 bytes
    //
    _n97(sdk::unknown_ptr) hetero_qos_bias;
    
    // [PpmHeteroUpdateHgsConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3be494, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c9a84, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bf1d4, 0x1fe000 bytes
    //
    _n98(sdk::unknown_ptr) hetero_update_hgs_configuration;
    
    // [PpmHighPerfDeferredEndCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc22e98, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3c3b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc22e9c, 0x1fe000 bytes
    //
    _n99(sdk::unknown_ptr) high_perf_deferred_end_count;
    
    // [PpmHighPerfDeferredEndDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc22e94, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3c3a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc22e98, 0x1fe000 bytes
    //
    _o00(sdk::unknown_ptr) high_perf_deferred_end_disabled;
    
    // [PpmHighPerfDeferredEndTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc22ea0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3c3a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc22ea0, 0x1fe000 bytes
    //
    _o01(sdk::unknown_ptr) high_perf_deferred_end_time;
    
    // [PpmHighPerfEndDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc23fe0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3d5e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc23fe0, 0x1fe000 bytes
    //
    _o02(sdk::unknown_ptr) high_perf_end_dpc;
    
    // [PpmHighPerfEndTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc23fa0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3d5a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc23fa0, 0x1fe000 bytes
    //
    _o03(sdk::unknown_ptr) high_perf_end_timer;
    
    // [PpmHighPerfPowerRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc24028, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3d580, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc24020, 0x1fe000 bytes
    //
    _o04(sdk::unknown_ptr) high_perf_power_request;
    
    // [PpmHighPerfRequestExpiration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a2b80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e8f50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a40d0, 0x1fe000 bytes
    //
    _o05(sdk::unknown_ptr) high_perf_request_expiration;
    
    // [PpmHighPerfRequestLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc24020, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3d578, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc23f90, 0x1fe000 bytes
    //
    _o06(sdk::unknown_ptr) high_perf_request_lock;
    
    // [PpmHvSetVirtualProcessorQos]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x576694, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58a378, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x576484, 0x1fe000 bytes
    //
    _o07(sdk::unknown_ptr) hv_set_virtual_processor_qos;
    
    // [PpmHvSnapPerformanceAccumulation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5766e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58a3c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5764d0, 0x1fe000 bytes
    //
    _o08(sdk::unknown_ptr) hv_snap_performance_accumulation;
    
    // [PpmHvUseNativeAlgorithms]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a432c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3acddc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a9cac, 0x1fe000 bytes
    //
    _o09(sdk::unknown_ptr) hv_use_native_algorithms;
    
    // [PpmIdleCsVetoAccountingDeviceUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5609d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x570838, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5607c4, 0x1fe000 bytes
    //
    _o10(sdk::unknown_ptr) idle_cs_veto_accounting_device_update;
    
    // [PpmIdleDisableStatesAtBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa09c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c0c4, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa09c, 0x1fe000 bytes
    //
    _o11(sdk::unknown_ptr) idle_disable_states_at_boot;
    
    // [PpmIdleDurationExpirationTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb7e0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1de40, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb7e0, 0x1fe000 bytes
    //
    _o12(sdk::unknown_ptr) idle_duration_expiration_timeout;
    
    // [PpmIdleDurationExpirationTimeoutMs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa210, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c264, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa218, 0x1fe000 bytes
    //
    _o13(sdk::unknown_ptr) idle_duration_expiration_timeout_ms;
    
    // [PpmIdleEnableIdleDurationExpirationTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x560c28, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x461120, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x560a18, 0x1fe000 bytes
    //
    _o14(sdk::unknown_ptr) idle_enable_idle_duration_expiration_timeout;
    
    // [PpmIdleLastIdleDurationExpirationTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfba88, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e1b0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfba80, 0x1fe000 bytes
    //
    _o15(sdk::unknown_ptr) idle_last_idle_duration_expiration_time;
    
    // [PpmIdleRespectIdleStateMax]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb5ad, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dbbe, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5ad, 0x1fe000 bytes
    //
    _o16(sdk::unknown_ptr) idle_respect_idle_state_max;
    
    // [PpmIdleSnapConcurrency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x30d3e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35a8f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x278af0, 0x1fe000 bytes
    //
    _o17(sdk::unknown_ptr) idle_snap_concurrency;
    
    // [PpmIdleStartCsVetoAccounting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x200dd0, 0x32828 bytes
    // ntoskrnl.exe .text:0x5610cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x560ebc, 0x1fe000 bytes
    //
    _o18(sdk::unknown_ptr) idle_start_cs_veto_accounting;
    
    // [PpmInfoApplyMinMaxConstraint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21b0ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c8280, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35d04c, 0x1fe000 bytes
    //
    _o19(sdk::unknown_ptr) info_apply_min_max_constraint;
    
    // [PpmInfoReleaseLocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66fab8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83f6b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70f358, 0x1fe000 bytes
    //
    _o20(sdk::unknown_ptr) info_release_locks;
    
    // [PpmInitHeteroEngine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa6fa74, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb579a0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6eee4, 0x1fe000 bytes
    //
    _o21(sdk::unknown_ptr) init_hetero_engine;
    
    // [PpmInternalPlatformIdleVeto]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x561508, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5713f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5612f8, 0x1fe000 bytes
    //
    _o22(sdk::unknown_ptr) internal_platform_idle_veto;
    
    // [PpmInternalProcessorIdleVeto]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x56155c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x571448, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x56134c, 0x1fe000 bytes
    //
    _o23(sdk::unknown_ptr) internal_processor_idle_veto;
    
    // [PpmMultimediaQosProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1ed48, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38f40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1ed78, 0x1fe000 bytes
    //
    _o24(sdk::unknown_ptr) multimedia_qos_profile;
    
    // [PpmOpenRegistryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8f2f54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x990ce4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f1644, 0x1fe000 bytes
    //
    _o25(sdk::unknown_ptr) open_registry_key;
    
    // [PpmParkComputeSnapStatistics]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x239350, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3537e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e7440, 0x1fe000 bytes
    //
    _o26(sdk::unknown_ptr) park_compute_snap_statistics;
    
    // [PpmParkComputeUnparkMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5772ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58a648, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5770dc, 0x1fe000 bytes
    //
    _o27(sdk::unknown_ptr) park_compute_unpark_mask;
    
    // [PpmParkDistributeAllUtility]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x30d350, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35da70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x278a60, 0x1fe000 bytes
    //
    _o28(sdk::unknown_ptr) park_distribute_all_utility;
    
    // [PpmParkNewSoftParkingMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc12790, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0d600, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12750, 0x1fe000 bytes
    //
    _o29(sdk::unknown_ptr) park_new_soft_parking_mask;
    
    // [PpmParkReportSoftParkChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x577aac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58b21c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57789c, 0x1fe000 bytes
    //
    _o30(sdk::unknown_ptr) park_report_soft_park_change;
    
    // [PpmParkSoftParkingEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb4fd, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db34, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4fd, 0x1fe000 bytes
    //
    _o31(sdk::unknown_ptr) park_soft_parking_enabled;
    
    // [PpmParkSoftParkingMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc126e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0d4f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc128b0, 0x1fe000 bytes
    //
    _o32(sdk::unknown_ptr) park_soft_parking_mask;
    
    // [PpmParkUseCoreGranularity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa16c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa128, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa128, 0x1fe000 bytes
    //
    _o33(sdk::unknown_ptr) park_use_core_granularity;
    
    // [PpmPerfAccumulateBrandedFrequency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8e303c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97a228, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8e17dc, 0x1fe000 bytes
    //
    _o34(sdk::unknown_ptr) perf_accumulate_branded_frequency;
    
    // [PpmPerfApplyHiddenProcessorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x56894c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5784ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x56873c, 0x1fe000 bytes
    //
    _o35(sdk::unknown_ptr) perf_apply_hidden_processor_state;
    
    // [PpmPerfArbitratorApplyProcessorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x394624, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cead4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x395684, 0x1fe000 bytes
    //
    _o36(sdk::unknown_ptr) perf_arbitrator_apply_processor_state;
    
    // [PpmPerfAutonomousActivityWindowViaPerfControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb522, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db51, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb522, 0x1fe000 bytes
    //
    _o37(sdk::unknown_ptr) perf_autonomous_activity_window_via_perf_control;
    
    // [PpmPerfBootHeteroPolicyOverrideEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa0c0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c0f8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa0c0, 0x1fe000 bytes
    //
    _o38(sdk::unknown_ptr) perf_boot_hetero_policy_override_enabled;
    
    // [PpmPerfCalculateQosClassPolicies]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x39e2ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c8300, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39f7ac, 0x1fe000 bytes
    //
    _o39(sdk::unknown_ptr) perf_calculate_qos_class_policies;
    
    // [PpmPerfCheckForIllegalProcessorThrottle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x24dc44, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21d2cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f7894, 0x1fe000 bytes
    //
    _o40(sdk::unknown_ptr) perf_check_for_illegal_processor_throttle;
    
    // [PpmPerfCheckRequired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3bdf34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c8aa8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bec74, 0x1fe000 bytes
    //
    _o41(sdk::unknown_ptr) perf_check_required;
    
    // [PpmPerfClearBootOverrides]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x39e800, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c7778, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39fcc0, 0x1fe000 bytes
    //
    _o42(sdk::unknown_ptr) perf_clear_boot_overrides;
    
    // [PpmPerfClearResponsivenessHints]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3bdebc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c89c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bebfc, 0x1fe000 bytes
    //
    _o43(sdk::unknown_ptr) perf_clear_responsiveness_hints;
    
    // [PpmPerfCompleteMakeup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x27fa64, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x578574, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fea14, 0x1fe000 bytes
    //
    _o44(sdk::unknown_ptr) perf_complete_makeup;
    
    // [PpmPerfDeadlineBoostExpiration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc244c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3e4c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc244c0, 0x1fe000 bytes
    //
    _o45(sdk::unknown_ptr) perf_deadline_boost_expiration;
    
    // [PpmPerfEppViaPerfControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb523, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db50, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb523, 0x1fe000 bytes
    //
    _o46(sdk::unknown_ptr) perf_epp_via_perf_control;
    
    // [PpmPerfFeedbackCounterUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x568a68, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x578594, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x568858, 0x1fe000 bytes
    //
    _o47(sdk::unknown_ptr) perf_feedback_counter_update;
    
    // [PpmPerfGetBrandedFrequency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8e307c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97a268, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8e181c, 0x1fe000 bytes
    //
    _o48(sdk::unknown_ptr) perf_get_branded_frequency;
    
    // [PpmPerfMultimediaQosSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc245f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3e4b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc244d4, 0x1fe000 bytes
    //
    _o49(sdk::unknown_ptr) perf_multimedia_qos_supported;
    
    // [PpmPerfQosDisableAccounting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfbce0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e580, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbce0, 0x1fe000 bytes
    //
    _o50(sdk::unknown_ptr) perf_qos_disable_accounting;
    
    // [PpmPerfQosDisableReasons]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb690, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dcf4, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb68c, 0x1fe000 bytes
    //
    _o51(sdk::unknown_ptr) perf_qos_disable_reasons;
    
    // [PpmPerfQosDisableRefcount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb5e0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dc04, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5e0, 0x1fe000 bytes
    //
    _o52(sdk::unknown_ptr) perf_qos_disable_refcount;
    
    // [PpmPerfQosEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb454, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da4f, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb454, 0x1fe000 bytes
    //
    _o53(sdk::unknown_ptr) perf_qos_enabled;
    
    // [PpmPerfQosGroupPolicyDisable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb68c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dcf8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb690, 0x1fe000 bytes
    //
    _o54(sdk::unknown_ptr) perf_qos_group_policy_disable;
    
    // [PpmPerfQosIdleExpirationTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb960, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1de48, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb960, 0x1fe000 bytes
    //
    _o55(sdk::unknown_ptr) perf_qos_idle_expiration_timeout;
    
    // [PpmPerfQosManageIdleProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa0a0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c0c0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa0a0, 0x1fe000 bytes
    //
    _o56(sdk::unknown_ptr) perf_qos_manage_idle_processors;
    
    // [PpmPerfQosSupportedAndConfigured]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb5ab, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dbbc, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5ab, 0x1fe000 bytes
    //
    _o57(sdk::unknown_ptr) perf_qos_supported_and_configured;
    
    // [PpmPerfQosTransitionHysteresis]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa050, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c06c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa050, 0x1fe000 bytes
    //
    _o58(sdk::unknown_ptr) perf_qos_transition_hysteresis;
    
    // [PpmPerfQosTransitionHysteresisOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa02c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c050, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa02c, 0x1fe000 bytes
    //
    _o59(sdk::unknown_ptr) perf_qos_transition_hysteresis_override;
    
    // [PpmPerfQueryPackageId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x568ad0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea1b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5688c0, 0x1fe000 bytes
    //
    _o60(sdk::unknown_ptr) perf_query_package_id;
    
    // [PpmPerfQueryPackageProcessorCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x568af0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e7b80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5688e0, 0x1fe000 bytes
    //
    _o61(sdk::unknown_ptr) perf_query_package_processor_count;
    
    // [PpmPerfRegisterHvCap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67ae84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f3ac0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8f21b0, 0x1fe000 bytes
    //
    _o62(sdk::unknown_ptr) perf_register_hv_cap;
    
    // [PpmPerfRegisterHvStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67afbc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f3c40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8f2330, 0x1fe000 bytes
    //
    _o63(sdk::unknown_ptr) perf_register_hv_states;
    
    // [PpmPerfResizeHistory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8e3138, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97a360, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8e18d8, 0x1fe000 bytes
    //
    _o64(sdk::unknown_ptr) perf_resize_history;
    
    // [PpmPerfSchedulerDirectedPerfStatesSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb456, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da67, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb456, 0x1fe000 bytes
    //
    _o65(sdk::unknown_ptr) perf_scheduler_directed_perf_states_supported;
    
    // [PpmPerfSetAllDomainsToUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x37cb58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c82d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37ded8, 0x1fe000 bytes
    //
    _o66(sdk::unknown_ptr) perf_set_all_domains_to_update;
    
    // [PpmPerfSnapDeliveredPerformance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3042a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21e130, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26e720, 0x1fe000 bytes
    //
    _o67(sdk::unknown_ptr) perf_snap_delivered_performance;
    
    // [PpmPerfTelemetryCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x271420, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39d1f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x322e50, 0x1fe000 bytes
    //
    _o68(sdk::unknown_ptr) perf_telemetry_callback;
    
    // [PpmPerfTelemetryTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc24540, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3e540, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc24540, 0x1fe000 bytes
    //
    _o69(sdk::unknown_ptr) perf_telemetry_timer;
    
    // [PpmPerfTelemetryWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x676ea0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80fa00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ea290, 0x1fe000 bytes
    //
    _o70(sdk::unknown_ptr) perf_telemetry_worker;
    
    // [PpmPerfUpdateDomainPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x76eacc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83fba8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77653c, 0x1fe000 bytes
    //
    _o71(sdk::unknown_ptr) perf_update_domain_policy;
    
    // [PpmPerfUpdateQosDisableReasons]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26ff64, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a8268, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x321784, 0x1fe000 bytes
    //
    _o72(sdk::unknown_ptr) perf_update_qos_disable_reasons;
    
    // [PpmPerfVmQosSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb4b1, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db00, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4b1, 0x1fe000 bytes
    //
    _o73(sdk::unknown_ptr) perf_vm_qos_supported;
    
    // [PpmReinitializeHeteroEngine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x79c4a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83e05c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a3b28, 0x1fe000 bytes
    //
    _o74(sdk::unknown_ptr) reinitialize_hetero_engine;
    
    // [PpmResetDripsAccountingSnapshot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20124c, 0x32828 bytes
    // ntoskrnl.exe .text:0x561808, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5615f8, 0x1fe000 bytes
    //
    _o75(sdk::unknown_ptr) reset_drips_accounting_snapshot;
    
    // [PpmUpdateTargetProcessorPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a040c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c88fc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a18cc, 0x1fe000 bytes
    //
    _o76(sdk::unknown_ptr) update_target_processor_policy;
    
    // [PpmAcquireLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x106b24, 0x32828 bytes
    // ntoskrnl.exe .text:0x280c8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3517c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35d314, 0x1fe000 bytes
    //
    _o77(sdk::unknown_ptr) acquire_lock;
    
    // [PpmAllocWmiEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20b36c, 0x32828 bytes
    // ntoskrnl.exe .text:0x572650, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x583ffc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x572440, 0x1fe000 bytes
    //
    _o78(sdk::unknown_ptr) alloc_wmi_event;
    
    // [PpmAllocatePerfCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55dfa4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79d054, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83ee00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a46d4, 0x1fe000 bytes
    //
    _o79(sdk::unknown_ptr) allocate_perf_check;
    
    // [PpmAllocateQueryTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67a3c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f2c00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9909e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f12f0, 0x1fe000 bytes
    //
    _o80(sdk::unknown_ptr) allocate_query_table;
    
    // [PpmAllowedActions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305430, 0x32828 bytes
    // ntoskrnl.exe .data:0xc245f4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3e5f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc244d0, 0x1fe000 bytes
    //
    _o81(sdk::unknown_ptr) allowed_actions;
    
    // [PpmApplyIdlePolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x143e90, 0x32828 bytes
    // ntoskrnl.exe .text:0x3bfbb4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cee98, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c09c4, 0x1fe000 bytes
    //
    _o82(sdk::unknown_ptr) apply_idle_policy;
    
    // [PpmApplyIdlePolicyChanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ffa30, 0x32828 bytes
    // ntoskrnl.exe .text:0x55f900, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56f7a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x55f6e0, 0x1fe000 bytes
    //
    _o83(sdk::unknown_ptr) apply_idle_policy_changes;
    
    // [PpmApplyProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67a45c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f2c9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x990a60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f138c, 0x1fe000 bytes
    //
    _o84(sdk::unknown_ptr) apply_profile;
    
    // [PpmBeginHighPerfRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13035c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a2f40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ae738, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a4470, 0x1fe000 bytes
    //
    _o85(sdk::unknown_ptr) begin_high_perf_request;
    
    // [PpmBeginProfileAccumulation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3e64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67a490, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec550, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed804, 0x1fe000 bytes
    //
    _o86(sdk::unknown_ptr) begin_profile_accumulation;
    
    // [PpmCancelExitLatencyTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ffa48, 0x32828 bytes
    // ntoskrnl.exe .text:0x55f920, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e1918, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x55f700, 0x1fe000 bytes
    //
    _o87(sdk::unknown_ptr) cancel_exit_latency_trace;
    
    // [PpmCapturePerformanceDistribution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20a594, 0x32828 bytes
    // ntoskrnl.exe .text:0x570e1c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5818b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x570c0c, 0x1fe000 bytes
    //
    _o88(sdk::unknown_ptr) capture_performance_distribution;
    
    // [PpmCapturePerformanceDistributionCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20a6cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x571040, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x581ae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x570e30, 0x1fe000 bytes
    //
    _o89(sdk::unknown_ptr) capture_performance_distribution_callback;
    
    // [PpmCheckAcquireProcessorPerformance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xec1a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x24f4b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35ff50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fcc40, 0x1fe000 bytes
    //
    _o90(sdk::unknown_ptr) check_acquire_processor_performance;
    
    // [PpmCheckAdjustNextPerfCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xecd18, 0x32828 bytes
    // ntoskrnl.exe .text:0x2579e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36db80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x307350, 0x1fe000 bytes
    //
    _o91(sdk::unknown_ptr) check_adjust_next_perf_check;
    
    // [PpmCheckApplyDomainStatePipeline]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25cb58, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x8870, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x9430, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x8860, 0x1fe000 bytes
    //
    _o92(sdk::unknown_ptr) check_apply_domain_state_pipeline;
    
    // [PpmCheckApplyParkConstraints]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x140628, 0x32828 bytes
    // ntoskrnl.exe .text:0x3be348, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c9388, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bf088, 0x1fe000 bytes
    //
    _o93(sdk::unknown_ptr) check_apply_park_constraints;
    
    // [PpmCheckApplyPerfConstraints]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x534bf0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75e67c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x986938, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7660cc, 0x1fe000 bytes
    //
    _o94(sdk::unknown_ptr) check_apply_perf_constraints;
    
    // [PpmCheckApplyResetNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20a388, 0x32828 bytes
    // ntoskrnl.exe .text:0x570e00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x461512, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x570bf0, 0x1fe000 bytes
    //
    _o95(sdk::unknown_ptr) check_apply_reset_notification;
    
    // [PpmCheckArmPeriod]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x140be0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3bde34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c8a20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3beb74, 0x1fe000 bytes
    //
    _o96(sdk::unknown_ptr) check_arm_period;
    
    // [PpmCheckArmed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3037c8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc20f40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3bb64, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc20f80, 0x1fe000 bytes
    //
    _o97(sdk::unknown_ptr) check_armed;
    
    // [PpmCheckAsyncLatencyHintPipeline]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25caf0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x87c0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x9570, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x87b0, 0x1fe000 bytes
    //
    _o98(sdk::unknown_ptr) check_async_latency_hint_pipeline;
    
    // [PpmCheckCompleteHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3054a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc24628, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3e600, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc24628, 0x1fe000 bytes
    //
    _o99(sdk::unknown_ptr) check_complete_handler;
    
    // [PpmCheckComputeEnergy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeccec, 0x32828 bytes
    // ntoskrnl.exe .text:0x30d890, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21ec80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x278fa0, 0x1fe000 bytes
    //
    _p00(sdk::unknown_ptr) check_compute_energy;
    
    // [PpmCheckComputeHeteroResponse]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20ad28, 0x32828 bytes
    // ntoskrnl.exe .text:0x571e10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x582a90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x571c00, 0x1fe000 bytes
    //
    _p01(sdk::unknown_ptr) check_compute_hetero_response;
    
    // [PpmCheckCoordinatedStateInitiator]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ffa80, 0x32828 bytes
    // ntoskrnl.exe .text:0x55f960, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56f7c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x55f740, 0x1fe000 bytes
    //
    _p02(sdk::unknown_ptr) check_coordinated_state_initiator;
    
    // [PpmCheckCoreParkingUpdatePipeline]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25caa0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x8770, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x94b0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x8760, 0x1fe000 bytes
    //
    _p03(sdk::unknown_ptr) check_core_parking_update_pipeline;
    
    // [PpmCheckCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3038dc, 0x32828 bytes
    // ntoskrnl.exe .data:0xc20f78, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3bc2c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc20fa8, 0x1fe000 bytes
    //
    _p04(sdk::unknown_ptr) check_count;
    
    // [PpmCheckCurrentPipelineId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3038d4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc20f6c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3bc20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc20f9c, 0x1fe000 bytes
    //
    _p05(sdk::unknown_ptr) check_current_pipeline_id;
    
    // [PpmCheckCustomRun]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x110320, 0x32828 bytes
    // ntoskrnl.exe .text:0x378ef8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3512f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37a278, 0x1fe000 bytes
    //
    _p06(sdk::unknown_ptr) check_custom_run;
    
    // [PpmCheckDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3037e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc20ec0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3bbc0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc20f00, 0x1fe000 bytes
    //
    _p07(sdk::unknown_ptr) check_dpc;
    
    // [PpmCheckForceDomainStatePipeline]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25cb88, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x8830, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x9470, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x8820, 0x1fe000 bytes
    //
    _p08(sdk::unknown_ptr) check_force_domain_state_pipeline;
    
    // [PpmCheckHeterogeneousPipelines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25b2b0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x95d0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xaa58, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x95d0, 0x1fe000 bytes
    //
    _p09(sdk::unknown_ptr) check_heterogeneous_pipelines;
    
    // [PpmCheckHomogeneousPipelines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25b2e0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x5ab0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x5f98, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x5920, 0x1fe000 bytes
    //
    _p10(sdk::unknown_ptr) check_homogeneous_pipelines;
    
    // [PpmCheckIdleVeto]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ffb1c, 0x32828 bytes
    // ntoskrnl.exe .text:0x55fa08, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56f868, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x55f7e8, 0x1fe000 bytes
    //
    _p11(sdk::unknown_ptr) check_idle_veto;
    
    // [PpmCheckInitProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55de50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79c4d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83e17c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a3b58, 0x1fe000 bytes
    //
    _p12(sdk::unknown_ptr) check_init_processors;
    
    // [PpmCheckLatencyBoostActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3038d8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc20f74, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3bc24, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc20fa4, 0x1fe000 bytes
    //
    _p13(sdk::unknown_ptr) check_latency_boost_active;
    
    // [PpmCheckMaintainArtificialDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14a64c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ca2f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e95e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb3f0, 0x1fe000 bytes
    //
    _p14(sdk::unknown_ptr) check_maintain_artificial_domain;
    
    // [PpmCheckMakeupCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x303860, 0x32828 bytes
    // ntoskrnl.exe .data:0xc20f48, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3bc00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc20f84, 0x1fe000 bytes
    //
    _p15(sdk::unknown_ptr) check_makeup_count;
    
    // [PpmCheckMakeupSkippedChecks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xec890, 0x32828 bytes
    // ntoskrnl.exe .text:0x27f940, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x369830, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fe8f0, 0x1fe000 bytes
    //
    _p16(sdk::unknown_ptr) check_makeup_skipped_checks;
    
    // [PpmCheckMinimumPeriod]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3038c8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc20f60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3bc18, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc20f90, 0x1fe000 bytes
    //
    _p17(sdk::unknown_ptr) check_minimum_period;
    
    // [PpmCheckPeriod]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3038e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc20f88, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3bc38, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc20fb8, 0x1fe000 bytes
    //
    _p18(sdk::unknown_ptr) check_period;
    
    // [PpmCheckPeriodicHeteroPipeline]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25cbc0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x91d0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xa100, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9200, 0x1fe000 bytes
    //
    _p19(sdk::unknown_ptr) check_periodic_hetero_pipeline;
    
    // [PpmCheckPeriodicPipeline]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25cc80, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x88b0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x95e0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x88a0, 0x1fe000 bytes
    //
    _p20(sdk::unknown_ptr) check_periodic_pipeline;
    
    // [PpmCheckPeriodicStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x52f30, 0x32828 bytes
    // ntoskrnl.exe .text:0x30d830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3514f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x278f40, 0x1fe000 bytes
    //
    _p21(sdk::unknown_ptr) check_periodic_start;
    
    // [PpmCheckPipeline]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3037c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc20eb8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3bb68, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc20ee8, 0x1fe000 bytes
    //
    _p22(sdk::unknown_ptr) check_pipeline;
    
    // [PpmCheckPipelineIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3037cc, 0x32828 bytes
    // ntoskrnl.exe .data:0xc20f44, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3bb60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc20ee4, 0x1fe000 bytes
    //
    _p23(sdk::unknown_ptr) check_pipeline_index;
    
    // [PpmCheckPipelines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3038c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc20f58, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3bc08, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc20f88, 0x1fe000 bytes
    //
    _p24(sdk::unknown_ptr) check_pipelines;
    
    // [PpmCheckPollForFeedback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3038d0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc20f68, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3bc10, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc20f98, 0x1fe000 bytes
    //
    _p25(sdk::unknown_ptr) check_poll_for_feedback;
    
    // [PpmCheckPreConditionsForDeepSleep]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ffb44, 0x32828 bytes
    // ntoskrnl.exe .text:0x38ca0c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x398f34, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38da9c, 0x1fe000 bytes
    //
    _p26(sdk::unknown_ptr) check_pre_conditions_for_deep_sleep;
    
    // [PpmCheckReInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55e230, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79d1a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83fdb4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a4824, 0x1fe000 bytes
    //
    _p27(sdk::unknown_ptr) check_re_init;
    
    // [PpmCheckRecordAllUtility]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x53170, 0x32828 bytes
    // ntoskrnl.exe .text:0x238e30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21f000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e6f20, 0x1fe000 bytes
    //
    _p28(sdk::unknown_ptr) check_record_all_utility;
    
    // [PpmCheckRegistered]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f97f0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc111a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0bc90, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11210, 0x1fe000 bytes
    //
    _p29(sdk::unknown_ptr) check_registered;
    
    // [PpmCheckReportComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xec054, 0x32828 bytes
    // ntoskrnl.exe .text:0x256360, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36cdd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3058a0, 0x1fe000 bytes
    //
    _p30(sdk::unknown_ptr) check_report_complete;
    
    // [PpmCheckReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x149abc, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c8ed0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3db650, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c9da0, 0x1fe000 bytes
    //
    _p31(sdk::unknown_ptr) check_reset;
    
    // [PpmCheckRun]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xebf00, 0x32828 bytes
    // ntoskrnl.exe .text:0x30cec0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3516c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2785d0, 0x1fe000 bytes
    //
    _p32(sdk::unknown_ptr) check_run;
    
    // [PpmCheckSnapAllUtility]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x54660, 0x32828 bytes
    // ntoskrnl.exe .text:0x30d520, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21eec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x278c30, 0x1fe000 bytes
    //
    _p33(sdk::unknown_ptr) check_snap_all_utility;
    
    // [PpmCheckStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11035c, 0x32828 bytes
    // ntoskrnl.exe .text:0x30c8c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x351594, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x277fd0, 0x1fe000 bytes
    //
    _p34(sdk::unknown_ptr) check_start;
    
    // [PpmCheckStartDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x303820, 0x32828 bytes
    // ntoskrnl.exe .data:0xc20f00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3bb20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc20f40, 0x1fe000 bytes
    //
    _p35(sdk::unknown_ptr) check_start_dpc;
    
    // [PpmCheckTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x303868, 0x32828 bytes
    // ntoskrnl.exe .data:0xc20f50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3bc30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc20ef0, 0x1fe000 bytes
    //
    _p36(sdk::unknown_ptr) check_time;
    
    // [PpmClearExitLatencySamplingPercentage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ffb70, 0x32828 bytes
    // ntoskrnl.exe .text:0x55fa44, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56f8a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x55f824, 0x1fe000 bytes
    //
    _p37(sdk::unknown_ptr) clear_exit_latency_sampling_percentage;
    
    // [PpmClearSimulatedIdle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ffbb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x55fa8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56f8ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x55f86c, 0x1fe000 bytes
    //
    _p38(sdk::unknown_ptr) clear_simulated_idle;
    
    // [PpmClearSimulatedLoad]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2051b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8e2f54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97a140, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8e16f4, 0x1fe000 bytes
    //
    _p39(sdk::unknown_ptr) clear_simulated_load;
    
    // [PpmCompareAndApplyPolicySettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x677508, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ed9d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x986958, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ec0a0, 0x1fe000 bytes
    //
    _p40(sdk::unknown_ptr) compare_and_apply_policy_settings;
    
    // [PpmContinueActiveTimeAccumulation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc17e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x280400, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28f03c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x20511c, 0x1fe000 bytes
    //
    _p41(sdk::unknown_ptr) continue_active_time_accumulation;
    
    // [PpmConvertTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeeac4, 0x32828 bytes
    // ntoskrnl.exe .text:0x28037c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21d3c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x205bbc, 0x1fe000 bytes
    //
    _p42(sdk::unknown_ptr) convert_time;
    
    // [PpmConvertTimeTo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20a810, 0x32828 bytes
    // ntoskrnl.exe .text:0x571198, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3512a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x570f88, 0x1fe000 bytes
    //
    _p43(sdk::unknown_ptr) convert_time_to;
    
    // [PpmCurrentProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f3ed0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc01a00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc03090, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc01a40, 0x1fe000 bytes
    //
    _p44(sdk::unknown_ptr) current_profile;
    
    // [PpmDeepestHardwareIdleState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x143d54, 0x32828 bytes
    // ntoskrnl.exe .text:0x3bfa5c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cee58, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c086c, 0x1fe000 bytes
    //
    _p45(sdk::unknown_ptr) deepest_hardware_idle_state;
    
    // [PpmDefaultProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302760, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1ed60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38f60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1eda0, 0x1fe000 bytes
    //
    _p46(sdk::unknown_ptr) default_profile;
    
    // [PpmDisableProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67a58c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f2e08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x990bc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f14f8, 0x1fe000 bytes
    //
    _p47(sdk::unknown_ptr) disable_profile;
    
    // [PpmDisableVsyncLatencyUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab4f8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb8e0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1de9c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb8f4, 0x1fe000 bytes
    //
    _p48(sdk::unknown_ptr) disable_vsync_latency_update;
    
    // [PpmDripsAccountingSnapshot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x304300, 0x32828 bytes
    // ntoskrnl.exe .data:0xc231c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3c6e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc231c0, 0x1fe000 bytes
    //
    _p49(sdk::unknown_ptr) drips_accounting_snapshot;
    
    // [PpmDripsStateIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9b28, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11e78, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0c9a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11ed8, 0x1fe000 bytes
    //
    _p50(sdk::unknown_ptr) drips_state_index;
    
    // [PpmEnableCoordinatedIdleStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66f488, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8deaec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97564c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8dd2ec, 0x1fe000 bytes
    //
    _p51(sdk::unknown_ptr) enable_coordinated_idle_states;
    
    // [PpmEnableProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5680f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a3264, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83df6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7afc34, 0x1fe000 bytes
    //
    _p52(sdk::unknown_ptr) enable_profile;
    
    // [PpmEnableWmiInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x552198, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a94ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85ce60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b0e2c, 0x1fe000 bytes
    //
    _p53(sdk::unknown_ptr) enable_wmi_interface;
    
    // [PpmEndHighPerfRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12fa30, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a21e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e7a98, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a36f4, 0x1fe000 bytes
    //
    _p54(sdk::unknown_ptr) end_high_perf_request;
    
    // [PpmEndProfileAccumulation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67a5e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f2f0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x990c9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f15fc, 0x1fe000 bytes
    //
    _p55(sdk::unknown_ptr) end_profile_accumulation;
    
    // [PpmEstimateIdleDuration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x139304, 0x32828 bytes
    // ntoskrnl.exe .text:0x55fc14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56fa7c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x55f9f4, 0x1fe000 bytes
    //
    _p56(sdk::unknown_ptr) estimate_idle_duration;
    
    // [PPM_ETW_ACCOUNTING_BUCKET_INTERVALS_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f218, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e710, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c988, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ea50, 0x1fe000 bytes
    //
    _p57(sdk::unknown_ptr) etw_accounting_bucket_intervals_rundown;
    
    // [PPM_ETW_AUTONOMOUS_MODE_CHANGE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f0b8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e1c8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c330, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e508, 0x1fe000 bytes
    //
    _p58(sdk::unknown_ptr) etw_autonomous_mode_change;
    
    // [PPM_ETW_BIOS_CAP_CHANGE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f2d8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd138, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c6e8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc8c8, 0x1fe000 bytes
    //
    _p59(sdk::unknown_ptr) etw_bios_cap_change;
    
    // [PPM_ETW_COMPUTE_ENERGY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f188, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xccd8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xfa40, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa668, 0x1fe000 bytes
    //
    _p60(sdk::unknown_ptr) etw_compute_energy;
    
    // [PPM_ETW_COORDINATED_IDLE_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f178, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2ed60, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d0f0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f0a0, 0x1fe000 bytes
    //
    _p61(sdk::unknown_ptr) etw_coordinated_idle_rundown;
    
    // [PPM_ETW_CURRENT_IDLE_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f258, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2ef08, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d328, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f248, 0x1fe000 bytes
    //
    _p62(sdk::unknown_ptr) etw_current_idle_rundown;
    
    // [PPM_ETW_CURRENT_PERF_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f288, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e0d0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c210, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e410, 0x1fe000 bytes
    //
    _p63(sdk::unknown_ptr) etw_current_perf_rundown;
    
    // [PPM_ETW_DELIVERED_PERF_CHANGE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e238, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xcc78, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xefc8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa608, 0x1fe000 bytes
    //
    _p64(sdk::unknown_ptr) etw_delivered_perf_change;
    
    // [PPM_ETW_DOMAIN_PERF_STATE_CHANGE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25f2f8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd458, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12490, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xcbc8, 0x1fe000 bytes
    //
    _p65(sdk::unknown_ptr) etw_domain_perf_state_change;
    
    // [PPM_ETW_DRIPS_ACCOUNTING_SNAPSHOT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f228, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2da70, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3ba68, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ddb0, 0x1fe000 bytes
    //
    _p66(sdk::unknown_ptr) etw_drips_accounting_snapshot;
    
    // [PPM_ETW_EXPECTED_UTILITY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25f160, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd3f0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x124d0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xcb60, 0x1fe000 bytes
    //
    _p67(sdk::unknown_ptr) etw_expected_utility;
    
    // [PpmEtwHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x303450, 0x32828 bytes
    // ntoskrnl.exe .data:0xc20600, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc39960, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc20640, 0x1fe000 bytes
    //
    _p68(sdk::unknown_ptr) etw_handle;
    
    // [PPM_ETW_HETERO_DISTRIBUTE_UTILITY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f158, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e338, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c520, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e678, 0x1fe000 bytes
    //
    _p69(sdk::unknown_ptr) etw_hetero_distribute_utility;
    
    // [PPM_ETW_HETERO_RESPONSE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f168, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e6d8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c930, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ea18, 0x1fe000 bytes
    //
    _p70(sdk::unknown_ptr) etw_hetero_response;
    
    // [PPM_ETW_HETEROGENEOUS_POLICIES_CHANGED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260638, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xe098, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12428, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xdb50, 0x1fe000 bytes
    //
    _p71(sdk::unknown_ptr) etw_heterogeneous_policies_changed;
    
    // [PPM_ETW_HETEROGENEOUS_POLICIES_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27efa8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d538, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b030, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d878, 0x1fe000 bytes
    //
    _p72(sdk::unknown_ptr) etw_heterogeneous_policies_rundown;
    
    // [PPM_ETW_IDLE_ACCOUNTING_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f2e8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e538, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c780, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e878, 0x1fe000 bytes
    //
    _p73(sdk::unknown_ptr) etw_idle_accounting_rundown;
    
    // [PPM_ETW_IDLE_DURATION_EXPIRATION]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f0f8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2dd68, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3be20, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e0a8, 0x1fe000 bytes
    //
    _p74(sdk::unknown_ptr) etw_idle_duration_expiration;
    
    // [PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2616e0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xcca8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf020, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa638, 0x1fe000 bytes
    //
    _p75(sdk::unknown_ptr) etw_interrupt_steering_mask_change;
    
    // [PPM_ETW_INTERRUPT_STEERING_MASK_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2616f0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d470, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3af90, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d750, 0x1fe000 bytes
    //
    _p76(sdk::unknown_ptr) etw_interrupt_steering_mask_rundown;
    
    // [PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2616a0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xcc98, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf030, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa628, 0x1fe000 bytes
    //
    _p77(sdk::unknown_ptr) etw_interrupt_steering_proc_change;
    
    // [PPM_ETW_INTERRUPT_STEERING_PROC_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2616b0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d460, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3afa0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d740, 0x1fe000 bytes
    //
    _p78(sdk::unknown_ptr) etw_interrupt_steering_proc_rundown;
    
    // [PPM_ETW_INTERRUPT_STEERING_STATE_CONNECT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25f088, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xc108, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10cc8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xba68, 0x1fe000 bytes
    //
    _p79(sdk::unknown_ptr) etw_interrupt_steering_state_connect;
    
    // [PPM_ETW_INTERRUPT_STEERING_STATE_DISCONNECT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25ee80, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xc0f8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x129f0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xba58, 0x1fe000 bytes
    //
    _p80(sdk::unknown_ptr) etw_interrupt_steering_state_disconnect;
    
    // [PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2616c0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xcc88, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf040, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa618, 0x1fe000 bytes
    //
    _p81(sdk::unknown_ptr) etw_interrupt_steering_state_retarget;
    
    // [PPM_ETW_INTERRUPT_STEERING_STATE_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2616d0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xfd70, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3afb0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xf8a8, 0x1fe000 bytes
    //
    _p82(sdk::unknown_ptr) etw_interrupt_steering_state_rundown;
    
    // [PPM_ETW_LATENCY_SENSITIVITY_HINT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25ec70, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xca78, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11968, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc3c8, 0x1fe000 bytes
    //
    _p83(sdk::unknown_ptr) etw_latency_sensitivity_hint;
    
    // [PPM_ETW_LPI_CORE_PARK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f2a8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2eae8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3cdc0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ee28, 0x1fe000 bytes
    //
    _p84(sdk::unknown_ptr) etw_lpi_core_park;
    
    // [PPM_ETW_LPI_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f298, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d728, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b670, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2da68, 0x1fe000 bytes
    //
    _p85(sdk::unknown_ptr) etw_lpi_rundown;
    
    // [PPM_ETW_MEDIA_BUFFERING_NOTIFY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25eb48, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xbf60, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12be0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb8a8, 0x1fe000 bytes
    //
    _p86(sdk::unknown_ptr) etw_media_buffering_notify;
    
    // [PPM_ETW_PARK_CORE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f308, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e748, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c9c0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ea88, 0x1fe000 bytes
    //
    _p87(sdk::unknown_ptr) etw_park_core;
    
    // [PPM_ETW_PARK_NODE_CAP_CHANGE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f268, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2db88, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3bbb0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2dec8, 0x1fe000 bytes
    //
    _p88(sdk::unknown_ptr) etw_park_node_cap_change;
    
    // [PPM_ETW_PARK_NODE_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f278, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2ee98, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d278, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f1d8, 0x1fe000 bytes
    //
    _p89(sdk::unknown_ptr) etw_park_node_rundown;
    
    // [PPM_ETW_PARK_NODE_STATS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x261710, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xbc30, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf990, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb560, 0x1fe000 bytes
    //
    _p90(sdk::unknown_ptr) etw_park_node_stats;
    
    // [PPM_ETW_PERF_CHECK_FAILED_START]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25ea70, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xbee0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf980, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb828, 0x1fe000 bytes
    //
    _p91(sdk::unknown_ptr) etw_perf_check_failed_start;
    
    // [PPM_ETW_PERF_CHECK_MAKEUP]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f2b8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d758, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b6f0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2da98, 0x1fe000 bytes
    //
    _p92(sdk::unknown_ptr) etw_perf_check_makeup;
    
    // [PPM_ETW_PERF_CHECK_START]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25ec80, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xccb8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf950, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa648, 0x1fe000 bytes
    //
    _p93(sdk::unknown_ptr) etw_perf_check_start;
    
    // [PPM_ETW_PERF_CHECK_STOP]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25fc80, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xccc8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf960, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa658, 0x1fe000 bytes
    //
    _p94(sdk::unknown_ptr) etw_perf_check_stop;
    
    // [PPM_ETW_PERF_SELECT_PROCESSOR_STATE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x261700, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xbc60, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xefb8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb570, 0x1fe000 bytes
    //
    _p95(sdk::unknown_ptr) etw_perf_select_processor_state;
    
    // [PPM_ETW_PLATFORM_IDLE_ACCOUNTING_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f248, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e918, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3cb88, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ec58, 0x1fe000 bytes
    //
    _p96(sdk::unknown_ptr) etw_platform_idle_accounting_rundown;
    
    // [PPM_ETW_PLATFORM_IDLE_VETO_DECREMENT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f1f8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d748, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b6d0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2da88, 0x1fe000 bytes
    //
    _p97(sdk::unknown_ptr) etw_platform_idle_veto_decrement;
    
    // [PPM_ETW_PLATFORM_IDLE_VETO_INCREMENT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f208, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2df38, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c060, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e278, 0x1fe000 bytes
    //
    _p98(sdk::unknown_ptr) etw_platform_idle_veto_increment;
    
    // [PPM_ETW_PLATFORM_IDLE_VETO_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f1c8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2daf0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3bb18, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2de30, 0x1fe000 bytes
    //
    _p99(sdk::unknown_ptr) etw_platform_idle_veto_rundown;
    
    // [PPM_ETW_PLATFORM_PARKING_PREFERENCE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f238, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e078, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c1c0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e3b8, 0x1fe000 bytes
    //
    _q00(sdk::unknown_ptr) etw_platform_parking_preference;
    
    // [PPM_ETW_PLATFORM_PRE_VETO_ACCOUNTING_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f0c8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2df18, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c030, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e258, 0x1fe000 bytes
    //
    _q01(sdk::unknown_ptr) etw_platform_pre_veto_accounting_rundown;
    
    // [PPM_ETW_PROCESSOR_CLASS_UPDATE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260628, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xe088, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12418, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xdb40, 0x1fe000 bytes
    //
    _q02(sdk::unknown_ptr) etw_processor_class_update;
    
    // [PPM_ETW_PROCESSOR_IDLE_VETO_DECREMENT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f1d8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2db40, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3bb58, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2de80, 0x1fe000 bytes
    //
    _q03(sdk::unknown_ptr) etw_processor_idle_veto_decrement;
    
    // [PPM_ETW_PROCESSOR_IDLE_VETO_INCREMENT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f1e8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d7b8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b750, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2daf8, 0x1fe000 bytes
    //
    _q04(sdk::unknown_ptr) etw_processor_idle_veto_increment;
    
    // [PPM_ETW_PROCESSOR_IDLE_VETO_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f1b8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2dee0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3bff8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e220, 0x1fe000 bytes
    //
    _q05(sdk::unknown_ptr) etw_processor_idle_veto_rundown;
    
    // [PPM_ETW_PROCESSOR_PERF_STATE_CHANGE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25f170, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd3d0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x124b0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xcb40, 0x1fe000 bytes
    //
    _q06(sdk::unknown_ptr) etw_processor_perf_state_change;
    
    // [PPM_ETW_PROCESSOR_PRE_VETO_ACCOUNTING_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f0d8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e210, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c388, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e550, 0x1fe000 bytes
    //
    _q07(sdk::unknown_ptr) etw_processor_pre_veto_accounting_rundown;
    
    // [PPM_ETW_PROCESSOR_PROFILE_CHANGE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f128, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e9a0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3cc28, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ece0, 0x1fe000 bytes
    //
    _q08(sdk::unknown_ptr) etw_processor_profile_change;
    
    // [PPM_ETW_PROCESSOR_PROFILE_DISABLED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27efb8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d548, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b000, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d888, 0x1fe000 bytes
    //
    _q09(sdk::unknown_ptr) etw_processor_profile_disabled;
    
    // [PPM_ETW_PROCESSOR_PROFILE_ENABLED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260a00, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xe320, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12398, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe048, 0x1fe000 bytes
    //
    _q10(sdk::unknown_ptr) etw_processor_profile_enabled;
    
    // [PPM_ETW_PROCESSOR_PROFILE_REGISTERED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f148, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e768, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c9e0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2eaa8, 0x1fe000 bytes
    //
    _q11(sdk::unknown_ptr) etw_processor_profile_registered;
    
    // [PPM_ETW_PROCESSOR_PROFILE_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f138, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2dbf8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3bc40, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2df38, 0x1fe000 bytes
    //
    _q12(sdk::unknown_ptr) etw_processor_profile_rundown;
    
    // [PPM_ETW_PROCESSOR_PROFILE_SETTING_CHANGE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2609c0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xe588, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x123c8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xdff8, 0x1fe000 bytes
    //
    _q13(sdk::unknown_ptr) etw_processor_profile_setting_change;
    
    // [PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f118, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2da20, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3ba18, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2dd60, 0x1fe000 bytes
    //
    _q14(sdk::unknown_ptr) etw_processor_profile_setting_rundown;
    
    // [PPM_ETW_PROCESSOR_PROFILE_STATUS_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f108, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2f390, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d8b8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f6d0, 0x1fe000 bytes
    //
    _q15(sdk::unknown_ptr) etw_processor_profile_status_rundown;
    
    // [PPM_ETW_PROVIDER]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260308, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xf008, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11958, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xeaa8, 0x1fe000 bytes
    //
    _q16(sdk::unknown_ptr) etw_provider;
    
    // [PPM_ETW_RECORDED_UTILITY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x261720, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xbc20, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xefe8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb550, 0x1fe000 bytes
    //
    _q17(sdk::unknown_ptr) etw_recorded_utility;
    
    // [PpmEtwRegistered]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a038, 0x32828 bytes
    // ntoskrnl.exe .data:0xc54280, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6ab90, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc54240, 0x1fe000 bytes
    //
    _q18(sdk::unknown_ptr) etw_registered;
    
    // [PPM_ETW_STATIC_POLICY_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f1a8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e308, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c4d0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e648, 0x1fe000 bytes
    //
    _q19(sdk::unknown_ptr) etw_static_policy_rundown;
    
    // [PPM_ETW_THERMAL_CAP_CHANGE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f2c8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d8f8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b8d0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2dc38, 0x1fe000 bytes
    //
    _q20(sdk::unknown_ptr) etw_thermal_cap_change;
    
    // [PPM_ETW_UNPARK_CORE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f2f8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2db78, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3bb90, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2deb8, 0x1fe000 bytes
    //
    _q21(sdk::unknown_ptr) etw_unpark_core;
    
    // [PPM_ETW_VETO_NAME_RUNDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f198, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2ef68, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d3e8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f2a8, 0x1fe000 bytes
    //
    _q22(sdk::unknown_ptr) etw_veto_name_rundown;
    
    // [PpmEventAutonomousModeChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20baa8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5734a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x584ea0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x573290, 0x1fe000 bytes
    //
    _q23(sdk::unknown_ptr) event_autonomous_mode_change;
    
    // [PpmEventBiosCapChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20bb7c, 0x32828 bytes
    // ntoskrnl.exe .text:0x38e6c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x584f5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38f710, 0x1fe000 bytes
    //
    _q24(sdk::unknown_ptr) event_bios_cap_change;
    
    // [PpmEventCoordinatedIdleTransition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20bcf4, 0x32828 bytes
    // ntoskrnl.exe .text:0x573570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x461640, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x573360, 0x1fe000 bytes
    //
    _q25(sdk::unknown_ptr) event_coordinated_idle_transition;
    
    // [PpmEventCoreParkingStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20bd74, 0x32828 bytes
    // ntoskrnl.exe .text:0x573718, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58514c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x573508, 0x1fe000 bytes
    //
    _q26(sdk::unknown_ptr) event_core_parking_state_change;
    
    // [PpmEventDomainPerfStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x130228, 0x32828 bytes
    // ntoskrnl.exe .text:0x395f88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ce040, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x396fe8, 0x1fe000 bytes
    //
    _q27(sdk::unknown_ptr) event_domain_perf_state_change;
    
    // [PpmEventEnterPlatformIdleState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20be6c, 0x32828 bytes
    // ntoskrnl.exe .text:0x57392c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x585360, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57371c, 0x1fe000 bytes
    //
    _q28(sdk::unknown_ptr) event_enter_platform_idle_state;
    
    // [PpmEventHeteroPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55e768, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79d848, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84051c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a4ec8, 0x1fe000 bytes
    //
    _q29(sdk::unknown_ptr) event_hetero_policy;
    
    // [PpmEventIdleDurationExpiration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20bedc, 0x32828 bytes
    // ntoskrnl.exe .text:0x573bb4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x585bb8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5739a4, 0x1fe000 bytes
    //
    _q30(sdk::unknown_ptr) event_idle_duration_expiration;
    
    // [PpmEventIdleStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc2190, 0x32828 bytes
    // ntoskrnl.exe .text:0x252348, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x363928, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x300308, 0x1fe000 bytes
    //
    _q31(sdk::unknown_ptr) event_idle_state_change;
    
    // [PpmEventLPICoreParking]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20c044, 0x32828 bytes
    // ntoskrnl.exe .text:0x573d1c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x585d1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x573b0c, 0x1fe000 bytes
    //
    _q32(sdk::unknown_ptr) event_lpi_core_parking;
    
    // [PpmEventParkNodeCapChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20c0e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x573ddc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x585ddc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x573bcc, 0x1fe000 bytes
    //
    _q33(sdk::unknown_ptr) event_park_node_cap_change;
    
    // [PpmEventParkNodePreference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20c1bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5740c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5860bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x573eb8, 0x1fe000 bytes
    //
    _q34(sdk::unknown_ptr) event_park_node_preference;
    
    // [PpmEventPlatformVetoRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20c2cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5741e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58633c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x573fd8, 0x1fe000 bytes
    //
    _q35(sdk::unknown_ptr) event_platform_veto_request;
    
    // [PpmEventPlatformVetoRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20c384, 0x32828 bytes
    // ntoskrnl.exe .text:0x5742c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x586414, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5740b0, 0x1fe000 bytes
    //
    _q36(sdk::unknown_ptr) event_platform_veto_rundown;
    
    // [PpmEventProcessorPerfStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12d90c, 0x32828 bytes
    // ntoskrnl.exe .text:0x394808, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ced14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x395868, 0x1fe000 bytes
    //
    _q37(sdk::unknown_ptr) event_processor_perf_state_change;
    
    // [PpmEventProcessorVetoRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20c520, 0x32828 bytes
    // ntoskrnl.exe .text:0x5744cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x586620, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5742bc, 0x1fe000 bytes
    //
    _q38(sdk::unknown_ptr) event_processor_veto_request;
    
    // [PpmEventProcessorVetoRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20c618, 0x32828 bytes
    // ntoskrnl.exe .text:0x5745dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x586730, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5743cc, 0x1fe000 bytes
    //
    _q39(sdk::unknown_ptr) event_processor_veto_rundown;
    
    // [PpmEventStaticPolicyRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6784ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8efe54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x98c464, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ee544, 0x1fe000 bytes
    //
    _q40(sdk::unknown_ptr) event_static_policy_rundown;
    
    // [PpmEventThermalCapChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20c800, 0x32828 bytes
    // ntoskrnl.exe .text:0x574838, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x586990, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x574628, 0x1fe000 bytes
    //
    _q41(sdk::unknown_ptr) event_thermal_cap_change;
    
    // [PpmEventTraceAccountingBucketIntervalsRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67860c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8effc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x98c640, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ee6b0, 0x1fe000 bytes
    //
    _q42(sdk::unknown_ptr) event_trace_accounting_bucket_intervals_rundown;
    
    // [PpmEventTraceControlCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571b04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b6a30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86f4a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be610, 0x1fe000 bytes
    //
    _q43(sdk::unknown_ptr) event_trace_control_callback;
    
    // [PpmEventTraceCoordinatedIdleStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6786e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f0098, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x98c718, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ee788, 0x1fe000 bytes
    //
    _q44(sdk::unknown_ptr) event_trace_coordinated_idle_states;
    
    // [PpmEventTraceDripsAccountingSnapshot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67887c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f0224, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x98c88c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ee914, 0x1fe000 bytes
    //
    _q45(sdk::unknown_ptr) event_trace_drips_accounting_snapshot;
    
    // [PpmEventTraceExpectedUtility]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12d89c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3948a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cedb4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x395908, 0x1fe000 bytes
    //
    _q46(sdk::unknown_ptr) event_trace_expected_utility;
    
    // [PpmEventTraceFailedPerfCheckStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xccbb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x26a1ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x351ab0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31b87c, 0x1fe000 bytes
    //
    _q47(sdk::unknown_ptr) event_trace_failed_perf_check_start;
    
    // [PpmEventTraceHeteroDistributeUtility]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20cab8, 0x32828 bytes
    // ntoskrnl.exe .text:0x574994, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x586af0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x574784, 0x1fe000 bytes
    //
    _q48(sdk::unknown_ptr) event_trace_hetero_distribute_utility;
    
    // [PpmEventTraceHeteroResponse]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20cb98, 0x32828 bytes
    // ntoskrnl.exe .text:0x574a90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x586bec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x574880, 0x1fe000 bytes
    //
    _q49(sdk::unknown_ptr) event_trace_hetero_response;
    
    // [PpmEventTraceLPIState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20cd38, 0x32828 bytes
    // ntoskrnl.exe .text:0x574c3c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x586dbc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x574a2c, 0x1fe000 bytes
    //
    _q50(sdk::unknown_ptr) event_trace_lpi_state;
    
    // [PpmEventTraceMakeupPerfCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20cde4, 0x32828 bytes
    // ntoskrnl.exe .text:0x574d04, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4617f2, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x574af4, 0x1fe000 bytes
    //
    _q51(sdk::unknown_ptr) event_trace_makeup_perf_check;
    
    // [PpmEventTraceParkNodeRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x678940, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f0314, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x98c97c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8eea04, 0x1fe000 bytes
    //
    _q52(sdk::unknown_ptr) event_trace_park_node_rundown;
    
    // [PpmEventTracePlatformIdleAccounting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x678a28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f0440, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x98cabc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8eeb30, 0x1fe000 bytes
    //
    _q53(sdk::unknown_ptr) event_trace_platform_idle_accounting;
    
    // [PpmEventTracePpmProfileStatusRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x678c7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f06a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x98cd04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8eed90, 0x1fe000 bytes
    //
    _q54(sdk::unknown_ptr) event_trace_ppm_profile_status_rundown;
    
    // [PpmEventTracePreVetoAccounting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20ce30, 0x32828 bytes
    // ntoskrnl.exe .text:0x574d68, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x587184, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x574b58, 0x1fe000 bytes
    //
    _q55(sdk::unknown_ptr) event_trace_pre_veto_accounting;
    
    // [PpmEventTraceProcessorIdle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x678d04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f0730, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x98cd94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8eee20, 0x1fe000 bytes
    //
    _q56(sdk::unknown_ptr) event_trace_processor_idle;
    
    // [PpmEventTraceProcessorIdleAccounting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20cfe4, 0x32828 bytes
    // ntoskrnl.exe .text:0x574fa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5873b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x574d90, 0x1fe000 bytes
    //
    _q57(sdk::unknown_ptr) event_trace_processor_idle_accounting;
    
    // [PpmEventTraceProcessorPerformance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x678f44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f0960, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x98cfb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ef050, 0x1fe000 bytes
    //
    _q58(sdk::unknown_ptr) event_trace_processor_performance;
    
    // [PpmEventTraceProfileChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67919c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f1158, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x98d7ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ef848, 0x1fe000 bytes
    //
    _q59(sdk::unknown_ptr) event_trace_profile_change;
    
    // [PpmEventTraceProfileEnable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x568128, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a330c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83dfe8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7afcdc, 0x1fe000 bytes
    //
    _q60(sdk::unknown_ptr) event_trace_profile_enable;
    
    // [PpmEventTraceProfileSetting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x566f44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a7264, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83f6e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7af384, 0x1fe000 bytes
    //
    _q61(sdk::unknown_ptr) event_trace_profile_setting;
    
    // [PpmEventTraceProfiles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x569088, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a7874, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x856768, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7af994, 0x1fe000 bytes
    //
    _q62(sdk::unknown_ptr) event_trace_profiles;
    
    // [PpmEventVetoReasonRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67924c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f120c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x587644, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ef8fc, 0x1fe000 bytes
    //
    _q63(sdk::unknown_ptr) event_veto_reason_rundown;
    
    // [PpmExitCoordinatedIdleState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ffc74, 0x32828 bytes
    // ntoskrnl.exe .text:0x55fe38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x46103e, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x55fc28, 0x1fe000 bytes
    //
    _q64(sdk::unknown_ptr) exit_coordinated_idle_state;
    
    // [PpmExitLatencyCheckEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa250, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2a0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c2f8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2a0, 0x1fe000 bytes
    //
    _q65(sdk::unknown_ptr) exit_latency_check_enabled;
    
    // [PpmExitLatencySamplingPercentage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a524, 0x32828 bytes
    // ntoskrnl.exe .data:0xc541a4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7bd0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb260, 0x1fe000 bytes
    //
    _q66(sdk::unknown_ptr) exit_latency_sampling_percentage;
    
    // [PpmExitLatencySamplingPercentageSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x35913c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9d10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b520, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9d10, 0x1fe000 bytes
    //
    _q67(sdk::unknown_ptr) exit_latency_sampling_percentage_set;
    
    // [PpmFireWmiEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20b40c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5726f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x584098, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5724e8, 0x1fe000 bytes
    //
    _q68(sdk::unknown_ptr) fire_wmi_event;
    
    // [PpmGetDeepSleepPlatformStateIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ffd5c, 0x32828 bytes
    // ntoskrnl.exe .text:0x55ff1c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56fcc4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x55fd0c, 0x1fe000 bytes
    //
    _q69(sdk::unknown_ptr) get_deep_sleep_platform_state_index;
    
    // [PpmGetExitSamplingCountdown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x106b08, 0x32828 bytes
    // ntoskrnl.exe .text:0x280c68, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3518ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35d2f0, 0x1fe000 bytes
    //
    _q70(sdk::unknown_ptr) get_exit_sampling_countdown;
    
    // [PpmGetIdleConstrainedMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ffd78, 0x32828 bytes
    // ntoskrnl.exe .text:0x38c0d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3959a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38d170, 0x1fe000 bytes
    //
    _q71(sdk::unknown_ptr) get_idle_constrained_mask;
    
    // [PpmGetIdleGenerationCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ffe18, 0x32828 bytes
    // ntoskrnl.exe .text:0x55ff40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21d448, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x55fd30, 0x1fe000 bytes
    //
    _q72(sdk::unknown_ptr) get_idle_generation_counter;
    
    // [PpmGetPlatformSelectionVetoCounts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ffe70, 0x32828 bytes
    // ntoskrnl.exe .text:0x55ffa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x398b20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x55fd90, 0x1fe000 bytes
    //
    _q73(sdk::unknown_ptr) get_platform_selection_veto_counts;
    
    // [PpmGetPolicyAction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55e124, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a6d50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83fa84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7aee70, 0x1fe000 bytes
    //
    _q74(sdk::unknown_ptr) get_policy_action;
    
    // [PpmGetThroughputInfoCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20a820, 0x32828 bytes
    // ntoskrnl.exe .text:0x5712b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x461530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5710a0, 0x1fe000 bytes
    //
    _q75(sdk::unknown_ptr) get_throughput_info_callback;
    
    // [PpmHeteroDistributeUtility]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20affc, 0x32828 bytes
    // ntoskrnl.exe .text:0x572140, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5838b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x571f30, 0x1fe000 bytes
    //
    _q76(sdk::unknown_ptr) hetero_distribute_utility;
    
    // [PpmHeteroFavoredCoreFallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab66c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfba14, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1df04, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfba18, 0x1fe000 bytes
    //
    _q77(sdk::unknown_ptr) hetero_favored_core_fallback;
    
    // [PpmHeteroMinRelativePerformance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab450, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb708, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd6c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6f8, 0x1fe000 bytes
    //
    _q78(sdk::unknown_ptr) hetero_min_relative_performance;
    
    // [PpmHeteroPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa050, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa054, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c05c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa054, 0x1fe000 bytes
    //
    _q79(sdk::unknown_ptr) hetero_policy;
    
    // [PpmHeteroRestrictToFavoredClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20b160, 0x32828 bytes
    // ntoskrnl.exe .text:0x5724e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x583ce8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5722d8, 0x1fe000 bytes
    //
    _q80(sdk::unknown_ptr) hetero_restrict_to_favored_class;
    
    // [PpmHeteroUtilityGreaterThanOrEqualThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20b234, 0x32828 bytes
    // ntoskrnl.exe .text:0x5725bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x583e8c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5723ac, 0x1fe000 bytes
    //
    _q81(sdk::unknown_ptr) hetero_utility_greater_than_or_equal_threshold;
    
    // [PpmHighPerfDuration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa290, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2e8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c350, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2e8, 0x1fe000 bytes
    //
    _q82(sdk::unknown_ptr) high_perf_duration;
    
    // [PpmHvPerformanceCounterShift]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab460, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb8fc, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dea8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb8e0, 0x1fe000 bytes
    //
    _q83(sdk::unknown_ptr) hv_performance_counter_shift;
    
    // [PpmHvPerformanceDistributionShift]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab500, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb8f8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1deb0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb8dc, 0x1fe000 bytes
    //
    _q84(sdk::unknown_ptr) hv_performance_distribution_shift;
    
    // [PPM_IDLE_ACCOUNTING_EX_GUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x279800, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x20088, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x26320, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1fff8, 0x1fe000 bytes
    //
    _q85(struct nt::guid_t*) idle_accounting_ex_guid;
    
    // [PpmIdleCaptureCsVetoAccounting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ffeac, 0x32828 bytes
    // ntoskrnl.exe .text:0x55ffe0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56fce8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x55fdd0, 0x1fe000 bytes
    //
    _q86(sdk::unknown_ptr) idle_capture_cs_veto_accounting;
    
    // [PpmIdleCheckCoordinatedDependencies]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x200064, 0x32828 bytes
    // ntoskrnl.exe .text:0x560210, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56ff14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x560000, 0x1fe000 bytes
    //
    _q87(sdk::unknown_ptr) idle_check_coordinated_dependencies;
    
    // [PpmIdleCheckCoordinatedDependency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2001c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x560370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x570084, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x560160, 0x1fe000 bytes
    //
    _q88(sdk::unknown_ptr) idle_check_coordinated_dependency;
    
    // [PpmIdleCheckCoordinatedStateEligibility]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x200488, 0x32828 bytes
    // ntoskrnl.exe .text:0x560640, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x57042c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x560430, 0x1fe000 bytes
    //
    _q89(sdk::unknown_ptr) idle_check_coordinated_state_eligibility;
    
    // [PpmIdleCheckProcessorStateEligibility]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x200670, 0x32828 bytes
    // ntoskrnl.exe .text:0x560840, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5706a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x560630, 0x1fe000 bytes
    //
    _q90(sdk::unknown_ptr) idle_check_processor_state_eligibility;
    
    // [PpmIdleCompleteExitLatencyTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x200740, 0x32828 bytes
    // ntoskrnl.exe .text:0x56093c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5707a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x56072c, 0x1fe000 bytes
    //
    _q91(sdk::unknown_ptr) idle_complete_exit_latency_trace;
    
    // [PpmIdleCoordinatedMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab2d6, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5ac, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dbbd, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5ac, 0x1fe000 bytes
    //
    _q92(sdk::unknown_ptr) idle_coordinated_mode;
    
    // [PpmIdleCsVetoAccountingResiliencyUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2007d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x560aa4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x570908, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x560894, 0x1fe000 bytes
    //
    _q93(sdk::unknown_ptr) idle_cs_veto_accounting_resiliency_update;
    
    // [PpmIdleCsVetoAccountingUpdateBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20085c, 0x32828 bytes
    // ntoskrnl.exe .text:0x560b8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5709f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x56097c, 0x1fe000 bytes
    //
    _q94(sdk::unknown_ptr) idle_cs_veto_accounting_update_block;
    
    // [PpmIdleDefaultComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _q95(sdk::unknown_ptr) idle_default_complete;
    
    // [PpmIdleDefaultExecute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13df54, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b81d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ca490, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b8b60, 0x1fe000 bytes
    //
    _q96(sdk::unknown_ptr) idle_default_execute;
    
    // [PpmIdleDefaultInitiateWake]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1573c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x35a9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1180, 0x1fe000 bytes
    //
    _q97(sdk::unknown_ptr) idle_default_initiate_wake;
    
    // [PpmIdleDefaultIsHalted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1573c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x35a9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1180, 0x1fe000 bytes
    //
    _q98(sdk::unknown_ptr) idle_default_is_halted;
    
    // [PpmIdleExecuteTransition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x55c90, 0x32828 bytes
    // ntoskrnl.exe .text:0x307160, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2262d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2702d0, 0x1fe000 bytes
    //
    _q99(sdk::unknown_ptr) idle_execute_transition;
    
    // [PpmIdleGuestComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20d64c, 0x32828 bytes
    // ntoskrnl.exe .text:0x38c070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x396de0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38d110, 0x1fe000 bytes
    //
    _r00(sdk::unknown_ptr) idle_guest_complete;
    
    // [PpmIdleGuestExecute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20d698, 0x32828 bytes
    // ntoskrnl.exe .text:0x38c000, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3967d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38d0a0, 0x1fe000 bytes
    //
    _r01(sdk::unknown_ptr) idle_guest_execute;
    
    // [PpmIdleGuestPreExecute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20d6c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x38c040, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x396af0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38d0e0, 0x1fe000 bytes
    //
    _r02(sdk::unknown_ptr) idle_guest_pre_execute;
    
    // [PpmIdleGuestPreselect]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20d728, 0x32828 bytes
    // ntoskrnl.exe .text:0x389950, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x392010, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38a9f0, 0x1fe000 bytes
    //
    _r03(sdk::unknown_ptr) idle_guest_preselect;
    
    // [PpmIdleGuestTest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20d870, 0x32828 bytes
    // ntoskrnl.exe .text:0x38c300, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x396e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38d390, 0x1fe000 bytes
    //
    _r04(sdk::unknown_ptr) idle_guest_test;
    
    // [PpmIdleInitializeConcurrency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55e52c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79d4b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83e0a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a4b34, 0x1fe000 bytes
    //
    _r05(sdk::unknown_ptr) idle_initialize_concurrency;
    
    // [PpmIdleInstallConcurrency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x144574, 0x32828 bytes
    // ntoskrnl.exe .text:0x560c50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e0300, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x560a40, 0x1fe000 bytes
    //
    _r06(sdk::unknown_ptr) idle_install_concurrency;
    
    // [PpmIdleInstallDefaultStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x143820, 0x32828 bytes
    // ntoskrnl.exe .text:0x3bf4f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ce100, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c0300, 0x1fe000 bytes
    //
    _r07(sdk::unknown_ptr) idle_install_default_states;
    
    // [PpmIdleIntervalLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa780, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa590, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c6c0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa590, 0x1fe000 bytes
    //
    _r08(sdk::unknown_ptr) idle_interval_limits;
    
    // [PpmIdleLockProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2009e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x560ccc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x570c14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x560abc, 0x1fe000 bytes
    //
    _r09(sdk::unknown_ptr) idle_lock_processor;
    
    // [PpmIdlePolicyLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x304b20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc23b30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3d120, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc23b00, 0x1fe000 bytes
    //
    _r10(sdk::unknown_ptr) idle_policy_lock;
    
    // [PpmIdlePrepare]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57410, 0x32828 bytes
    // ntoskrnl.exe .text:0x308fd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2297d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x272d80, 0x1fe000 bytes
    //
    _r11(sdk::unknown_ptr) idle_prepare;
    
    // [PpmIdlePrevetoWatchdog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x200a2c, 0x32828 bytes
    // ntoskrnl.exe .text:0x560d20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x570c68, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x560b10, 0x1fe000 bytes
    //
    _r12(sdk::unknown_ptr) idle_preveto_watchdog;
    
    // [PpmIdleRegisterDefaultStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5518ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7733f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82ce54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77eaf8, 0x1fe000 bytes
    //
    _r13(sdk::unknown_ptr) idle_register_default_states;
    
    // [PpmIdleRemoveConcurrency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14452c, 0x32828 bytes
    // ntoskrnl.exe .text:0x560e80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x570dc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x560c70, 0x1fe000 bytes
    //
    _r14(sdk::unknown_ptr) idle_remove_concurrency;
    
    // [PpmIdleRemoveVetoBias]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16f064, 0x32828 bytes
    // ntoskrnl.exe .text:0x361ae0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3916f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362f00, 0x1fe000 bytes
    //
    _r15(sdk::unknown_ptr) idle_remove_veto_bias;
    
    // [PpmIdleRollbackCoordinatedSelection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x200c1c, 0x32828 bytes
    // ntoskrnl.exe .text:0x560efc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x570e3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x560cec, 0x1fe000 bytes
    //
    _r16(sdk::unknown_ptr) idle_rollback_coordinated_selection;
    
    // [PpmIdleSelectCoordinatedProcessorDependency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x200c5c, 0x32828 bytes
    // ntoskrnl.exe .text:0x560f44, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x570e80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x560d34, 0x1fe000 bytes
    //
    _r17(sdk::unknown_ptr) idle_select_coordinated_processor_dependency;
    
    // [PpmIdleSelectStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x138f34, 0x32828 bytes
    // ntoskrnl.exe .text:0x390f10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39d260, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x391f60, 0x1fe000 bytes
    //
    _r18(sdk::unknown_ptr) idle_select_states;
    
    // [PpmIdleSetSynchronizationState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x200d10, 0x32828 bytes
    // ntoskrnl.exe .text:0x561000, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x570f3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x560df0, 0x1fe000 bytes
    //
    _r19(sdk::unknown_ptr) idle_set_synchronization_state;
    
    // [PpmIdleSnapConcurrencyIdleTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x200d38, 0x32828 bytes
    // ntoskrnl.exe .text:0x561030, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x570f6c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x560e20, 0x1fe000 bytes
    //
    _r20(sdk::unknown_ptr) idle_snap_concurrency_idle_time;
    
    // [PpmIdleTransitionStall]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x200e6c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5611c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x571060, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x560fb8, 0x1fe000 bytes
    //
    _r21(sdk::unknown_ptr) idle_transition_stall;
    
    // [PpmIdleUpdateConcurrency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1445b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x561260, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e0370, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x561050, 0x1fe000 bytes
    //
    _r22(sdk::unknown_ptr) idle_update_concurrency;
    
    // [PpmIdleUpdateCoordinatedDependencies]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67ac88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f3930, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x991484, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f2020, 0x1fe000 bytes
    //
    _r23(sdk::unknown_ptr) idle_update_coordinated_dependencies;
    
    // [PpmIdleUpdateHvStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67adac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f39f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x991550, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f20e0, 0x1fe000 bytes
    //
    _r24(sdk::unknown_ptr) idle_update_hv_states;
    
    // [PpmIdleUpdatePlatformDependencies]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67adf4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f3a38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x991598, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f2128, 0x1fe000 bytes
    //
    _r25(sdk::unknown_ptr) idle_update_platform_dependencies;
    
    // [PpmIdleUpdateSelectionStatistics]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13924c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5612f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x571198, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5610e8, 0x1fe000 bytes
    //
    _r26(sdk::unknown_ptr) idle_update_selection_statistics;
    
    // [PpmIdleUpdateSynchronizationState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x200ef8, 0x32828 bytes
    // ntoskrnl.exe .text:0x561368, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x571210, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x561158, 0x1fe000 bytes
    //
    _r27(sdk::unknown_ptr) idle_update_synchronization_state;
    
    // [PpmIdleUsingStateSelection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x106950, 0x32828 bytes
    // ntoskrnl.exe .text:0x27f8dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x351918, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35d17c, 0x1fe000 bytes
    //
    _r28(sdk::unknown_ptr) idle_using_state_selection;
    
    // [PpmIdleVetoBias]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5d9c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0f0f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0978c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f130, 0x1fe000 bytes
    //
    _r29(sdk::unknown_ptr) idle_veto_bias;
    
    // [PpmIdleVetoList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342680, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4d50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd176a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4d50, 0x1fe000 bytes
    //
    _r30(sdk::unknown_ptr) idle_veto_list;
    
    // [PpmIdleVetoLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x304b40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc23b28, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3d130, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc23af8, 0x1fe000 bytes
    //
    _r31(sdk::unknown_ptr) idle_veto_lock;
    
    // [PpmIdleWaitForDependentTransitions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x200f3c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5613b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x57125c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5611a4, 0x1fe000 bytes
    //
    _r32(sdk::unknown_ptr) idle_wait_for_dependent_transitions;
    
    // [PPM_IDLESTATE_CHANGE_GUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x279810, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x20098, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x26310, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x20008, 0x1fe000 bytes
    //
    _r33(struct nt::guid_t*) idlestate_change_guid;
    
    // [PPM_IDLESTATES_DATA_GUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2797e0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x20068, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x26340, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ffd8, 0x1fe000 bytes
    //
    _r34(struct nt::guid_t*) idlestates_data_guid;
    
    // [PpmInfoAdjustSetting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f4040, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x623408, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83f3ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70f1a4, 0x1fe000 bytes
    //
    _r35(sdk::unknown_ptr) info_adjust_setting;
    
    // [PpmInfoConfigComparer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a01c8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa676d0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb519c0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa66cc0, 0x1fe000 bytes
    //
    _r36(sdk::unknown_ptr) info_config_comparer;
    
    // [PpmInfoDefaultProfileName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa580, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa3c0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c4b0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa3c0, 0x1fe000 bytes
    //
    _r37(sdk::unknown_ptr) info_default_profile_name;
    
    // [PpmInfoRegisterCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a1df4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa67f70, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb53f30, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa67560, 0x1fe000 bytes
    //
    _r38(sdk::unknown_ptr) info_register_callbacks;
    
    // [PpmInfoTraceProfileSettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x677664, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8edb60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x986ae8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ec230, 0x1fe000 bytes
    //
    _r39(sdk::unknown_ptr) info_trace_profile_settings;
    
    // [PpmInfoWriteData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f40f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6234c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83f4b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70f260, 0x1fe000 bytes
    //
    _r40(sdk::unknown_ptr) info_write_data;
    
    // [PpmInitCoreParkingPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a88a4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6f690, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5eae0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6ea20, 0x1fe000 bytes
    //
    _r41(sdk::unknown_ptr) init_core_parking_policy;
    
    // [PpmInitHeteroPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a1cb4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa685a4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb51040, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa67c7c, 0x1fe000 bytes
    //
    _r42(sdk::unknown_ptr) init_hetero_policy;
    
    // [PpmInitIdlePolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a3384, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa692fc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb53af4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa689d4, 0x1fe000 bytes
    //
    _r43(sdk::unknown_ptr) init_idle_policy;
    
    // [PpmInitIllegalThrottleLogging]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13a65c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c2448, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ab3bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c3258, 0x1fe000 bytes
    //
    _r44(sdk::unknown_ptr) init_illegal_throttle_logging;
    
    // [PpmInitPolicyConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a274c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa674c4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4b5b0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa67b94, 0x1fe000 bytes
    //
    _r45(sdk::unknown_ptr) init_policy_configuration;
    
    // [PpmInstallCoordinatedIdleStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66f4b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8deb30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9758f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8dd330, 0x1fe000 bytes
    //
    _r46(sdk::unknown_ptr) install_coordinated_idle_states;
    
    // [PpmInstallFeedbackCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x140498, 0x32828 bytes
    // ntoskrnl.exe .text:0x3bd578, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c7fac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3be2b8, 0x1fe000 bytes
    //
    _r47(sdk::unknown_ptr) install_feedback_counters;
    
    // [PpmInstallNewIdleDomains]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x200ff4, 0x32828 bytes
    // ntoskrnl.exe .text:0x561480, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x571330, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x561270, 0x1fe000 bytes
    //
    _r48(sdk::unknown_ptr) install_new_idle_domains;
    
    // [PpmInstallNewIdleStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x143830, 0x32828 bytes
    // ntoskrnl.exe .text:0x3bf510, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ce120, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c0320, 0x1fe000 bytes
    //
    _r49(sdk::unknown_ptr) install_new_idle_states;
    
    // [PpmInstallPlatformIdleStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66fa28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8df0d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x975f30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8dd8d0, 0x1fe000 bytes
    //
    _r50(sdk::unknown_ptr) install_platform_idle_states;
    
    // [PpmIntSteerDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a03c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc54284, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6ab94, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc54248, 0x1fe000 bytes
    //
    _r51(sdk::unknown_ptr) int_steer_disabled;
    
    // [PpmIntSteerLoadMax]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5f08, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0f340, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09a10, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f3a0, 0x1fe000 bytes
    //
    _r52(sdk::unknown_ptr) int_steer_load_max;
    
    // [PpmIntSteerMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a040, 0x32828 bytes
    // ntoskrnl.exe .data:0xc54288, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6ab98, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc54244, 0x1fe000 bytes
    //
    _r53(sdk::unknown_ptr) int_steer_mode;
    
    // [PpmIntSteerTrigger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302678, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1e740, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38760, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e768, 0x1fe000 bytes
    //
    _r54(sdk::unknown_ptr) int_steer_trigger;
    
    // [PpmIntSteerTriggerMax]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5f10, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0f348, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09a08, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f398, 0x1fe000 bytes
    //
    _r55(sdk::unknown_ptr) int_steer_trigger_max;
    
    // [PpmInterlockedUpdateTimeNoFence]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8fb30, 0x32828 bytes
    // ntoskrnl.exe .text:0x292a80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28b06c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x237320, 0x1fe000 bytes
    //
    _r56(sdk::unknown_ptr) interlocked_update_time_no_fence;
    
    // [PpmIpiLastClockOwnerDisable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab4f4, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb8d8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dea0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb8ec, 0x1fe000 bytes
    //
    _r57(sdk::unknown_ptr) ipi_last_clock_owner_disable;
    
    // [PpmIsParkingEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302658, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1e71c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38d00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e73c, 0x1fe000 bytes
    //
    _r58(sdk::unknown_ptr) is_parking_enabled;
    
    // [PpmLatencyToleranceLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa2f8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa310, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c3e8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa310, 0x1fe000 bytes
    //
    _r59(sdk::unknown_ptr) latency_tolerance_limit;
    
    // [PpmLowPowerProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302740, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1ed40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38f28, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1ed68, 0x1fe000 bytes
    //
    _r60(sdk::unknown_ptr) low_power_profile;
    
    // [PpmMediaBufferingWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305440, 0x32828 bytes
    // ntoskrnl.exe .data:0xc244e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3e480, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc244e0, 0x1fe000 bytes
    //
    _r61(sdk::unknown_ptr) media_buffering_work;
    
    // [PpmMediaBufferingWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10c6d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x368230, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e0860, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3695e0, 0x1fe000 bytes
    //
    _r62(sdk::unknown_ptr) media_buffering_worker;
    
    // [PpmMfBufferingThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab448, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6f8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd84, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb710, 0x1fe000 bytes
    //
    _r63(sdk::unknown_ptr) mf_buffering_threshold;
    
    // [PpmMfOverridesDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa308, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2cc, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c434, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2cc, 0x1fe000 bytes
    //
    _r64(sdk::unknown_ptr) mf_overrides_disabled;
    
    // [PpmNonInterruptibleCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a528, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdb258, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7be0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb264, 0x1fe000 bytes
    //
    _r65(sdk::unknown_ptr) non_interruptible_count;
    
    // [PpmParkApplyForcedMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67b04c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f6474, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x991620, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f4b64, 0x1fe000 bytes
    //
    _r66(sdk::unknown_ptr) park_apply_forced_mask;
    
    // [PpmParkApplyPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x140c8c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3bdf84, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c8af8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3becc4, 0x1fe000 bytes
    //
    _r67(sdk::unknown_ptr) park_apply_policy;
    
    // [PpmParkCalculateCoreParkingMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xec2a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x250a80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x363400, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2feb10, 0x1fe000 bytes
    //
    _r68(sdk::unknown_ptr) park_calculate_core_parking_mask;
    
    // [PpmParkCalculateUnparkCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xec958, 0x32828 bytes
    // ntoskrnl.exe .text:0x255340, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36b430, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x304720, 0x1fe000 bytes
    //
    _r69(sdk::unknown_ptr) park_calculate_unpark_count;
    
    // [PpmParkClearForcedMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67b114, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f6574, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x991720, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f4c64, 0x1fe000 bytes
    //
    _r70(sdk::unknown_ptr) park_clear_forced_mask;
    
    // [PpmParkComputeDiff]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20dea0, 0x32828 bytes
    // ntoskrnl.exe .text:0x577204, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x461aec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x576ff4, 0x1fe000 bytes
    //
    _r71(sdk::unknown_ptr) park_compute_diff;
    
    // [PpmParkCoreMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30266a, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1e728, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38d04, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e750, 0x1fe000 bytes
    //
    _r72(sdk::unknown_ptr) park_core_mask;
    
    // [PpmParkDistributeUtility]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xec990, 0x32828 bytes
    // ntoskrnl.exe .text:0x30cfb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21f790, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2786c0, 0x1fe000 bytes
    //
    _r73(sdk::unknown_ptr) park_distribute_utility;
    
    // [PpmParkGranularity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302669, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1e72a, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38d29, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e741, 0x1fe000 bytes
    //
    _r74(sdk::unknown_ptr) park_granularity;
    
    // [PpmParkHistograms]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302660, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1e720, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38d10, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e748, 0x1fe000 bytes
    //
    _r75(sdk::unknown_ptr) park_histograms;
    
    // [PpmParkInitialClass1UnParkCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab44c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6fc, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd70, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb714, 0x1fe000 bytes
    //
    _r76(sdk::unknown_ptr) park_initial_class1_un_park_count;
    
    // [PpmParkLpiCap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342694, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4d6c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd176c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4d6c, 0x1fe000 bytes
    //
    _r77(sdk::unknown_ptr) park_lpi_cap;
    
    // [PpmParkLpiCapChanged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x359188, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9d68, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b5c4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9d68, 0x1fe000 bytes
    //
    _r78(sdk::unknown_ptr) park_lpi_cap_changed;
    
    // [PpmParkLpiEngaged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x359184, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9d64, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b5c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9d64, 0x1fe000 bytes
    //
    _r79(sdk::unknown_ptr) park_lpi_engaged;
    
    // [PpmParkMaskHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3054a8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc24630, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3e618, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc245f8, 0x1fe000 bytes
    //
    _r80(sdk::unknown_ptr) park_mask_handler;
    
    // [PpmParkMaximumCoresParked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcd618, 0x32828 bytes
    // ntoskrnl.exe .text:0x280ae8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58b094, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fea9c, 0x1fe000 bytes
    //
    _r81(sdk::unknown_ptr) park_maximum_cores_parked;
    
    // [PpmParkMultiparkGranularity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa170, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa130, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c15c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa130, 0x1fe000 bytes
    //
    _r82(sdk::unknown_ptr) park_multipark_granularity;
    
    // [PpmParkNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302670, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1e730, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38d30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e758, 0x1fe000 bytes
    //
    _r83(sdk::unknown_ptr) park_nodes;
    
    // [PpmParkNumNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30266c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1e738, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38d2c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e760, 0x1fe000 bytes
    //
    _r84(sdk::unknown_ptr) park_num_nodes;
    
    // [PpmParkParkingAvailable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55e458, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79d3a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83fee4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a4a20, 0x1fe000 bytes
    //
    _r85(sdk::unknown_ptr) park_parking_available;
    
    // [PpmParkPreferenceHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305490, 0x32828 bytes
    // ntoskrnl.exe .data:0xc24638, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3e610, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc24600, 0x1fe000 bytes
    //
    _r86(sdk::unknown_ptr) park_preference_handler;
    
    // [PpmParkRecordNodeStatistics]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x53440, 0x32828 bytes
    // ntoskrnl.exe .text:0x2391e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3535d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e72d0, 0x1fe000 bytes
    //
    _r87(sdk::unknown_ptr) park_record_node_statistics;
    
    // [PpmParkRegisterParking]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x140634, 0x32828 bytes
    // ntoskrnl.exe .text:0x3bd760, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c7850, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3be4a0, 0x1fe000 bytes
    //
    _r88(sdk::unknown_ptr) park_register_parking;
    
    // [PpmParkReportMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xec1e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x256390, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36ce00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3058d0, 0x1fe000 bytes
    //
    _r89(sdk::unknown_ptr) park_report_mask;
    
    // [PpmParkReportParkedCore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20df1c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5779b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58b10c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5777a4, 0x1fe000 bytes
    //
    _r90(sdk::unknown_ptr) park_report_parked_core;
    
    // [PpmParkReportParkedCores]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xec220, 0x32828 bytes
    // ntoskrnl.exe .text:0x24f260, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35f360, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fc9f0, 0x1fe000 bytes
    //
    _r91(sdk::unknown_ptr) park_report_parked_cores;
    
    // [PpmParkReportUnparkedCore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20df9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x577b60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x461be8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x577950, 0x1fe000 bytes
    //
    _r92(sdk::unknown_ptr) park_report_unparked_core;
    
    // [PpmParkReportUnparkedCores]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xec1f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2523e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x368a50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3003a0, 0x1fe000 bytes
    //
    _r93(sdk::unknown_ptr) park_report_unparked_cores;
    
    // [PpmParkSetLpiCap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20e00c, 0x32828 bytes
    // ntoskrnl.exe .text:0x577c14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58b29c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x577a04, 0x1fe000 bytes
    //
    _r94(sdk::unknown_ptr) park_set_lpi_cap;
    
    // [PpmParkSnapNodeIdleTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20e15c, 0x32828 bytes
    // ntoskrnl.exe .text:0x577d78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58b408, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x577b68, 0x1fe000 bytes
    //
    _r95(sdk::unknown_ptr) park_snap_node_idle_time;
    
    // [PpmParkStateLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x304b38, 0x32828 bytes
    // ntoskrnl.exe .data:0xc23b20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3d110, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc23b60, 0x1fe000 bytes
    //
    _r96(sdk::unknown_ptr) park_state_lock;
    
    // [PpmParkSteerInterrupts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x536e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x30b5f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21f110, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x276c50, 0x1fe000 bytes
    //
    _r97(sdk::unknown_ptr) park_steer_interrupts;
    
    // [PpmParkThermalCap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342698, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4d70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd176cc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4d70, 0x1fe000 bytes
    //
    _r98(sdk::unknown_ptr) park_thermal_cap;
    
    // [PpmParkUnblockIdle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xec264, 0x32828 bytes
    // ntoskrnl.exe .text:0x252390, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x368a00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x300350, 0x1fe000 bytes
    //
    _r99(sdk::unknown_ptr) park_unblock_idle;
    
    // [PpmParkUnparkCores]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302668, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1e729, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38d2a, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e740, 0x1fe000 bytes
    //
    _s00(sdk::unknown_ptr) park_unpark_cores;
    
    // [PpmParkUpdateConcurrencyTracking]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55e354, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79d2c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83fff8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a4948, 0x1fe000 bytes
    //
    _s01(sdk::unknown_ptr) park_update_concurrency_tracking;
    
    // [PpmPdcMediaEngaged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305428, 0x32828 bytes
    // ntoskrnl.exe .data:0xc24510, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3e4b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc24510, 0x1fe000 bytes
    //
    _s02(sdk::unknown_ptr) pdc_media_engaged;
    
    // [PpmPdcNotifyMediaBufferingUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67a620, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f2fa4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8920b6, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f1694, 0x1fe000 bytes
    //
    _s03(sdk::unknown_ptr) pdc_notify_media_buffering_update;
    
    // [PpmPerfAction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x54360, 0x32828 bytes
    // ntoskrnl.exe .text:0x304200, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21d200, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26e680, 0x1fe000 bytes
    //
    _s04(sdk::unknown_ptr) perf_action;
    
    // [PpmPerfApplyCapsAndFloors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xed250, 0x32828 bytes
    // ntoskrnl.exe .text:0x249dcc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cdf94, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f473c, 0x1fe000 bytes
    //
    _s05(sdk::unknown_ptr) perf_apply_caps_and_floors;
    
    // [PpmPerfApplyDomainState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xecdc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x249810, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cd964, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f4180, 0x1fe000 bytes
    //
    _s06(sdk::unknown_ptr) perf_apply_domain_state;
    
    // [PpmPerfApplyDomainStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xec070, 0x32828 bytes
    // ntoskrnl.exe .text:0x2497a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x363870, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f4110, 0x1fe000 bytes
    //
    _s07(sdk::unknown_ptr) perf_apply_domain_states;
    
    // [PpmPerfApplyLatencyHint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10f4d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3783b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d7554, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x379734, 0x1fe000 bytes
    //
    _s08(sdk::unknown_ptr) perf_apply_latency_hint;
    
    // [PpmPerfApplyLatencyHints]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xec2e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2562e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36cd50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x305820, 0x1fe000 bytes
    //
    _s09(sdk::unknown_ptr) perf_apply_latency_hints;
    
    // [PpmPerfApplyProcessorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12d718, 0x32828 bytes
    // ntoskrnl.exe .text:0x3944bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ce8cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39551c, 0x1fe000 bytes
    //
    _s10(sdk::unknown_ptr) perf_apply_processor_state;
    
    // [PpmPerfApplyProcessorStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12d5d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3942d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ce6d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x395330, 0x1fe000 bytes
    //
    _s11(sdk::unknown_ptr) perf_apply_processor_states;
    
    // [PpmPerfArtificialDomainEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab380, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb608, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dc60, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb604, 0x1fe000 bytes
    //
    _s12(sdk::unknown_ptr) perf_artificial_domain_enabled;
    
    // [PpmPerfArtificialDomainSetting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa168, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa12c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c168, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa12c, 0x1fe000 bytes
    //
    _s13(sdk::unknown_ptr) perf_artificial_domain_setting;
    
    // [PpmPerfBoostAtGuaranteed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab37c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5fc, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dc58, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb608, 0x1fe000 bytes
    //
    _s14(sdk::unknown_ptr) perf_boost_at_guaranteed;
    
    // [PpmPerfCalculateActualUtilization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa164, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa124, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c160, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa124, 0x1fe000 bytes
    //
    _s15(sdk::unknown_ptr) perf_calculate_actual_utilization;
    
    // [PpmPerfChangedCoreParkingMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9f70, 0x32828 bytes
    // ntoskrnl.exe .data:0xc129a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0d710, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12960, 0x1fe000 bytes
    //
    _s16(sdk::unknown_ptr) perf_changed_core_parking_mask;
    
    // [PpmPerfCommitPerformance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x130328, 0x32828 bytes
    // ntoskrnl.exe .text:0x3967f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e8aa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x397810, 0x1fe000 bytes
    //
    _s17(sdk::unknown_ptr) perf_commit_performance;
    
    // [PpmPerfComputePerfReductionTolerance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x205284, 0x32828 bytes
    // ntoskrnl.exe .text:0x568a14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c82a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x568804, 0x1fe000 bytes
    //
    _s18(sdk::unknown_ptr) perf_compute_perf_reduction_tolerance;
    
    // [PpmPerfControlAcquirePerformance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305480, 0x32828 bytes
    // ntoskrnl.exe .data:0xc24608, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3e508, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc24610, 0x1fe000 bytes
    //
    _s19(sdk::unknown_ptr) perf_control_acquire_performance;
    
    // [PpmPerfControlActionCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2052ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x568a50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4613a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x568840, 0x1fe000 bytes
    //
    _s20(sdk::unknown_ptr) perf_control_action_callback;
    
    // [PpmPerfControlCommitPerformance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305498, 0x32828 bytes
    // ntoskrnl.exe .data:0xc24600, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3e510, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc24608, 0x1fe000 bytes
    //
    _s21(sdk::unknown_ptr) perf_control_commit_performance;
    
    // [PpmPerfControlCompletePolicyUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3054b0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc24640, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3e5f8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc24618, 0x1fe000 bytes
    //
    _s22(sdk::unknown_ptr) perf_control_complete_policy_update;
    
    // [PpmPerfControlExecuteAction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x130334, 0x32828 bytes
    // ntoskrnl.exe .text:0x251d3c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3682bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ffe2c, 0x1fe000 bytes
    //
    _s23(sdk::unknown_ptr) perf_control_execute_action;
    
    // [PpmPerfControlReadFeedback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305488, 0x32828 bytes
    // ntoskrnl.exe .data:0xc24610, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3e520, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc24518, 0x1fe000 bytes
    //
    _s24(sdk::unknown_ptr) perf_control_read_feedback;
    
    // [PpmPerfControlStartPolicyUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3054b8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc24620, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3e608, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc24620, 0x1fe000 bytes
    //
    _s25(sdk::unknown_ptr) perf_control_start_policy_update;
    
    // [PpmPerfCoreParkingMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f98a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11250, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0bda0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc112c0, 0x1fe000 bytes
    //
    _s26(sdk::unknown_ptr) perf_core_parking_mask;
    
    // [PpmPerfDomainCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab33c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb604, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dbe4, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5fc, 0x1fe000 bytes
    //
    _s27(sdk::unknown_ptr) perf_domain_count;
    
    // [PpmPerfDomainHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab348, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4e0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dae0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4e0, 0x1fe000 bytes
    //
    _s28(sdk::unknown_ptr) perf_domain_head;
    
    // [PpmPerfFeedbackCounterRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1405d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3bd6fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c821c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3be43c, 0x1fe000 bytes
    //
    _s29(sdk::unknown_ptr) perf_feedback_counter_read;
    
    // [PpmPerfForceDomainStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f928, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a28e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e5060, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a3e30, 0x1fe000 bytes
    //
    _s30(sdk::unknown_ptr) perf_force_domain_states;
    
    // [PpmPerfGetCurrentFrequency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x147c68, 0x32828 bytes
    // ntoskrnl.exe .text:0x2639c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21e0e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x314010, 0x1fe000 bytes
    //
    _s31(sdk::unknown_ptr) perf_get_current_frequency;
    
    // [PpmPerfGetCurrentState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcfb4c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2638f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36b8f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x313f48, 0x1fe000 bytes
    //
    _s32(sdk::unknown_ptr) perf_get_current_state;
    
    // [PpmPerfGlobalContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305470, 0x32828 bytes
    // ntoskrnl.exe .data:0xc24618, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3e518, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc24520, 0x1fe000 bytes
    //
    _s33(sdk::unknown_ptr) perf_global_context;
    
    // [PpmPerfIdealAggressiveIncreaseThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa1a8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa20c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c258, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa214, 0x1fe000 bytes
    //
    _s34(sdk::unknown_ptr) perf_ideal_aggressive_increase_threshold;
    
    // [PpmPerfInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a79bc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa69954, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb51500, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6902c, 0x1fe000 bytes
    //
    _s35(sdk::unknown_ptr) perf_initialize;
    
    // [PpmPerfLatencyBoostExpiration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305420, 0x32828 bytes
    // ntoskrnl.exe .data:0xc244c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3e500, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc244c8, 0x1fe000 bytes
    //
    _s36(sdk::unknown_ptr) perf_latency_boost_expiration;
    
    // [PpmPerfLatencyBoostQueued]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30542c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc24514, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3e4b4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2449c, 0x1fe000 bytes
    //
    _s37(sdk::unknown_ptr) perf_latency_boost_queued;
    
    // [PpmPerfLatencyBoostWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305400, 0x32828 bytes
    // ntoskrnl.exe .data:0xc24520, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3e4e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc244a0, 0x1fe000 bytes
    //
    _s38(sdk::unknown_ptr) perf_latency_boost_work_item;
    
    // [PpmPerfLatencySensitivityHintWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x133cc4, 0x32828 bytes
    // ntoskrnl.exe .text:0x37de70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e9e70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37f1f0, 0x1fe000 bytes
    //
    _s39(sdk::unknown_ptr) perf_latency_sensitivity_hint_worker;
    
    // [PpmPerfMaxOverrideEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3053f8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc244b8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3e478, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc24498, 0x1fe000 bytes
    //
    _s40(sdk::unknown_ptr) perf_max_override_enabled;
    
    // [PpmPerfMinimumPerfReached]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6dac0, 0x32828 bytes
    // ntoskrnl.exe .text:0x280a80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x57886c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fea34, 0x1fe000 bytes
    //
    _s41(sdk::unknown_ptr) perf_minimum_perf_reached;
    
    // [PpmPerfNewCoreParkingMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fa020, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12630, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0d2d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc126a0, 0x1fe000 bytes
    //
    _s42(sdk::unknown_ptr) perf_new_core_parking_mask;
    
    // [PpmPerfNewUnparkedMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9e10, 0x32828 bytes
    // ntoskrnl.exe .data:0xc128f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0d3e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12800, 0x1fe000 bytes
    //
    _s43(sdk::unknown_ptr) perf_new_unparked_mask;
    
    // [PpmPerfPolicyLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x304b60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc23b60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3d0e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc23b40, 0x1fe000 bytes
    //
    _s44(sdk::unknown_ptr) perf_policy_lock;
    
    // [PpmPerfProcCapFloorSettingCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6777f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8edcf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x986c70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ec3c0, 0x1fe000 bytes
    //
    _s45(sdk::unknown_ptr) perf_proc_cap_floor_setting_callback;
    
    // [PpmPerfQueueAction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12da5c, 0x32828 bytes
    // ntoskrnl.exe .text:0x394a4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b2ab0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x395aac, 0x1fe000 bytes
    //
    _s46(sdk::unknown_ptr) perf_queue_action;
    
    // [PpmPerfReApplyStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52158c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75d6b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97a324, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x765100, 0x1fe000 bytes
    //
    _s47(sdk::unknown_ptr) perf_re_apply_states;
    
    // [PpmPerfReadFeedback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbde80, 0x32828 bytes
    // ntoskrnl.exe .text:0x251d20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3682a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ffe10, 0x1fe000 bytes
    //
    _s48(sdk::unknown_ptr) perf_read_feedback;
    
    // [PpmPerfRecordUtility]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x53220, 0x32828 bytes
    // ntoskrnl.exe .text:0x238f30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21e830, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e7020, 0x1fe000 bytes
    //
    _s49(sdk::unknown_ptr) perf_record_utility;
    
    // [PpmPerfReductionBoostPolicies]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2811a0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x33af4, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x282d8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33e3c, 0x1fe000 bytes
    //
    _s50(sdk::unknown_ptr) perf_reduction_boost_policies;
    
    // [PpmPerfReductionOffsetPercent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x281198, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x33afc, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x282e0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33e34, 0x1fe000 bytes
    //
    _s51(sdk::unknown_ptr) perf_reduction_offset_percent;
    
    // [PpmPerfRegisterHvPerfStateCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67aedc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f3b20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x991370, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f2210, 0x1fe000 bytes
    //
    _s52(sdk::unknown_ptr) perf_register_hv_perf_state_counters;
    
    // [PpmPerfRegisterNativePerfStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55d668, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79c490, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83e090, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a3b10, 0x1fe000 bytes
    //
    _s53(sdk::unknown_ptr) perf_register_native_perf_states;
    
    // [PpmPerfReportedCoreParkingMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9ec0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12840, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0d820, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12a10, 0x1fe000 bytes
    //
    _s54(sdk::unknown_ptr) perf_reported_core_parking_mask;
    
    // [PpmPerfResetHistory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x141090, 0x32828 bytes
    // ntoskrnl.exe .text:0x3be5e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ca068, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bf324, 0x1fe000 bytes
    //
    _s55(sdk::unknown_ptr) perf_reset_history;
    
    // [PpmPerfResetHistoryAll]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55ea88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79dfd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8413c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a5654, 0x1fe000 bytes
    //
    _s56(sdk::unknown_ptr) perf_reset_history_all;
    
    // [PpmPerfResizeHistoryAll]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55eadc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8e3214, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97a41c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8e19b4, 0x1fe000 bytes
    //
    _s57(sdk::unknown_ptr) perf_resize_history_all;
    
    // [PpmPerfSelectDomainStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xec350, 0x32828 bytes
    // ntoskrnl.exe .text:0x247d10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x358fc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f2fc0, 0x1fe000 bytes
    //
    _s58(sdk::unknown_ptr) perf_select_domain_states;
    
    // [PpmPerfSelectProcessorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xec4c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x23ae00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21d5b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e8470, 0x1fe000 bytes
    //
    _s59(sdk::unknown_ptr) perf_select_processor_state;
    
    // [PpmPerfSelectProcessorStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xec3f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x23ad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21d520, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e83e0, 0x1fe000 bytes
    //
    _s60(sdk::unknown_ptr) perf_select_processor_states;
    
    // [PpmPerfSingleStepSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa0a4, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa0bc, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c0e8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa0bc, 0x1fe000 bytes
    //
    _s61(sdk::unknown_ptr) perf_single_step_size;
    
    // [PpmPerfSnapUtility]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x549e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x568b4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ca190, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x56893c, 0x1fe000 bytes
    //
    _s62(sdk::unknown_ptr) perf_snap_utility;
    
    // [PpmPerfStatesRegistered]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9740, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11490, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0bf10, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc114f0, 0x1fe000 bytes
    //
    _s63(sdk::unknown_ptr) perf_states_registered;
    
    // [PpmPerfTimeWindow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305478, 0x32828 bytes
    // ntoskrnl.exe .data:0xc245f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3e528, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc245f0, 0x1fe000 bytes
    //
    _s64(sdk::unknown_ptr) perf_time_window;
    
    // [PPM_PERFMON_PERFSTATE_GUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2797c0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x20048, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x26360, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ffb8, 0x1fe000 bytes
    //
    _s65(struct nt::guid_t*) perfmon_perfstate_guid;
    
    // [PpmPerformanceCounterShift]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab45c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb8f4, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1deac, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb8d8, 0x1fe000 bytes
    //
    _s66(sdk::unknown_ptr) performance_counter_shift;
    
    // [PpmPerformanceDistributionShift]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab4fc, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb8f0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dea4, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb82c, 0x1fe000 bytes
    //
    _s67(sdk::unknown_ptr) performance_distribution_shift;
    
    // [PPM_PERFSTATE_CHANGE_GUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x279830, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x200b8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x262f0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x20028, 0x1fe000 bytes
    //
    _s68(struct nt::guid_t*) perfstate_change_guid;
    
    // [PPM_PERFSTATE_DOMAIN_CHANGE_GUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x279820, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x200a8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x26300, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x20018, 0x1fe000 bytes
    //
    _s69(struct nt::guid_t*) perfstate_domain_change_guid;
    
    // [PPM_PERFSTATES_DATA_GUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2797f0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x20078, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x26330, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ffe8, 0x1fe000 bytes
    //
    _s70(struct nt::guid_t*) perfstates_data_guid;
    
    // [PpmPlatformIdleHint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341f00, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf42b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7bd8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf42b0, 0x1fe000 bytes
    //
    _s71(sdk::unknown_ptr) platform_idle_hint;
    
    // [PpmPlatformStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab238, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb428, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da30, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb428, 0x1fe000 bytes
    //
    _s72(sdk::unknown_ptr) platform_states;
    
    // [PpmPolicyAliasList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa9f0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfaa00, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c990, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfaa00, 0x1fe000 bytes
    //
    _s73(sdk::unknown_ptr) policy_alias_list;
    
    // [PpmPolicyConfigTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aab30, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfab40, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1d010, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfab40, 0x1fe000 bytes
    //
    _s74(sdk::unknown_ptr) policy_config_table;
    
    // [PpmPostProcessMediaBuffering]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67a638, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f2fc8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x990d34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f16b8, 0x1fe000 bytes
    //
    _s75(sdk::unknown_ptr) post_process_media_buffering;
    
    // [PpmProcessSettingsFromQueryTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67a6bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f3078, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x990e34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f1768, 0x1fe000 bytes
    //
    _s76(sdk::unknown_ptr) process_settings_from_query_table;
    
    // [PpmProcessorDriverDispatchTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6f0450, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x985170, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa698c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x983a50, 0x1fe000 bytes
    //
    _s77(sdk::unknown_ptr) processor_driver_dispatch_table;
    
    // [PpmProfileAcDcUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67a824, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f31ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x990fbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f18dc, 0x1fe000 bytes
    //
    _s78(sdk::unknown_ptr) profile_ac_dc_update;
    
    // [PpmProfileCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302738, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1ed28, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38f1c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1ed60, 0x1fe000 bytes
    //
    _s79(sdk::unknown_ptr) profile_count;
    
    // [PpmProfileStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30273c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1ed38, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38f18, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1ed64, 0x1fe000 bytes
    //
    _s80(sdk::unknown_ptr) profile_status;
    
    // [PpmProfiles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x302730, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1ed30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38f20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1ed58, 0x1fe000 bytes
    //
    _s81(sdk::unknown_ptr) profiles;
    
    // [PpmQueryDripsResidency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x201078, 0x32828 bytes
    // ntoskrnl.exe .text:0x5615e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5714d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5613d0, 0x1fe000 bytes
    //
    _s82(sdk::unknown_ptr) query_drips_residency;
    
    // [PpmQueryPlatformStateResidency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x201084, 0x32828 bytes
    // ntoskrnl.exe .text:0x5615fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39cf98, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5613ec, 0x1fe000 bytes
    //
    _s83(sdk::unknown_ptr) query_platform_state_residency;
    
    // [PpmQueryTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9d42c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3be5cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c7838, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bf30c, 0x1fe000 bytes
    //
    _s84(sdk::unknown_ptr) query_time;
    
    // [PpmReapplyIdlePolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x670020, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8df71c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9765e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ddf1c, 0x1fe000 bytes
    //
    _s85(sdk::unknown_ptr) reapply_idle_policy;
    
    // [PpmReapplyPerfPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55e010, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79d0c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83f770, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a4740, 0x1fe000 bytes
    //
    _s86(sdk::unknown_ptr) reapply_perf_policy;
    
    // [PpmRegisterPerfCap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2052d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x38e4e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5788e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38f530, 0x1fe000 bytes
    //
    _s87(sdk::unknown_ptr) register_perf_cap;
    
    // [PpmRegisterPerfStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55d700, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79c6a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83e340, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a3d20, 0x1fe000 bytes
    //
    _s88(sdk::unknown_ptr) register_perf_states;
    
    // [PpmRegisterProfiles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x568ea8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a7668, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x856598, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7af788, 0x1fe000 bytes
    //
    _s89(sdk::unknown_ptr) register_profiles;
    
    // [PpmRegisterSpmSettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67a8d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f3290, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x991060, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f1980, 0x1fe000 bytes
    //
    _s90(sdk::unknown_ptr) register_spm_settings;
    
    // [PpmRegisterVetoList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x670050, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8df750, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x976610, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ddf50, 0x1fe000 bytes
    //
    _s91(sdk::unknown_ptr) register_veto_list;
    
    // [PpmReleaseLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x106860, 0x32828 bytes
    // ntoskrnl.exe .text:0x30cf70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x351770, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x278680, 0x1fe000 bytes
    //
    _s92(sdk::unknown_ptr) release_lock;
    
    // [PpmRemoveIdleStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x201180, 0x32828 bytes
    // ntoskrnl.exe .text:0x561720, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5714f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x561510, 0x1fe000 bytes
    //
    _s93(sdk::unknown_ptr) remove_idle_states;
    
    // [PpmResetIdlePolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x143d8c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3bfa98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ce688, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c08a8, 0x1fe000 bytes
    //
    _s94(sdk::unknown_ptr) reset_idle_policy;
    
    // [PpmResetInterruptRate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20d60c, 0x32828 bytes
    // ntoskrnl.exe .text:0x576670, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x461a90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x576460, 0x1fe000 bytes
    //
    _s95(sdk::unknown_ptr) reset_interrupt_rate;
    
    // [PpmResetPerfEngineForProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11217c, 0x32828 bytes
    // ntoskrnl.exe .text:0x37fa5c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x578ae8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38084c, 0x1fe000 bytes
    //
    _s96(sdk::unknown_ptr) reset_perf_engine_for_processor;
    
    // [PpmResetPerfTimes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12e578, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a0c04, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3db670, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a20c4, 0x1fe000 bytes
    //
    _s97(sdk::unknown_ptr) reset_perf_times;
    
    // [PpmResetPerformanceAccumulation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12e5dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a0cc8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3db74c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a2188, 0x1fe000 bytes
    //
    _s98(sdk::unknown_ptr) reset_performance_accumulation;
    
    // [PpmResetPlatformIdleAccounting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20129c, 0x32828 bytes
    // ntoskrnl.exe .text:0x561860, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5715d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x561650, 0x1fe000 bytes
    //
    _s99(sdk::unknown_ptr) reset_platform_idle_accounting;
    
    // [PpmResetProcessorIdleAccounting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x143dc4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3bfad4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cef0c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c08e4, 0x1fe000 bytes
    //
    _t00(sdk::unknown_ptr) reset_processor_idle_accounting;
    
    // [PpmResetProfileSettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x146e60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c3578, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d9e40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c4388, 0x1fe000 bytes
    //
    _t01(sdk::unknown_ptr) reset_profile_settings;
    
    // [PpmScaleIdleStateValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12da30, 0x32828 bytes
    // ntoskrnl.exe .text:0x394994, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cec60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3959f4, 0x1fe000 bytes
    //
    _t02(sdk::unknown_ptr) scale_idle_state_values;
    
    // [PpmSetExitLatencySamplingPercentage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20132c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5618f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x57166c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5616e4, 0x1fe000 bytes
    //
    _t03(sdk::unknown_ptr) set_exit_latency_sampling_percentage;
    
    // [PpmSetPlatformIdleDurationHint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2013b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x561988, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x571700, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x561778, 0x1fe000 bytes
    //
    _t04(sdk::unknown_ptr) set_platform_idle_duration_hint;
    
    // [PpmSetProfilePolicySetting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f2c4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62289c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83eef4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70e240, 0x1fe000 bytes
    //
    _t05(sdk::unknown_ptr) set_profile_policy_setting;
    
    // [PpmSetSimulatedIdle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2013fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5619d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x57174c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5617c4, 0x1fe000 bytes
    //
    _t06(sdk::unknown_ptr) set_simulated_idle;
    
    // [PpmSetSimulatedLoad]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x205420, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8e32e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97a4f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8e1a80, 0x1fe000 bytes
    //
    _t07(sdk::unknown_ptr) set_simulated_load;
    
    // [PpmSnapDripsAccountingSnapshot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2014dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x561b70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5718f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x561960, 0x1fe000 bytes
    //
    _t08(sdk::unknown_ptr) snap_drips_accounting_snapshot;
    
    // [PpmSnapPerformanceAccumulation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x54df0, 0x32828 bytes
    // ntoskrnl.exe .text:0x304c20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21e480, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26f0a0, 0x1fe000 bytes
    //
    _t09(sdk::unknown_ptr) snap_performance_accumulation;
    
    // [PpmStartIllegalProcessorThrottleLogging]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd5654, 0x32828 bytes
    // ntoskrnl.exe .text:0x361b70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391720, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362f90, 0x1fe000 bytes
    //
    _t10(sdk::unknown_ptr) start_illegal_processor_throttle_logging;
    
    // [PpmStopIllegalProcessorThrottleLogging]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd5680, 0x32828 bytes
    // ntoskrnl.exe .text:0x361b90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391740, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362fb0, 0x1fe000 bytes
    //
    _t11(sdk::unknown_ptr) stop_illegal_processor_throttle_logging;
    
    // [PpmTestAndLockProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2015b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x561c5c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5719d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x561a4c, 0x1fe000 bytes
    //
    _t12(sdk::unknown_ptr) test_and_lock_processor;
    
    // [PPM_THERMAL_POLICY_CHANGE_GUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2868c8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2ffb0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3e290, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x302f0, 0x1fe000 bytes
    //
    _t13(struct nt::guid_t*) thermal_policy_change_guid;
    
    // [PPM_THERMALCONSTRAINT_GUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2797d0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x20058, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x26350, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ffc8, 0x1fe000 bytes
    //
    _t14(struct nt::guid_t*) thermalconstraint_guid;
    
    // [PpmTraceExitLatency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x201758, 0x32828 bytes
    // ntoskrnl.exe .text:0x561e10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x571b2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x561c00, 0x1fe000 bytes
    //
    _t15(sdk::unknown_ptr) trace_exit_latency;
    
    // [PpmTracePerfIdleRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20a8d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5713b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x581d10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5711a0, 0x1fe000 bytes
    //
    _t16(sdk::unknown_ptr) trace_perf_idle_rundown;
    
    // [PpmTranslateIdleAccounting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20a9a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x571480, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x581de0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x571270, 0x1fe000 bytes
    //
    _t17(sdk::unknown_ptr) translate_idle_accounting;
    
    // [PpmTranslatePlatformIdleAccounting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20abcc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5716c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x582020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5714b0, 0x1fe000 bytes
    //
    _t18(sdk::unknown_ptr) translate_platform_idle_accounting;
    
    // [PpmTryAcquireLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1102bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x379b18, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ae448, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37ae98, 0x1fe000 bytes
    //
    _t19(sdk::unknown_ptr) try_acquire_lock;
    
    // [PpmUnlockProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20186c, 0x32828 bytes
    // ntoskrnl.exe .text:0x561f28, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x571c44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x561d18, 0x1fe000 bytes
    //
    _t20(sdk::unknown_ptr) unlock_processors;
    
    // [PpmUpdateIdleContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67009c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8df7a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9766c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ddfa4, 0x1fe000 bytes
    //
    _t21(sdk::unknown_ptr) update_idle_context;
    
    // [PpmUpdateIdleDomains]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2019ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x5620d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x571dd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x561ec0, 0x1fe000 bytes
    //
    _t22(sdk::unknown_ptr) update_idle_domains;
    
    // [PpmUpdateIdleStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x551a1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x773300, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82cd40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77ea00, 0x1fe000 bytes
    //
    _t23(sdk::unknown_ptr) update_idle_states;
    
    // [PpmUpdateIdleStatesInplace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x201a6c, 0x32828 bytes
    // ntoskrnl.exe .text:0x562160, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x571e60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x561f50, 0x1fe000 bytes
    //
    _t24(sdk::unknown_ptr) update_idle_states_inplace;
    
    // [PpmUpdateIdleVeto]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x201b08, 0x32828 bytes
    // ntoskrnl.exe .text:0x562200, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x571f00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x561ff0, 0x1fe000 bytes
    //
    _t25(sdk::unknown_ptr) update_idle_veto;
    
    // [PpmUpdateNoopFunction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x86a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _t26(sdk::unknown_ptr) update_noop_function;
    
    // [PpmUpdatePerfStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67273c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8e3400, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97a610, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8e1ba0, 0x1fe000 bytes
    //
    _t27(sdk::unknown_ptr) update_perf_states;
    
    // [PpmUpdatePerformanceFeedback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57120, 0x32828 bytes
    // ntoskrnl.exe .text:0x3080b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x228190, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x271e60, 0x1fe000 bytes
    //
    _t28(sdk::unknown_ptr) update_performance_feedback;
    
    // [PpmUpdatePlatformIdleAccounting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x201cd8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5623e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5720cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5621d4, 0x1fe000 bytes
    //
    _t29(sdk::unknown_ptr) update_platform_idle_accounting;
    
    // [PpmUpdatePlatformIdleVeto]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x201d48, 0x32828 bytes
    // ntoskrnl.exe .text:0x562460, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x572140, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x562250, 0x1fe000 bytes
    //
    _t30(sdk::unknown_ptr) update_platform_idle_veto;
    
    // [PpmUpdateProcessorIdleAccounting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x143efc, 0x32828 bytes
    // ntoskrnl.exe .text:0x3bfc28, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cefec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c0a38, 0x1fe000 bytes
    //
    _t31(sdk::unknown_ptr) update_processor_idle_accounting;
    
    // [PpmUpdateProcessorIdleVeto]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x201ea4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5626d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5723a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5624c0, 0x1fe000 bytes
    //
    _t32(sdk::unknown_ptr) update_processor_idle_veto;
    
    // [PpmUpdateProcessorPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5358e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76fdc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83f870, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x777830, 0x1fe000 bytes
    //
    _t33(sdk::unknown_ptr) update_processor_policy;
    
    // [PpmUpdateProcessorPolicyCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f1e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a03e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c88d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a18a0, 0x1fe000 bytes
    //
    _t34(sdk::unknown_ptr) update_processor_policy_callback;
    
    // [PpmUpdateTimeAccumulation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc1818, 0x32828 bytes
    // ntoskrnl.exe .text:0x280434, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28f070, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x205150, 0x1fe000 bytes
    //
    _t35(sdk::unknown_ptr) update_time_accumulation;
    
    // [PpmUtilityComparer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20b27c, 0x32828 bytes
    // ntoskrnl.exe .text:0x572630, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x461620, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x572420, 0x1fe000 bytes
    //
    _t36(sdk::unknown_ptr) utility_comparer;
    
    // [PpmWmiDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x566180, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a7d10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85ab10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7aff40, 0x1fe000 bytes
    //
    _t37(sdk::unknown_ptr) wmi_dispatch;
    
    // [PpmWmiFireIdleAccountingEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20b48c, 0x32828 bytes
    // ntoskrnl.exe .text:0x572780, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x584120, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x572570, 0x1fe000 bytes
    //
    _t38(sdk::unknown_ptr) wmi_fire_idle_accounting_event;
    
    // [PpmWmiGetAllData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x677dd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ee96c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x989d3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ed05c, 0x1fe000 bytes
    //
    _t39(sdk::unknown_ptr) wmi_get_all_data;
    
    // [PpmWmiGuidList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25c8e0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x8670, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x9310, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x8660, 0x1fe000 bytes
    //
    _t40(sdk::unknown_ptr) wmi_guid_list;
    
    // [PpmWmiIdleAccountingDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x303640, 0x32828 bytes
    // ntoskrnl.exe .data:0xc209e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc39e00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc20a20, 0x1fe000 bytes
    //
    _t41(sdk::unknown_ptr) wmi_idle_accounting_dpc;
    
    // [PpmWmiIdleAccountingProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20b528, 0x32828 bytes
    // ntoskrnl.exe .text:0x572830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5841d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x572620, 0x1fe000 bytes
    //
    _t42(sdk::unknown_ptr) wmi_idle_accounting_procedure;
    
    // [PpmWmiIdleAccountingTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x303680, 0x32828 bytes
    // ntoskrnl.exe .data:0xc20a20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc39e40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc20a60, 0x1fe000 bytes
    //
    _t43(sdk::unknown_ptr) wmi_idle_accounting_timer;
    
    // [PpmWmiIdleAccountingWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x678144, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8eecf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x98a0c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ed3e0, 0x1fe000 bytes
    //
    _t44(sdk::unknown_ptr) wmi_idle_accounting_work;
    
    // [PpmWmiRegisterInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5661f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a7d88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85ab70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7affb8, 0x1fe000 bytes
    //
    _t45(sdk::unknown_ptr) wmi_register_info;
};
#include "magic/api.end.hpp"
