#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::monitor_interface_v1_impl
{
    // [AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b24a0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f1ca0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b2d80, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f1a10, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) acquire_monitor_source_mode_set;
    
    // [DxgMiniportMonitorInterfaceV1@DXGK_MONITOR_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0x55ae8, 0x60098 bytes
    // dxgkrnl.sys .data:0xaed88, 0x762b0 bytes
    // dxgkrnl.sys .data:0x12fe88, 0x84380 bytes
    // dxgkrnl.sys .data:0xaed88, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) dxg_miniport_monitor_interface_v1;
    
    // [GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf2840, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f2720, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x214540, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f2490, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_monitor_descriptor_set;
    
    // [GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b2e90, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f2970, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b3600, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f26e0, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) get_monitor_frequency_range_set;
    
    // [ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b3770, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f3500, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b3ed0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f3270, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) release_monitor_source_mode_set;
};
#include "magic/api.end.hpp"
