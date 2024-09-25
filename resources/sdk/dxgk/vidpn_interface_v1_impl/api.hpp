#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::vidpn_interface_v1_impl
{
    // [AcquireTargetModeSetImpl@DXGK_VIDPN_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3a74ac, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) acquire_target_mode_set_impl;
    
    // [CreateNewTargetModeSetImpl@DXGK_VIDPN_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1b2224, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) create_new_target_mode_set_impl;
    
    // [AcquireSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc9a60, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x142280, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d0270, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x145190, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) acquire_source_mode_set;
    
    // [AcquireTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc98e0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x141f10, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a4ce0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x144e20, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) acquire_target_mode_set;
    
    // [AssignMultisamplingMethodSet@DXGK_VIDPN_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1aa190, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e2f00, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a7970, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e2c70, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) assign_multisampling_method_set;
    
    // [AssignSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x74f80, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x148b30, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x177680, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x127690, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) assign_source_mode_set;
    
    // [AssignTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x83aa0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11d850, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b2140, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x124f90, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) assign_target_mode_set;
    
    // [CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x74e70, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1483b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x177520, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x127780, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) create_new_source_mode_set;
    
    // [CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x83b70, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11d700, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b2390, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x124e40, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) create_new_target_mode_set;
    
    // [GetTopology@DXGK_VIDPN_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc9be0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x142c70, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d0a10, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x145b80, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) get_topology;
    
    // [InitializeInterface@DXGK_VIDPN_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xebaac, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17a41c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20b32c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17a614, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) initialize_interface;
    
    // [ReleaseSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x76580, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x142880, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d0c40, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x145790, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) release_source_mode_set;
    
    // [ReleaseTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x76800, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x142730, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d0b00, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x145640, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) release_target_mode_set;
};
#include "magic/api.end.hpp"
