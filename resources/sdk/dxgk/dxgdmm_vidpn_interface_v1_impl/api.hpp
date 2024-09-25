#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgdmm_vidpn_interface_v1_impl
{
    // [AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a6a30, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2dc8c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a19e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2dc990, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) acquire_monitor_source_mode_set;
    
    // [AcquireSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x72ad0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1301f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ddef0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x151cf0, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) acquire_source_mode_set;
    
    // [AcquireTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x84660, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11ec90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d6d10, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x124a30, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) acquire_target_mode_set;
    
    // [GetTopology@DXGDMM_VIDPN_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x72a10, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x150cc0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1df6a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x153fa0, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) get_topology;
    
    // [InitializeInterface@DXGDMM_VIDPN_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xec070, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x179fd0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20ad68, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17a1c8, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) initialize_interface;
    
    // [ReleaseMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a8120, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2de880, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a3840, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2de950, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) release_monitor_source_mode_set;
    
    // [ReleaseSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x72bf0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x148c20, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1de260, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x151be0, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) release_source_mode_set;
    
    // [ReleaseTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x75540, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11edc0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17a7a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x124920, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) release_target_mode_set;
};
#include "magic/api.end.hpp"
