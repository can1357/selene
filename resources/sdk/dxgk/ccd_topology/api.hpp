#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::ccd_topology
{
    // [GetMonitorHashsForPath@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1c3318, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) get_monitor_hashs_for_path;
    
    // [RemoveAllHMDPaths@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x88ca8, 0x60098 bytes
    //
    _m1(sdk::unknown_ptr) remove_all_hmd_paths;
    
    // [RemovePathByTarget@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1ac8ec, 0x60098 bytes
    //
    _m2(sdk::unknown_ptr) remove_path_by_target;
    
    // [AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xdcc74, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16c8c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12f714, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) add_active_non_desktop_paths_to_topology;
    
    // [AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x134858, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ba50c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x137db8, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) adjust_slate_virtual_monitors_position;
    
    // [ApplyTopologyWorker@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xdd250, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x165f00, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12e310, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) apply_topology_worker;
    
    // [_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x11f700, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17a5b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe6760, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) check_resolved_topology_for_virtual_mode_consistency;
    
    // [ClearReservedFields@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x12047c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17b4dc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe9fec, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) clear_reserved_fields;
    
    // [??0CCD_TOPOLOGY@@QEAA@PEAUD3DKMT_GETPATHSMODALITY@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x122284, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17d248, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe68c8, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) construct_instance;
    
    // [CopyPathModalityDescriptor@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2e5664, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a9e54, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e53d4, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) copy_path_modality_descriptor;
    
    // [CopyTopology@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2e57d8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a9fc8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e5548, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) copy_topology;
    
    // [EnumerateFunctionalModesWorker@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2e593c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3aa134, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e56ac, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) enumerate_functional_modes_worker;
    
    // [FunctionalizeWorker@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x128578, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1701d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe0548, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) functionalize_worker;
    
    // [IsVirtualSlate@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1253e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b9b6c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe38d0, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) is_virtual_slate;
    
    // [MapModalitySetIdPath@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x135b0c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c3884, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13906c, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) map_modality_set_id_path;
    
    // [RemoveAllNonDesktopPaths@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2e6200, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3aa96c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e5f70, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) remove_all_non_desktop_paths;
    
    // [RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2e6490, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3aac14, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e6200, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) restore_any_flags_modified_before_calling_bml;
    
    // [SetUsedReservedFields@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x12079c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17b7d8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xea30c, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) set_used_reserved_fields;
    
    // [AddPathDescriptor@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8aab4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14fb0c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ddd44, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x152844, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) add_path_descriptor;
    
    // [AdjustDesktopLayout@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8904c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11fa1c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17a8a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe958c, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) adjust_desktop_layout;
    
    // [ApplyTopology@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x88348, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xdcd84, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x165ae0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12df08, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) apply_topology;
    
    // [ApplyTopologyOnAdapter@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8a0a0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xdf43c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16bbe4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdbe24, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) apply_topology_on_adapter;
    
    // [BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x89414, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11fe70, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17aed0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe99e0, 0x762b0 bytes
    //
    _o2(sdk::unknown_ptr) build_primary_path_index_from_clone_group_id;
    
    // [CheckAdapterViewSessionOwnership@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8a68c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xdce44, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x167538, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12f5a0, 0x762b0 bytes
    //
    _o3(sdk::unknown_ptr) check_adapter_view_session_ownership;
    
    // [CleanupPrimaryPathIndex@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x893d8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xde078, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1670b8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12f138, 0x762b0 bytes
    //
    _o4(sdk::unknown_ptr) cleanup_primary_path_index;
    
    // [Clear@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8aca0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x120e28, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17b808, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xea998, 0x762b0 bytes
    //
    _o5(sdk::unknown_ptr) clear;
    
    // [ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x88d28, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1287d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x170170, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe07a0, 0x762b0 bytes
    //
    _o6(sdk::unknown_ptr) clear_given_description_flag_on_all_paths;
    
    // [ClearModalitySetId@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8a934, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x120e54, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17beb0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xea9c4, 0x762b0 bytes
    //
    _o7(sdk::unknown_ptr) clear_modality_set_id;
    
    // [ClearPathDescriptor@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xbb334, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x13177c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c0760, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x134aac, 0x762b0 bytes
    //
    _o8(sdk::unknown_ptr) clear_path_descriptor;
    
    // [??0CCD_TOPOLOGY@@QEAA@GG@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x87dc8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x122378, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17d294, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe69bc, 0x762b0 bytes
    //
    _o9(sdk::unknown_ptr) construct_instance_;
    
    // [ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x897b4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x149f78, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16cad4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14cfc8, 0x762b0 bytes
    //
    _p0(sdk::unknown_ptr) convert_legacy_qdcdwm_clone_path;
    
    // [Copy@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ac19c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e55a8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a9d88, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e5318, 0x762b0 bytes
    //
    _p1(sdk::unknown_ptr) copy;
    
    // [CopyInheritScope@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x88bd0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14fa2c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ddc70, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x152764, 0x762b0 bytes
    //
    _p2(sdk::unknown_ptr) copy_inherit_scope;
    
    // [CopyRenewScope@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ac254, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2eb8bc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3ab2a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2eb62c, 0x762b0 bytes
    //
    _p3(sdk::unknown_ptr) copy_renew_scope;
    
    // [??1CCD_TOPOLOGY@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x87e44, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x122e94, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17e6e8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe5f14, 0x762b0 bytes
    //
    _p4(sdk::unknown_ptr) destroy_instance;
    
    // [DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd50a8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x15acd0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e85a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15db20, 0x762b0 bytes
    //
    _p5(sdk::unknown_ptr) disable_dwm_clone_and_dwm_virtual_mode;
    
    // [EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x894d0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1342fc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bc700, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13785c, 0x762b0 bytes
    //
    _p6(sdk::unknown_ptr) ensure_content_region_and_dwm_clip_box_are_valid;
    
    // [FillFunctionalizePacket@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8a84c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x128468, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17048c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe0800, 0x762b0 bytes
    //
    _p7(sdk::unknown_ptr) fill_functionalize_packet;
    
    // [_FillPathsActiveFlags@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x88e50, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x132f48, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c0ad0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1364ac, 0x762b0 bytes
    //
    _p8(sdk::unknown_ptr) fill_paths_active_flags;
    
    // [_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x88d80, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x12009c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17b104, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe9c0c, 0x762b0 bytes
    //
    _p9(sdk::unknown_ptr) fill_paths_active_flags_from_topology;
    
    // [FillPathsTargetFlags@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8acc4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11f9d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17ae84, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe9540, 0x762b0 bytes
    //
    _q0(sdk::unknown_ptr) fill_paths_target_flags;
    
    // [FillScalingIntent@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x89bf4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x13bfec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16ced0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13252c, 0x762b0 bytes
    //
    _q1(sdk::unknown_ptr) fill_scaling_intent;
    
    // [_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x87090, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11ff60, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17afc0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe9ad0, 0x762b0 bytes
    //
    _q2(sdk::unknown_ptr) fill_target_info_adapters_callback;
    
    // [_FillTargetInfoMonitorsCallback@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x87cb0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1201a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17b200, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe9d10, 0x762b0 bytes
    //
    _q3(sdk::unknown_ptr) fill_target_info_monitors_callback;
    
    // [FinalizeTopology@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8b030, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xdad04, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16766c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12d7e0, 0x762b0 bytes
    //
    _q4(sdk::unknown_ptr) finalize_topology;
    
    // [FinalizeTopologyOnAdapter@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x89efc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xdae2c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x167794, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12d5e8, 0x762b0 bytes
    //
    _q5(sdk::unknown_ptr) finalize_topology_on_adapter;
    
    // [FindPathDescriptorByTarget@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ac3ac, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e5d38, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3aa4b4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e5aa8, 0x762b0 bytes
    //
    _q6(sdk::unknown_ptr) find_path_descriptor_by_target;
    
    // [Functionalize@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x88178, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xdcbcc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16c9a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12f66c, 0x762b0 bytes
    //
    _q7(sdk::unknown_ptr) functionalize;
    
    // [GetModalitySetId@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8a990, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x133ca0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bcf7c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x137200, 0x762b0 bytes
    //
    _q8(sdk::unknown_ptr) get_modality_set_id;
    
    // [GetPathDescriptor@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x87d80, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x12028c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17b2e8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe9dfc, 0x762b0 bytes
    //
    _q9(sdk::unknown_ptr) get_path_descriptor;
    
    // [GetPathsCount@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x75f4, 0x60098 bytes
    // dxgkrnl.sys .text:0x99c8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6c14, 0x84380 bytes
    // dxgkrnl.sys .text:0x33fc, 0x762b0 bytes
    //
    _r0(sdk::unknown_ptr) get_paths_count;
    
    // [IsMatchingSource@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x147c, 0x60098 bytes
    // dxgkrnl.sys .text:0xc344, 0x762b0 bytes
    // dxgkrnl.sys .text:0xe168, 0x84380 bytes
    // dxgkrnl.sys .text:0xc7d0, 0x762b0 bytes
    //
    _r1(sdk::unknown_ptr) is_matching_source;
    
    // [IsPrimaryClonePathByModality@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x75b8, 0x60098 bytes
    // dxgkrnl.sys .text:0xc2a4, 0x762b0 bytes
    // dxgkrnl.sys .text:0xd618, 0x84380 bytes
    // dxgkrnl.sys .text:0xc730, 0x762b0 bytes
    //
    _r2(sdk::unknown_ptr) is_primary_clone_path_by_modality;
    
    // [IsSameCloneGroup@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ac468, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e5de8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3aa564, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e5b58, 0x762b0 bytes
    //
    _r3(sdk::unknown_ptr) is_same_clone_group;
    
    // [LogFunctionalizePacket@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8a7bc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1283c4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17059c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe0910, 0x762b0 bytes
    //
    _r4(sdk::unknown_ptr) log_functionalize_packet;
    
    // [MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x89550, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1345a4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bc9b8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x137b04, 0x762b0 bytes
    //
    _r5(sdk::unknown_ptr) make_clone_group_content_resolution_valid;
    
    // [MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x899f8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x134384, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bc788, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1378e4, 0x762b0 bytes
    //
    _r6(sdk::unknown_ptr) make_clone_group_dwm_clip_box_valid;
    
    // [MarkPathsApplyFailure@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ac69c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e5f5c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3aa6a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e5ccc, 0x762b0 bytes
    //
    _r7(sdk::unknown_ptr) mark_paths_apply_failure;
    
    // [Persist@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8b12c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1338b8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bd138, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x136e18, 0x762b0 bytes
    //
    _r8(sdk::unknown_ptr) persist;
    
    // [_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8b6a4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1351bc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e0710, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13871c, 0x762b0 bytes
    //
    _r9(sdk::unknown_ptr) query_desktop_surface_region_with_rotation;
    
    // [_QueryMonitorIdStr@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xcf214, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x133f90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bb430, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1374f0, 0x762b0 bytes
    //
    _s0(sdk::unknown_ptr) query_monitor_id_str;
    
    // [QueryTopologyClass@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x89e0c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x132cf4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c0820, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x136258, 0x762b0 bytes
    //
    _s1(sdk::unknown_ptr) query_topology_class;
    
    // [_QueryTopologySetIdStr@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x88ef8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x133e48, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bcd40, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1373a8, 0x762b0 bytes
    //
    _s2(sdk::unknown_ptr) query_topology_set_id_str;
    
    // [RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ac6f4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e6108, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3aa848, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e5e78, 0x762b0 bytes
    //
    _s3(sdk::unknown_ptr) regulate_clone_group_id_for_new_path;
    
    // [RemoveCloneGroupByModality@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ac7a0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e6334, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3aaab8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e60a4, 0x762b0 bytes
    //
    _s4(sdk::unknown_ptr) remove_clone_group_by_modality;
    
    // [RemovePath@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ac894, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e6430, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3aabb4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e61a0, 0x762b0 bytes
    //
    _s5(sdk::unknown_ptr) remove_path;
    
    // [Reserve@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x87e80, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1223e8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17d308, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe6a2c, 0x762b0 bytes
    //
    _s6(sdk::unknown_ptr) reserve;
    
    // [RetrieveActive@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x880d8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11f928, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17add8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe9498, 0x762b0 bytes
    //
    _s7(sdk::unknown_ptr) retrieve_active;
    
    // [RetrieveAllPaths@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8ad08, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1532b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e2ce0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x156790, 0x762b0 bytes
    //
    _s8(sdk::unknown_ptr) retrieve_all_paths;
    
    // [RetrievePersisted@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8ad88, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x132450, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1becf0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1359b4, 0x762b0 bytes
    //
    _s9(sdk::unknown_ptr) retrieve_persisted;
    
    // [SetConnectivityHash@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x89cbc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x120ea8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17bf04, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe6cb4, 0x762b0 bytes
    //
    _t0(sdk::unknown_ptr) set_connectivity_hash;
    
    // [SetGivenPathDataFromActivePath@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ac918, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e6540, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3aacbc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e62b0, 0x762b0 bytes
    //
    _t1(sdk::unknown_ptr) set_given_path_data_from_active_path;
    
    // [SetModalitySetId@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8a958, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x124614, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c06b8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe4578, 0x762b0 bytes
    //
    _t2(sdk::unknown_ptr) set_modality_set_id;
    
    // [SwapPathsDescriptors@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1acb04, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e67b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3ab0d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e6520, 0x762b0 bytes
    //
    _t3(sdk::unknown_ptr) swap_paths_descriptors;
    
    // [ValidateIncomingPathModalityFlags@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8a730, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x151b74, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16ca48, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x154e74, 0x762b0 bytes
    //
    _t4(sdk::unknown_ptr) validate_incoming_path_modality_flags;
    
    // [VerifyConnectivityHash@CCD_TOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x89d9c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x133be0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bd460, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x137140, 0x762b0 bytes
    //
    _t5(sdk::unknown_ptr) verify_connectivity_hash;
};
#include "magic/api.end.hpp"
