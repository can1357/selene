#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::monitor_interface_v2_impl
{
    // [DxgMiniportMonitorInterfaceV2@DXGK_MONITOR_INTERFACE_V2_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0x55ab0, 0x60098 bytes
    // dxgkrnl.sys .data:0xaed50, 0x762b0 bytes
    // dxgkrnl.sys .data:0x12fe50, 0x84380 bytes
    // dxgkrnl.sys .data:0xaed50, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) dxg_miniport_monitor_interface_v2;
    
    // [GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b2ca0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17e700, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d5e90, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x181870, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) get_additional_timing;
    
    // [ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b31c0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x181a80, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b39b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x184b00, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) release_additional_timing;
};
#include "magic/api.end.hpp"
