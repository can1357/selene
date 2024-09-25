#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::kernel_driver
{
    // [DdiDsiCaps@KernelDriver]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3ba1c0, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) ddi_dsi_caps;
    
    // [DdiDsiReset@KernelDriver]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3ba210, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) ddi_dsi_reset;
    
    // [DdiDsiTransmission@KernelDriver]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3ba260, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) ddi_dsi_transmission;
    
    // [GetDisplayIdDescriptor@KernelDriver]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2150e0, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) get_display_id_descriptor;
    
    // [GetDisplayPortAddress@KernelDriver]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3ba2b0, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) get_display_port_address;
    
    // [GetDriverColorimetryOverride@KernelDriver]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x211390, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) get_driver_colorimetry_override;
    
    // [GetDriverMonitorNativeTimingOverride@KernelDriver]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x215a40, 0x84380 bytes
    //
    _m6(sdk::unknown_ptr) get_driver_monitor_native_timing_override;
    
    // [GetIntegratedDisplayIntendedUsage@KernelDriver]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2146a0, 0x84380 bytes
    //
    _m7(sdk::unknown_ptr) get_integrated_display_intended_usage;
    
    // [GetIntegratedDisplayLinkInfo@KernelDriver]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x215af0, 0x84380 bytes
    //
    _m8(sdk::unknown_ptr) get_integrated_display_link_info;
    
    // [GetMonitorDescriptor@KernelDriver]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x200520, 0x84380 bytes
    //
    _m9(sdk::unknown_ptr) get_monitor_descriptor;
    
    // [QueryDriverRecommendedMonitorModes@KernelDriver]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x213d20, 0x84380 bytes
    //
    _n0(sdk::unknown_ptr) query_driver_recommended_monitor_modes;
    
    // [SetTargetAdjustedColorimetry@KernelDriver]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1deb10, 0x84380 bytes
    //
    _n1(sdk::unknown_ptr) set_target_adjusted_colorimetry;
    
    // [UpdateGammaRampOnVidPnTarget@KernelDriver]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x163e90, 0x84380 bytes
    //
    _n2(sdk::unknown_ptr) update_gamma_ramp_on_vid_pn_target;
    
    // [UpdateMonitorLinkInfo@KernelDriver]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x214100, 0x84380 bytes
    //
    _n3(sdk::unknown_ptr) update_monitor_link_info;
};
#include "magic/api.end.hpp"
