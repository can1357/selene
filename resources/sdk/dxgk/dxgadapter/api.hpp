#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgadapter
{
    // [ClearDeviceObject@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x468d4, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) clear_device_object;
    
    // [CreatePhysicalObjectsForHardwareReservedRanges@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x213014, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) create_physical_objects_for_hardware_reserved_ranges;
    
    // [DestroyPhysicalObjectsForHardwareReservedRanges@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2bb454, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) destroy_physical_objects_for_hardware_reserved_ranges;
    
    // [GetDriverVersion@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x8f30, 0x60098 bytes
    //
    _m3(sdk::unknown_ptr) get_driver_version;
    
    // [GetVSyncTimeCounters@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x25838, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) get_v_sync_time_counters;
    
    // [InitializeCABCState@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1f7f10, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) initialize_cabc_state;
    
    // [IsActive@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6ff8, 0x84380 bytes
    //
    _m6(sdk::unknown_ptr) is_active;
    
    // [IsIndirectDisplayDevice@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v20H2
    // dxgkrnl.sys .text:0x6d08, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) is_indirect_display_device;
    
    // [IsWaitingForPowerOn@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1494f4, 0x60098 bytes
    //
    _m8(sdk::unknown_ptr) is_waiting_for_power_on;
    
    // [QueryWDDM2_9Caps@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e8f10, 0x84380 bytes
    //
    _m9(sdk::unknown_ptr) query_wddm2_9_caps;
    
    // [QueryWDDM3_0Caps@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1dcbf8, 0x84380 bytes
    //
    _n0(sdk::unknown_ptr) query_wddm3_0_caps;
    
    // [StartDeadlockTrackers@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x172ad4, 0x84380 bytes
    //
    _n1(sdk::unknown_ptr) start_deadlock_trackers;
    
    // [StopDeadlockTrackers@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e9f34, 0x84380 bytes
    //
    _n2(sdk::unknown_ptr) stop_deadlock_trackers;
    
    // [SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0xd470, 0x84380 bytes
    //
    _n3(sdk::unknown_ptr) support_check_multi_plane_overlay_support3;
    
    // [UsingDelayCreateCddAllocation@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x25f4, 0x84380 bytes
    //
    _n4(sdk::unknown_ptr) using_delay_create_cdd_allocation;
    
    // [IsComputeOnlyAdapter@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x76bc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x8a1c, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) is_compute_only_adapter;
    
    // [MapHardwareReservedRangesToIoMmu@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x208f04, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2090a4, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) map_hardware_reserved_ranges_to_io_mmu;
    
    // [AcquireCoreResourceExclusiveWithTracking@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x117f2c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17f41c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1244bc, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) acquire_core_resource_exclusive_with_tracking;
    
    // [CheckMcdmDdiOverall@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x204e0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x26938, 0x84380 bytes
    // dxgkrnl.sys .text:0x2202c, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) check_mcdm_ddi_overall;
    
    // [CheckMcdmDdiSubmission@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x20ac4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x26ae4, 0x84380 bytes
    // dxgkrnl.sys .text:0x21ab0, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) check_mcdm_ddi_submission;
    
    // [CopyDriverStore@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25c608, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x302888, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25c768, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) copy_driver_store;
    
    // [CopyRegistryKeys@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2068a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ba640, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x206a40, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) copy_registry_keys;
    
    // [CreateFrameBufferSaveAreaSection@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x206980, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ba710, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x206b20, 0x762b0 bytes
    //
    _o2(sdk::unknown_ptr) create_frame_buffer_save_area_section;
    
    // [DdiCollectDiagnosticInfo@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x213580, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c6be8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x213720, 0x762b0 bytes
    //
    _o3(sdk::unknown_ptr) ddi_collect_diagnostic_info;
    
    // [DdiControlDiagnosticReporting@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2137f8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c71b4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x213998, 0x762b0 bytes
    //
    _o4(sdk::unknown_ptr) ddi_control_diagnostic_reporting;
    
    // [DdiQueryDiagnosticTypesSupport@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x217c98, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2cb650, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x217e38, 0x762b0 bytes
    //
    _o5(sdk::unknown_ptr) ddi_query_diagnostic_types_support;
    
    // [DefaultDdiControlDiagnosticReporting@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x21b650, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ce940, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21b7f0, 0x762b0 bytes
    //
    _o6(sdk::unknown_ptr) default_ddi_control_diagnostic_reporting;
    
    // [DefaultDdiPresent@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x21b650, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ce940, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21b7f0, 0x762b0 bytes
    //
    _o7(sdk::unknown_ptr) default_ddi_present;
    
    // [DefaultDdiQueryDiagnosticTypesSupport@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x153b60, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e2ee0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x156e10, 0x762b0 bytes
    //
    _o8(sdk::unknown_ptr) default_ddi_query_diagnostic_types_support;
    
    // [DefaultDdiSubmitCommand@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3b8c0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x48ef0, 0x84380 bytes
    // dxgkrnl.sys .text:0x3baf0, 0x762b0 bytes
    //
    _o9(sdk::unknown_ptr) default_ddi_submit_command;
    
    // [DeleteRegistryKey@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x206a64, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ba880, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x206c04, 0x762b0 bytes
    //
    _p0(sdk::unknown_ptr) delete_registry_key;
    
    // [DeleteRegistryKeys@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x206d54, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bac10, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x206ef4, 0x762b0 bytes
    //
    _p1(sdk::unknown_ptr) delete_registry_keys;
    
    // [DestroyPhysicalAdapterData@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x207444, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bb354, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2075e4, 0x762b0 bytes
    //
    _p2(sdk::unknown_ptr) destroy_physical_adapter_data;
    
    // [DestroySerializeFStateTransitWorker@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x207548, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bb4d8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2076e8, 0x762b0 bytes
    //
    _p3(sdk::unknown_ptr) destroy_serialize_f_state_transit_worker;
    
    // [DestroyVSyncPhaseState@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2075c4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bb554, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x207764, 0x762b0 bytes
    //
    _p4(sdk::unknown_ptr) destroy_v_sync_phase_state;
    
    // [DriverSupportSetTimingsFromVidPn@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x10bbb4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1af634, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x117be4, 0x762b0 bytes
    //
    _p5(sdk::unknown_ptr) driver_support_set_timings_from_vid_pn;
    
    // [FillInternalAdapterInfo@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2354f4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x365774, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x235624, 0x762b0 bytes
    //
    _p6(sdk::unknown_ptr) fill_internal_adapter_info;
    
    // [GetAdapterPerfData@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x208080, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bc1cc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x208220, 0x762b0 bytes
    //
    _p7(sdk::unknown_ptr) get_adapter_perf_data;
    
    // [GetAdapterPerfDataCaps@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x208228, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bc354, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2083c8, 0x762b0 bytes
    //
    _p8(sdk::unknown_ptr) get_adapter_perf_data_caps;
    
    // [GetDeviceDescriptor@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x58dc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1a6d0, 0x84380 bytes
    // dxgkrnl.sys .text:0x6c7c, 0x762b0 bytes
    //
    _p9(sdk::unknown_ptr) get_device_descriptor;
    
    // [GetGpuVersion@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2082b8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bc3d4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x208458, 0x762b0 bytes
    //
    _q0(sdk::unknown_ptr) get_gpu_version;
    
    // [GetNodePerfData@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x208344, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x21e5ae, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2084e4, 0x762b0 bytes
    //
    _q1(sdk::unknown_ptr) get_node_perf_data;
    
    // [GetVirtualMonitorInfo@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20852c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bc450, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2086cc, 0x762b0 bytes
    //
    _q2(sdk::unknown_ptr) get_virtual_monitor_info;
    
    // [IncrementVSyncWaiter@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1574, 0x762b0 bytes
    // dxgkrnl.sys .text:0x254c, 0x84380 bytes
    // dxgkrnl.sys .text:0x139b8, 0x762b0 bytes
    //
    _q3(sdk::unknown_ptr) increment_v_sync_waiter;
    
    // [InitializeDriverDiagnosticReporting@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1676a8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1fa480, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x175fc0, 0x762b0 bytes
    //
    _q4(sdk::unknown_ptr) initialize_driver_diagnostic_reporting;
    
    // [InitializeParavirtualizedAdapter@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20897c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bc7c4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x208b1c, 0x762b0 bytes
    //
    _q5(sdk::unknown_ptr) initialize_paravirtualized_adapter;
    
    // [InitializeVSyncPhaseState@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x166a4c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1f7fec, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x175364, 0x762b0 bytes
    //
    _q6(sdk::unknown_ptr) initialize_v_sync_phase_state;
    
    // [IsAdapterSessionized@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x19a4, 0x762b0 bytes
    // dxgkrnl.sys .text:0xe0f0, 0x84380 bytes
    // dxgkrnl.sys .text:0xb818, 0x762b0 bytes
    //
    _q7(sdk::unknown_ptr) is_adapter_sessionized;
    
    // [IsCoreSyncAcquired@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1494a0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x208d04, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x208ea4, 0x762b0 bytes
    //
    _q8(sdk::unknown_ptr) is_core_sync_acquired;
    
    // [IsDiagnosticAllowed@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x208d6c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bccdc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x208f0c, 0x762b0 bytes
    //
    _q9(sdk::unknown_ptr) is_diagnostic_allowed;
    
    // [IsDisplayAdapter@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9c58, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1b06c, 0x84380 bytes
    // dxgkrnl.sys .text:0x3328, 0x762b0 bytes
    //
    _r0(sdk::unknown_ptr) is_display_adapter;
    
    // [IsDisplayOnlyAdapter@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x76e0, 0x762b0 bytes
    // dxgkrnl.sys .text:0xa718, 0x84380 bytes
    // dxgkrnl.sys .text:0x8a40, 0x762b0 bytes
    //
    _r1(sdk::unknown_ptr) is_display_only_adapter;
    
    // [IsLegacyDisplayStateSynchronization@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x15f8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2878, 0x84380 bytes
    // dxgkrnl.sys .text:0x1382c, 0x762b0 bytes
    //
    _r2(sdk::unknown_ptr) is_legacy_display_state_synchronization;
    
    // [MapFrameBufferPointer@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x208dd8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bcd48, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x208f78, 0x762b0 bytes
    //
    _r3(sdk::unknown_ptr) map_frame_buffer_pointer;
    
    // [NotifyMultiPlaneOverlayDisable@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x34efc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x158f4, 0x84380 bytes
    // dxgkrnl.sys .text:0x3512c, 0x762b0 bytes
    //
    _r4(sdk::unknown_ptr) notify_multi_plane_overlay_disable;
    
    // [NotifyUnblockUEFIFrameBufferRanges@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x35138, 0x762b0 bytes
    // dxgkrnl.sys .text:0x43ae8, 0x84380 bytes
    // dxgkrnl.sys .text:0x35368, 0x762b0 bytes
    //
    _r5(sdk::unknown_ptr) notify_unblock_uefi_frame_buffer_ranges;
    
    // [NumberOfVSyncWaiter@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3c408, 0x762b0 bytes
    // dxgkrnl.sys .text:0x49e28, 0x84380 bytes
    // dxgkrnl.sys .text:0x3c638, 0x762b0 bytes
    //
    _r6(sdk::unknown_ptr) number_of_v_sync_waiter;
    
    // [PinFrameBufferForSave@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x208fc0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bcef0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x209160, 0x762b0 bytes
    //
    _r7(sdk::unknown_ptr) pin_frame_buffer_for_save;
    
    // [PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x35acc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x43d2c, 0x84380 bytes
    // dxgkrnl.sys .text:0x35cfc, 0x762b0 bytes
    //
    _r8(sdk::unknown_ptr) power_runtime_device_directed_power_callback;
    
    // [ProcessComponentIdleList@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9240, 0x60098 bytes
    // dxgkrnl.sys .text:0x35bf8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x35e28, 0x762b0 bytes
    //
    _r9(sdk::unknown_ptr) process_component_idle_list;
    
    // [QueryTrackedWorkloadSupport@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x209bb0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bdd34, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x209d50, 0x762b0 bytes
    //
    _s0(sdk::unknown_ptr) query_tracked_workload_support;
    
    // [QueryWDDM2_0Caps@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14eb90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d94dc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1518a0, 0x762b0 bytes
    //
    _s1(sdk::unknown_ptr) query_wddm2_0_caps;
    
    // [QueryWDDM2_7Caps@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15c648, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bddc0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15f498, 0x762b0 bytes
    //
    _s2(sdk::unknown_ptr) query_wddm2_7_caps;
    
    // [ReadConfig@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1686b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1eeff0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1735d8, 0x762b0 bytes
    //
    _s3(sdk::unknown_ptr) read_config;
    
    // [ReplicateGdiContent@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x13d7a8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1cfe58, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14b234, 0x762b0 bytes
    //
    _s4(sdk::unknown_ptr) replicate_gdi_content;
    
    // [SubmitPresentHistoryTokenFromVm@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x235d6c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3664c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x235e9c, 0x762b0 bytes
    //
    _s5(sdk::unknown_ptr) submit_present_history_token_from_vm;
    
    // [SupportGetMultiPlaneOverlayCaps@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x383e4, 0x762b0 bytes
    // dxgkrnl.sys .text:0xd540, 0x84380 bytes
    // dxgkrnl.sys .text:0x38614, 0x762b0 bytes
    //
    _s6(sdk::unknown_ptr) support_get_multi_plane_overlay_caps;
    
    // [SupportGetPostCompositionCaps@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x38404, 0x762b0 bytes
    // dxgkrnl.sys .text:0xd560, 0x84380 bytes
    // dxgkrnl.sys .text:0x38634, 0x762b0 bytes
    //
    _s7(sdk::unknown_ptr) support_get_post_composition_caps;
    
    // [SupportHWVSync@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x7d04, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1bdd4, 0x84380 bytes
    // dxgkrnl.sys .text:0x3708, 0x762b0 bytes
    //
    _s8(sdk::unknown_ptr) support_hwv_sync;
    
    // [UnmapFrameBufferPointer@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20ae20, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bf0c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20afc0, 0x762b0 bytes
    //
    _s9(sdk::unknown_ptr) unmap_frame_buffer_pointer;
    
    // [UnpinFrameBufferForSave@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20ae74, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bf13c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20b014, 0x762b0 bytes
    //
    _t0(sdk::unknown_ptr) unpin_frame_buffer_for_save;
    
    // [UpdateDiagnosticReporting@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20af58, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bf288, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20b0f8, 0x762b0 bytes
    //
    _t1(sdk::unknown_ptr) update_diagnostic_reporting;
    
    // [UsingSetTimingsFromVidPn@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd73e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bc6d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdc9f8, 0x762b0 bytes
    //
    _t2(sdk::unknown_ptr) using_set_timings_from_vid_pn;
    
    // [ValidateHardwareReservedRanges@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20b154, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2130f4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20b2f4, 0x762b0 bytes
    //
    _t3(sdk::unknown_ptr) validate_hardware_reserved_ranges;
    
    // [AcquireCoreResourceExclusive@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x96270, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x117db8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17f018, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x124348, 0x762b0 bytes
    //
    _t4(sdk::unknown_ptr) acquire_core_resource_exclusive;
    
    // [AcquireCoreResourceShared@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x96340, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xeed90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x18a5b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xfad60, 0x762b0 bytes
    //
    _t5(sdk::unknown_ptr) acquire_core_resource_shared;
    
    // [AcquireCoreSync@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x96488, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x117704, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x172e9c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x123c94, 0x762b0 bytes
    //
    _t6(sdk::unknown_ptr) acquire_core_sync;
    
    // [AcquireDdiSync@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x90b0, 0x60098 bytes
    // dxgkrnl.sys .text:0x2a80, 0x762b0 bytes
    // dxgkrnl.sys .text:0x75c0, 0x84380 bytes
    // dxgkrnl.sys .text:0x3e20, 0x762b0 bytes
    //
    _t7(sdk::unknown_ptr) acquire_ddi_sync;
    
    // [AcquireLocksForPowerStateD3transition@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x148a00, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2063a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ec084, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x206540, 0x762b0 bytes
    //
    _t8(sdk::unknown_ptr) acquire_locks_for_power_state_d3transition;
    
    // [AcquireLocksForStop@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x148bb4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2065a8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ba2f4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x206748, 0x762b0 bytes
    //
    _t9(sdk::unknown_ptr) acquire_locks_for_stop;
    
    // [AdapterTelemetry@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xdaeb0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x162f5c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1f4880, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x16dc7c, 0x762b0 bytes
    //
    _u0(sdk::unknown_ptr) adapter_telemetry;
    
    // [ApplyCoreSyncAction@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd72b0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x15dfb4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e9d84, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x160e04, 0x762b0 bytes
    //
    _u1(sdk::unknown_ptr) apply_core_sync_action;
    
    // [CallDriverQueryInterface@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xdbce8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x164d2c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1f6c50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x177d6c, 0x762b0 bytes
    //
    _u2(sdk::unknown_ptr) call_driver_query_interface;
    
    // [CollectDbgInfo@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x148c58, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20675c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ba4d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2068fc, 0x762b0 bytes
    //
    _u3(sdk::unknown_ptr) collect_dbg_info;
    
    // [CompleteFStateTransitionCB@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1d3d4, 0x60098 bytes
    // dxgkrnl.sys .text:0x3431c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x430d8, 0x84380 bytes
    // dxgkrnl.sys .text:0x3454c, 0x762b0 bytes
    //
    _u4(sdk::unknown_ptr) complete_f_state_transition_cb;
    
    // [CompletePStateTransitionCB@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1d4c0, 0x60098 bytes
    // dxgkrnl.sys .text:0x34434, 0x762b0 bytes
    // dxgkrnl.sys .text:0x431f8, 0x84380 bytes
    // dxgkrnl.sys .text:0x34664, 0x762b0 bytes
    //
    _u5(sdk::unknown_ptr) complete_p_state_transition_cb;
    
    // [Config@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0x562c4, 0x60098 bytes
    // dxgkrnl.sys .data:0xb0004, 0x762b0 bytes
    // dxgkrnl.sys .data:0x130b7c, 0x84380 bytes
    // dxgkrnl.sys .data:0xb0004, 0x762b0 bytes
    //
    _u6(sdk::unknown_ptr) config;
    
    // [??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xdda70, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1628ec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1f41c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x16e7d8, 0x762b0 bytes
    //
    _u7(sdk::unknown_ptr) construct_instance;
    
    // [CreateHandle@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x9657c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1152a4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a7c34, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x121834, 0x762b0 bytes
    //
    _u8(sdk::unknown_ptr) create_handle;
    
    // [_DdiCollectDbgInfoNoLocks@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x150dfc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x21b6a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ce97c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21b840, 0x762b0 bytes
    //
    _u9(sdk::unknown_ptr) ddi_collect_dbg_info_no_locks;
    
    // [DdiControlInterrupt@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x9672c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10ee8c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1cd5cc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x11aebc, 0x762b0 bytes
    //
    _v0(sdk::unknown_ptr) ddi_control_interrupt;
    
    // [DdiControlInterrupt2@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x8c00, 0x60098 bytes
    // dxgkrnl.sys .text:0x67e8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x171d0, 0x84380 bytes
    // dxgkrnl.sys .text:0x7b98, 0x762b0 bytes
    //
    _v1(sdk::unknown_ptr) ddi_control_interrupt2;
    
    // [DdiControlModeBehavior@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xdad7c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1818dc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x212b44, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x18495c, 0x762b0 bytes
    //
    _v2(sdk::unknown_ptr) ddi_control_mode_behavior;
    
    // [DdiEscape@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x147954, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x215d40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c9e78, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x215ee0, 0x762b0 bytes
    //
    _v3(sdk::unknown_ptr) ddi_escape;
    
    // [DdiGetNodeMetadata@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xddd68, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x16f57c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1fc320, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x16be3c, 0x762b0 bytes
    //
    _v4(sdk::unknown_ptr) ddi_get_node_metadata;
    
    // [DdiPowerRuntimeControlRequest@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1f694, 0x60098 bytes
    // dxgkrnl.sys .text:0x39ea4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x29a84, 0x84380 bytes
    // dxgkrnl.sys .text:0x3a0d4, 0x762b0 bytes
    //
    _v5(sdk::unknown_ptr) ddi_power_runtime_control_request;
    
    // [DdiPowerRuntimeSetDeviceHandle@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14ef58, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x217318, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20f170, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2174b8, 0x762b0 bytes
    //
    _v6(sdk::unknown_ptr) ddi_power_runtime_set_device_handle;
    
    // [DdiQueryAdapterInfo@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x95fd4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11a0ec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1afbf4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xee098, 0x762b0 bytes
    //
    _v7(sdk::unknown_ptr) ddi_query_adapter_info;
    
    // [DdiSetPowerComponentFState@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x8b28, 0x60098 bytes
    // dxgkrnl.sys .text:0x3ade0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1ab68, 0x84380 bytes
    // dxgkrnl.sys .text:0x3b010, 0x762b0 bytes
    //
    _v8(sdk::unknown_ptr) ddi_set_power_component_f_state;
    
    // [DdiSetPowerPState@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x150268, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x218f64, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ccbb8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x219104, 0x762b0 bytes
    //
    _v9(sdk::unknown_ptr) ddi_set_power_p_state;
    
    // [DecrementVSyncWaiter@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x8b04, 0x60098 bytes
    // dxgkrnl.sys .text:0x12e40, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2510, 0x84380 bytes
    // dxgkrnl.sys .text:0x1396c, 0x762b0 bytes
    //
    _w0(sdk::unknown_ptr) decrement_v_sync_waiter;
    
    // [DefaultDdiControlModeBehavior@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf32c0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x155e90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4870, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x158ce0, 0x762b0 bytes
    //
    _w1(sdk::unknown_ptr) default_ddi_control_mode_behavior;
    
    // [DefaultDdiEscape@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x150dc0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x21b650, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ce940, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21b7f0, 0x762b0 bytes
    //
    _w2(sdk::unknown_ptr) default_ddi_escape;
    
    // [Destroy@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x148d80, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x206fe4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2baea4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x207184, 0x762b0 bytes
    //
    _w3(sdk::unknown_ptr) destroy;
    
    // [DestroyHandle@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xcd324, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe1054, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x170d7c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd8620, 0x762b0 bytes
    //
    _w4(sdk::unknown_ptr) destroy_handle;
    
    // [??1DXGADAPTER@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1488c0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2060b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ba020, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x206250, 0x762b0 bytes
    //
    _w5(sdk::unknown_ptr) destroy_instance;
    
    // [DisableStablePowerState@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x149084, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x207664, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bb604, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x207804, 0x762b0 bytes
    //
    _w6(sdk::unknown_ptr) disable_stable_power_state;
    
    // [EnableD3Requests@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x149114, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x207d84, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b1278, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x207f24, 0x762b0 bytes
    //
    _w7(sdk::unknown_ptr) enable_d3_requests;
    
    // [EnableMsBddFallback@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x149134, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x207dac, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bbe4c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x207f4c, 0x762b0 bytes
    //
    _w8(sdk::unknown_ptr) enable_ms_bdd_fallback;
    
    // [EnableStablePowerState@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1491e4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x207eb8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bc004, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x208058, 0x762b0 bytes
    //
    _w9(sdk::unknown_ptr) enable_stable_power_state;
    
    // [ForcePState@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1492bc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x207fb0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bc0fc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x208150, 0x762b0 bytes
    //
    _x0(sdk::unknown_ptr) force_p_state;
    
    // [ForcePStateAcrossNodes@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x149328, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x208020, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bc16c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2081c0, 0x762b0 bytes
    //
    _x1(sdk::unknown_ptr) force_p_state_across_nodes;
    
    // [GetAdapterType@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x96624, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xebc10, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x18eb90, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xf7be0, 0x762b0 bytes
    //
    _x2(sdk::unknown_ptr) get_adapter_type;
    
    // [GetNumDifferentPhysicalAdapters@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x8fe4, 0x60098 bytes
    // dxgkrnl.sys .text:0x2970, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1d294, 0x84380 bytes
    // dxgkrnl.sys .text:0x3d0c, 0x762b0 bytes
    //
    _x3(sdk::unknown_ptr) get_num_different_physical_adapters;
    
    // [Initialize@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xdbda8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x165ba8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1f6d7c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1744c0, 0x762b0 bytes
    //
    _x4(sdk::unknown_ptr) initialize;
    
    // [InitializeDriverWorkarounds@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xdd7a4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x16771c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1fa4f4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x176034, 0x762b0 bytes
    //
    _x5(sdk::unknown_ptr) initialize_driver_workarounds;
    
    // [InitializePowerManagement@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xdd9dc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x166ce4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1f82c8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1755fc, 0x762b0 bytes
    //
    _x6(sdk::unknown_ptr) initialize_power_management;
    
    // [IsBddFallbackDriver@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9024, 0x60098 bytes
    // dxgkrnl.sys .text:0x7dd4, 0x762b0 bytes
    // dxgkrnl.sys .text:0xb7a4, 0x84380 bytes
    // dxgkrnl.sys .text:0x3928, 0x762b0 bytes
    //
    _x7(sdk::unknown_ptr) is_bdd_fallback_driver;
    
    // [IsCoreResourceExclusiveOwner@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x8f6c, 0x60098 bytes
    // dxgkrnl.sys .text:0xaec4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x3c40, 0x84380 bytes
    // dxgkrnl.sys .text:0xae0c, 0x762b0 bytes
    //
    _x8(sdk::unknown_ptr) is_core_resource_exclusive_owner;
    
    // [IsCoreResourceSharedOwner@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x8f90, 0x60098 bytes
    // dxgkrnl.sys .text:0x2ca4, 0x762b0 bytes
    // dxgkrnl.sys .text:0xa7c8, 0x84380 bytes
    // dxgkrnl.sys .text:0x4044, 0x762b0 bytes
    //
    _x9(sdk::unknown_ptr) is_core_resource_shared_owner;
    
    // [IsDxgmms2@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x8be4, 0x60098 bytes
    // dxgkrnl.sys .text:0x29b0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7114, 0x84380 bytes
    // dxgkrnl.sys .text:0x3d4c, 0x762b0 bytes
    //
    _y0(sdk::unknown_ptr) is_dxgmms2;
    
    // [IsFullWDDMAdapter@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x900c, 0x60098 bytes
    // dxgkrnl.sys .text:0xaea4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x218cc, 0x84380 bytes
    // dxgkrnl.sys .text:0xab14, 0x762b0 bytes
    //
    _y1(sdk::unknown_ptr) is_full_wddm_adapter;
    
    // [IsVSyncAvailable@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x961d0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd8284, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16308c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13dcb4, 0x762b0 bytes
    //
    _y2(sdk::unknown_ptr) is_v_sync_available;
    
    // [LatencyToleranceTimerNotification@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1d558, 0x60098 bytes
    // dxgkrnl.sys .text:0x34b54, 0x762b0 bytes
    // dxgkrnl.sys .text:0xd174, 0x84380 bytes
    // dxgkrnl.sys .text:0x34d84, 0x762b0 bytes
    //
    _y3(sdk::unknown_ptr) latency_tolerance_timer_notification;
    
    // [NotifyContextCreation@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x96a4, 0x60098 bytes
    // dxgkrnl.sys .text:0x2858, 0x762b0 bytes
    // dxgkrnl.sys .text:0xcc08, 0x84380 bytes
    // dxgkrnl.sys .text:0x3bf4, 0x762b0 bytes
    //
    _y4(sdk::unknown_ptr) notify_context_creation;
    
    // [NotifyHardwareContentProtectionTeardown@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1d7dc, 0x60098 bytes
    // dxgkrnl.sys .text:0x34ddc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x43960, 0x84380 bytes
    // dxgkrnl.sys .text:0x3500c, 0x762b0 bytes
    //
    _y5(sdk::unknown_ptr) notify_hardware_content_protection_teardown;
    
    // [NotifyPrimaryMonitorPowerChange@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1d8c0, 0x60098 bytes
    // dxgkrnl.sys .text:0x35010, 0x762b0 bytes
    // dxgkrnl.sys .text:0x25c44, 0x84380 bytes
    // dxgkrnl.sys .text:0x35240, 0x762b0 bytes
    //
    _y6(sdk::unknown_ptr) notify_primary_monitor_power_change;
    
    // [NotifyVSync@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9180, 0x60098 bytes
    // dxgkrnl.sys .text:0x352c4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x17860, 0x84380 bytes
    // dxgkrnl.sys .text:0x354f4, 0x762b0 bytes
    //
    _y7(sdk::unknown_ptr) notify_v_sync;
    
    // [PopWorkerThreadOfExclusiveOwner@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x8ac4, 0x60098 bytes
    // dxgkrnl.sys .text:0x1b60, 0x762b0 bytes
    // dxgkrnl.sys .text:0x3a7c, 0x84380 bytes
    // dxgkrnl.sys .text:0xb01c, 0x762b0 bytes
    //
    _y8(sdk::unknown_ptr) pop_worker_thread_of_exclusive_owner;
    
    // [PowerRuntimeComponentActiveCallback@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x10c64, 0x60098 bytes
    // dxgkrnl.sys .text:0x35454, 0x762b0 bytes
    // dxgkrnl.sys .text:0xcf00, 0x84380 bytes
    // dxgkrnl.sys .text:0x35684, 0x762b0 bytes
    //
    _y9(sdk::unknown_ptr) power_runtime_component_active_callback;
    
    // [PowerRuntimeComponentIdleStateCallback@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1c83c, 0x60098 bytes
    // dxgkrnl.sys .text:0x357d0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1a9b8, 0x84380 bytes
    // dxgkrnl.sys .text:0x35a00, 0x762b0 bytes
    //
    _z0(sdk::unknown_ptr) power_runtime_component_idle_state_callback;
    
    // [PowerRuntimeComponentIdleStateCallback_Thread@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x149528, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x209238, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bd318, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2093d8, 0x762b0 bytes
    //
    _z1(sdk::unknown_ptr) power_runtime_component_idle_state_callback_thread;
    
    // [PowerRuntimeComponentIdleStateCallbackThread@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x149520, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x209220, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bd300, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2093c0, 0x762b0 bytes
    //
    _z2(sdk::unknown_ptr) power_runtime_component_idle_state_callback_thread_;
    
    // [PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1d9c4, 0x60098 bytes
    // dxgkrnl.sys .text:0x358ec, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1aa14, 0x84380 bytes
    // dxgkrnl.sys .text:0x35b1c, 0x762b0 bytes
    //
    _z3(sdk::unknown_ptr) power_runtime_component_idle_state_callback_worker;
    
    // [PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1c7f4, 0x60098 bytes
    // dxgkrnl.sys .text:0x35b34, 0x762b0 bytes
    // dxgkrnl.sys .text:0x23ddc, 0x84380 bytes
    // dxgkrnl.sys .text:0x35d64, 0x762b0 bytes
    //
    _z4(sdk::unknown_ptr) power_runtime_device_power_required_callback;
    
    // [PowerSettingCallback@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x149610, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x209340, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1eeb90, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2094e0, 0x762b0 bytes
    //
    _z5(sdk::unknown_ptr) power_setting_callback;
    
    // [PrepareToRemove@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x149644, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20937c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bd41c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20951c, 0x762b0 bytes
    //
    _z6(sdk::unknown_ptr) prepare_to_remove;
    
    // [PrepareToReset@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1496ec, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x209468, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bd508, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x209608, 0x762b0 bytes
    //
    _z7(sdk::unknown_ptr) prepare_to_reset;
    
    // [PresentDisplayOnlyRecoveryWorker@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1498d0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2096b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bd7e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x209850, 0x762b0 bytes
    //
    _z8(sdk::unknown_ptr) present_display_only_recovery_worker;
    
    // [ProcessFirstFrameTimer@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1db70, 0x60098 bytes
    // dxgkrnl.sys .text:0x35dd4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x43d9c, 0x84380 bytes
    // dxgkrnl.sys .text:0x36004, 0x762b0 bytes
    //
    _z9(sdk::unknown_ptr) process_first_frame_timer;
    
    // [ProcessPStateTransitionRequest@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1dc3c, 0x60098 bytes
    // dxgkrnl.sys .text:0x35ec8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x43eac, 0x84380 bytes
    // dxgkrnl.sys .text:0x360f8, 0x762b0 bytes
    //
    _a0(sdk::unknown_ptr) process_p_state_transition_request;
    
    // [ProcessVSyncPhaseTimer@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x966bc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10edd8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1cd4f8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x11ae08, 0x762b0 bytes
    //
    _a1(sdk::unknown_ptr) process_v_sync_phase_timer;
    
    // [PushWorkerThreadOfExclusiveOwner@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x8a78, 0x60098 bytes
    // dxgkrnl.sys .text:0x1ba8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x3ac4, 0x84380 bytes
    // dxgkrnl.sys .text:0xafc8, 0x762b0 bytes
    //
    _a2(sdk::unknown_ptr) push_worker_thread_of_exclusive_owner;
    
    // [QueryNodeMetadata@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1499ac, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14b714, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d9c40, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14e884, 0x762b0 bytes
    //
    _a3(sdk::unknown_ptr) query_node_metadata;
    
    // [QueryPStateEngineData@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x149a88, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x209b20, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bdca4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x209cc0, 0x762b0 bytes
    //
    _a4(sdk::unknown_ptr) query_p_state_engine_data;
    
    // [QueryWDDM1_2Caps@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x973c, 0x60098 bytes
    // dxgkrnl.sys .text:0x7c10, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1bce0, 0x84380 bytes
    // dxgkrnl.sys .text:0x3614, 0x762b0 bytes
    //
    _a5(sdk::unknown_ptr) query_wddm1_2_caps;
    
    // [QueryWDDM1_3Caps@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x9616c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11c304, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d5824, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xecf74, 0x762b0 bytes
    //
    _a6(sdk::unknown_ptr) query_wddm1_3_caps;
    
    // [QueuePStateRequestWorkItem@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1dd1c, 0x60098 bytes
    // dxgkrnl.sys .text:0x35fb8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x43f8c, 0x84380 bytes
    // dxgkrnl.sys .text:0x361e8, 0x762b0 bytes
    //
    _a7(sdk::unknown_ptr) queue_p_state_request_work_item;
    
    // [ReleaseCoreResource@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x96210, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xef0b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x18a7e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xfb080, 0x762b0 bytes
    //
    _a8(sdk::unknown_ptr) release_core_resource;
    
    // [ReleaseCoreSync@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x963d4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x117374, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1729b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x123904, 0x762b0 bytes
    //
    _a9(sdk::unknown_ptr) release_core_sync;
    
    // [ReleaseDdiSync@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9040, 0x60098 bytes
    // dxgkrnl.sys .text:0x2b40, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7540, 0x84380 bytes
    // dxgkrnl.sys .text:0x3ee0, 0x762b0 bytes
    //
    _b0(sdk::unknown_ptr) release_ddi_sync;
    
    // [ReleaseLocksForPowerStateD3transition@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x149b10, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x209c3c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ec7e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x209ddc, 0x762b0 bytes
    //
    _b1(sdk::unknown_ptr) release_locks_for_power_state_d3transition;
    
    // [ReleaseReference@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x8f18, 0x60098 bytes
    // dxgkrnl.sys .text:0x66e4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6e9c, 0x84380 bytes
    // dxgkrnl.sys .text:0x7a94, 0x762b0 bytes
    //
    _b2(sdk::unknown_ptr) release_reference;
    
    // [ReleaseReferenceNoTracking@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x8f18, 0x60098 bytes
    // dxgkrnl.sys .text:0x66e4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6e9c, 0x84380 bytes
    // dxgkrnl.sys .text:0x7a94, 0x762b0 bytes
    //
    _b3(sdk::unknown_ptr) release_reference_no_tracking;
    
    // [ReportNodeMetadata@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xdace8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x161c4c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x212d08, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x16ae58, 0x762b0 bytes
    //
    _b4(sdk::unknown_ptr) report_node_metadata;
    
    // [ReportState@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x149b48, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x209c7c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bde1c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x209e1c, 0x762b0 bytes
    //
    _b5(sdk::unknown_ptr) report_state;
    
    // [Reset@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x149f98, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20a150, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2be334, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20a2f0, 0x762b0 bytes
    //
    _b6(sdk::unknown_ptr) reset;
    
    // [sTelemetrySeqId@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0x562c0, 0x60098 bytes
    // dxgkrnl.sys .data:0xb0000, 0x762b0 bytes
    // dxgkrnl.sys .data:0x130b78, 0x84380 bytes
    // dxgkrnl.sys .data:0xb0000, 0x762b0 bytes
    //
    _b7(sdk::unknown_ptr) s_telemetry_seq_id;
    
    // [ScheduleAdapterActivityCheck@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x95d0, 0x60098 bytes
    // dxgkrnl.sys .text:0x361bc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4419c, 0x84380 bytes
    // dxgkrnl.sys .text:0x363ec, 0x762b0 bytes
    //
    _b8(sdk::unknown_ptr) schedule_adapter_activity_check;
    
    // [ScheduleComponentIdleListTimer@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9150, 0x60098 bytes
    // dxgkrnl.sys .text:0x362ec, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2574, 0x84380 bytes
    // dxgkrnl.sys .text:0x3651c, 0x762b0 bytes
    //
    _b9(sdk::unknown_ptr) schedule_component_idle_list_timer;
    
    // [SetModeBehavior@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xdd8d8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x181850, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x212ac4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1848d0, 0x762b0 bytes
    //
    _c0(sdk::unknown_ptr) set_mode_behavior;
    
    // [SetPowerComponentActiveCB@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1ddcc, 0x60098 bytes
    // dxgkrnl.sys .text:0x363ac, 0x762b0 bytes
    // dxgkrnl.sys .text:0x25a10, 0x84380 bytes
    // dxgkrnl.sys .text:0x365dc, 0x762b0 bytes
    //
    _c1(sdk::unknown_ptr) set_power_component_active_cb;
    
    // [SetPowerComponentActiveCBInternal@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1de90, 0x60098 bytes
    // dxgkrnl.sys .text:0x36488, 0x762b0 bytes
    // dxgkrnl.sys .text:0x15984, 0x84380 bytes
    // dxgkrnl.sys .text:0x366b8, 0x762b0 bytes
    //
    _c2(sdk::unknown_ptr) set_power_component_active_cb_internal;
    
    // [SetPowerComponentActiveCBWorker@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1df08, 0x60098 bytes
    // dxgkrnl.sys .text:0x36514, 0x762b0 bytes
    // dxgkrnl.sys .text:0x15ab0, 0x84380 bytes
    // dxgkrnl.sys .text:0x36744, 0x762b0 bytes
    //
    _c3(sdk::unknown_ptr) set_power_component_active_cb_worker;
    
    // [SetPowerComponentIdleCB@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1e280, 0x60098 bytes
    // dxgkrnl.sys .text:0x36a2c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x25af8, 0x84380 bytes
    // dxgkrnl.sys .text:0x36c5c, 0x762b0 bytes
    //
    _c4(sdk::unknown_ptr) set_power_component_idle_cb;
    
    // [SetPowerComponentIdleCBInternal@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9568, 0x60098 bytes
    // dxgkrnl.sys .text:0x36b04, 0x762b0 bytes
    // dxgkrnl.sys .text:0x244a0, 0x84380 bytes
    // dxgkrnl.sys .text:0x36d34, 0x762b0 bytes
    //
    _c5(sdk::unknown_ptr) set_power_component_idle_cb_internal;
    
    // [SetPowerComponentIdleCBWorker@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x93a4, 0x60098 bytes
    // dxgkrnl.sys .text:0x36b80, 0x762b0 bytes
    // dxgkrnl.sys .text:0x18400, 0x84380 bytes
    // dxgkrnl.sys .text:0x36db0, 0x762b0 bytes
    //
    _c6(sdk::unknown_ptr) set_power_component_idle_cb_worker;
    
    // [SetPowerComponentLatencyCB@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1c750, 0x60098 bytes
    // dxgkrnl.sys .text:0x36e84, 0x762b0 bytes
    // dxgkrnl.sys .text:0xd350, 0x84380 bytes
    // dxgkrnl.sys .text:0x370b4, 0x762b0 bytes
    //
    _c7(sdk::unknown_ptr) set_power_component_latency_cb;
    
    // [SetPowerComponentResidencyCB@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1e340, 0x60098 bytes
    // dxgkrnl.sys .text:0x36f30, 0x762b0 bytes
    // dxgkrnl.sys .text:0x268fc, 0x84380 bytes
    // dxgkrnl.sys .text:0x37160, 0x762b0 bytes
    //
    _c8(sdk::unknown_ptr) set_power_component_residency_cb;
    
    // [StartRuntimePowerManagement@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14a364, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20a780, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20f038, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20a920, 0x762b0 bytes
    //
    _c9(sdk::unknown_ptr) start_runtime_power_management;
    
    // [Stop@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14a490, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20a8c8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2beae8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20aa68, 0x762b0 bytes
    //
    _d0(sdk::unknown_ptr) stop;
    
    // [TryWakeUpFromD3State@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x8fc4, 0x60098 bytes
    // dxgkrnl.sys .text:0x294c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17f4d8, 0x84380 bytes
    // dxgkrnl.sys .text:0x3ce8, 0x762b0 bytes
    //
    _d1(sdk::unknown_ptr) try_wake_up_from_d3_state;
    
    // [UpdateLatencyTolerances@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1c930, 0x60098 bytes
    // dxgkrnl.sys .text:0x36fd4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x36e8, 0x84380 bytes
    // dxgkrnl.sys .text:0x37204, 0x762b0 bytes
    //
    _d2(sdk::unknown_ptr) update_latency_tolerances;
    
    // [WakeUpAdapter@DXGADAPTER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14a768, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20b290, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bf490, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20b430, 0x762b0 bytes
    //
    _d3(sdk::unknown_ptr) wake_up_adapter;
};
#include "magic/api.end.hpp"
