#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgportdmm_videopresenttargetset_interface_v1_impl
{
    // [AddTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xec410, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) add_target;
    
    // [AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17c290, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20d600, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17f7d0, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) add_static_target;
    
    // [CreateNewTargetInfo@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xec4e0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17c5a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20d8c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17fae0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) create_new_target_info;
    
    // [ReleaseTargetInfo@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ab690, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e4ef0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a9770, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e4c60, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) release_target_info;
};
#include "magic/api.end.hpp"
