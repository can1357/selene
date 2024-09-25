#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::vidpn_mgr
{
    // [_AddPathToFirstAvailableTarget@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1a4284, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) add_path_to_first_available_target;
    
    // [CheckDdiSetTimingsViolationOnPathInfo@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e31e4, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) check_ddi_set_timings_violation_on_path_info;
    
    // [ConvertClientVidPnToActiveVidPn@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x8126c, 0x60098 bytes
    //
    _m2(sdk::unknown_ptr) convert_client_vid_pn_to_active_vid_pn;
    
    // [CreateClientVidPnFromActive@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x81e50, 0x60098 bytes
    //
    _m3(sdk::unknown_ptr) create_client_vid_pn_from_active;
    
    // [_DetermineInitialVidPnTopology@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1a43c8, 0x60098 bytes
    //
    _m4(sdk::unknown_ptr) determine_initial_vid_pn_topology;
    
    // [_EnumVidPnCofuncModality@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x819f8, 0x60098 bytes
    //
    _m5(sdk::unknown_ptr) enum_vid_pn_cofunc_modality;
    
    // [GetContainingAdapter@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v20H2
    // dxgkrnl.sys .text:0x253cc, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_containing_adapter;
    
    // [GetTargetPowerComponentIndex@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1ff288, 0x84380 bytes
    //
    _m7(sdk::unknown_ptr) get_target_power_component_index;
    
    // [GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1a2724, 0x60098 bytes
    //
    _m8(sdk::unknown_ptr) get_vid_pn_path_hw_capability_in_client_vid_pn;
    
    // [_IsSupportedVidPn@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x81b5c, 0x60098 bytes
    //
    _m9(sdk::unknown_ptr) is_supported_vid_pn;
    
    // [QueryDxgDmmInterface@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x81d20, 0x60098 bytes
    //
    _n0(sdk::unknown_ptr) query_dxg_dmm_interface;
    
    // [QueryDxgDmmVidPnInterface@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x81cf0, 0x60098 bytes
    //
    _n1(sdk::unknown_ptr) query_dxg_dmm_vid_pn_interface;
    
    // [QueryDxgDmmVidPnSourceModeSetInterface@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x81c90, 0x60098 bytes
    //
    _n2(sdk::unknown_ptr) query_dxg_dmm_vid_pn_source_mode_set_interface;
    
    // [QueryDxgDmmVidPnTargetModeSetInterface@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x81c60, 0x60098 bytes
    //
    _n3(sdk::unknown_ptr) query_dxg_dmm_vid_pn_target_mode_set_interface;
    
    // [QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x81cc0, 0x60098 bytes
    //
    _n4(sdk::unknown_ptr) query_dxg_dmm_vid_pn_topology_interface;
    
    // [QueryDxgMiniportVidPnSourceModeSetInterface@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x81d80, 0x60098 bytes
    //
    _n5(sdk::unknown_ptr) query_dxg_miniport_vid_pn_source_mode_set_interface;
    
    // [RemovePresentPathFromActiveVidPn@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xd90fc, 0x60098 bytes
    //
    _n6(sdk::unknown_ptr) remove_present_path_from_active_vid_pn;
    
    // [RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x81040, 0x60098 bytes
    //
    _n7(sdk::unknown_ptr) remove_present_path_from_vid_pn_source_in_active_vid_pn;
    
    // [RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x80810, 0x60098 bytes
    //
    _n8(sdk::unknown_ptr) restore_present_path_from_vid_pn_source_to_active_vid_pn;
    
    // [RestorePresentPathToActiveVidPn@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xd8ab4, 0x60098 bytes
    //
    _n9(sdk::unknown_ptr) restore_present_path_to_active_vid_pn;
    
    // [RestorePresentPathsFromLkgTopology@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1a3600, 0x60098 bytes
    //
    _o0(sdk::unknown_ptr) restore_present_paths_from_lkg_topology;
    
    // [SaveInitialVidPnTopologyAsLkg@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xeaec4, 0x60098 bytes
    //
    _o1(sdk::unknown_ptr) save_initial_vid_pn_topology_as_lkg;
    
    // [SetActiveVidPn@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x81db0, 0x60098 bytes
    //
    _o2(sdk::unknown_ptr) set_active_vid_pn;
    
    // [UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1a3e84, 0x60098 bytes
    //
    _o3(sdk::unknown_ptr) update_rotation_all_client_vid_pn_paths_from_source;
    
    // [QueryDxgMiniportVidPnTargetModeSetInterface@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 11
    // dxgkrnl.sys PAGE:0x81d50, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1a4e3c, 0x84380 bytes
    //
    _o4(sdk::unknown_ptr) query_dxg_miniport_vid_pn_target_mode_set_interface;
    
    // [BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x12d8b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16eb84, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12a598, 0x762b0 bytes
    //
    _o5(sdk::unknown_ptr) build_set_timings_path_info_from_client_vid_pn;
    
    // [CommitVidPnOnAdapter@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x139b64, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a42d8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13b064, 0x762b0 bytes
    //
    _o6(sdk::unknown_ptr) commit_vid_pn_on_adapter;
    
    // [HandleLinkTrainingTimeout@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2df8c8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a58d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2df638, 0x762b0 bytes
    //
    _o7(sdk::unknown_ptr) handle_link_training_timeout;
    
    // [PowerOnOffVidPnTarget@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15e314, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ebc00, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x161164, 0x762b0 bytes
    //
    _o8(sdk::unknown_ptr) power_on_off_vid_pn_target;
    
    // [ProcessHPDFiltering@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x160d64, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1fe304, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x163bb4, 0x762b0 bytes
    //
    _o9(sdk::unknown_ptr) process_hpd_filtering;
    
    // [RequestPowerStateForTargets@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x152850, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c76c4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x155a9c, 0x762b0 bytes
    //
    _p0(sdk::unknown_ptr) request_power_state_for_targets;
    
    // [SetTargetPowerComponentIndex@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a3cf0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2dbd70, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2dbe40, 0x762b0 bytes
    //
    _p1(sdk::unknown_ptr) set_target_power_component_index;
    
    // [SetTimingsFromVidPn@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x12ca68, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16d208, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x128ac8, 0x762b0 bytes
    //
    _p2(sdk::unknown_ptr) set_timings_from_vid_pn;
    
    // [UpdateHPDFilteringTelemetry@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16030c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x210444, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x16315c, 0x762b0 bytes
    //
    _p3(sdk::unknown_ptr) update_hpd_filtering_telemetry;
    
    // [UpdateTargetLinkTrainingStatus@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2dfb54, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a5b00, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2df8c4, 0x762b0 bytes
    //
    _p4(sdk::unknown_ptr) update_target_link_training_status;
    
    // [AcquireDiagInfo@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a03ec, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2d5294, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39976c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d5364, 0x762b0 bytes
    //
    _p5(sdk::unknown_ptr) acquire_diag_info;
    
    // [AcquireDiagSummary@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a0d48, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2d5db4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39a1bc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d5e84, 0x762b0 bytes
    //
    _p6(sdk::unknown_ptr) acquire_diag_summary;
    
    // [AcquireDiagVersion@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a1570, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2d6780, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39aa3c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d6850, 0x762b0 bytes
    //
    _p7(sdk::unknown_ptr) acquire_diag_version;
    
    // [_AddPathToVidPnTopology@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x816c0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11dbfc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17990c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12533c, 0x762b0 bytes
    //
    _p8(sdk::unknown_ptr) add_path_to_vid_pn_topology;
    
    // [AddPathToVidPnTopology@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x81544, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11d940, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x179164, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x125080, 0x762b0 bytes
    //
    _p9(sdk::unknown_ptr) add_path_to_vid_pn_topology_;
    
    // [AddUnpinnedPathToVidPnTopology@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x806e8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x138f84, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39aad0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13c114, 0x762b0 bytes
    //
    _q0(sdk::unknown_ptr) add_unpinned_path_to_vid_pn_topology;
    
    // [_bAllowUnspecifiedHSync@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0x571d3, 0x60098 bytes
    // dxgkrnl.sys .data:0xb15be, 0x762b0 bytes
    // dxgkrnl.sys .data:0x1322c9, 0x84380 bytes
    // dxgkrnl.sys .data:0xb15be, 0x762b0 bytes
    //
    _q1(sdk::unknown_ptr) b_allow_unspecified_h_sync;
    
    // [_bAllowUnspecifiedPixelRate@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0x571d2, 0x60098 bytes
    // dxgkrnl.sys .data:0xb15bd, 0x762b0 bytes
    // dxgkrnl.sys .data:0x1322c8, 0x84380 bytes
    // dxgkrnl.sys .data:0xb15bd, 0x762b0 bytes
    //
    _q2(sdk::unknown_ptr) b_allow_unspecified_pixel_rate;
    
    // [_bAllowUnspecifiedVSync@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0x571d4, 0x60098 bytes
    // dxgkrnl.sys .data:0xb15bf, 0x762b0 bytes
    // dxgkrnl.sys .data:0x1322ca, 0x84380 bytes
    // dxgkrnl.sys .data:0xb15bf, 0x762b0 bytes
    //
    _q3(sdk::unknown_ptr) b_allow_unspecified_v_sync;
    
    // [_bShouldLogOn1277688@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0x55de0, 0x60098 bytes
    // dxgkrnl.sys .data:0xaf1ac, 0x762b0 bytes
    // dxgkrnl.sys .data:0x1302fc, 0x84380 bytes
    // dxgkrnl.sys .data:0xaf1ac, 0x762b0 bytes
    //
    _q4(sdk::unknown_ptr) b_should_log_on1277688;
    
    // [_BadMonitorSourceModeDiagnosibility@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0x56398, 0x60098 bytes
    // dxgkrnl.sys .data:0xb00fc, 0x762b0 bytes
    // dxgkrnl.sys .data:0x130ccc, 0x84380 bytes
    // dxgkrnl.sys .data:0xb00fc, 0x762b0 bytes
    //
    _q5(sdk::unknown_ptr) bad_monitor_source_mode_diagnosibility;
    
    // [CacheDisplayModeChangeRequest@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6e38, 0x60098 bytes
    // dxgkrnl.sys .text:0x1730, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2a74, 0x84380 bytes
    // dxgkrnl.sys .text:0x13658, 0x762b0 bytes
    //
    _q6(sdk::unknown_ptr) cache_display_mode_change_request;
    
    // [CacheLastClientCommittedVidPnRef@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x81160, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x15353c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1dcf68, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x152e38, 0x762b0 bytes
    //
    _q7(sdk::unknown_ptr) cache_last_client_committed_vid_pn_ref;
    
    // [CacheVidPnToBeComitted@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6ce8, 0x60098 bytes
    // dxgkrnl.sys .text:0x12f4c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x687d4, 0x84380 bytes
    // dxgkrnl.sys .text:0x13030, 0x762b0 bytes
    //
    _q8(sdk::unknown_ptr) cache_vid_pn_to_be_comitted;
    
    // [CommitVidPn@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7fd0c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x13a56c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39ac3c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13ba6c, 0x762b0 bytes
    //
    _q9(sdk::unknown_ptr) commit_vid_pn;
    
    // [CommitVidPnViaSDC@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a1600, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2d6838, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39af90, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d6908, 0x762b0 bytes
    //
    _r0(sdk::unknown_ptr) commit_vid_pn_via_sdc;
    
    // [??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xeb0f8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17933c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20a0d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x179534, 0x762b0 bytes
    //
    _r1(sdk::unknown_ptr) construct_instance;
    
    // [CreateClientVidPn@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8202c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11dae8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17948c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x125228, 0x762b0 bytes
    //
    _r2(sdk::unknown_ptr) create_client_vid_pn;
    
    // [CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x82128, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11dd44, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x179590, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x125484, 0x762b0 bytes
    //
    _r3(sdk::unknown_ptr) create_client_vid_pn_from_last_client_commited_vid_pn;
    
    // [CreateVidPnCopyForClient@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x81f04, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11de08, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17965c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x125548, 0x762b0 bytes
    //
    _r4(sdk::unknown_ptr) create_vid_pn_copy_for_client;
    
    // [??1VIDPN_MGR@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x31e68, 0x60098 bytes
    // dxgkrnl.sys .text:0x584c0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x67cb4, 0x84380 bytes
    // dxgkrnl.sys .text:0x58650, 0x762b0 bytes
    //
    _r5(sdk::unknown_ptr) destroy_instance;
    
    // [FormalizeVidPnChange@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x81898, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10d4c4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a5934, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1194f4, 0x762b0 bytes
    //
    _r6(sdk::unknown_ptr) formalize_vid_pn_change;
    
    // [GetAdapterDefaultScaling@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x821e0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x13a938, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1dd8a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15193c, 0x762b0 bytes
    //
    _r7(sdk::unknown_ptr) get_adapter_default_scaling;
    
    // [GetConnectedMonitorHandle@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7fc30, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x134260, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bb68c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1377c0, 0x762b0 bytes
    //
    _r8(sdk::unknown_ptr) get_connected_monitor_handle;
    
    // [GetNumTargetsWithMonitorObjects@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x32d7c, 0x60098 bytes
    // dxgkrnl.sys .text:0x595d0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x29c00, 0x84380 bytes
    // dxgkrnl.sys .text:0x59760, 0x762b0 bytes
    //
    _r9(sdk::unknown_ptr) get_num_targets_with_monitor_objects;
    
    // [GetPathFromTargetInClientVidPn@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a260c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2d9fe4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39e2e8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2da0b4, 0x762b0 bytes
    //
    _s0(sdk::unknown_ptr) get_path_from_target_in_client_vid_pn;
    
    // [_InitializeDmmClientInterfaces@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xeaaf8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x179c04, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20a990, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x179dfc, 0x762b0 bytes
    //
    _s1(sdk::unknown_ptr) initialize_dmm_client_interfaces;
    
    // [_InitializeDxgPortDmmInterfaces@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xeadfc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17a4b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20b3c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17a6a8, 0x762b0 bytes
    //
    _s2(sdk::unknown_ptr) initialize_dxg_port_dmm_interfaces;
    
    // [_InitializeVidPnMiniportInterfaces@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xeace4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17a168, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20af00, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17a360, 0x762b0 bytes
    //
    _s3(sdk::unknown_ptr) initialize_vid_pn_miniport_interfaces;
    
    // [IsConstructed@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x12930, 0x60098 bytes
    // dxgkrnl.sys .text:0x24e40, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2cee0, 0x84380 bytes
    // dxgkrnl.sys .text:0x25c00, 0x762b0 bytes
    //
    _s4(sdk::unknown_ptr) is_constructed;
    
    // [MapEscapeCodeToDiagInfoType@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a28f4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2da148, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39e400, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2da218, 0x762b0 bytes
    //
    _s5(sdk::unknown_ptr) map_escape_code_to_diag_info_type;
    
    // [_MonitorEventHandler@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xea270, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x160f90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ee070, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x163de0, 0x762b0 bytes
    //
    _s6(sdk::unknown_ptr) monitor_event_handler;
    
    // [OnMonitorConnectionChanged@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xea850, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17f9a4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x210934, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x182ab8, 0x762b0 bytes
    //
    _s7(sdk::unknown_ptr) on_monitor_connection_changed;
    
    // [PinModalityOnPathInVidPnTopology@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x804f8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x13d258, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39e4dc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13bf14, 0x762b0 bytes
    //
    _s8(sdk::unknown_ptr) pin_modality_on_path_in_vid_pn_topology;
    
    // [PinPathContentRotation@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a29c8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2da234, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39e7b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2da304, 0x762b0 bytes
    //
    _s9(sdk::unknown_ptr) pin_path_content_rotation;
    
    // [PinPathContentScaling@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a2ae4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2da7b8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39ec10, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2da888, 0x762b0 bytes
    //
    _t0(sdk::unknown_ptr) pin_path_content_scaling;
    
    // [PinVidPnSourceMode@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x81460, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11eb4c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x178eac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x124c40, 0x762b0 bytes
    //
    _t1(sdk::unknown_ptr) pin_vid_pn_source_mode;
    
    // [PinVidPnTargetMode@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8137c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10d05c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ae860, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x11908c, 0x762b0 bytes
    //
    _t2(sdk::unknown_ptr) pin_vid_pn_target_mode;
    
    // [PopulateGdiDisplayModeFromPath@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x73ed0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x13ace4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bbe90, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdce80, 0x762b0 bytes
    //
    _t3(sdk::unknown_ptr) populate_gdi_display_mode_from_path;
    
    // [PopulatePublicGdiDisplayModeInfo@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x74070, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x13ae80, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bbff8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdd01c, 0x762b0 bytes
    //
    _t4(sdk::unknown_ptr) populate_public_gdi_display_mode_info;
    
    // [_ReadConfiguration@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xea514, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x16550c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20b494, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x177684, 0x762b0 bytes
    //
    _t5(sdk::unknown_ptr) read_configuration;
    
    // [_ReadTargetPriorityList@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xeb060, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x179a84, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20a830, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x179c7c, 0x762b0 bytes
    //
    _t6(sdk::unknown_ptr) read_target_priority_list;
    
    // [RecommendFunctionalVidPn@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a2c98, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2dade8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2105fc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2daeb8, 0x762b0 bytes
    //
    _t7(sdk::unknown_ptr) recommend_functional_vid_pn;
    
    // [ReleaseMonitorHandle@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7fcc8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x134148, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ba4c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1376a8, 0x762b0 bytes
    //
    _t8(sdk::unknown_ptr) release_monitor_handle;
    
    // [RemovePathFromVidPnTopology@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a2f74, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2db194, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39f110, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2db264, 0x762b0 bytes
    //
    _t9(sdk::unknown_ptr) remove_path_from_vid_pn_topology;
    
    // [_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a44e0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2dc144, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39fe70, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2dc214, 0x762b0 bytes
    //
    _u0(sdk::unknown_ptr) serialize_pinned_source_cofunc_paths_modality_from_source;
    
    // [_SerializeVidPnSourceModeSet@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a466c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2dc334, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a0008, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2dc404, 0x762b0 bytes
    //
    _u1(sdk::unknown_ptr) serialize_vid_pn_source_mode_set;
    
    // [SetConstructionStatus@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x12960, 0x60098 bytes
    // dxgkrnl.sys .text:0x1a870, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20320, 0x84380 bytes
    // dxgkrnl.sys .text:0x1aef0, 0x762b0 bytes
    //
    _u2(sdk::unknown_ptr) set_construction_status;
    
    // [SetTargetOwnership@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd89ec, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x15e59c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ebe70, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1613ec, 0x762b0 bytes
    //
    _u3(sdk::unknown_ptr) set_target_ownership;
    
    // [UnpinPathModalityFromSource@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a3d94, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2dbe34, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39fbe8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2dbf04, 0x762b0 bytes
    //
    _u4(sdk::unknown_ptr) unpin_path_modality_from_source;
    
    // [WriteDiagEntry@VIDPN_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6ed8, 0x60098 bytes
    // dxgkrnl.sys .text:0x18980, 0x762b0 bytes
    // dxgkrnl.sys .text:0xd68c, 0x84380 bytes
    // dxgkrnl.sys .text:0x18d10, 0x762b0 bytes
    //
    _u5(sdk::unknown_ptr) write_diag_entry;
};
#include "magic/api.end.hpp"
