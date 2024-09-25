#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::btl_topology_constructor
{
    // [AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x70c1c, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) augment_topology;
    
    // [_AugmentVidPnTopology@BTL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1aef0c, 0x60098 bytes
    //
    _m1(sdk::unknown_ptr) augment_vid_pn_topology;
    
    // [_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2e95c4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3ae9e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e9334, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) add_firmware_recommended_paths_to_topology;
    
    // [_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2e9f84, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3af290, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e9cf4, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) construct_default;
    
    // [_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ea7ac, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3afa44, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ea51c, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) construct_from_firmware_recommended_vid_pn;
    
    // [_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ae370, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e8ac0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3ae0d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e8830, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) add_external_paths_adapters_callback;
    
    // [_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ae39c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e8b00, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3ae110, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e8870, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) add_external_paths_to_topology;
    
    // [_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ae8f4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e95f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3aea0c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e9360, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) add_path_to_topology;
    
    // [_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ae940, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e9650, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3aea78, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e93c0, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) add_secondary_path_to_topology;
    
    // [_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1af324, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e9e8c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3af1b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e9bfc, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) construct_clone;
    
    // [_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1af40c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2ea624, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3af8d4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ea394, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) construct_extend;
    
    // [_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1af440, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2ea660, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3af910, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ea3d0, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) construct_extend_second_path;
    
    // [_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1af4d8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2ea708, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3af9b4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ea478, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) construct_external;
    
    // [??0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ad708, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e8764, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c0a78, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e84d4, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) construct_instance;
    
    // [_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1af568, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2ea870, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3afb04, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ea5e0, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) construct_internal;
    
    // [_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1af5a8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2ea8bc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3afb5c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ea62c, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) determine_default_topology;
    
    // [_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1afae0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2ea9b4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3afc44, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ea724, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) get_first_best_secondary_target;
    
    // [_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1afb78, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2eaa5c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3afce0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ea7cc, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) get_next_best_secondary_target;
    
    // [_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1afc7c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2eab70, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3afde0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ea8e0, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) get_vmt_preference;
    
    // [_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1afcbc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2eabbc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3afe2c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ea92c, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) get_vot_preference;
    
    // [_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1afd54, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2eac68, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3afee0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ea9d8, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) is_better_secondary_target;
    
    // [QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8dd2c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x132df0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c091c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x136354, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) query_anchor_info;
};
#include "magic/api.end.hpp"
