#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgdmm_vidpntopology_interface_v1_impl
{
    // [RestoreFromLkgForSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1a88e0, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) restore_from_lkg_for_source;
    
    // [AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x83600, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x101110, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d0d80, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x10d0e0, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) acquire_path_info;
    
    // [AddPath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a72f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2dd3d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a2490, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2dd4a0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) add_path;
    
    // [EnumPathTargetsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x72530, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1504f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1df010, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x153530, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) enum_path_targets_from_source;
    
    // [EnumPaths@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd7cf0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2ddac0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a2ba0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ddb90, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) enum_paths;
    
    // [FindFirstAvailableTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a79f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2dde00, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a2e70, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2dded0, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) find_first_available_target;
    
    // [GetNumPaths@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd7dc0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2de1e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a3200, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2de2b0, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_num_paths;
    
    // [GetNumPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x725e0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x130590, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e08f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x154d80, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) get_num_paths_from_source;
    
    // [GetPathImportance@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd1860, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x154330, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e40d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1575e0, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) get_path_importance;
    
    // [GetPathSourceFromTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a7e80, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2de510, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a3500, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2de5e0, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) get_path_source_from_target;
    
    // [InitializeInterface@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xebf8c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x179ef4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20ac8c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17a0ec, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) initialize_interface;
    
    // [PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x74c40, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x129e90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1760a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdebc0, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) pin_path_content_rotation;
    
    // [PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x82460, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10d150, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a55d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x119180, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) pin_path_content_scaling;
    
    // [ReleasePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x83790, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x101310, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d2560, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x10d2e0, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) release_path_info;
    
    // [RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a85a0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2deea0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a3e50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2def70, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) remove_all_paths_from_source;
    
    // [RemoveCopyProtection@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x6fe90, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1392b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e3a20, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13c440, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) remove_copy_protection;
    
    // [RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a87e0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2df160, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a40d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2df230, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) remove_path;
    
    // [UnpinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x6fda0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x152ef0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e37f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1563d0, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) unpin_path_content_rotation;
    
    // [UnpinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x837f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10ce30, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x179b40, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x118e60, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) unpin_path_content_scaling;
};
#include "magic/api.end.hpp"
