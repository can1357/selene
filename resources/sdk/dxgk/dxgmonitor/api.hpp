#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgmonitor
{
    // [_AsyncUsb4PowerOnStage1@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x15746c, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) async_usb4_power_on_stage1;
    
    // [_AsyncUsb4PowerOnStage2@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1574d0, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) async_usb4_power_on_stage2;
    
    // [_ChangePowerStatus@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1ecad4, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) change_power_status;
    
    // [_CheckPortraitFirstMonitor@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xe6d40, 0x60098 bytes
    //
    _m3(sdk::unknown_ptr) check_portrait_first_monitor;
    
    // [??0DXGMONITOR@@QEAA@PEAVMONITOR_MGR@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1fe7b0, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGMONITOR@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b5bbc, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) destroy_instance;
    
    // [_EnableBoostRefreshRateEnabled@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b62e8, 0x84380 bytes
    //
    _m6(sdk::unknown_ptr) enable_boost_refresh_rate_enabled;
    
    // [GetAdapterInterface@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e4b40, 0x84380 bytes
    //
    _m7(sdk::unknown_ptr) get_adapter_interface;
    
    // [GetAdapterLuid@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e4b50, 0x84380 bytes
    //
    _m8(sdk::unknown_ptr) get_adapter_luid;
    
    // [GetCCDMonitorID@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x17dd70, 0x84380 bytes
    //
    _m9(sdk::unknown_ptr) get_ccd_monitor_id;
    
    // [GetConnectorType@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e4b80, 0x84380 bytes
    //
    _n0(sdk::unknown_ptr) get_connector_type;
    
    // [_GetDpiInfo@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1c28f8, 0x84380 bytes
    //
    _n1(sdk::unknown_ptr) get_dpi_info;
    
    // [GetDriverInterface@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e4b90, 0x84380 bytes
    //
    _n2(sdk::unknown_ptr) get_driver_interface;
    
    // [GetDxgiGammaRamp@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1daaf0, 0x84380 bytes
    //
    _n3(sdk::unknown_ptr) get_dxgi_gamma_ramp;
    
    // [_GetHWMonitorBaseEDIDBlock@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xe6dd0, 0x60098 bytes
    //
    _n4(sdk::unknown_ptr) get_hw_monitor_base_edid_block;
    
    // [GetLastOutputColorspace@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e4ba0, 0x84380 bytes
    //
    _n5(sdk::unknown_ptr) get_last_output_colorspace;
    
    // [GetLastOutputWireFormat@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e4bb0, 0x84380 bytes
    //
    _n6(sdk::unknown_ptr) get_last_output_wire_format;
    
    // [_GetLinkInfo@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1ae734, 0x84380 bytes
    //
    _n7(sdk::unknown_ptr) get_link_info;
    
    // [GetMonitorType@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e4bd0, 0x84380 bytes
    //
    _n8(sdk::unknown_ptr) get_monitor_type;
    
    // [GetTargetID@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e4be0, 0x84380 bytes
    //
    _n9(sdk::unknown_ptr) get_target_id;
    
    // [_InitializeMonitorNoDriver@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1feb1c, 0x84380 bytes
    //
    _o0(sdk::unknown_ptr) initialize_monitor_no_driver;
    
    // [_InitializeMonitorWithDriver@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2016a8, 0x84380 bytes
    //
    _o1(sdk::unknown_ptr) initialize_monitor_with_driver;
    
    // [IsInternalMonitor@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x204400, 0x84380 bytes
    //
    _o2(sdk::unknown_ptr) is_internal_monitor;
    
    // [_IsModeSupportedByDriver@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x86214, 0x60098 bytes
    //
    _o3(sdk::unknown_ptr) is_mode_supported_by_driver;
    
    // [_IsMonitorDisabled@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x16f98c, 0x84380 bytes
    //
    _o4(sdk::unknown_ptr) is_monitor_disabled;
    
    // [IsSimulatedMonitor@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x216020, 0x84380 bytes
    //
    _o5(sdk::unknown_ptr) is_simulated_monitor;
    
    // [_IsSupportedMode@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x86320, 0x60098 bytes
    //
    _o6(sdk::unknown_ptr) is_supported_mode;
    
    // [IsUsingDefaultMonitorProfile@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e4bf0, 0x84380 bytes
    //
    _o7(sdk::unknown_ptr) is_using_default_monitor_profile;
    
    // [_IsVirtualModeSupportDisabled@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1ad450, 0x84380 bytes
    //
    _o8(sdk::unknown_ptr) is_virtual_mode_support_disabled;
    
    // [OnDescriptorUpdated@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x202120, 0x84380 bytes
    //
    _o9(sdk::unknown_ptr) on_descriptor_updated;
    
    // [OnUsageUpdated@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x203f90, 0x84380 bytes
    //
    _p0(sdk::unknown_ptr) on_usage_updated;
    
    // [OpenGlobalGraphicsDriverKey@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x207750, 0x84380 bytes
    //
    _p1(sdk::unknown_ptr) open_global_graphics_driver_key;
    
    // [OpenMonitorDataStore@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1d63e0, 0x84380 bytes
    //
    _p2(sdk::unknown_ptr) open_monitor_data_store;
    
    // [OpenMonitorPnpKey@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2009a0, 0x84380 bytes
    //
    _p3(sdk::unknown_ptr) open_monitor_pnp_key;
    
    // [_ReadHMDPresenceFromMonitorStore@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xe7478, 0x60098 bytes
    //
    _p4(sdk::unknown_ptr) read_hmd_presence_from_monitor_store;
    
    // [_ReadHMDPresenceFromRegistry@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xe74d4, 0x60098 bytes
    //
    _p5(sdk::unknown_ptr) read_hmd_presence_from_registry;
    
    // [_ReleaseAdditionalTiming@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1b3f58, 0x60098 bytes
    //
    _p6(sdk::unknown_ptr) release_additional_timing;
    
    // [ReportPowerComponentActive@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b5df0, 0x84380 bytes
    //
    _p7(sdk::unknown_ptr) report_power_component_active;
    
    // [ReportPowerComponentIdle@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b5e70, 0x84380 bytes
    //
    _p8(sdk::unknown_ptr) report_power_component_idle;
    
    // [_SaveHMDPresenceToMonitorStore@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1b3bb4, 0x60098 bytes
    //
    _p9(sdk::unknown_ptr) save_hmd_presence_to_monitor_store;
    
    // [_SetAttachedPhysicalMonitor@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b6a14, 0x84380 bytes
    //
    _q0(sdk::unknown_ptr) set_attached_physical_monitor;
    
    // [_SupportSyncLockIdentical@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x204ea8, 0x84380 bytes
    //
    _q1(sdk::unknown_ptr) support_sync_lock_identical;
    
    // [TriggerMonitorTelemetry@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x204420, 0x84380 bytes
    //
    _q2(sdk::unknown_ptr) trigger_monitor_telemetry;
    
    // [_ValidateBoolean@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x215f20, 0x84380 bytes
    //
    _q3(sdk::unknown_ptr) validate_boolean;
    
    // [_ClearColorSpaceTransform@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x152170, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1553e0, 0x762b0 bytes
    //
    _q4(sdk::unknown_ptr) clear_color_space_transform;
    
    // [_CombineDXGIGammaRamp@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x125228, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x12728c, 0x762b0 bytes
    //
    _q5(sdk::unknown_ptr) combine_dxgi_gamma_ramp;
    
    // [_DsiReset@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f66e8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f6458, 0x762b0 bytes
    //
    _q6(sdk::unknown_ptr) dsi_reset;
    
    // [_DsiTransmission@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f69a4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f6714, 0x762b0 bytes
    //
    _q7(sdk::unknown_ptr) dsi_transmission;
    
    // [EdidColorDepthMoreThanSDR@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x216d0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x21718, 0x762b0 bytes
    //
    _q8(sdk::unknown_ptr) edid_color_depth_more_than_sdr;
    
    // [EdidSupportsHDR@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1754dc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x169bd4, 0x762b0 bytes
    //
    _q9(sdk::unknown_ptr) edid_supports_hdr;
    
    // [_GetAppOverride@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f0500, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f0270, 0x762b0 bytes
    //
    _r0(sdk::unknown_ptr) get_app_override;
    
    // [_GetAppOverrideKey@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f0600, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f0370, 0x762b0 bytes
    //
    _r1(sdk::unknown_ptr) get_app_override_key;
    
    // [GetCachedGammaRampForDiagnostics@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f6394, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f6104, 0x762b0 bytes
    //
    _r2(sdk::unknown_ptr) get_cached_gamma_ramp_for_diagnostics;
    
    // [_GetColorGamutTriangleArea@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x175840, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x169f38, 0x762b0 bytes
    //
    _r3(sdk::unknown_ptr) get_color_gamut_triangle_area;
    
    // [_GetColorPrimariesType@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x175500, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x169bf8, 0x762b0 bytes
    //
    _r4(sdk::unknown_ptr) get_color_primaries_type;
    
    // [_GetContiguousEDID@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15194c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x154b8c, 0x762b0 bytes
    //
    _r5(sdk::unknown_ptr) get_contiguous_edid;
    
    // [_GetDeltaBetweenPoints@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x175784, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x169e7c, 0x762b0 bytes
    //
    _r6(sdk::unknown_ptr) get_delta_between_points;
    
    // [_GetDisplayIDBlob@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14b9f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x14ea0c, 0x762b0 bytes
    //
    _r7(sdk::unknown_ptr) get_display_id_blob;
    
    // [_GetFinalMaxLuminanceValueFromRaw@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f4ec0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f4c30, 0x762b0 bytes
    //
    _r8(sdk::unknown_ptr) get_final_max_luminance_value_from_raw;
    
    // [_GetFinalMinLuminanceValueFromRaw@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f4f10, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f4c80, 0x762b0 bytes
    //
    _r9(sdk::unknown_ptr) get_final_min_luminance_value_from_raw;
    
    // [_GetIntendedUsageFromDescriptor@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1741fc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1688f4, 0x762b0 bytes
    //
    _s0(sdk::unknown_ptr) get_intended_usage_from_descriptor;
    
    // [_GetMonitorContainerID@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17413c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x168834, 0x762b0 bytes
    //
    _s1(sdk::unknown_ptr) get_monitor_container_id;
    
    // [_GetMostCapableColorSpaceTransform@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x125350, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1273b4, 0x762b0 bytes
    //
    _s2(sdk::unknown_ptr) get_most_capable_color_space_transform;
    
    // [_GetPseudoSpecializedState@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x12ae4c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0xde3ac, 0x762b0 bytes
    //
    _s3(sdk::unknown_ptr) get_pseudo_specialized_state;
    
    // [_GetSqrt@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1757d4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x169ecc, 0x762b0 bytes
    //
    _s4(sdk::unknown_ptr) get_sqrt;
    
    // [GetUsageClass@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f0340, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f00b0, 0x762b0 bytes
    //
    _s5(sdk::unknown_ptr) get_usage_class;
    
    // [_InitColorSpaceTransformCaps@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x171bf0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x165ae4, 0x762b0 bytes
    //
    _s6(sdk::unknown_ptr) init_color_space_transform_caps;
    
    // [_InitMipiDsiCaps@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x171a08, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1658fc, 0x762b0 bytes
    //
    _s7(sdk::unknown_ptr) init_mipi_dsi_caps;
    
    // [_IsTargetMatrix_3x4Supported@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x151cc4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0xdc93c, 0x762b0 bytes
    //
    _s8(sdk::unknown_ptr) is_target_matrix_3x4_supported;
    
    // [_IsValidPacket@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f6d50, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f6ac0, 0x762b0 bytes
    //
    _s9(sdk::unknown_ptr) is_valid_packet;
    
    // [_IsVirtualModeSuportDisabled@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x11d6e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0xee078, 0x762b0 bytes
    //
    _t0(sdk::unknown_ptr) is_virtual_mode_suport_disabled;
    
    // [_NotifyDXGIGammaRampChange@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x12b36c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0xddb38, 0x762b0 bytes
    //
    _t1(sdk::unknown_ptr) notify_dxgi_gamma_ramp_change;
    
    // [_ParseDisplayIDForHDRParams@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f55e4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f5354, 0x762b0 bytes
    //
    _t2(sdk::unknown_ptr) parse_display_id_for_hdr_params;
    
    // [_ParseDisplayIDForMonitorModes@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f58d4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f5644, 0x762b0 bytes
    //
    _t3(sdk::unknown_ptr) parse_display_id_for_monitor_modes;
    
    // [_ParseEDIDForHDRParams@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x173314, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x167a0c, 0x762b0 bytes
    //
    _t4(sdk::unknown_ptr) parse_edid_for_hdr_params;
    
    // [_ProcessDisplayIDBlob@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f5cfc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f5a6c, 0x762b0 bytes
    //
    _t5(sdk::unknown_ptr) process_display_id_blob;
    
    // [_QueryColorSpaceTransformCaps@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x151c58, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0xdc8d0, 0x762b0 bytes
    //
    _t6(sdk::unknown_ptr) query_color_space_transform_caps;
    
    // [_QueryMipiDsiCaps@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f6e00, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f6b70, 0x762b0 bytes
    //
    _t7(sdk::unknown_ptr) query_mipi_dsi_caps;
    
    // [_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x171524, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x165d4c, 0x762b0 bytes
    //
    _t8(sdk::unknown_ptr) read_advanced_color_enabled_from_monitor_store;
    
    // [_ReadAppOverridesFromMonitorDataStore@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x170240, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x166030, 0x762b0 bytes
    //
    _t9(sdk::unknown_ptr) read_app_overrides_from_monitor_data_store;
    
    // [_ReadDisplayHdrSupportFromPnpRegistry@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f0838, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f05a8, 0x762b0 bytes
    //
    _u0(sdk::unknown_ptr) read_display_hdr_support_from_pnp_registry;
    
    // [_ReadEnableIntegratedPanelHdrByDefaultFromPnpRegistry@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f0c58, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f09c8, 0x762b0 bytes
    //
    _u1(sdk::unknown_ptr) read_enable_integrated_panel_hdr_by_default_from_pnp_registry;
    
    // [_ReadSDRWhiteLevelFromMonitorStore@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1714a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x165dbc, 0x762b0 bytes
    //
    _u2(sdk::unknown_ptr) read_sdr_white_level_from_monitor_store;
    
    // [_ReadUsageFromEDIDForMsftVSDB@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1742d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1689c8, 0x762b0 bytes
    //
    _u3(sdk::unknown_ptr) read_usage_from_edid_for_msft_vsdb;
    
    // [_ReadUsageOverridesFromPnpRegistry@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x176c78, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x18529c, 0x762b0 bytes
    //
    _u4(sdk::unknown_ptr) read_usage_overrides_from_pnp_registry;
    
    // [_ReadUsageOverridesFromRegistry@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x176d18, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x18533c, 0x762b0 bytes
    //
    _u5(sdk::unknown_ptr) read_usage_overrides_from_registry;
    
    // [_ReadWCGEnforcedFromMonitorStore@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17142c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x165e40, 0x762b0 bytes
    //
    _u6(sdk::unknown_ptr) read_wcg_enforced_from_monitor_store;
    
    // [_RetrieveHDRParamDriverOverrides@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x173204, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1678fc, 0x762b0 bytes
    //
    _u7(sdk::unknown_ptr) retrieve_hdr_param_driver_overrides;
    
    // [_RetrieveIntegratedPanelNativeOverride@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x173bb0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1682a8, 0x762b0 bytes
    //
    _u8(sdk::unknown_ptr) retrieve_integrated_panel_native_override;
    
    // [_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f109c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f0e0c, 0x762b0 bytes
    //
    _u9(sdk::unknown_ptr) save_advanced_color_enabled_to_monitor_store;
    
    // [_SaveSDRWhiteLevelToMonitorStore@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f1184, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f0ef4, 0x762b0 bytes
    //
    _v0(sdk::unknown_ptr) save_sdr_white_level_to_monitor_store;
    
    // [_SaveUsageOverridesToMonitorStore@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f131c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f108c, 0x762b0 bytes
    //
    _v1(sdk::unknown_ptr) save_usage_overrides_to_monitor_store;
    
    // [_SaveWCGEnforcedToMonitorStore@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f1528, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f1298, 0x762b0 bytes
    //
    _v2(sdk::unknown_ptr) save_wcg_enforced_to_monitor_store;
    
    // [_SendAdjustedHDRParamsToDriver@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15383c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x156ae4, 0x762b0 bytes
    //
    _v3(sdk::unknown_ptr) send_adjusted_hdr_params_to_driver;
    
    // [_SetActiveColorProfileName@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f6f28, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f6c98, 0x762b0 bytes
    //
    _v4(sdk::unknown_ptr) set_active_color_profile_name;
    
    // [_SetAppOverride@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f15f8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f1368, 0x762b0 bytes
    //
    _v5(sdk::unknown_ptr) set_app_override;
    
    // [_SetColorPrimariesToBT709@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f6330, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f60a0, 0x762b0 bytes
    //
    _v6(sdk::unknown_ptr) set_color_primaries_to_bt709;
    
    // [_SetColorSpaceTransform@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x12bb70, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0xdd404, 0x762b0 bytes
    //
    _v7(sdk::unknown_ptr) set_color_space_transform;
    
    // [SetEnforceWideColorMode@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f38b4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f3624, 0x762b0 bytes
    //
    _v8(sdk::unknown_ptr) set_enforce_wide_color_mode;
    
    // [SetLuminanceValuesWithBrightnessCompensation@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f3914, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f3684, 0x762b0 bytes
    //
    _v9(sdk::unknown_ptr) set_luminance_values_with_brightness_compensation;
    
    // [SetSDRWhiteLevel@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f3ab0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f3820, 0x762b0 bytes
    //
    _w0(sdk::unknown_ptr) set_sdr_white_level;
    
    // [TriggerMonitorColorimetryChangedWnf@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f3b0c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f387c, 0x762b0 bytes
    //
    _w1(sdk::unknown_ptr) trigger_monitor_colorimetry_changed_wnf;
    
    // [_UpdateHDRParamsIfRequired@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x175440, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x169b38, 0x762b0 bytes
    //
    _w2(sdk::unknown_ptr) update_hdr_params_if_required;
    
    // [_UpdatePnPDeviceInterfaceProperties@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x177118, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16a530, 0x762b0 bytes
    //
    _w3(sdk::unknown_ptr) update_pn_p_device_interface_properties;
    
    // [_UpdatePnPDeviceProperties@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17290c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x167004, 0x762b0 bytes
    //
    _w4(sdk::unknown_ptr) update_pn_p_device_properties;
    
    // [_ValidateMipiDsiPackets@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f6fdc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f6d4c, 0x762b0 bytes
    //
    _w5(sdk::unknown_ptr) validate_mipi_dsi_packets;
    
    // [_CheckPortraitFirstMonitorFromEDID@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x173c60, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2022f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x168358, 0x762b0 bytes
    //
    _w6(sdk::unknown_ptr) check_portrait_first_monitor_from_edid;
    
    // [_CleanupMonitorDescriptors@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b5284, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f4784, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f44f4, 0x762b0 bytes
    //
    _w7(sdk::unknown_ptr) cleanup_monitor_descriptors;
    
    // [_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe6a6c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1729d4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1670cc, 0x762b0 bytes
    //
    _w8(sdk::unknown_ptr) cleanup_monitor_source_mode_and_freq_ranges;
    
    // [_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b3924, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f0410, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f0180, 0x762b0 bytes
    //
    _w9(sdk::unknown_ptr) cleanup_registry_overrided_frequency_ranges;
    
    // [_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe76c0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x171eb0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1665a8, 0x762b0 bytes
    //
    _x0(sdk::unknown_ptr) cleanup_registry_overrided_monitor_descriptors;
    
    // [??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe8b5c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1761a4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x164c48, 0x762b0 bytes
    //
    _x1(sdk::unknown_ptr) construct_instance_;
    
    // [_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b5618, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f4bdc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f494c, 0x762b0 bytes
    //
    _x2(sdk::unknown_ptr) create_default_monitor_profile_for_wdd_mv1_0;
    
    // [_CreateMonitorModeEnumerator@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe7f5c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17c194, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17ea74, 0x762b0 bytes
    //
    _x3(sdk::unknown_ptr) create_monitor_mode_enumerator;
    
    // [??1DXGMONITOR@@AEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b47a0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f378c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f34fc, 0x762b0 bytes
    //
    _x4(sdk::unknown_ptr) destroy_instance_;
    
    // [_DispatchIoctrls@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x12c1c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1727f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdd370, 0x762b0 bytes
    //
    _x5(sdk::unknown_ptr) dispatch_ioctrls;
    
    // [_GetAdditionalTiming@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b3e78, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17e880, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1819f0, 0x762b0 bytes
    //
    _x6(sdk::unknown_ptr) get_additional_timing;
    
    // [_GetAttachedPhysicalMonitor@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x34344, 0x60098 bytes
    // dxgkrnl.sys .text:0x5b2b8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5b448, 0x762b0 bytes
    //
    _x7(sdk::unknown_ptr) get_attached_physical_monitor;
    
    // [_GetDeviceObject@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x74c8, 0x60098 bytes
    // dxgkrnl.sys .text:0x797c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x3540, 0x762b0 bytes
    //
    _x8(sdk::unknown_ptr) get_device_object;
    
    // [_GetEdidBaseBlockPtr@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x86148, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11d6b8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0xee050, 0x762b0 bytes
    //
    _x9(sdk::unknown_ptr) get_edid_base_block_ptr;
    
    // [_GetEdidBlockPtr@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b58a8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1519e8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x154c28, 0x762b0 bytes
    //
    _y0(sdk::unknown_ptr) get_edid_block_ptr;
    
    // [_GetFirstMonitorDescriptorEnumerator@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe81fc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f4f6c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f4cdc, 0x762b0 bytes
    //
    _y1(sdk::unknown_ptr) get_first_monitor_descriptor_enumerator;
    
    // [_GetFirstMonitorFreqRangeEnumerator@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b58e0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f50c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f4e30, 0x762b0 bytes
    //
    _y2(sdk::unknown_ptr) get_first_monitor_freq_range_enumerator;
    
    // [_GetMonitorCCDMonitorID@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x868a4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11d428, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0xedf1c, 0x762b0 bytes
    //
    _y3(sdk::unknown_ptr) get_monitor_ccd_monitor_id;
    
    // [_GetMonitorDescriptorIDs@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe843c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x174fec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1696e4, 0x762b0 bytes
    //
    _y4(sdk::unknown_ptr) get_monitor_descriptor_i_ds;
    
    // [_GetMonitorOrientation@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x7d9c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b93c4, 0x84380 bytes
    // dxgkrnl.sys .text:0x3980, 0x762b0 bytes
    //
    _y5(sdk::unknown_ptr) get_monitor_orientation;
    
    // [_GetNextMonitorDescriptorEnumerator@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe815c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f5210, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f4f80, 0x762b0 bytes
    //
    _y6(sdk::unknown_ptr) get_next_monitor_descriptor_enumerator;
    
    // [_GetNextMonitorFreqRangeEnumerator@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b59e8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f5410, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f5180, 0x762b0 bytes
    //
    _y7(sdk::unknown_ptr) get_next_monitor_freq_range_enumerator;
    
    // [_GetNextMonitorModeEnumerator@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b5b6c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17c098, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17e978, 0x762b0 bytes
    //
    _y8(sdk::unknown_ptr) get_next_monitor_mode_enumerator;
    
    // [_InitializeMonitor@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe8928, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1717a8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16569c, 0x762b0 bytes
    //
    _y9(sdk::unknown_ptr) initialize_monitor;
    
    // [_InsertMonitorSourceMode@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe8018, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17b514, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17ddf4, 0x762b0 bytes
    //
    _z0(sdk::unknown_ptr) insert_monitor_source_mode;
    
    // [_IsModeInActiveSizeRange@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b62a4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f73e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f7150, 0x762b0 bytes
    //
    _z1(sdk::unknown_ptr) is_mode_in_active_size_range;
    
    // [_IsModeInPixelRateRange@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b6398, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f750c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f727c, 0x762b0 bytes
    //
    _z2(sdk::unknown_ptr) is_mode_in_pixel_rate_range;
    
    // [_IsModeSupportedByMonitorMode@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b6498, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f7648, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f73b8, 0x762b0 bytes
    //
    _z3(sdk::unknown_ptr) is_mode_supported_by_monitor_mode;
    
    // [_IsSupportedModeInternal@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x86168, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10e960, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x11a990, 0x762b0 bytes
    //
    _z4(sdk::unknown_ptr) is_supported_mode_internal;
    
    // [LogMonitorObjectOnOffState@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x152cf4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1df300, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x155fe4, 0x762b0 bytes
    //
    _z5(sdk::unknown_ptr) log_monitor_object_on_off_state;
    
    // [_MonitorConfigInfoTable@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .data:0x55970, 0x60098 bytes
    // dxgkrnl.sys .data:0xaeb70, 0x762b0 bytes
    // dxgkrnl.sys .data:0xaeb70, 0x762b0 bytes
    //
    _z6(sdk::unknown_ptr) monitor_config_info_table;
    
    // [_MonitorTelemetry@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe8ea8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x174390, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x168a88, 0x762b0 bytes
    //
    _z7(sdk::unknown_ptr) monitor_telemetry;
    
    // [_OpenMonitorDataStore@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe7e34, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17044c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16623c, 0x762b0 bytes
    //
    _z8(sdk::unknown_ptr) open_monitor_data_store_;
    
    // [_ParseEDIDBaseBlock@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe6688, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x172c6c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x167364, 0x762b0 bytes
    //
    _z9(sdk::unknown_ptr) parse_edid_base_block;
    
    // [_ProcessMonitorResolutionKey@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe7b74, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1721e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1668d8, 0x762b0 bytes
    //
    _a0(sdk::unknown_ptr) process_monitor_resolution_key;
    
    // [_QueryDriverRecommendMonitorModes@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe6c74, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x173990, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x168088, 0x762b0 bytes
    //
    _a1(sdk::unknown_ptr) query_driver_recommend_monitor_modes;
    
    // [_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b39ec, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f0dd8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f0b48, 0x762b0 bytes
    //
    _a2(sdk::unknown_ptr) read_one_block_monitor_descriptor_from_registry;
    
    // [_ReadScaleFactorFromInf@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe7598, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x176e40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1862f8, 0x762b0 bytes
    //
    _a3(sdk::unknown_ptr) read_scale_factor_from_inf;
    
    // [_ReadScaleFactorFromMonitorStore@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe7664, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x171594, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x165ce0, 0x762b0 bytes
    //
    _a4(sdk::unknown_ptr) read_scale_factor_from_monitor_store;
    
    // [_ReadVirtualModeSupportFromRegistry@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe7ddc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x171600, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x165c74, 0x762b0 bytes
    //
    _a5(sdk::unknown_ptr) read_virtual_mode_support_from_registry;
    
    // [_RegisterPnPTargetDeviceNotification@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe730c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x176f4c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16a364, 0x762b0 bytes
    //
    _a6(sdk::unknown_ptr) register_pn_p_target_device_notification;
    
    // [_ReleaseMonitorDescriptorEnumerator@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe82c8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f5f58, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f5cc8, 0x762b0 bytes
    //
    _a7(sdk::unknown_ptr) release_monitor_descriptor_enumerator;
    
    // [_ReleaseMonitorFreqRangeEnumerator@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b5c78, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f6020, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f5d90, 0x762b0 bytes
    //
    _a8(sdk::unknown_ptr) release_monitor_freq_range_enumerator;
    
    // [_ReleaseMonitorModeEnumerator@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b5d44, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17c7c4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17fd04, 0x762b0 bytes
    //
    _a9(sdk::unknown_ptr) release_monitor_mode_enumerator;
    
    // [_RetrieveMonitorDescriptorsFromCache@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b5de4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f6108, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f5e78, 0x762b0 bytes
    //
    _b0(sdk::unknown_ptr) retrieve_monitor_descriptors_from_cache;
    
    // [_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe6adc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x180aa4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1652f0, 0x762b0 bytes
    //
    _b1(sdk::unknown_ptr) retrieve_monitor_descriptors_from_driver;
    
    // [_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe7ca4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x171d24, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16641c, 0x762b0 bytes
    //
    _b2(sdk::unknown_ptr) retrieve_monitor_descriptors_from_registry;
    
    // [_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe7a1c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x171f6c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x166664, 0x762b0 bytes
    //
    _b3(sdk::unknown_ptr) retrieve_monitor_frequency_range_from_registry;
    
    // [_RetrieveMonitorOrientationFromAcpi@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1726a8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2009fc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x166da0, 0x762b0 bytes
    //
    _b4(sdk::unknown_ptr) retrieve_monitor_orientation_from_acpi;
    
    // [_SaveScaleFactorToMonitorStore@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b3c4c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f1250, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f0fc0, 0x762b0 bytes
    //
    _b5(sdk::unknown_ptr) save_scale_factor_to_monitor_store;
    
    // [_SaveVirtualModeSupportToRegistry@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b3ce4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f1454, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f11c4, 0x762b0 bytes
    //
    _b6(sdk::unknown_ptr) save_virtual_mode_support_to_registry;
    
    // [_UnregisterPnPTargetDeviceNotification@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b5164, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f4618, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f4388, 0x762b0 bytes
    //
    _b7(sdk::unknown_ptr) unregister_pn_p_target_device_notification;
    
    // [_UpdateEDIDBaseBlock@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe86cc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x173564, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x167c5c, 0x762b0 bytes
    //
    _b8(sdk::unknown_ptr) update_edid_base_block;
    
    // [_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe65a0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17512c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x169824, 0x762b0 bytes
    //
    _b9(sdk::unknown_ptr) update_monitor_edid_registry_for_gdi;
    
    // [_AddReference@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x862ec, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11d55c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1adc04, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xed9cc, 0x762b0 bytes
    //
    _c0(sdk::unknown_ptr) add_reference;
    
    // [_ChangeLIDStatus@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x34290, 0x60098 bytes
    // dxgkrnl.sys .text:0x5b1e4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b5ee4, 0x84380 bytes
    // dxgkrnl.sys .text:0x5b374, 0x762b0 bytes
    //
    _c1(sdk::unknown_ptr) change_lid_status;
    
    // [_CleanupMonitorCCDName@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b484c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f3b74, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b5f38, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f38e4, 0x762b0 bytes
    //
    _c2(sdk::unknown_ptr) cleanup_monitor_ccd_name;
    
    // [_CopyMonitorInformation@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b5360, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f48d8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b6038, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f4648, 0x762b0 bytes
    //
    _c3(sdk::unknown_ptr) copy_monitor_information;
    
    // [_CreateTtmDevice@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe8870, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x176974, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x203ff8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x16a958, 0x762b0 bytes
    //
    _c4(sdk::unknown_ptr) create_ttm_device;
    
    // [_DestroyTtmDevice@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b4930, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f3c7c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b61d8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f39ec, 0x762b0 bytes
    //
    _c5(sdk::unknown_ptr) destroy_ttm_device;
    
    // [_DisableVirtualModeSupport@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b496c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f3cbc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b6218, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f3a2c, 0x762b0 bytes
    //
    _c6(sdk::unknown_ptr) disable_virtual_mode_support;
    
    // [_DispatchInternalIOCtrl@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x86438, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14f438, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1de6e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x152318, 0x762b0 bytes
    //
    _c7(sdk::unknown_ptr) dispatch_internal_io_ctrl;
    
    // [_FillMonitorDeviceInfo@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x869b4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x12f848, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c75cc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x133a94, 0x762b0 bytes
    //
    _c8(sdk::unknown_ptr) fill_monitor_device_info;
    
    // [_GetMonitorDiagInfo@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe834c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x175234, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2002b4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x16992c, 0x762b0 bytes
    //
    _c9(sdk::unknown_ptr) get_monitor_diag_info;
    
    // [_GetMonitorEldInformation@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe8518, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1748e8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1fff6c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x168fe0, 0x762b0 bytes
    //
    _d0(sdk::unknown_ptr) get_monitor_eld_information;
    
    // [_GetMonitorNativeFlags@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xf5cc, 0x60098 bytes
    // dxgkrnl.sys .text:0x7fb8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ae5f0, 0x84380 bytes
    // dxgkrnl.sys .text:0x39b4, 0x762b0 bytes
    //
    _d1(sdk::unknown_ptr) get_monitor_native_flags;
    
    // [_OnMonitorDeviceNodeReady@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe83ac, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17286c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2006e4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x166f64, 0x762b0 bytes
    //
    _d2(sdk::unknown_ptr) on_monitor_device_node_ready;
    
    // [_OnMonitorFunctionDriverArrival@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe8d40, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17662c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x203cf4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x16a610, 0x762b0 bytes
    //
    _d3(sdk::unknown_ptr) on_monitor_function_driver_arrival;
    
    // [_OnMonitorFunctionDriverDeparture@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b49e0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f3d38, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b638c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f3aa8, 0x762b0 bytes
    //
    _d4(sdk::unknown_ptr) on_monitor_function_driver_departure;
    
    // [_PnPTargetDeviceChangeNotification@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b4a50, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f3dd0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b6420, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f3b40, 0x762b0 bytes
    //
    _d5(sdk::unknown_ptr) pn_p_target_device_change_notification;
    
    // [_PrepareDefaultMonitorConfiguration@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe795c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x183384, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x201bb4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x165600, 0x762b0 bytes
    //
    _d6(sdk::unknown_ptr) prepare_default_monitor_configuration;
    
    // [_PrepareMonitorCCDName@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe6f0c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x174b0c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x201c54, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x169204, 0x762b0 bytes
    //
    _d7(sdk::unknown_ptr) prepare_monitor_ccd_name;
    
    // [_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe7770, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17260c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2008e4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x166d04, 0x762b0 bytes
    //
    _d8(sdk::unknown_ptr) retrieve_monitor_configuration_from_driver_inf;
    
    // [_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe77f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17174c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x201b6c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x165c18, 0x762b0 bytes
    //
    _d9(sdk::unknown_ptr) retrieve_monitor_configuration_from_monitor_store;
    
    // [_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe7848, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17274c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x200abc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x166e44, 0x762b0 bytes
    //
    _e0(sdk::unknown_ptr) retrieve_monitor_configuration_from_registry;
    
    // [_SerializeMonitor@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b4e24, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f4288, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b67ac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f3ff8, 0x762b0 bytes
    //
    _e1(sdk::unknown_ptr) serialize_monitor;
    
    // [_UniqueEntryList@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0x56f20, 0x60098 bytes
    // dxgkrnl.sys .data:0xb0d48, 0x762b0 bytes
    // dxgkrnl.sys .data:0x131ad8, 0x84380 bytes
    // dxgkrnl.sys .data:0xb0d58, 0x762b0 bytes
    //
    _e2(sdk::unknown_ptr) unique_entry_list;
    
    // [_UniqueTableLock@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0x56f30, 0x60098 bytes
    // dxgkrnl.sys .data:0xb0d10, 0x762b0 bytes
    // dxgkrnl.sys .data:0x131aa0, 0x84380 bytes
    // dxgkrnl.sys .data:0xb0d20, 0x762b0 bytes
    //
    _e3(sdk::unknown_ptr) unique_table_lock;
    
    // [_UpdateLinkInfo@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe6e50, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x171c50, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20188c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x165b44, 0x762b0 bytes
    //
    _e4(sdk::unknown_ptr) update_link_info;
    
    // [_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b3d84, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f17b4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3ba914, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f1524, 0x762b0 bytes
    //
    _e5(sdk::unknown_ptr) update_monitor_configuration_to_monitor_store;
    
    // [_ValidateDockingOrientation@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe79f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x183540, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x215e40, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x186970, 0x762b0 bytes
    //
    _e6(sdk::unknown_ptr) validate_docking_orientation;
    
    // [_ValidateMonitorOrientation@DXGMONITOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe7a00, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x182ff0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x215a00, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x186510, 0x762b0 bytes
    //
    _e7(sdk::unknown_ptr) validate_monitor_orientation;
};
#include "magic/api.end.hpp"
