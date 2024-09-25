#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::vidpntopology_interface_v1_impl
{
    // [AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x79d80, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1195f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ce5c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xeb620, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) acquire_first_path_info;
    
    // [AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7af60, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x100d70, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e6a20, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x10cd40, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) acquire_next_path_info;
    
    // [AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a9c40, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e2890, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a71c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e2600, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) acquire_path_info;
    
    // [AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a9f00, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e2bf0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a76d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e2960, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) add_path;
    
    // [CreateNewPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1aa2c0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e3080, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a7ad0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e2df0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) create_new_path_info;
    
    // [EnumPathTargetsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1aa3d0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e3210, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a7c60, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e2f80, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) enum_path_targets_from_source;
    
    // [GetNumPaths@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1aa530, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x148f60, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d2030, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14c5a0, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_num_paths;
    
    // [GetNumPathsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1aa610, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e33d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a7df0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e3140, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) get_num_paths_from_source;
    
    // [GetPathSourceFromTarget@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1aa730, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e3550, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a7f50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e32c0, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) get_path_source_from_target;
    
    // [InitializeInterface@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xeba10, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17a378, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20b1f4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17a570, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) initialize_interface;
    
    // [ReleasePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc9730, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x102710, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19ac70, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x10e6e0, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) release_path_info;
    
    // [RemovePath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1aa9f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e38f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a8290, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e3660, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) remove_path;
    
    // [UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xca000, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10e060, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19a450, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x11a090, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) update_path_support_info;
};
#include "magic/api.end.hpp"
