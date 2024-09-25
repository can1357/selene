#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::adapter_display
{
    // [AdjustFullscreenGammaRampDXGI1@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x14aaa8, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) adjust_fullscreen_gamma_ramp_dxgi1;
    
    // [AdjustFullscreenGammaRampRGB256x3x16@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x14ab38, 0x60098 bytes
    //
    _m1(sdk::unknown_ptr) adjust_fullscreen_gamma_ramp_rgb256x3x16;
    
    // [CommitVidPn@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xd841c, 0x60098 bytes
    //
    _m2(sdk::unknown_ptr) commit_vid_pn;
    
    // [DdiCancelFlips@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x46d68, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) ddi_cancel_flips;
    
    // [DdiCancelQueuedFlips@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x46fb0, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) ddi_cancel_queued_flips;
    
    // [DdiQueryVidPnHWCapability@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x7f2bc, 0x60098 bytes
    //
    _m5(sdk::unknown_ptr) ddi_query_vid_pn_hw_capability;
    
    // [DdiSetInterruptTargetPresentId@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x48680, 0x84380 bytes
    //
    _m6(sdk::unknown_ptr) ddi_set_interrupt_target_present_id;
    
    // [DefaultDdiRecommendVidPnTopology@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xf32b0, 0x60098 bytes
    //
    _m7(sdk::unknown_ptr) default_ddi_recommend_vid_pn_topology;
    
    // [DetermineHdrPixelFormatFromColorSpace@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e22b0, 0x84380 bytes
    //
    _m8(sdk::unknown_ptr) determine_hdr_pixel_format_from_color_space;
    
    // [DisableTransitionalPrimaryAllocation@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x14b2d8, 0x60098 bytes
    //
    _m9(sdk::unknown_ptr) disable_transitional_primary_allocation;
    
    // [DodGetScanLine@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x14b544, 0x60098 bytes
    //
    _n0(sdk::unknown_ptr) dod_get_scan_line;
    
    // [GetContentRect@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x1caf8, 0x60098 bytes
    //
    _n1(sdk::unknown_ptr) get_content_rect;
    
    // [GetDisplayOnlyDriverPrecisePresentRegionPreference@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x49918, 0x84380 bytes
    //
    _n2(sdk::unknown_ptr) get_display_only_driver_precise_present_region_preference;
    
    // [GetDisplayOnlyDriverPreferPhysicallyContiguous@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x499b0, 0x84380 bytes
    //
    _n3(sdk::unknown_ptr) get_display_only_driver_prefer_physically_contiguous;
    
    // [GetDisplayOnlyDriverUseSmallestMode@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6af88, 0x84380 bytes
    //
    _n4(sdk::unknown_ptr) get_display_only_driver_use_smallest_mode;
    
    // [GetDoDCddShadowSession@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x14b930, 0x60098 bytes
    //
    _n5(sdk::unknown_ptr) get_do_d_cdd_shadow_session;
    
    // [GetDwmClipBox@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x6788, 0x60098 bytes
    //
    _n6(sdk::unknown_ptr) get_dwm_clip_box;
    
    // [GetPreferredHdrPixelFormat@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1770ac, 0x84380 bytes
    //
    _n7(sdk::unknown_ptr) get_preferred_hdr_pixel_format;
    
    // [IsMonitorVisible@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x61c8, 0x60098 bytes
    //
    _n8(sdk::unknown_ptr) is_monitor_visible;
    
    // [IsPrimaryVisible@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x6438, 0x60098 bytes
    //
    _n9(sdk::unknown_ptr) is_primary_visible;
    
    // [PresentDisplayOnlyCdd@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x14be24, 0x60098 bytes
    //
    _o0(sdk::unknown_ptr) present_display_only_cdd;
    
    // [SetCurrentVirtualMode@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x38dc, 0x84380 bytes
    //
    _o1(sdk::unknown_ptr) set_current_virtual_mode;
    
    // [SetGammaRamp@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x7d138, 0x60098 bytes
    //
    _o2(sdk::unknown_ptr) set_gamma_ramp;
    
    // [SetLastCddIntegerVSync@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x6680, 0x60098 bytes
    //
    _o3(sdk::unknown_ptr) set_last_cdd_integer_v_sync;
    
    // [UpdateGdiGammaRamp@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x7c7e8, 0x60098 bytes
    //
    _o4(sdk::unknown_ptr) update_gdi_gamma_ramp;
    
    // [UpdateVidPnTargetList@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x6200, 0x60098 bytes
    //
    _o5(sdk::unknown_ptr) update_vid_pn_target_list;
    
    // [GetDDIEnabledPlanes@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20ddf0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20df90, 0x762b0 bytes
    //
    _o6(sdk::unknown_ptr) get_ddi_enabled_planes;
    
    // [IsHdrEnabled@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x45520, 0x762b0 bytes
    // dxgkrnl.sys .text:0x45710, 0x762b0 bytes
    //
    _o7(sdk::unknown_ptr) is_hdr_enabled;
    
    // [IsPlaneEnabled@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20e690, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20e830, 0x762b0 bytes
    //
    _o8(sdk::unknown_ptr) is_plane_enabled;
    
    // [SetGdiGammaRamp@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x12fe2c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x12b6fc, 0x762b0 bytes
    //
    _o9(sdk::unknown_ptr) set_gdi_gamma_ramp;
    
    // [AdjustFullscreenGammaRamp@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20b818, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bfa14, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20b9b8, 0x762b0 bytes
    //
    _p0(sdk::unknown_ptr) adjust_fullscreen_gamma_ramp;
    
    // [AreSourcesSyncLocked@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20b9e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bfbdc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20bb80, 0x762b0 bytes
    //
    _p1(sdk::unknown_ptr) are_sources_sync_locked;
    
    // [ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20bbac, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15e808, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20bd4c, 0x762b0 bytes
    //
    _p2(sdk::unknown_ptr) config_changes_on_multiple_outputs;
    
    // [CreateProtectedSession@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x282a40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x339f2c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x282ac0, 0x762b0 bytes
    //
    _p3(sdk::unknown_ptr) create_protected_session;
    
    // [DdiCreatePeriodicFrameNotification@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x213efc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c7b4c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21409c, 0x762b0 bytes
    //
    _p4(sdk::unknown_ptr) ddi_create_periodic_frame_notification;
    
    // [DdiCreateProtectedSession@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x214188, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c7df8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x214328, 0x762b0 bytes
    //
    _p5(sdk::unknown_ptr) ddi_create_protected_session;
    
    // [DdiDestroyPeriodicFrameNotification@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x214f8c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c8f60, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21512c, 0x762b0 bytes
    //
    _p6(sdk::unknown_ptr) ddi_destroy_periodic_frame_notification;
    
    // [DdiDestroyProtectedSession@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2151d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c91c4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x215370, 0x762b0 bytes
    //
    _p7(sdk::unknown_ptr) ddi_destroy_protected_session;
    
    // [DdiDPAuxIoTransmission@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2143cc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c8050, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21456c, 0x762b0 bytes
    //
    _p8(sdk::unknown_ptr) ddi_dp_aux_io_transmission;
    
    // [DdiDPI2CIoTransmission@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x21462c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c8304, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2147cc, 0x762b0 bytes
    //
    _p9(sdk::unknown_ptr) ddi_dpi2c_io_transmission;
    
    // [DdiDPSBMTransmission@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x21488c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c85b8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x214a2c, 0x762b0 bytes
    //
    _q0(sdk::unknown_ptr) ddi_dpsbm_transmission;
    
    // [DdiDsiCaps@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x215400, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c9408, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2155a0, 0x762b0 bytes
    //
    _q1(sdk::unknown_ptr) ddi_dsi_caps;
    
    // [DdiDsiReset@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x21565c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c96c4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2157fc, 0x762b0 bytes
    //
    _q2(sdk::unknown_ptr) ddi_dsi_reset;
    
    // [DdiDsiTransmission@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2158b8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c9980, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x215a58, 0x762b0 bytes
    //
    _q3(sdk::unknown_ptr) ddi_dsi_transmission;
    
    // [DdiGetDisplayStateIntrusive@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2164b4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ca658, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x216654, 0x762b0 bytes
    //
    _q4(sdk::unknown_ptr) ddi_get_display_state_intrusive;
    
    // [DdiGetDisplayStateNonIntrusive@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x216714, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ca90c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2168b4, 0x762b0 bytes
    //
    _q5(sdk::unknown_ptr) ddi_get_display_state_non_intrusive;
    
    // [DdiGetDPAddress@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x216254, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ca3a4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2163f4, 0x762b0 bytes
    //
    _q6(sdk::unknown_ptr) ddi_get_dp_address;
    
    // [DdiGetMultiPlaneOverlayCaps@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x216974, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b9780, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x216b14, 0x762b0 bytes
    //
    _q7(sdk::unknown_ptr) ddi_get_multi_plane_overlay_caps;
    
    // [DdiGetPostCompositionCaps@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x216bcc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b9914, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x216d6c, 0x762b0 bytes
    //
    _q8(sdk::unknown_ptr) ddi_get_post_composition_caps;
    
    // [DdiQueryDPCaps@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x217a38, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2cb39c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x217bd8, 0x762b0 bytes
    //
    _q9(sdk::unknown_ptr) ddi_query_dp_caps;
    
    // [DdiSetTargetAnalogCopyProtection@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x219584, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2cd1f8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x219724, 0x762b0 bytes
    //
    _r0(sdk::unknown_ptr) ddi_set_target_analog_copy_protection;
    
    // [DdiSetTargetContentType@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2197d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2cd454, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x219970, 0x762b0 bytes
    //
    _r1(sdk::unknown_ptr) ddi_set_target_content_type;
    
    // [DdiSetTargetGamma@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x219a1c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x164304, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x219bbc, 0x762b0 bytes
    //
    _r2(sdk::unknown_ptr) ddi_set_target_gamma;
    
    // [DdiSetTimingsFromVidPn@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x219c70, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e172c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x219e10, 0x762b0 bytes
    //
    _r3(sdk::unknown_ptr) ddi_set_timings_from_vid_pn;
    
    // [DefaultDdiSetTargetAnalogCopyProtection@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x155e90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4870, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x158ce0, 0x762b0 bytes
    //
    _r4(sdk::unknown_ptr) default_ddi_set_target_analog_copy_protection;
    
    // [DefaultDdiSetTargetContentType@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x155e90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4870, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x158ce0, 0x762b0 bytes
    //
    _r5(sdk::unknown_ptr) default_ddi_set_target_content_type;
    
    // [DefaultDdiSetTargetGamma@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x155e90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4870, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x158ce0, 0x762b0 bytes
    //
    _r6(sdk::unknown_ptr) default_ddi_set_target_gamma;
    
    // [DelayCreateCddAllocations@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd4e80, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15aa68, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd5510, 0x762b0 bytes
    //
    _r7(sdk::unknown_ptr) delay_create_cdd_allocations;
    
    // [DestroyProtectedSession@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x282bcc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33a1c8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x282c4c, 0x762b0 bytes
    //
    _r8(sdk::unknown_ptr) destroy_protected_session;
    
    // [DetermineScalingCapabilities@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1476cc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d425c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x149a40, 0x762b0 bytes
    //
    _r9(sdk::unknown_ptr) determine_scaling_capabilities;
    
    // [DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1521e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x161bac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x155450, 0x762b0 bytes
    //
    _s0(sdk::unknown_ptr) disable_all_planes_on_vid_pn_sources_immediate;
    
    // [DisableMPOPlanes@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20c730, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1611f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20c8d0, 0x762b0 bytes
    //
    _s1(sdk::unknown_ptr) disable_mpo_planes;
    
    // [DisableOverlayPlanes@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x104e70, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x195cf0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x110e40, 0x762b0 bytes
    //
    _s2(sdk::unknown_ptr) disable_overlay_planes;
    
    // [DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20cc5c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c0bc4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20cdfc, 0x762b0 bytes
    //
    _s3(sdk::unknown_ptr) disable_transitional_primary_allocations;
    
    // [DodGetRenderAdapter@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20cf78, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c1088, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20d118, 0x762b0 bytes
    //
    _s4(sdk::unknown_ptr) dod_get_render_adapter;
    
    // [EndDisplayCalloutBatch@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1601f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ede74, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x163040, 0x762b0 bytes
    //
    _s5(sdk::unknown_ptr) end_display_callout_batch;
    
    // [ForceIHVScaling@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x19af8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x514c, 0x84380 bytes
    // dxgkrnl.sys .text:0x1a24c, 0x762b0 bytes
    //
    _s6(sdk::unknown_ptr) force_ihv_scaling;
    
    // [GetAllocationsForAllPlanes@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20d7cc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19558c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20d96c, 0x762b0 bytes
    //
    _s7(sdk::unknown_ptr) get_allocations_for_all_planes;
    
    // [GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20d9c4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15efd0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20db64, 0x762b0 bytes
    //
    _s8(sdk::unknown_ptr) get_check_multi_plane_overlay_args_unsafe;
    
    // [GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5b044, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6aecc, 0x84380 bytes
    // dxgkrnl.sys .text:0x5b1d4, 0x762b0 bytes
    //
    _s9(sdk::unknown_ptr) get_display_only_driver_ignore_monitor_freq_check;
    
    // [GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x41008, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4efd4, 0x84380 bytes
    // dxgkrnl.sys .text:0x411f8, 0x762b0 bytes
    //
    _t0(sdk::unknown_ptr) get_display_only_driver_use_raw_modes;
    
    // [GetDoDCddShadowSection@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20df18, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c16bc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20e0b8, 0x762b0 bytes
    //
    _t1(sdk::unknown_ptr) get_do_d_cdd_shadow_section;
    
    // [GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xc2e8, 0x762b0 bytes
    // dxgkrnl.sys .text:0xd7a8, 0x84380 bytes
    // dxgkrnl.sys .text:0xc774, 0x762b0 bytes
    //
    _t2(sdk::unknown_ptr) get_driver_ignore_ccd_database;
    
    // [GetDxgiGammaRamp@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x125128, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1dab1c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe399c, 0x762b0 bytes
    //
    _t3(sdk::unknown_ptr) get_dxgi_gamma_ramp;
    
    // [GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x147c84, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b84dc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14a3d4, 0x762b0 bytes
    //
    _t4(sdk::unknown_ptr) get_multi_plane_overlay_caps;
    
    // [GetPairedRenderAdapter@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x34a50, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4385c, 0x84380 bytes
    // dxgkrnl.sys .text:0x34c80, 0x762b0 bytes
    //
    _t5(sdk::unknown_ptr) get_paired_render_adapter;
    
    // [GetPostCompositionCaps@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x147c08, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b877c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x149f78, 0x762b0 bytes
    //
    _t6(sdk::unknown_ptr) get_post_composition_caps;
    
    // [GetPostCompositionStretching@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x45424, 0x762b0 bytes
    // dxgkrnl.sys .text:0x57290, 0x84380 bytes
    // dxgkrnl.sys .text:0x45614, 0x762b0 bytes
    //
    _t7(sdk::unknown_ptr) get_post_composition_stretching;
    
    // [IsAllocationDisplayed@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20e554, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c1c14, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20e6f4, 0x762b0 bytes
    //
    _t8(sdk::unknown_ptr) is_allocation_displayed;
    
    // [IsCddPrimaryStale@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x191f8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x226c, 0x84380 bytes
    // dxgkrnl.sys .text:0x19778, 0x762b0 bytes
    //
    _t9(sdk::unknown_ptr) is_cdd_primary_stale;
    
    // [IsCoreResourceSharedOwner@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x16558, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1a244, 0x84380 bytes
    // dxgkrnl.sys .text:0x16ce8, 0x762b0 bytes
    //
    _u0(sdk::unknown_ptr) is_core_resource_shared_owner;
    
    // [IsDisplayDiagnosticsInterfaceSupported@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x410a4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4d2cc, 0x84380 bytes
    // dxgkrnl.sys .text:0x41294, 0x762b0 bytes
    //
    _u1(sdk::unknown_ptr) is_display_diagnostics_interface_supported;
    
    // [IsPointerVisible@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x19fd4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x29d4, 0x84380 bytes
    // dxgkrnl.sys .text:0x1a714, 0x762b0 bytes
    //
    _u2(sdk::unknown_ptr) is_pointer_visible;
    
    // [IsVidPnSourceActive@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9b08, 0x762b0 bytes
    // dxgkrnl.sys .text:0xb5c4, 0x84380 bytes
    // dxgkrnl.sys .text:0x3360, 0x762b0 bytes
    //
    _u3(sdk::unknown_ptr) is_vid_pn_source_active;
    
    // [IsVidPnSourceVisible@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9acc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6d74, 0x84380 bytes
    // dxgkrnl.sys .text:0x339c, 0x762b0 bytes
    //
    _u4(sdk::unknown_ptr) is_vid_pn_source_visible;
    
    // [IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7ce18, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe2508, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0xdae4c, 0x762b0 bytes
    //
    _u5(sdk::unknown_ptr) iterate_output_dupl_mgrs_for_render;
    
    // [NotifyVSync@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x38154, 0x762b0 bytes
    // dxgkrnl.sys .text:0x179a8, 0x84380 bytes
    // dxgkrnl.sys .text:0x38384, 0x762b0 bytes
    //
    _u6(sdk::unknown_ptr) notify_v_sync;
    
    // [OpmReset@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20e724, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c1ea4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20e8c4, 0x762b0 bytes
    //
    _u7(sdk::unknown_ptr) opm_reset;
    
    // [PresentCddPrimary@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20e908, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x159278, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20eaa8, 0x762b0 bytes
    //
    _u8(sdk::unknown_ptr) present_cdd_primary;
    
    // [ProcessModeChange@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xdcaa8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x169b94, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x156144, 0x762b0 bytes
    //
    _u9(sdk::unknown_ptr) process_mode_change;
    
    // [RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x408c0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4c318, 0x84380 bytes
    // dxgkrnl.sys .text:0x40ab0, 0x762b0 bytes
    //
    _v0(sdk::unknown_ptr) remove_device_ownership_references;
    
    // [ReplaceDisplayedAllocation@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x147464, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d8084, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14b494, 0x762b0 bytes
    //
    _v1(sdk::unknown_ptr) replace_displayed_allocation;
    
    // [ReportDisplayState@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20f15c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c2738, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20f2fc, 0x762b0 bytes
    //
    _v2(sdk::unknown_ptr) report_display_state;
    
    // [RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20f498, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c2a7c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20f638, 0x762b0 bytes
    //
    _v3(sdk::unknown_ptr) request_async_display_switch_callout;
    
    // [RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20f5ec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c2c28, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20f78c, 0x762b0 bytes
    //
    _v4(sdk::unknown_ptr) request_async_monitor_event_callout;
    
    // [SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x104fc0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x195de0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x110f90, 0x762b0 bytes
    //
    _v5(sdk::unknown_ptr) set_allocation_for_single_plane_present;
    
    // [SetDisplayId@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a1d4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1f89c, 0x84380 bytes
    // dxgkrnl.sys .text:0x1a8e4, 0x762b0 bytes
    //
    _v6(sdk::unknown_ptr) set_display_id;
    
    // [SetHdrEnabled@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a010, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1f5fc, 0x84380 bytes
    // dxgkrnl.sys .text:0x1a750, 0x762b0 bytes
    //
    _v7(sdk::unknown_ptr) set_hdr_enabled;
    
    // [SetPairedRenderAdapter@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3632c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x442cc, 0x84380 bytes
    // dxgkrnl.sys .text:0x3655c, 0x762b0 bytes
    //
    _v8(sdk::unknown_ptr) set_paired_render_adapter;
    
    // [SetSyncLockGroup@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a06c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1f6f8, 0x84380 bytes
    // dxgkrnl.sys .text:0x1a7ac, 0x762b0 bytes
    //
    _v9(sdk::unknown_ptr) set_sync_lock_group;
    
    // [SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20fe74, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c3410, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x210014, 0x762b0 bytes
    //
    _w0(sdk::unknown_ptr) set_sync_refresh_count_wait_target;
    
    // [SetVidPnPrimaryTarget@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x19f24, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1f4b4, 0x84380 bytes
    // dxgkrnl.sys .text:0x1a664, 0x762b0 bytes
    //
    _w1(sdk::unknown_ptr) set_vid_pn_primary_target;
    
    // [SetVidPnSourceActive@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd8618, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x160d54, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13d1b8, 0x762b0 bytes
    //
    _w2(sdk::unknown_ptr) set_vid_pn_source_active;
    
    // [UpdateGammaRamp@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x12b574, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16394c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x126a84, 0x762b0 bytes
    //
    _w3(sdk::unknown_ptr) update_gamma_ramp;
    
    // [UpdateIndependentFlipState@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15a0c8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e7410, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15cf18, 0x762b0 bytes
    //
    _w4(sdk::unknown_ptr) update_independent_flip_state;
    
    // [VSyncTelemetryBucket@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x38424, 0x762b0 bytes
    // dxgkrnl.sys .text:0x455ec, 0x84380 bytes
    // dxgkrnl.sys .text:0x38654, 0x762b0 bytes
    //
    _w5(sdk::unknown_ptr) v_sync_telemetry_bucket;
    
    // [VSyncTelemetryTimerDpc@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x38770, 0x762b0 bytes
    // dxgkrnl.sys .text:0x45950, 0x84380 bytes
    // dxgkrnl.sys .text:0x389a0, 0x762b0 bytes
    //
    _w6(sdk::unknown_ptr) v_sync_telemetry_timer_dpc;
    
    // [WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x148098, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x210220, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2103c0, 0x762b0 bytes
    //
    _w7(sdk::unknown_ptr) wait_for_events_or_vertical_blank_event;
    
    // [AcquireVidPnSourceOwner@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7e3a8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd9a40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x163518, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x130bcc, 0x762b0 bytes
    //
    _w8(sdk::unknown_ptr) acquire_vid_pn_source_owner;
    
    // [ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14a968, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20b6b8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bf8a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20b858, 0x762b0 bytes
    //
    _w9(sdk::unknown_ptr) activate_storing_invalid_modes_for_test_purposes;
    
    // [AddingMonitorOrientation@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7cfb4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11c9dc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ab7dc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x124df0, 0x762b0 bytes
    //
    _x0(sdk::unknown_ptr) adding_monitor_orientation;
    
    // [CollectDbgInfo@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14ac10, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20bb40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bfd98, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20bce0, 0x762b0 bytes
    //
    _x1(sdk::unknown_ptr) collect_dbg_info;
    
    // [??0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xeca70, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x180db4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1fd350, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x183ca4, 0x762b0 bytes
    //
    _x2(sdk::unknown_ptr) construct_instance;
    
    // [ControlVSyncAdapter@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14ac74, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20be48, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bfe0c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20bfe8, 0x762b0 bytes
    //
    _x3(sdk::unknown_ptr) control_v_sync_adapter;
    
    // [CreateCddAllocations@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7eda8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd6dc0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15abcc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13c9f0, 0x762b0 bytes
    //
    _x4(sdk::unknown_ptr) create_cdd_allocations;
    
    // [CreateCopyProtection@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14aca4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20be80, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bfe44, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20c020, 0x762b0 bytes
    //
    _x5(sdk::unknown_ptr) create_copy_protection;
    
    // [CreateDisplayCore@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xddeac, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x166d98, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1f9bb4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1756b0, 0x762b0 bytes
    //
    _x6(sdk::unknown_ptr) create_display_core;
    
    // [CreateModeList@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7d3a4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14c2c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c4604, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14ef10, 0x762b0 bytes
    //
    _x7(sdk::unknown_ptr) create_mode_list;
    
    // [DdiCheckMultiPlaneOverlaySupport@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14e480, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x213320, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c697c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2134c0, 0x762b0 bytes
    //
    _x8(sdk::unknown_ptr) ddi_check_multi_plane_overlay_support;
    
    // [DdiCheckMultiPlaneOverlaySupport2@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14e040, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x212e60, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c6710, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x213000, 0x762b0 bytes
    //
    _x9(sdk::unknown_ptr) ddi_check_multi_plane_overlay_support2;
    
    // [DdiCheckMultiPlaneOverlaySupport3@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14e260, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2130c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15ee38, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x213260, 0x762b0 bytes
    //
    _y0(sdk::unknown_ptr) ddi_check_multi_plane_overlay_support3;
    
    // [DdiCommitVidPn@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7f9ac, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x13a6c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c6e6c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13bbc0, 0x762b0 bytes
    //
    _y1(sdk::unknown_ptr) ddi_commit_vid_pn;
    
    // [DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7f448, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10dc28, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a60a4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x119c58, 0x762b0 bytes
    //
    _y2(sdk::unknown_ptr) ddi_enum_vid_pn_cofunc_modality;
    
    // [DdiGetScanLine@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd4a54, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x216e10, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2cabc0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x216fb0, 0x762b0 bytes
    //
    _y3(sdk::unknown_ptr) ddi_get_scan_line;
    
    // [DdiIsSupportedVidPn@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7cc14, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10d80c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a5c64, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x11983c, 0x762b0 bytes
    //
    _y4(sdk::unknown_ptr) ddi_is_supported_vid_pn;
    
    // [DdiPostMultiPlaneOverlayPresent@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1f504, 0x60098 bytes
    // dxgkrnl.sys .text:0x39c94, 0x762b0 bytes
    // dxgkrnl.sys .text:0x47698, 0x84380 bytes
    // dxgkrnl.sys .text:0x39ec4, 0x762b0 bytes
    //
    _y5(sdk::unknown_ptr) ddi_post_multi_plane_overlay_present;
    
    // [DdiPresentDisplayOnly@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14f0e8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x217524, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2cb124, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2176c4, 0x762b0 bytes
    //
    _y6(sdk::unknown_ptr) ddi_present_display_only;
    
    // [DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14f304, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x217f04, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x210774, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2180a4, 0x762b0 bytes
    //
    _y7(sdk::unknown_ptr) ddi_recommend_functional_vid_pn;
    
    // [DdiRecommendMonitorModes@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xed168, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x173a24, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x213d84, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x16811c, 0x762b0 bytes
    //
    _y8(sdk::unknown_ptr) ddi_recommend_monitor_modes;
    
    // [DdiSetPalette@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x150054, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x218d10, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2cc944, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x218eb0, 0x762b0 bytes
    //
    _y9(sdk::unknown_ptr) ddi_set_palette;
    
    // [DdiSetPointerPosition@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7c9dc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x13cc2c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ad474, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13316c, 0x762b0 bytes
    //
    _z0(sdk::unknown_ptr) ddi_set_pointer_position;
    
    // [DdiSetPointerShape@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7f60c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x107a84, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ad614, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x113ab4, 0x762b0 bytes
    //
    _z1(sdk::unknown_ptr) ddi_set_pointer_shape;
    
    // [DdiSetVidPnSourceAddress@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6aec, 0x60098 bytes
    // dxgkrnl.sys .text:0x142c0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x17a40, 0x84380 bytes
    // dxgkrnl.sys .text:0x14a50, 0x762b0 bytes
    //
    _z2(sdk::unknown_ptr) ddi_set_vid_pn_source_address;
    
    // [DdiSetVidPnSourceAddressWithMultiPlaneOverlay@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x203b4, 0x60098 bytes
    // dxgkrnl.sys .text:0x3b460, 0x762b0 bytes
    // dxgkrnl.sys .text:0x48bd0, 0x84380 bytes
    // dxgkrnl.sys .text:0x3b690, 0x762b0 bytes
    //
    _z3(sdk::unknown_ptr) ddi_set_vid_pn_source_address_with_multi_plane_overlay;
    
    // [DdiSetVidPnSourceAddressWithMultiPlaneOverlay2@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x20048, 0x60098 bytes
    // dxgkrnl.sys .text:0x3afd0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x488b0, 0x84380 bytes
    // dxgkrnl.sys .text:0x3b200, 0x762b0 bytes
    //
    _z4(sdk::unknown_ptr) ddi_set_vid_pn_source_address_with_multi_plane_overlay2;
    
    // [DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7c83c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14ec2c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x161934, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12bf2c, 0x762b0 bytes
    //
    _z5(sdk::unknown_ptr) ddi_set_vid_pn_source_visibility;
    
    // [DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7f848, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1293b8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x164490, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe0078, 0x762b0 bytes
    //
    _z6(sdk::unknown_ptr) ddi_update_active_vid_pn_present_path;
    
    // [DdiUpdateMonitorLinkInfo@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xed050, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x21af78, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x21411c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21b118, 0x762b0 bytes
    //
    _z7(sdk::unknown_ptr) ddi_update_monitor_link_info;
    
    // [DefaultDdiRecommendMonitorModes@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xcfe80, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x153b60, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e2ee0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x156e10, 0x762b0 bytes
    //
    _z8(sdk::unknown_ptr) default_ddi_recommend_monitor_modes;
    
    // [DefaultDdiSetDisplayPrivateDriverFormat@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x150dc0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x21b650, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ce940, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21b7f0, 0x762b0 bytes
    //
    _z9(sdk::unknown_ptr) default_ddi_set_display_private_driver_format;
    
    // [DefaultDdiUpdateMonitorLinkInfo@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf32c0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x155e90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4870, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x158ce0, 0x762b0 bytes
    //
    _a0(sdk::unknown_ptr) default_ddi_update_monitor_link_info;
    
    // [Destroy@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14af74, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20c2ec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c0334, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20c48c, 0x762b0 bytes
    //
    _a1(sdk::unknown_ptr) destroy;
    
    // [DestroyCddAllocations@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7ebc8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd78e8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x161ea0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13cfc4, 0x762b0 bytes
    //
    _a2(sdk::unknown_ptr) destroy_cdd_allocations;
    
    // [DestroyCopyProtection@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14b168, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20c590, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c0608, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20c730, 0x762b0 bytes
    //
    _a3(sdk::unknown_ptr) destroy_copy_protection;
    
    // [??1ADAPTER_DISPLAY@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14a7f8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20b3f8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bf5fc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20b598, 0x762b0 bytes
    //
    _a4(sdk::unknown_ptr) destroy_instance;
    
    // [DisableAllPrimaries@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd82a4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd82d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x160b1c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13dd00, 0x762b0 bytes
    //
    _a5(sdk::unknown_ptr) disable_all_primaries;
    
    // [DisablePrimaryAllocation@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7d9c0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd7400, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16130c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13d4e4, 0x762b0 bytes
    //
    _a6(sdk::unknown_ptr) disable_primary_allocation;
    
    // [DisablePrimaryOnDevice@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd4658, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20c958, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c0804, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20caf8, 0x762b0 bytes
    //
    _a7(sdk::unknown_ptr) disable_primary_on_device;
    
    // [DodGetOpmMftContext@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14b4d8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20cef0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c0fa8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20d090, 0x762b0 bytes
    //
    _a8(sdk::unknown_ptr) dod_get_opm_mft_context;
    
    // [DodSetIndirectSwapchain@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14b59c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20cfcc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c1110, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20d16c, 0x762b0 bytes
    //
    _a9(sdk::unknown_ptr) dod_set_indirect_swapchain;
    
    // [DodTerminateIndirectOutput@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14b740, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20d1fc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c141c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20d39c, 0x762b0 bytes
    //
    _b0(sdk::unknown_ptr) dod_terminate_indirect_output;
    
    // [EnsureGdiOutput@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7dff4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xda7fc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1650d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12fa60, 0x762b0 bytes
    //
    _b1(sdk::unknown_ptr) ensure_gdi_output;
    
    // [FindCopyProtection@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14b878, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20d798, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c1580, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20d938, 0x762b0 bytes
    //
    _b2(sdk::unknown_ptr) find_copy_protection;
    
    // [GetCachedModeList@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7d734, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11a040, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c4d9c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13213c, 0x762b0 bytes
    //
    _b3(sdk::unknown_ptr) get_cached_mode_list;
    
    // [GetCachedStereoStates@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7d58c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd462c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15b3a4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd4cb4, 0x762b0 bytes
    //
    _b4(sdk::unknown_ptr) get_cached_stereo_states;
    
    // [GetCddAllocationHandles@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7eacc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14ff30, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15a9bc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x152c60, 0x762b0 bytes
    //
    _b5(sdk::unknown_ptr) get_cdd_allocation_handles;
    
    // [GetCddDisplayMode@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6a30, 0x60098 bytes
    // dxgkrnl.sys .text:0x1210, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2210, 0x84380 bytes
    // dxgkrnl.sys .text:0x12f20, 0x762b0 bytes
    //
    _b6(sdk::unknown_ptr) get_cdd_display_mode;
    
    // [GetCddInterface@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6184, 0x60098 bytes
    // dxgkrnl.sys .text:0x168e8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20f0, 0x84380 bytes
    // dxgkrnl.sys .text:0x17078, 0x762b0 bytes
    //
    _b7(sdk::unknown_ptr) get_cdd_interface;
    
    // [GetCddPrimaryAllocation@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7eb58, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xdaa20, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1652f8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12fc84, 0x762b0 bytes
    //
    _b8(sdk::unknown_ptr) get_cdd_primary_allocation;
    
    // [GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14b8a4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20d918, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c15b4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20dab8, 0x762b0 bytes
    //
    _b9(sdk::unknown_ptr) get_cdd_primary_share_resource_handle;
    
    // [GetCddShadowPitch@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x67c0, 0x60098 bytes
    // dxgkrnl.sys .text:0x19f0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1cf98, 0x84380 bytes
    // dxgkrnl.sys .text:0xb688, 0x762b0 bytes
    //
    _c0(sdk::unknown_ptr) get_cdd_shadow_pitch;
    
    // [GetCurrentOrientation@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7cef8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11c914, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ab6fc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x124d28, 0x762b0 bytes
    //
    _c1(sdk::unknown_ptr) get_current_orientation;
    
    // [GetDisplayId@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x671c, 0x60098 bytes
    // dxgkrnl.sys .text:0x1fa0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x3834, 0x84380 bytes
    // dxgkrnl.sys .text:0x2124, 0x762b0 bytes
    //
    _c2(sdk::unknown_ptr) get_display_id;
    
    // [GetDisplayModeInfo@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6470, 0x60098 bytes
    // dxgkrnl.sys .text:0x16f0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x3b18, 0x84380 bytes
    // dxgkrnl.sys .text:0xb0cc, 0x762b0 bytes
    //
    _c3(sdk::unknown_ptr) get_display_mode_info;
    
    // [GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7ea0c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd973c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1633fc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1306ec, 0x762b0 bytes
    //
    _c4(sdk::unknown_ptr) get_displayed_primary_allocation;
    
    // [GetInvalidModesForTestPurposes@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14b9f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20e09c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c18f4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20e23c, 0x762b0 bytes
    //
    _c5(sdk::unknown_ptr) get_invalid_modes_for_test_purposes;
    
    // [GetPrimaryPath@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6c9c, 0x60098 bytes
    // dxgkrnl.sys .text:0x199e0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x46930, 0x84380 bytes
    // dxgkrnl.sys .text:0x19800, 0x762b0 bytes
    //
    _c6(sdk::unknown_ptr) get_primary_path;
    
    // [GetSessionViewOwner@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7f26c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x122694, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17e184, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe64e4, 0x762b0 bytes
    //
    _c7(sdk::unknown_ptr) get_session_view_owner;
    
    // [GetVBlankEvent@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7d338, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x13d9e4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e1e90, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x155a20, 0x762b0 bytes
    //
    _c8(sdk::unknown_ptr) get_v_blank_event;
    
    // [GetVidPnSourceOwner@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x63f8, 0x60098 bytes
    // dxgkrnl.sys .text:0x1d7f0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x25b4, 0x84380 bytes
    // dxgkrnl.sys .text:0x1de70, 0x762b0 bytes
    //
    _c9(sdk::unknown_ptr) get_vid_pn_source_owner;
    
    // [GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x209a8, 0x60098 bytes
    // dxgkrnl.sys .text:0x1b540, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20c68, 0x84380 bytes
    // dxgkrnl.sys .text:0x1bbc0, 0x762b0 bytes
    //
    _d0(sdk::unknown_ptr) get_vid_pn_source_owner_emulated;
    
    // [GetVidPnSourceOwnerType@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x63b8, 0x60098 bytes
    // dxgkrnl.sys .text:0x1cfc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x50bc, 0x84380 bytes
    // dxgkrnl.sys .text:0xb298, 0x762b0 bytes
    //
    _d1(sdk::unknown_ptr) get_vid_pn_source_owner_type;
    
    // [HasAnyVidPnSourceOwner@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd43f8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd5bc4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15f6dc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13af74, 0x762b0 bytes
    //
    _d2(sdk::unknown_ptr) has_any_vid_pn_source_owner;
    
    // [Initialize@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xecbcc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x164e50, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2083c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x176fc8, 0x762b0 bytes
    //
    _d3(sdk::unknown_ptr) initialize;
    
    // [InitializePowerManagement@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14bab4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20e3d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20fd4c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20e570, 0x762b0 bytes
    //
    _d4(sdk::unknown_ptr) initialize_power_management;
    
    // [InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7dd68, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17fc80, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x210d18, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x182d94, 0x762b0 bytes
    //
    _d5(sdk::unknown_ptr) invalidate_active_vid_pn_display_mode_list_cache;
    
    // [InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14bb54, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x151dbc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e2ab4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1550ec, 0x762b0 bytes
    //
    _d6(sdk::unknown_ptr) invalidate_display_mode_list_cache_on_source;
    
    // [IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6310, 0x60098 bytes
    // dxgkrnl.sys .text:0x23c4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1cac8, 0x84380 bytes
    // dxgkrnl.sys .text:0x1e84, 0x762b0 bytes
    //
    _d7(sdk::unknown_ptr) is_emulated_vid_pn_source_owner;
    
    // [IsIdenticalMode@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1e95c, 0x60098 bytes
    // dxgkrnl.sys .text:0x38084, 0x762b0 bytes
    // dxgkrnl.sys .text:0x45484, 0x84380 bytes
    // dxgkrnl.sys .text:0x382b4, 0x762b0 bytes
    //
    _d8(sdk::unknown_ptr) is_identical_mode;
    
    // [IsInVirtualMode@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14bc3c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20e620, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c1e34, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20e7c0, 0x762b0 bytes
    //
    _d9(sdk::unknown_ptr) is_in_virtual_mode;
    
    // [IsPartOfDesktop@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6144, 0x60098 bytes
    // dxgkrnl.sys .text:0x1ae8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2d88, 0x84380 bytes
    // dxgkrnl.sys .text:0xb570, 0x762b0 bytes
    //
    _e0(sdk::unknown_ptr) is_part_of_desktop;
    
    // [IsVidPnSourceOwner@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6268, 0x60098 bytes
    // dxgkrnl.sys .text:0x247c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6dd8, 0x84380 bytes
    // dxgkrnl.sys .text:0x1dcc, 0x762b0 bytes
    //
    _e1(sdk::unknown_ptr) is_vid_pn_source_owner;
    
    // [IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x65b8, 0x60098 bytes
    // dxgkrnl.sys .text:0xb960, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1eb30, 0x84380 bytes
    // dxgkrnl.sys .text:0xb1fc, 0x762b0 bytes
    //
    _e2(sdk::unknown_ptr) is_vid_pn_source_owner_dwm;
    
    // [IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x209fc, 0x60098 bytes
    // dxgkrnl.sys .text:0x3c368, 0x762b0 bytes
    // dxgkrnl.sys .text:0x49ce0, 0x84380 bytes
    // dxgkrnl.sys .text:0x3c598, 0x762b0 bytes
    //
    _e3(sdk::unknown_ptr) is_vid_pn_source_owner_emulated;
    
    // [IsWindowVisible@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7e218, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14c110, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e27f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x130650, 0x762b0 bytes
    //
    _e4(sdk::unknown_ptr) is_window_visible;
    
    // [MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6754, 0x60098 bytes
    // dxgkrnl.sys .text:0x9c1c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x30f0, 0x84380 bytes
    // dxgkrnl.sys .text:0x32ec, 0x762b0 bytes
    //
    _e5(sdk::unknown_ptr) map_vid_pn_target_to_vid_pn_source;
    
    // [MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x60f0, 0x60098 bytes
    // dxgkrnl.sys .text:0x19e20, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1ef34, 0x84380 bytes
    // dxgkrnl.sys .text:0x1a560, 0x762b0 bytes
    //
    _e6(sdk::unknown_ptr) mark_commit_vid_pn_on_mode_change;
    
    // [NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x66d4, 0x60098 bytes
    // dxgkrnl.sys .text:0xb7c4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x3b5c, 0x84380 bytes
    // dxgkrnl.sys .text:0xaf78, 0x762b0 bytes
    //
    _e7(sdk::unknown_ptr) need_commit_vid_pn_on_mode_change;
    
    // [OpmCreateHandle@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd4560, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x15a8f8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e7a6c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15d748, 0x762b0 bytes
    //
    _e8(sdk::unknown_ptr) opm_create_handle;
    
    // [OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14bca8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x15a300, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e7c4c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15d150, 0x762b0 bytes
    //
    _e9(sdk::unknown_ptr) opm_translate_and_destroy_handle;
    
    // [OpmTranslateHandle@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd44d0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x15a724, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e8104, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15d574, 0x762b0 bytes
    //
    _f0(sdk::unknown_ptr) opm_translate_handle;
    
    // [OpmValidateAdapterHandle@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd4458, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x15a7c4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e81e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15d614, 0x762b0 bytes
    //
    _f1(sdk::unknown_ptr) opm_validate_adapter_handle;
    
    // [PresentDisplayOnly@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14bd7c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20eb84, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c1fb8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20ed24, 0x762b0 bytes
    //
    _f2(sdk::unknown_ptr) present_display_only;
    
    // [ProcessHasVidPnSourceOwner@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14be54, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20ec40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c2070, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20ede0, 0x762b0 bytes
    //
    _f3(sdk::unknown_ptr) process_has_vid_pn_source_owner;
    
    // [PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7d8f8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xdcaf8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x169a90, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x153d54, 0x762b0 bytes
    //
    _f4(sdk::unknown_ptr) purge_copy_protection_on_vid_pn_source;
    
    // [QueryLastCompletedPresentId@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14bedc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20ecdc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c213c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20ee7c, 0x762b0 bytes
    //
    _f5(sdk::unknown_ptr) query_last_completed_present_id;
    
    // [QueryModeListCacheLuid@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6a78, 0x60098 bytes
    // dxgkrnl.sys .text:0x19da4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1ea0c, 0x84380 bytes
    // dxgkrnl.sys .text:0x1a4e4, 0x762b0 bytes
    //
    _f6(sdk::unknown_ptr) query_mode_list_cache_luid;
    
    // [ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd8710, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd6174, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x160a54, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13c714, 0x762b0 bytes
    //
    _f7(sdk::unknown_ptr) release_all_vid_pn_source_owners;
    
    // [ReleaseOpmI2CSync@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd4610, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x15a4c8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e7e50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15d318, 0x762b0 bytes
    //
    _f8(sdk::unknown_ptr) release_opm_i2c_sync;
    
    // [ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd4820, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20ed74, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c21d4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20ef14, 0x762b0 bytes
    //
    _f9(sdk::unknown_ptr) release_shared_vid_pn_source_owner;
    
    // [ReleaseVidPnSourceOwner@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd4904, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x15b520, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e8710, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15e370, 0x762b0 bytes
    //
    _g0(sdk::unknown_ptr) release_vid_pn_source_owner;
    
    // [RemoveVidPnOwnership@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6040, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd6238, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15fc50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13c7d8, 0x762b0 bytes
    //
    _g1(sdk::unknown_ptr) remove_vid_pn_ownership;
    
    // [ReportState@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14bf5c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20f3d4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c29b8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20f574, 0x762b0 bytes
    //
    _g2(sdk::unknown_ptr) report_state;
    
    // [Reset@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14c040, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20f81c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c2eac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20f9bc, 0x762b0 bytes
    //
    _g3(sdk::unknown_ptr) reset;
    
    // [SavePointerInfo@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6548, 0x60098 bytes
    // dxgkrnl.sys .text:0x130fc, 0x762b0 bytes
    // dxgkrnl.sys .text:0xb6f4, 0x84380 bytes
    // dxgkrnl.sys .text:0xb780, 0x762b0 bytes
    //
    _g4(sdk::unknown_ptr) save_pointer_info;
    
    // [SetCachedModeList@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7d644, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1546d8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c50a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x157988, 0x762b0 bytes
    //
    _g5(sdk::unknown_ptr) set_cached_mode_list;
    
    // [SetCachedStereoStates@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xecb5c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd46b8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15b480, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd4d40, 0x762b0 bytes
    //
    _g6(sdk::unknown_ptr) set_cached_stereo_states;
    
    // [SetCddDisplayMode@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6604, 0x60098 bytes
    // dxgkrnl.sys .text:0x14f0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1f1d0, 0x84380 bytes
    // dxgkrnl.sys .text:0x135d4, 0x762b0 bytes
    //
    _g7(sdk::unknown_ptr) set_cdd_display_mode;
    
    // [SetCddInterface@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6880, 0x60098 bytes
    // dxgkrnl.sys .text:0x1de8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2f24, 0x84380 bytes
    // dxgkrnl.sys .text:0xb4b0, 0x762b0 bytes
    //
    _g8(sdk::unknown_ptr) set_cdd_interface;
    
    // [SetContentRect@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x69cc, 0x60098 bytes
    // dxgkrnl.sys .text:0x1688, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1da38, 0x84380 bytes
    // dxgkrnl.sys .text:0xb064, 0x762b0 bytes
    //
    _g9(sdk::unknown_ptr) set_content_rect;
    
    // [SetCopyProtection@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7d7dc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xdfd4c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1772f4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x127e74, 0x762b0 bytes
    //
    _h0(sdk::unknown_ptr) set_copy_protection;
    
    // [SetCopyProtectionWithLock@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7d840, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xdfc88, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16baf0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12b794, 0x762b0 bytes
    //
    _h1(sdk::unknown_ptr) set_copy_protection_with_lock;
    
    // [SetDisplayModeInfo@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x68d4, 0x60098 bytes
    // dxgkrnl.sys .text:0x19634, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1e37c, 0x84380 bytes
    // dxgkrnl.sys .text:0x19cd0, 0x762b0 bytes
    //
    _h2(sdk::unknown_ptr) set_display_mode_info;
    
    // [SetPartOfDesktop@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x67f8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd9308, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d7db0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x130adc, 0x762b0 bytes
    //
    _h3(sdk::unknown_ptr) set_part_of_desktop;
    
    // [SetPrimaryPath@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7ce8c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1536a4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1dd0ec, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x152fa0, 0x762b0 bytes
    //
    _h4(sdk::unknown_ptr) set_primary_path;
    
    // [SetQueuedPresentLimit@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14c2e4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20fdf4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c3390, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20ff94, 0x762b0 bytes
    //
    _h5(sdk::unknown_ptr) set_queued_present_limit;
    
    // [SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x64b0, 0x60098 bytes
    // dxgkrnl.sys .text:0x12d8c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7138, 0x84380 bytes
    // dxgkrnl.sys .text:0x138b8, 0x762b0 bytes
    //
    _h6(sdk::unknown_ptr) set_sync_refresh_count_wait_target_non_paged;
    
    // [SetVidPnSourceVisibility@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7e808, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x12c254, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x161624, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1285a0, 0x762b0 bytes
    //
    _h7(sdk::unknown_ptr) set_vid_pn_source_visibility;
    
    // [SignalVerticalBlankEvent@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x279dc, 0x60098 bytes
    // dxgkrnl.sys .text:0x5c5c0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6cf5c, 0x84380 bytes
    // dxgkrnl.sys .text:0x5c750, 0x762b0 bytes
    //
    _h8(sdk::unknown_ptr) signal_vertical_blank_event;
    
    // [Stop@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14c35c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20ff78, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c3528, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x210118, 0x762b0 bytes
    //
    _h9(sdk::unknown_ptr) stop;
    
    // [UpdateCopyProtection@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14c3b8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2100b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c36c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x210250, 0x762b0 bytes
    //
    _i0(sdk::unknown_ptr) update_copy_protection;
    
    // [UpdateModeWithPrimary@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7de04, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd809c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x162f58, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13dacc, 0x762b0 bytes
    //
    _i1(sdk::unknown_ptr) update_mode_with_primary;
    
    // [UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7d03c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x154c64, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e470c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13c914, 0x762b0 bytes
    //
    _i2(sdk::unknown_ptr) update_one_cdd_primary_private_driver_data;
    
    // [WaitForVerticalBlankEvent@ADAPTER_DISPLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7d2d0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd72ec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15cf40, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13f1b4, 0x762b0 bytes
    //
    _i3(sdk::unknown_ptr) wait_for_vertical_blank_event;
};
#include "magic/api.end.hpp"
