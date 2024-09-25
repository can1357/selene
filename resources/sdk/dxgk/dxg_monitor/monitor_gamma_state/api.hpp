#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_monitor::monitor_gamma_state
{
    // [_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x171864, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) combine_dxgi_gamma_ramp;
    
    // [GetCachedGammaRampForDiagnostics@MonitorGammaState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b82c8, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) get_cached_gamma_ramp_for_diagnostics;
    
    // [_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1719c0, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) get_most_capable_color_space_transform;
    
    // [_IsTargetMatrix_3x4Supported@MonitorGammaState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1706a0, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) is_target_matrix_3x4_supported;
    
    // [_IsWireFormatMatch@MonitorGammaState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x171de8, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) is_wire_format_match;
    
    // [OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x163b90, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) on_dxgi_gamma_ramp_change;
    
    // [_QueryColorSpaceTransformCaps@MonitorGammaState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x170640, 0x84380 bytes
    //
    _m6(sdk::unknown_ptr) query_color_space_transform_caps;
    
    // [_SetColorSpaceTransform@MonitorGammaState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x171a20, 0x84380 bytes
    //
    _m7(sdk::unknown_ptr) set_color_space_transform;
};
#include "magic/api.end.hpp"
