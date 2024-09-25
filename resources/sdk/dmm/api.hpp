#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dmm
{
    // [DmmAreAllVidpnTargetsPowerComponents]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x39b1b8, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) are_all_vidpn_targets_power_components;
    
    // [DmmAssignEmptyTopologyToActiveVidPn]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1a48a0, 0x60098 bytes
    //
    _m1(sdk::unknown_ptr) assign_empty_topology_to_active_vid_pn;
    
    // [DmmCommitVidPn]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xd8870, 0x60098 bytes
    //
    _m2(sdk::unknown_ptr) commit_vid_pn;
    
    // [DmmCommitVidPnOnAdapter]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xcb810, 0x60098 bytes
    //
    _m3(sdk::unknown_ptr) commit_vid_pn_on_adapter;
    
    // [DmmDRTTest]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1a4b10, 0x60098 bytes
    //
    _m4(sdk::unknown_ptr) drt_test;
    
    // [DmmGetAllHMDTargetIdForAdapter]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xb4e84, 0x60098 bytes
    //
    _m5(sdk::unknown_ptr) get_all_hmd_target_id_for_adapter;
    
    // [DmmGetMostImportantActiveVidPnPathTargetsFromSource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xbca9c, 0x60098 bytes
    //
    _m6(sdk::unknown_ptr) get_most_important_active_vid_pn_path_targets_from_source;
    
    // [DmmGetPinnedVidPnSourceModeTypeFromClientVidPnSource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xd9590, 0x60098 bytes
    //
    _m7(sdk::unknown_ptr) get_pinned_vid_pn_source_mode_type_from_client_vid_pn_source;
    
    // [DmmIsNullVidPn]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x7fbec, 0x60098 bytes
    //
    _m8(sdk::unknown_ptr) is_null_vid_pn;
    
    // [DmmIsOnlySingleSourceModeExposed]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1a1e58, 0x60098 bytes
    //
    _m9(sdk::unknown_ptr) is_only_single_source_mode_exposed;
    
    // [DmmIsSourceInActiveVidPnTopology]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x7c154, 0x60098 bytes
    //
    _n0(sdk::unknown_ptr) is_source_in_active_vid_pn_topology;
    
    // [DmmIsSourceInVidPnTopology]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xd898c, 0x60098 bytes
    //
    _n1(sdk::unknown_ptr) is_source_in_vid_pn_topology;
    
    // [DmmIsTargetForcable]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x87240, 0x60098 bytes
    //
    _n2(sdk::unknown_ptr) is_target_forcable;
    
    // [DmmIsTargetHMD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xb4f80, 0x60098 bytes
    //
    _n3(sdk::unknown_ptr) is_target_hmd;
    
    // [DmmIsVidPnTargetConnectedToSource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1a61bc, 0x60098 bytes
    //
    _n4(sdk::unknown_ptr) is_vid_pn_target_connected_to_source;
    
    // [DmmQueryDmmTestInterface]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1a8ea8, 0x60098 bytes
    //
    _n5(sdk::unknown_ptr) query_dmm_test_interface;
    
    // [DmmRemovePresentPathFromVidPnSourceInActiveVidPn]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xc56e4, 0x60098 bytes
    //
    _n6(sdk::unknown_ptr) remove_present_path_from_vid_pn_source_in_active_vid_pn;
    
    // [DmmResetOrginalVideoOutputTechnologies]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x39dd98, 0x84380 bytes
    //
    _n7(sdk::unknown_ptr) reset_orginal_video_output_technologies;
    
    // [DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xbcc7c, 0x60098 bytes
    //
    _n8(sdk::unknown_ptr) restore_active_vid_pn_from_client_vid_pn_on_source_if_necessary;
    
    // [DmmRestorePresentPathFromVidPnSourceToActiveVidPn]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xc46a0, 0x60098 bytes
    //
    _n9(sdk::unknown_ptr) restore_present_path_from_vid_pn_source_to_active_vid_pn;
    
    // [DmmSetTargetForcableState]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xee0ec, 0x60098 bytes
    //
    _o0(sdk::unknown_ptr) set_target_forcable_state;
    
    // [DmmSetVidPnTargetPowerComponentIndex]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x20fde4, 0x84380 bytes
    //
    _o1(sdk::unknown_ptr) set_vid_pn_target_power_component_index;
    
    // [DmmSetViewState]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x70668, 0x60098 bytes
    //
    _o2(sdk::unknown_ptr) set_view_state;
    
    // [DmmTestInterfaceDereference]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xf32e0, 0x60098 bytes
    //
    _o3(sdk::unknown_ptr) test_interface_dereference;
    
    // [DmmTestInterfaceReference]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xf32e0, 0x60098 bytes
    //
    _o4(sdk::unknown_ptr) test_interface_reference;
    
    // [DmmUpdateGammaRampOnAllClientVidPnPathsFromSource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xbbe4c, 0x60098 bytes
    //
    _o5(sdk::unknown_ptr) update_gamma_ramp_on_all_client_vid_pn_paths_from_source;
    
    // [DmmBuildDynamicVideoPresentTargetChildRelations]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2df29c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a5340, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2df36c, 0x762b0 bytes
    //
    _o6(sdk::unknown_ptr) build_dynamic_video_present_target_child_relations;
    
    // [DmmClearDisplayManagerReferencesForAdapter]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x152264, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e0f70, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1554d4, 0x762b0 bytes
    //
    _o7(sdk::unknown_ptr) clear_display_manager_references_for_adapter;
    
    // [DmmCollectBlackScreenDiagInfo]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2d6be0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39b258, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d6cb0, 0x762b0 bytes
    //
    _o8(sdk::unknown_ptr) collect_black_screen_diag_info;
    
    // [DmmCreateDynamicVideoPresentTarget]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2df35c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a53f4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2df42c, 0x762b0 bytes
    //
    _o9(sdk::unknown_ptr) create_dynamic_video_present_target;
    
    // [DmmDestroyDynamicVideoPresentTarget]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2df424, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a54b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2df4f4, 0x762b0 bytes
    //
    _p0(sdk::unknown_ptr) destroy_dynamic_video_present_target;
    
    // [DmmDisablePathsFromVidPnSource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd7840, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x161df8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13cf1c, 0x762b0 bytes
    //
    _p1(sdk::unknown_ptr) disable_paths_from_vid_pn_source;
    
    // [DmmEnablePathsFromVidPnSource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd5f88, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15faa8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13ad88, 0x762b0 bytes
    //
    _p2(sdk::unknown_ptr) enable_paths_from_vid_pn_source;
    
    // [DmmGetCurrentWireFormatAndColorSpace]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x123b34, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x179f10, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe5874, 0x762b0 bytes
    //
    _p3(sdk::unknown_ptr) get_current_wire_format_and_color_space;
    
    // [DmmGetMostImportantClientVidPnPathTargetsFromSource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x12e618, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17dea4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12b300, 0x762b0 bytes
    //
    _p4(sdk::unknown_ptr) get_most_important_client_vid_pn_path_targets_from_source;
    
    // [DmmGetTargetLinkTrainingStatus]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xdfbe8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16c660, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12bd40, 0x762b0 bytes
    //
    _p5(sdk::unknown_ptr) get_target_link_training_status;
    
    // [DmmGetTargetUsage]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x117bdc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17e018, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12416c, 0x762b0 bytes
    //
    _p6(sdk::unknown_ptr) get_target_usage;
    
    // [DmmHandleSetTimingsResult]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xdfa94, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16c2ac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdc47c, 0x762b0 bytes
    //
    _p7(sdk::unknown_ptr) handle_set_timings_result;
    
    // [DmmIsSourcePresentedOnClientVidPnUsedByFirmware]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2d89c8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1dd22c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d8a98, 0x762b0 bytes
    //
    _p8(sdk::unknown_ptr) is_source_presented_on_client_vid_pn_used_by_firmware;
    
    // [DmmIsStaticAndLeafTarget]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14a9cc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d98d8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14db3c, 0x762b0 bytes
    //
    _p9(sdk::unknown_ptr) is_static_and_leaf_target;
    
    // [DmmIsTargetForceable]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2d8c18, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1fe128, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d8ce8, 0x762b0 bytes
    //
    _q0(sdk::unknown_ptr) is_target_forceable;
    
    // [DmmIsTargetNonStandard]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x134c38, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bcf5c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x138198, 0x762b0 bytes
    //
    _q1(sdk::unknown_ptr) is_target_non_standard;
    
    // [DmmNeedDisplayModeResetDueToHdrPowerPolicy]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2d9230, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39d640, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d9300, 0x762b0 bytes
    //
    _q2(sdk::unknown_ptr) need_display_mode_reset_due_to_hdr_power_policy;
    
    // [DmmNeedTargetModeWireformatOrColorspaceChange]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd7d5c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1631b8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13e144, 0x762b0 bytes
    //
    _q3(sdk::unknown_ptr) need_target_mode_wireformat_or_colorspace_change;
    
    // [DmmPowerOnOffTargetsFromSourceIfNecessary]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd7fa0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x157008, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13e048, 0x762b0 bytes
    //
    _q4(sdk::unknown_ptr) power_on_off_targets_from_source_if_necessary;
    
    // [DmmProcessHPDFiltering]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x160cd4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1fe274, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x163b24, 0x762b0 bytes
    //
    _q5(sdk::unknown_ptr) process_hpd_filtering;
    
    // [DmmRemovePathsFromVidPnSource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2d9404, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39d814, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d94d4, 0x762b0 bytes
    //
    _q6(sdk::unknown_ptr) remove_paths_from_vid_pn_source;
    
    // [DmmReset]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2d993c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39dcf8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d9a0c, 0x762b0 bytes
    //
    _q7(sdk::unknown_ptr) reset;
    
    // [DmmResetBaseVideoOutputTechnology]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a22dc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2d99e8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2d9ab8, 0x762b0 bytes
    //
    _q8(sdk::unknown_ptr) reset_base_video_output_technology;
    
    // [DmmSetTargetForceableState]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2d9b2c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39dee4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d9bfc, 0x762b0 bytes
    //
    _q9(sdk::unknown_ptr) set_target_forceable_state;
    
    // [DmmSetTimingsOnAdapter]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xdff14, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16c444, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12bde0, 0x762b0 bytes
    //
    _r0(sdk::unknown_ptr) set_timings_on_adapter;
    
    // [DmmUpdateGammaRampOnVidPnSource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x12b0d4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x163cd8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1268ec, 0x762b0 bytes
    //
    _r1(sdk::unknown_ptr) update_gamma_ramp_on_vid_pn_source;
    
    // [DmmUpdateGammaRampOnVidPnTarget]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x129080, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x163ebc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdfd40, 0x762b0 bytes
    //
    _r2(sdk::unknown_ptr) update_gamma_ramp_on_vid_pn_target;
    
    // [DmmUpdateHPDFilteringTelemetry]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x160284, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2103bc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1630d4, 0x762b0 bytes
    //
    _r3(sdk::unknown_ptr) update_hpd_filtering_telemetry;
    
    // [DmmUpdateTargetLinkTrainingState]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2df828, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a5838, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2df598, 0x762b0 bytes
    //
    _r4(sdk::unknown_ptr) update_target_link_training_state;
    
    // [DmmAdapterPowerChange]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a47b0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2d6acc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ece68, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d6b9c, 0x762b0 bytes
    //
    _r5(sdk::unknown_ptr) adapter_power_change;
    
    // [DmmAppendCcdConnectedSetForAdapter]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8560c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1199a4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17db34, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xeb9d4, 0x762b0 bytes
    //
    _r6(sdk::unknown_ptr) append_ccd_connected_set_for_adapter;
    
    // [DmmCacheDisplayModeChangeRequest]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc5cf4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd8f60, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x162e78, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13d9f0, 0x762b0 bytes
    //
    _r7(sdk::unknown_ptr) cache_display_mode_change_request;
    
    // [DmmCalculatePresentationVSync]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8cc54, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x128e78, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4420, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdf538, 0x762b0 bytes
    //
    _r8(sdk::unknown_ptr) calculate_presentation_v_sync;
    
    // [DmmCanAddPresentPathToClientVidPn]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xcf7f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11f3b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17001c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12460c, 0x762b0 bytes
    //
    _r9(sdk::unknown_ptr) can_add_present_path_to_client_vid_pn;
    
    // [DmmCollectTdrDiagInfo]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a49d8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2d6d1c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39b364, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d6dec, 0x762b0 bytes
    //
    _s0(sdk::unknown_ptr) collect_tdr_diag_info;
    
    // [DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a17ec, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2d6ea0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39b4a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d6f70, 0x762b0 bytes
    //
    _s1(sdk::unknown_ptr) convert_dwm_clone_to_unpinned_hardware_clone_on_source;
    
    // [DmmDisableAllFailurePathsOnAdapter]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a1a84, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2df4c8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a554c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd4140, 0x762b0 bytes
    //
    _s2(sdk::unknown_ptr) disable_all_failure_paths_on_adapter;
    
    // [DmmEnableModeResetOnMonitorEvent]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a4c80, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2d71b8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39b784, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d7288, 0x762b0 bytes
    //
    _s3(sdk::unknown_ptr) enable_mode_reset_on_monitor_event;
    
    // [DmmEnumClientVidPnPathTargetsFromSource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x70498, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11e834, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ac2d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x125f74, 0x762b0 bytes
    //
    _s4(sdk::unknown_ptr) enum_client_vid_pn_path_targets_from_source;
    
    // [DmmEscape]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a4d44, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2d72c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39b88c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d7390, 0x762b0 bytes
    //
    _s5(sdk::unknown_ptr) escape;
    
    // [DmmGetClientVidPnTargetModeInfo]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a4f0c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2d7540, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39bad4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d7610, 0x762b0 bytes
    //
    _s6(sdk::unknown_ptr) get_client_vid_pn_target_mode_info;
    
    // [DmmGetCurrentIntegerVSyncFromClientVidPnSource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xbc84c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1508a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1df498, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1538e0, 0x762b0 bytes
    //
    _s7(sdk::unknown_ptr) get_current_integer_v_sync_from_client_vid_pn_source;
    
    // [DmmGetDefaultScaling]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a51fc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2d7898, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39be10, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d7968, 0x762b0 bytes
    //
    _s8(sdk::unknown_ptr) get_default_scaling;
    
    // [DmmGetEmergentSimulatedTarget]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb50a4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x117ab0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x173fa8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x124040, 0x762b0 bytes
    //
    _s9(sdk::unknown_ptr) get_emergent_simulated_target;
    
    // [DmmGetMacrovisonSupportFromClientVidPnSource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a5290, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2d795c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39beec, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d7a2c, 0x762b0 bytes
    //
    _t0(sdk::unknown_ptr) get_macrovison_support_from_client_vid_pn_source;
    
    // [DmmGetMostImportantVidPnPathTargetsFromSource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd81dc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2d7c14, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39c198, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d7ce4, 0x762b0 bytes
    //
    _t1(sdk::unknown_ptr) get_most_important_vid_pn_path_targets_from_source;
    
    // [DmmGetMultisamplingMethodSetFromClientVidPnSource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a54d8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2d7d58, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39c2f4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d7e28, 0x762b0 bytes
    //
    _t2(sdk::unknown_ptr) get_multisampling_method_set_from_client_vid_pn_source;
    
    // [DmmGetNextVideoPresentTarget]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x87b30, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x147f0c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17da54, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14b89c, 0x762b0 bytes
    //
    _t3(sdk::unknown_ptr) get_next_video_present_target;
    
    // [DmmGetPathContentFromClientVidPnSource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a583c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2d8154, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39c9b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d8224, 0x762b0 bytes
    //
    _t4(sdk::unknown_ptr) get_path_content_from_client_vid_pn_source;
    
    // [DmmGetPreferredMonitorSourceModeOnTarget]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xcea88, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x133728, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bdffc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x136c8c, 0x762b0 bytes
    //
    _t5(sdk::unknown_ptr) get_preferred_monitor_source_mode_on_target;
    
    // [DmmGetSourceConnectedToTargetInClientVidPn]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a5a98, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x123068, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a8d00, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe5a8c, 0x762b0 bytes
    //
    _t6(sdk::unknown_ptr) get_source_connected_to_target_in_client_vid_pn;
    
    // [DmmGetTargetIdFromCcdMonitorId]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8dac0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x124a04, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x178464, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe4210, 0x762b0 bytes
    //
    _t7(sdk::unknown_ptr) get_target_id_from_ccd_monitor_id;
    
    // [DmmGetVideoOutputTechnology]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8d93c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x117c98, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x171e4c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x124228, 0x762b0 bytes
    //
    _t8(sdk::unknown_ptr) get_video_output_technology;
    
    // [DmmInitializeAdapter]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xebe18, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x16fff4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2104e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x184fb4, 0x762b0 bytes
    //
    _t9(sdk::unknown_ptr) initialize_adapter;
    
    // [DmmInvalidateActiveVidPn]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a5be0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2d8414, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39cc60, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d84e4, 0x762b0 bytes
    //
    _u0(sdk::unknown_ptr) invalidate_active_vid_pn;
    
    // [DmmIsAllSourcesPixelFormatValid]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x75e50, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11c834, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1793ac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x124b60, 0x762b0 bytes
    //
    _u1(sdk::unknown_ptr) is_all_sources_pixel_format_valid;
    
    // [DmmIsPresentPathInClientVidPnTopology]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8d84c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1177ec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x172fa8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x123d7c, 0x762b0 bytes
    //
    _u2(sdk::unknown_ptr) is_present_path_in_client_vid_pn_topology;
    
    // [DmmIsSourcePresentedOnClientVidPnAnalogTvOut]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a5e94, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2d8768, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39cf80, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d8838, 0x762b0 bytes
    //
    _u3(sdk::unknown_ptr) is_source_presented_on_client_vid_pn_analog_tv_out;
    
    // [DmmIsTargetInClientVidPnTopology]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a60a4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2d8db0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39d1dc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d8e80, 0x762b0 bytes
    //
    _u4(sdk::unknown_ptr) is_target_in_client_vid_pn_topology;
    
    // [DmmIsWaitingForPowerOn]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a1f98, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x15eeec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x221f66, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x161d3c, 0x762b0 bytes
    //
    _u5(sdk::unknown_ptr) is_waiting_for_power_on;
    
    // [DmmLogCommitVidPnFailedPacket]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a20c4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2d8ef0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39d338, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d8fc0, 0x762b0 bytes
    //
    _u6(sdk::unknown_ptr) log_commit_vid_pn_failed_packet;
    
    // [DmmLogDriverRecommendVidPnPacket]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a21fc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2d9098, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39d4cc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d9168, 0x762b0 bytes
    //
    _u7(sdk::unknown_ptr) log_driver_recommend_vid_pn_packet;
    
    // [DmmMapVSyncFromRationalToInteger]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x82568, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x115570, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bc174, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x121b00, 0x762b0 bytes
    //
    _u8(sdk::unknown_ptr) map_v_sync_from_rational_to_integer;
    
    // [DmmResetModeState]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd93b0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x15f70c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ecf1c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x16255c, 0x762b0 bytes
    //
    _u9(sdk::unknown_ptr) reset_mode_state;
    
    // [DmmSetTemporaryVideoOutputTechnology]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a23e0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2d9b4c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1fd9ec, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d9c1c, 0x762b0 bytes
    //
    _v0(sdk::unknown_ptr) set_temporary_video_output_technology;
    
    // [DMM_SnapPerfCounters]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x372d0, 0x60098 bytes
    // dxgkrnl.sys .rdata:0x75ac0, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x8a650, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x75e70, 0x762b0 bytes
    //
    _v1(sdk::unknown_ptr) snap_perf_counters;
    
    // [DmmStoreVidPnPathDataIntoDiagPacket]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a24ec, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2d9c94, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39df04, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d9d64, 0x762b0 bytes
    //
    _v2(sdk::unknown_ptr) store_vid_pn_path_data_into_diag_packet;
    
    // [DmmUpdateContentOnAllClientVidPnPathsFromSource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a6320, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2d9de0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x39e0cc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2d9eb0, 0x762b0 bytes
    //
    _v3(sdk::unknown_ptr) update_content_on_all_client_vid_pn_paths_from_source;
    
    // [DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xbc1a4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xdfdb8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x178ae8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x126790, 0x762b0 bytes
    //
    _v4(sdk::unknown_ptr) update_copy_protection_on_all_client_vid_pn_paths_from_source;
    
    // [DMMVideoSignalInfoToDisplayConfigVideoSignalInfo]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8cc8c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x126cc0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1757a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe3740, 0x762b0 bytes
    //
    _v5(sdk::unknown_ptr) video_signal_info_to_display_config_video_signal_info;
};
#include "magic/api.end.hpp"
