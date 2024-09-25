#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgdmm_monitorsourcemodeset_interface_v1_impl
{
    // [AcquirePreferredModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b2980, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f22e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b3300, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f2050, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) acquire_preferred_mode_info;
    
    // [DmmMonitorSourceModeSetInterfaceV1@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0x55a68, 0x60098 bytes
    // dxgkrnl.sys .data:0xaed08, 0x762b0 bytes
    // dxgkrnl.sys .data:0x12fe08, 0x84380 bytes
    // dxgkrnl.sys .data:0xaed08, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) dmm_monitor_source_mode_set_interface_v1;
    
    // [ReleaseModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b34f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f3340, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b3d70, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f30b0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) release_mode_info;
};
#include "magic/api.end.hpp"
