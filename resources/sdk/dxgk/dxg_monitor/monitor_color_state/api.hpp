#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_monitor::monitor_color_state
{
    // [CopyInstance@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b94d0, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) copy_instance;
    
    // [EdidSupportsHDR@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2027d0, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) edid_supports_hdr;
    
    // [_GetColorGamutTriangleArea@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x202b04, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) get_color_gamut_triangle_area;
    
    // [_GetColorPrimariesType@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2027e8, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) get_color_primaries_type;
    
    // [_GetDeltaBetweenPoints@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x202a48, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) get_delta_between_points;
    
    // [GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1d78c8, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) get_monitor_and_link_hdr_capable;
    
    // [GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x171c74, 0x84380 bytes
    //
    _m6(sdk::unknown_ptr) get_monitor_and_link_wcg_capable;
    
    // [_GetSqrt@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x202a94, 0x84380 bytes
    //
    _m7(sdk::unknown_ptr) get_sqrt;
    
    // [IsAdvancedColorEnabled@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1767f8, 0x84380 bytes
    //
    _m8(sdk::unknown_ptr) is_advanced_color_enabled;
    
    // [IsAutoColorManagementSupported@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1b13ec, 0x84380 bytes
    //
    _m9(sdk::unknown_ptr) is_auto_color_management_supported;
    
    // [_MarkDisplayHDRReadInMonitorStore@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b9984, 0x84380 bytes
    //
    _n0(sdk::unknown_ptr) mark_display_hdr_read_in_monitor_store;
    
    // [OnDescriptorUpdated@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x202524, 0x84380 bytes
    //
    _n1(sdk::unknown_ptr) on_descriptor_updated;
    
    // [OnFunctionDriverArrival@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2023a8, 0x84380 bytes
    //
    _n2(sdk::unknown_ptr) on_function_driver_arrival;
    
    // [OnInitialized@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x201abc, 0x84380 bytes
    //
    _n3(sdk::unknown_ptr) on_initialized;
    
    // [_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b99f0, 0x84380 bytes
    //
    _n4(sdk::unknown_ptr) read_display_hdr_support_from_pnp_registry;
    
    // [_RetrieveHDRParamDriverOverrides@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x202c80, 0x84380 bytes
    //
    _n5(sdk::unknown_ptr) retrieve_hdr_param_driver_overrides;
    
    // [SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1df194, 0x84380 bytes
    //
    _n6(sdk::unknown_ptr) send_adjusted_hdr_params_to_driver;
    
    // [SetAdvancedColorEnabled@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x202470, 0x84380 bytes
    //
    _n7(sdk::unknown_ptr) set_advanced_color_enabled;
    
    // [SetAutoColorManagementSupported@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2024f0, 0x84380 bytes
    //
    _n8(sdk::unknown_ptr) set_auto_color_management_supported;
    
    // [_SetColorPrimariesToBT709@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x202c1c, 0x84380 bytes
    //
    _n9(sdk::unknown_ptr) set_color_primaries_to_bt709;
    
    // [SetColorProfile@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b9768, 0x84380 bytes
    //
    _o0(sdk::unknown_ptr) set_color_profile;
    
    // [_SetLuminanceValuesToHDR@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b9cc0, 0x84380 bytes
    //
    _o1(sdk::unknown_ptr) set_luminance_values_to_hdr;
    
    // [_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x202b70, 0x84380 bytes
    //
    _o2(sdk::unknown_ptr) set_luminance_values_to_sdr;
    
    // [SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x202bc0, 0x84380 bytes
    //
    _o3(sdk::unknown_ptr) set_luminance_values_with_brightness_compensation;
    
    // [SetSDRWhiteLevel@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b98d0, 0x84380 bytes
    //
    _o4(sdk::unknown_ptr) set_sdr_white_level;
    
    // [TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x16c3f8, 0x84380 bytes
    //
    _o5(sdk::unknown_ptr) trigger_monitor_colorimetry_changed_wnf;
    
    // [_UpdateHDRParamsIfRequired@MonitorColorState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x202788, 0x84380 bytes
    //
    _o6(sdk::unknown_ptr) update_hdr_params_if_required;
};
#include "magic/api.end.hpp"
