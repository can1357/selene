#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgdmm_videopresenttargetset_interface_v1_impl
{
    // [AcquireFirstTargetInfo@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a68b0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2dc6d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a1840, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2dc7a0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) acquire_first_target_info;
    
    // [AcquireNextTargetInfo@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a6e50, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2dcdf0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a1ec0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2dcec0, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) acquire_next_target_info;
    
    // [GetNumTargets@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a7db0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2de400, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a3400, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2de4d0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_num_targets;
    
    // [InitializeInterface@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xec0d4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17a03c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20add4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17a234, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) initialize_interface;
    
    // [ReleaseTargetInfo@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a83e0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2dec40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a3be0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ded10, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) release_target_info;
};
#include "magic/api.end.hpp"
