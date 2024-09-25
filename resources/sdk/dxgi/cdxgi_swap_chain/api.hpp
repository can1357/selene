#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cdxgi_swap_chain
{
    // [CheckHybridCrossAdapterScanOutSupported@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x707b4, 0x18b10 bytes
    //
    _m0(sdk::unknown_ptr) check_hybrid_cross_adapter_scan_out_supported;
    
    // [CreateWindowedProxyWorker@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x71d90, 0x18b10 bytes
    //
    _m1(sdk::unknown_ptr) create_windowed_proxy_worker;
    
    // [DeviceInternalPresent@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x57f0, 0x18b10 bytes
    //
    _m2(sdk::unknown_ptr) device_internal_present;
    
    // [DisableBufferConverter@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x1a018, 0x18b10 bytes
    //
    _m3(sdk::unknown_ptr) disable_buffer_converter;
    
    // [GetBufferConverterInfo@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x72fb0, 0x18b10 bytes
    //
    _m4(sdk::unknown_ptr) get_buffer_converter_info;
    
    // [GetCASOTelemetry@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x1cb5c, 0x18b10 bytes
    //
    _m5(sdk::unknown_ptr) get_caso_telemetry;
    
    // [GetCrossAdapterFenceFlags@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x73a74, 0x18b10 bytes
    //
    _m6(sdk::unknown_ptr) get_cross_adapter_fence_flags;
    
    // [GetOutputWindowForBind@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x6e70, 0x18b10 bytes
    //
    _m7(sdk::unknown_ptr) get_output_window_for_bind;
    
    // [GetRequiredIndirectDisplayUsage@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x74524, 0x18b10 bytes
    //
    _m8(sdk::unknown_ptr) get_required_indirect_display_usage;
    
    // [HybridDirectFlipMode@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x1cbbc, 0x18b10 bytes
    //
    _m9(sdk::unknown_ptr) hybrid_direct_flip_mode;
    
    // [InitBufferConverter@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x191b4, 0x18b10 bytes
    //
    _n0(sdk::unknown_ptr) init_buffer_converter;
    
    // [IsBufferUpgradeEligible@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x19c2c, 0x18b10 bytes
    //
    _n1(sdk::unknown_ptr) is_buffer_upgrade_eligible;
    
    // [IsCrossAdapterScanOutEligible@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x74a44, 0x18b10 bytes
    //
    _n2(sdk::unknown_ptr) is_cross_adapter_scan_out_eligible;
    
    // [IsDwmVailSwapChain@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x2b320, 0x18b10 bytes
    //
    _n3(sdk::unknown_ptr) is_dwm_vail_swap_chain;
    
    // [IsHDREnabled@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x1a9fc, 0x18b10 bytes
    //
    _n4(sdk::unknown_ptr) is_hdr_enabled;
    
    // [SetColorSpaceInternal@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x1a838, 0x18b10 bytes
    //
    _n5(sdk::unknown_ptr) set_color_space_internal;
    
    // [ShowNotification@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x784e4, 0x18b10 bytes
    //
    _n6(sdk::unknown_ptr) show_notification;
    
    // [WaitForFenceOnCPU@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x792dc, 0x18b10 bytes
    //
    _n7(sdk::unknown_ptr) wait_for_fence_on_cpu;
    
    // [FlipPresentHandleTransform@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x5128, 0x17e70 bytes
    // dxgi.dll .text:0x5128, 0x17e70 bytes
    // dxgi.dll .text:0x2be8, 0x17e70 bytes
    //
    _n8(sdk::unknown_ptr) flip_present_handle_transform;
    
    // [RotateBackBufferIdentities@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x6b344, 0x17e70 bytes
    // dxgi.dll .text:0x6b454, 0x17e70 bytes
    // dxgi.dll .text:0x6c884, 0x17e70 bytes
    //
    _n9(sdk::unknown_ptr) rotate_back_buffer_identities;
    
    // [AcquireBuffer@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1fb0, 0x17e70 bytes
    // dxgi.dll .text:0x1fb0, 0x17e70 bytes
    // dxgi.dll .text:0x56a0, 0x18b10 bytes
    // dxgi.dll .text:0x3e30, 0x17e70 bytes
    //
    _o0(sdk::unknown_ptr) acquire_buffer;
    
    // [AcquireBufferDecode@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x63f34, 0x17e70 bytes
    // dxgi.dll .text:0x64024, 0x17e70 bytes
    // dxgi.dll .text:0x6ffc8, 0x18b10 bytes
    // dxgi.dll .text:0x65454, 0x17e70 bytes
    //
    _o1(sdk::unknown_ptr) acquire_buffer_decode;
    
    // [AcquireNextIndirectBuffer@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x63fc4, 0x17e70 bytes
    // dxgi.dll .text:0x640b4, 0x17e70 bytes
    // dxgi.dll .text:0x70068, 0x18b10 bytes
    // dxgi.dll .text:0x654e4, 0x17e70 bytes
    //
    _o2(sdk::unknown_ptr) acquire_next_indirect_buffer;
    
    // [AddUseBuffer@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6446c, 0x17e70 bytes
    // dxgi.dll .text:0x6455c, 0x17e70 bytes
    // dxgi.dll .text:0x70504, 0x18b10 bytes
    // dxgi.dll .text:0x6598c, 0x17e70 bytes
    //
    _o3(sdk::unknown_ptr) add_use_buffer;
    
    // [AppPreventedFlip@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x644ec, 0x17e70 bytes
    // dxgi.dll .text:0x645dc, 0x17e70 bytes
    // dxgi.dll .text:0x70584, 0x18b10 bytes
    // dxgi.dll .text:0x65a0c, 0x17e70 bytes
    //
    _o4(sdk::unknown_ptr) app_prevented_flip;
    
    // [AutomaticUnsychronizedFlips@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4250, 0x17e70 bytes
    // dxgi.dll .text:0x4250, 0x17e70 bytes
    // dxgi.dll .text:0x7b50, 0x18b10 bytes
    // dxgi.dll .text:0x60d0, 0x17e70 bytes
    //
    _o5(sdk::unknown_ptr) automatic_unsychronized_flips;
    
    // [BindToDwm@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1c9fc, 0x17e70 bytes
    // dxgi.dll .text:0x1cd0c, 0x17e70 bytes
    // dxgi.dll .text:0x18b00, 0x18b10 bytes
    // dxgi.dll .text:0x1828c, 0x17e70 bytes
    //
    _o6(sdk::unknown_ptr) bind_to_dwm;
    
    // [BltRegion@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x64674, 0x17e70 bytes
    // dxgi.dll .text:0x64764, 0x17e70 bytes
    // dxgi.dll .text:0x59f0, 0x18b10 bytes
    // dxgi.dll .text:0x65b94, 0x17e70 bytes
    //
    _o7(sdk::unknown_ptr) blt_region;
    
    // [BuildBackBufferPrimaryDescs@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2173c, 0x17e70 bytes
    // dxgi.dll .text:0x21a1c, 0x17e70 bytes
    // dxgi.dll .text:0x29ac8, 0x18b10 bytes
    // dxgi.dll .text:0x226bc, 0x17e70 bytes
    //
    _o8(sdk::unknown_ptr) build_back_buffer_primary_descs;
    
    // [CheckColorSpaceSupport@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x647d0, 0x17e70 bytes
    // dxgi.dll .text:0x648c0, 0x17e70 bytes
    // dxgi.dll .text:0x706e0, 0x18b10 bytes
    // dxgi.dll .text:0x65cf0, 0x17e70 bytes
    //
    _o9(sdk::unknown_ptr) check_color_space_support;
    
    // [CheckDirectFlipSupport@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24c0, 0x17e70 bytes
    // dxgi.dll .text:0x24c0, 0x17e70 bytes
    // dxgi.dll .text:0x8600, 0x18b10 bytes
    // dxgi.dll .text:0x4340, 0x17e70 bytes
    //
    _p0(sdk::unknown_ptr) check_direct_flip_support;
    
    // [CheckDwmVidPnOwnership@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1f040, 0x17e70 bytes
    // dxgi.dll .text:0x1f350, 0x17e70 bytes
    // dxgi.dll .text:0x27090, 0x18b10 bytes
    // dxgi.dll .text:0x20cd0, 0x17e70 bytes
    //
    _p1(sdk::unknown_ptr) check_dwm_vid_pn_ownership;
    
    // [CheckFlipRedirected@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x3a8c, 0x17e70 bytes
    // dxgi.dll .text:0x3a8c, 0x17e70 bytes
    // dxgi.dll .text:0x6a40, 0x18b10 bytes
    // dxgi.dll .text:0x590c, 0x17e70 bytes
    //
    _p2(sdk::unknown_ptr) check_flip_redirected;
    
    // [CheckMonitorPowerAndVidPnOwnership@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x64888, 0x17e70 bytes
    // dxgi.dll .text:0x64978, 0x17e70 bytes
    // dxgi.dll .text:0x709b0, 0x18b10 bytes
    // dxgi.dll .text:0x65da8, 0x17e70 bytes
    //
    _p3(sdk::unknown_ptr) check_monitor_power_and_vid_pn_ownership;
    
    // [CheckMultiplaneOverlaySupport@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6e9d0, 0x17e70 bytes
    // dxgi.dll .text:0x6eae0, 0x17e70 bytes
    // dxgi.dll .text:0x6100, 0x18b10 bytes
    // dxgi.dll .text:0x6ff10, 0x17e70 bytes
    //
    _p4(sdk::unknown_ptr) check_multiplane_overlay_support;
    
    // [CheckMultiplaneOverlaySupportInternal@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x648bc, 0x17e70 bytes
    // dxgi.dll .text:0x649ac, 0x17e70 bytes
    // dxgi.dll .text:0x61c4, 0x18b10 bytes
    // dxgi.dll .text:0x65ddc, 0x17e70 bytes
    //
    _p5(sdk::unknown_ptr) check_multiplane_overlay_support_internal;
    
    // [CheckPresentDurationSupport@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x33a0, 0x17e70 bytes
    // dxgi.dll .text:0x33a0, 0x17e70 bytes
    // dxgi.dll .text:0x7640, 0x18b10 bytes
    // dxgi.dll .text:0x5220, 0x17e70 bytes
    //
    _p6(sdk::unknown_ptr) check_present_duration_support;
    
    // [ComposePartialPresentation@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x14de0, 0x17e70 bytes
    // dxgi.dll .text:0x15040, 0x17e70 bytes
    // dxgi.dll .text:0xf8f0, 0x18b10 bytes
    // dxgi.dll .text:0x10550, 0x17e70 bytes
    //
    _p7(sdk::unknown_ptr) compose_partial_presentation;
    
    // [??0CDXGISwapChain@@QEAA@AEBUTConstructorArgs@0@PEAUILockOwner@@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1c228, 0x17e70 bytes
    // dxgi.dll .text:0x1c538, 0x17e70 bytes
    // dxgi.dll .text:0x1a090, 0x18b10 bytes
    // dxgi.dll .text:0x17ab8, 0x17e70 bytes
    //
    _p8(sdk::unknown_ptr) construct_instance;
    
    // [ConvertInvalidPresentCountToZero@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x64efc, 0x17e70 bytes
    // dxgi.dll .text:0x64fec, 0x17e70 bytes
    // dxgi.dll .text:0x70bc8, 0x18b10 bytes
    // dxgi.dll .text:0x6641c, 0x17e70 bytes
    //
    _p9(sdk::unknown_ptr) convert_invalid_present_count_to_zero;
    
    // [ConvertToKMT@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x64f28, 0x17e70 bytes
    // dxgi.dll .text:0x65018, 0x17e70 bytes
    // dxgi.dll .text:0x65e4, 0x18b10 bytes
    // dxgi.dll .text:0x66448, 0x17e70 bytes
    //
    _q0(sdk::unknown_ptr) convert_to_kmt;
    
    // [CreateAdditionalBackBuffer@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1d374, 0x17e70 bytes
    // dxgi.dll .text:0x1d684, 0x17e70 bytes
    // dxgi.dll .text:0x24b68, 0x18b10 bytes
    // dxgi.dll .text:0x18c04, 0x17e70 bytes
    //
    _q1(sdk::unknown_ptr) create_additional_back_buffer;
    
    // [CreateBuffers@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1b8c8, 0x17e70 bytes
    // dxgi.dll .text:0x1bbd8, 0x17e70 bytes
    // dxgi.dll .text:0x19440, 0x18b10 bytes
    // dxgi.dll .text:0x17158, 0x17e70 bytes
    //
    _q2(sdk::unknown_ptr) create_buffers;
    
    // [CreateCompositionSurface@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x65008, 0x17e70 bytes
    // dxgi.dll .text:0x650f8, 0x17e70 bytes
    // dxgi.dll .text:0x6cbc, 0x18b10 bytes
    // dxgi.dll .text:0x66528, 0x17e70 bytes
    //
    _q3(sdk::unknown_ptr) create_composition_surface;
    
    // [CreateDriverCompatiblePrimary@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x213ec, 0x17e70 bytes
    // dxgi.dll .text:0x216cc, 0x17e70 bytes
    // dxgi.dll .text:0x29760, 0x18b10 bytes
    // dxgi.dll .text:0x2236c, 0x17e70 bytes
    //
    _q4(sdk::unknown_ptr) create_driver_compatible_primary;
    
    // [CreateFocusProxyWindow@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x65048, 0x17e70 bytes
    // dxgi.dll .text:0x65138, 0x17e70 bytes
    // dxgi.dll .text:0x70bf4, 0x18b10 bytes
    // dxgi.dll .text:0x66568, 0x17e70 bytes
    //
    _q5(sdk::unknown_ptr) create_focus_proxy_window;
    
    // [CreateFullscreenObjects@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x20f84, 0x17e70 bytes
    // dxgi.dll .text:0x21264, 0x17e70 bytes
    // dxgi.dll .text:0x2946c, 0x18b10 bytes
    // dxgi.dll .text:0x21f04, 0x17e70 bytes
    //
    _q6(sdk::unknown_ptr) create_fullscreen_objects;
    
    // [CreateFullscreenProxy@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6516c, 0x17e70 bytes
    // dxgi.dll .text:0x6525c, 0x17e70 bytes
    // dxgi.dll .text:0x70d18, 0x18b10 bytes
    // dxgi.dll .text:0x6668c, 0x17e70 bytes
    //
    _q7(sdk::unknown_ptr) create_fullscreen_proxy;
    
    // [CreateHybridFSSurfaces@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x652c8, 0x17e70 bytes
    // dxgi.dll .text:0x653b8, 0x17e70 bytes
    // dxgi.dll .text:0x70ea4, 0x18b10 bytes
    // dxgi.dll .text:0x667e8, 0x17e70 bytes
    //
    _q8(sdk::unknown_ptr) create_hybrid_fs_surfaces;
    
    // [CreateProxiesAndActivateFlip@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1b4e8, 0x17e70 bytes
    // dxgi.dll .text:0x1b7f8, 0x17e70 bytes
    // dxgi.dll .text:0x18924, 0x18b10 bytes
    // dxgi.dll .text:0x16d78, 0x17e70 bytes
    //
    _q9(sdk::unknown_ptr) create_proxies_and_activate_flip;
    
    // [CreateProxyFlipHelper@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x65718, 0x17e70 bytes
    // dxgi.dll .text:0x65808, 0x17e70 bytes
    // dxgi.dll .text:0x71344, 0x18b10 bytes
    // dxgi.dll .text:0x66c38, 0x17e70 bytes
    //
    _r0(sdk::unknown_ptr) create_proxy_flip_helper;
    
    // [CreateSurfaceInternalExtended@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1c0e0, 0x17e70 bytes
    // dxgi.dll .text:0x1c3f0, 0x17e70 bytes
    // dxgi.dll .text:0x19e34, 0x18b10 bytes
    // dxgi.dll .text:0x17970, 0x17e70 bytes
    //
    _r1(sdk::unknown_ptr) create_surface_internal_extended;
    
    // [CreateTrackedFenceExtended@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x3d88, 0x17e70 bytes
    // dxgi.dll .text:0x3d88, 0x17e70 bytes
    // dxgi.dll .text:0x6bf8, 0x18b10 bytes
    // dxgi.dll .text:0x5c08, 0x17e70 bytes
    //
    _r2(sdk::unknown_ptr) create_tracked_fence_extended;
    
    // [CreateWindowedIntermediateProxy@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x65a94, 0x17e70 bytes
    // dxgi.dll .text:0x65b84, 0x17e70 bytes
    // dxgi.dll .text:0x71714, 0x18b10 bytes
    // dxgi.dll .text:0x66fb4, 0x17e70 bytes
    //
    _r3(sdk::unknown_ptr) create_windowed_intermediate_proxy;
    
    // [CreateWindowedProxy@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x65ce8, 0x17e70 bytes
    // dxgi.dll .text:0x65dd8, 0x17e70 bytes
    // dxgi.dll .text:0x71984, 0x18b10 bytes
    // dxgi.dll .text:0x67208, 0x17e70 bytes
    //
    _r4(sdk::unknown_ptr) create_windowed_proxy;
    
    // [DescToDesc1@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x22fd0, 0x17e70 bytes
    // dxgi.dll .text:0x232d0, 0x17e70 bytes
    // dxgi.dll .text:0x275c0, 0x18b10 bytes
    // dxgi.dll .text:0x23f70, 0x17e70 bytes
    //
    _r5(sdk::unknown_ptr) desc_to_desc1;
    
    // [DescToInternalDesc@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xaea8, 0x17e70 bytes
    // dxgi.dll .text:0xaed8, 0x17e70 bytes
    // dxgi.dll .text:0x249c0, 0x18b10 bytes
    // dxgi.dll .text:0x1f6e8, 0x17e70 bytes
    //
    _r6(sdk::unknown_ptr) desc_to_internal_desc;
    
    // [DestroyBackBuffers@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x20800, 0x17e70 bytes
    // dxgi.dll .text:0x20ae0, 0x17e70 bytes
    // dxgi.dll .text:0x1f780, 0x18b10 bytes
    // dxgi.dll .text:0x21780, 0x17e70 bytes
    //
    _r7(sdk::unknown_ptr) destroy_back_buffers;
    
    // [DestroyFocusProxyWindow@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1fe74, 0x17e70 bytes
    // dxgi.dll .text:0x20154, 0x17e70 bytes
    // dxgi.dll .text:0x1f6e4, 0x18b10 bytes
    // dxgi.dll .text:0x20a50, 0x17e70 bytes
    //
    _r8(sdk::unknown_ptr) destroy_focus_proxy_window;
    
    // [DestroyFullscreenProxy@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1c1e0, 0x17e70 bytes
    // dxgi.dll .text:0x1c4f0, 0x17e70 bytes
    // dxgi.dll .text:0x19f34, 0x18b10 bytes
    // dxgi.dll .text:0x17a70, 0x17e70 bytes
    //
    _r9(sdk::unknown_ptr) destroy_fullscreen_proxy;
    
    // [??1CDXGISwapChain@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1f4c8, 0x17e70 bytes
    // dxgi.dll .text:0x1f7a8, 0x17e70 bytes
    // dxgi.dll .text:0x1ee80, 0x18b10 bytes
    // dxgi.dll .text:0x200a4, 0x17e70 bytes
    //
    _s0(sdk::unknown_ptr) destroy_instance;
    
    // [DestroyOwnedBuffer@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x208d8, 0x17e70 bytes
    // dxgi.dll .text:0x20bb8, 0x17e70 bytes
    // dxgi.dll .text:0x1f850, 0x18b10 bytes
    // dxgi.dll .text:0x21858, 0x17e70 bytes
    //
    _s1(sdk::unknown_ptr) destroy_owned_buffer;
    
    // [DestroyPrimarySurface@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2139c, 0x17e70 bytes
    // dxgi.dll .text:0x2167c, 0x17e70 bytes
    // dxgi.dll .text:0x1f694, 0x18b10 bytes
    // dxgi.dll .text:0x2231c, 0x17e70 bytes
    //
    _s2(sdk::unknown_ptr) destroy_primary_surface;
    
    // [DestroyWindowedProxy@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1c184, 0x17e70 bytes
    // dxgi.dll .text:0x1c494, 0x17e70 bytes
    // dxgi.dll .text:0x19ee0, 0x18b10 bytes
    // dxgi.dll .text:0x17a14, 0x17e70 bytes
    //
    _s3(sdk::unknown_ptr) destroy_windowed_proxy;
    
    // [EmulateDirtyRectPresentVistaBlt@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6601c, 0x17e70 bytes
    // dxgi.dll .text:0x6610c, 0x17e70 bytes
    // dxgi.dll .text:0x72020, 0x18b10 bytes
    // dxgi.dll .text:0x6753c, 0x17e70 bytes
    //
    _s4(sdk::unknown_ptr) emulate_dirty_rect_present_vista_blt;
    
    // [EmulateScalingNone@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x660b0, 0x17e70 bytes
    // dxgi.dll .text:0x661a0, 0x17e70 bytes
    // dxgi.dll .text:0x720d4, 0x18b10 bytes
    // dxgi.dll .text:0x675d0, 0x17e70 bytes
    //
    _s5(sdk::unknown_ptr) emulate_scaling_none;
    
    // [EmulateXBOXBehavior@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x663f0, 0x17e70 bytes
    // dxgi.dll .text:0x664e0, 0x17e70 bytes
    // dxgi.dll .text:0x72420, 0x18b10 bytes
    // dxgi.dll .text:0x67910, 0x17e70 bytes
    //
    _s6(sdk::unknown_ptr) emulate_xbox_behavior;
    
    // [EnsureChildDeviceInternal@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x66404, 0x17e70 bytes
    // dxgi.dll .text:0x664f4, 0x17e70 bytes
    // dxgi.dll .text:0x72434, 0x18b10 bytes
    // dxgi.dll .text:0x67924, 0x17e70 bytes
    //
    _s7(sdk::unknown_ptr) ensure_child_device_internal;
    
    // [ETWWrite@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x58d78, 0x17e70 bytes
    // dxgi.dll .text:0x58e68, 0x17e70 bytes
    // dxgi.dll .text:0x641a0, 0x18b10 bytes
    // dxgi.dll .text:0x5a318, 0x17e70 bytes
    //
    _s8(sdk::unknown_ptr) etw_write;
    
    // [ExplicitSynch@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x666ac, 0x17e70 bytes
    // dxgi.dll .text:0x6679c, 0x17e70 bytes
    // dxgi.dll .text:0x726fc, 0x18b10 bytes
    // dxgi.dll .text:0x67bcc, 0x17e70 bytes
    //
    _s9(sdk::unknown_ptr) explicit_synch;
    
    // [FinalRelease@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1fa34, 0x17e70 bytes
    // dxgi.dll .text:0x1fd14, 0x17e70 bytes
    // dxgi.dll .text:0x1f360, 0x18b10 bytes
    // dxgi.dll .text:0x20610, 0x17e70 bytes
    //
    _t0(sdk::unknown_ptr) final_release;
    
    // [FlipHybridPrimary@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x66928, 0x17e70 bytes
    // dxgi.dll .text:0x66a18, 0x17e70 bytes
    // dxgi.dll .text:0x72a08, 0x18b10 bytes
    // dxgi.dll .text:0x67e48, 0x17e70 bytes
    //
    _t1(sdk::unknown_ptr) flip_hybrid_primary;
    
    // [FlipPresentToDWM@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4310, 0x17e70 bytes
    // dxgi.dll .text:0x4310, 0x17e70 bytes
    // dxgi.dll .text:0x1790, 0x18b10 bytes
    // dxgi.dll .text:0x1dd0, 0x17e70 bytes
    //
    _t2(sdk::unknown_ptr) flip_present_to_dwm;
    
    // [GetBackBufferImplicitRotationCount@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5c50, 0x17e70 bytes
    // dxgi.dll .text:0x5c50, 0x17e70 bytes
    // dxgi.dll .text:0x20890, 0x18b10 bytes
    // dxgi.dll .text:0x1a800, 0x17e70 bytes
    //
    _t3(sdk::unknown_ptr) get_back_buffer_implicit_rotation_count;
    
    // [GetBackgroundColor@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x66dc0, 0x17e70 bytes
    // dxgi.dll .text:0x66eb0, 0x17e70 bytes
    // dxgi.dll .text:0x72f20, 0x18b10 bytes
    // dxgi.dll .text:0x682e0, 0x17e70 bytes
    //
    _t4(sdk::unknown_ptr) get_background_color;
    
    // [GetBuffer@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x27f60, 0x17e70 bytes
    // dxgi.dll .text:0x28270, 0x17e70 bytes
    // dxgi.dll .text:0x2f810, 0x18b10 bytes
    // dxgi.dll .text:0x296f0, 0x17e70 bytes
    //
    _t5(sdk::unknown_ptr) get_buffer;
    
    // [GetBufferLayoutInfoTest@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x66e40, 0x17e70 bytes
    // dxgi.dll .text:0x66f30, 0x17e70 bytes
    // dxgi.dll .text:0x73000, 0x18b10 bytes
    // dxgi.dll .text:0x68360, 0x17e70 bytes
    //
    _t6(sdk::unknown_ptr) get_buffer_layout_info_test;
    
    // [GetColorSpace@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x67090, 0x17e70 bytes
    // dxgi.dll .text:0x67180, 0x17e70 bytes
    // dxgi.dll .text:0x73530, 0x18b10 bytes
    // dxgi.dll .text:0x685b0, 0x17e70 bytes
    //
    _t7(sdk::unknown_ptr) get_color_space;
    
    // [GetColorSpace1@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1edd0, 0x17e70 bytes
    // dxgi.dll .text:0x1f0e0, 0x17e70 bytes
    // dxgi.dll .text:0x73520, 0x18b10 bytes
    // dxgi.dll .text:0x1fed0, 0x17e70 bytes
    //
    _t8(sdk::unknown_ptr) get_color_space1;
    
    // [GetCompositionSurface@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6ec30, 0x17e70 bytes
    // dxgi.dll .text:0x6ed40, 0x17e70 bytes
    // dxgi.dll .text:0x7a710, 0x18b10 bytes
    // dxgi.dll .text:0x70170, 0x17e70 bytes
    //
    _t9(sdk::unknown_ptr) get_composition_surface;
    
    // [GetContainingOutput@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x672d0, 0x17e70 bytes
    // dxgi.dll .text:0x673c0, 0x17e70 bytes
    // dxgi.dll .text:0x73760, 0x18b10 bytes
    // dxgi.dll .text:0x687f0, 0x17e70 bytes
    //
    _u0(sdk::unknown_ptr) get_containing_output;
    
    // [GetContainingOutputImpl@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x673ac, 0x17e70 bytes
    // dxgi.dll .text:0x6749c, 0x17e70 bytes
    // dxgi.dll .text:0x7383c, 0x18b10 bytes
    // dxgi.dll .text:0x688cc, 0x17e70 bytes
    //
    _u1(sdk::unknown_ptr) get_containing_output_impl;
    
    // [GetCoreWindow@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x675a0, 0x17e70 bytes
    // dxgi.dll .text:0x67690, 0x17e70 bytes
    // dxgi.dll .text:0x73a10, 0x18b10 bytes
    // dxgi.dll .text:0x68ac0, 0x17e70 bytes
    //
    _u2(sdk::unknown_ptr) get_core_window;
    
    // [GetCurrentBackBufferIndex@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x27f90, 0x17e70 bytes
    // dxgi.dll .text:0x282a0, 0x17e70 bytes
    // dxgi.dll .text:0x2f870, 0x18b10 bytes
    // dxgi.dll .text:0x29720, 0x17e70 bytes
    //
    _u3(sdk::unknown_ptr) get_current_back_buffer_index;
    
    // [GetCurrentCommandQueue@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x67670, 0x17e70 bytes
    // dxgi.dll .text:0x67760, 0x17e70 bytes
    // dxgi.dll .text:0x73b70, 0x18b10 bytes
    // dxgi.dll .text:0x68b90, 0x17e70 bytes
    //
    _u4(sdk::unknown_ptr) get_current_command_queue;
    
    // [GetCurrentProxySurface@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6780c, 0x17e70 bytes
    // dxgi.dll .text:0x6791c, 0x17e70 bytes
    // dxgi.dll .text:0x73ed0, 0x18b10 bytes
    // dxgi.dll .text:0x68d4c, 0x17e70 bytes
    //
    _u5(sdk::unknown_ptr) get_current_proxy_surface;
    
    // [GetDFlipOutput@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ed10, 0x17e70 bytes
    // dxgi.dll .text:0x1f020, 0x17e70 bytes
    // dxgi.dll .text:0x26860, 0x18b10 bytes
    // dxgi.dll .text:0x1fe10, 0x17e70 bytes
    //
    _u6(sdk::unknown_ptr) get_d_flip_output;
    
    // [GetDesc@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x27fa0, 0x17e70 bytes
    // dxgi.dll .text:0x282b0, 0x17e70 bytes
    // dxgi.dll .text:0x2f890, 0x18b10 bytes
    // dxgi.dll .text:0x29730, 0x17e70 bytes
    //
    _u7(sdk::unknown_ptr) get_desc;
    
    // [GetDesc1@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x67840, 0x17e70 bytes
    // dxgi.dll .text:0x67950, 0x17e70 bytes
    // dxgi.dll .text:0x35a90, 0x18b10 bytes
    // dxgi.dll .text:0x68d80, 0x17e70 bytes
    //
    _u8(sdk::unknown_ptr) get_desc1;
    
    // [GetDesiredOwnership@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x21308, 0x17e70 bytes
    // dxgi.dll .text:0x215e8, 0x17e70 bytes
    // dxgi.dll .text:0x2a3e8, 0x18b10 bytes
    // dxgi.dll .text:0x22288, 0x17e70 bytes
    //
    _u9(sdk::unknown_ptr) get_desired_ownership;
    
    // [GetDestSize@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x67940, 0x17e70 bytes
    // dxgi.dll .text:0x67a50, 0x17e70 bytes
    // dxgi.dll .text:0x73fb0, 0x18b10 bytes
    // dxgi.dll .text:0x68e80, 0x17e70 bytes
    //
    _v0(sdk::unknown_ptr) get_dest_size;
    
    // [GetDevice@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x27fb0, 0x17e70 bytes
    // dxgi.dll .text:0x282c0, 0x17e70 bytes
    // dxgi.dll .text:0x2f8b0, 0x18b10 bytes
    // dxgi.dll .text:0x29740, 0x17e70 bytes
    //
    _v1(sdk::unknown_ptr) get_device;
    
    // [GetDeviceFlipExSemaphoreHandle@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x396c, 0x17e70 bytes
    // dxgi.dll .text:0x396c, 0x17e70 bytes
    // dxgi.dll .text:0x6c7c, 0x18b10 bytes
    // dxgi.dll .text:0x57ec, 0x17e70 bytes
    //
    _v2(sdk::unknown_ptr) get_device_flip_ex_semaphore_handle;
    
    // [GetDirectFlipAddRefedOutput@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x28c4, 0x17e70 bytes
    // dxgi.dll .text:0x28c4, 0x17e70 bytes
    // dxgi.dll .text:0x1aa40, 0x18b10 bytes
    // dxgi.dll .text:0x4744, 0x17e70 bytes
    //
    _v3(sdk::unknown_ptr) get_direct_flip_add_refed_output;
    
    // [_GetEntries@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1edb0, 0x17e70 bytes
    // dxgi.dll .text:0x1f0c0, 0x17e70 bytes
    // dxgi.dll .text:0x267d0, 0x18b10 bytes
    // dxgi.dll .text:0x1feb0, 0x17e70 bytes
    //
    _v4(sdk::unknown_ptr) get_entries;
    
    // [GetFrameLatencyWaitableObject@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1eb0, 0x17e70 bytes
    // dxgi.dll .text:0x1eb0, 0x17e70 bytes
    // dxgi.dll .text:0x58f0, 0x18b10 bytes
    // dxgi.dll .text:0x3d30, 0x17e70 bytes
    //
    _v5(sdk::unknown_ptr) get_frame_latency_waitable_object;
    
    // [GetFrameStatistics@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x12d10, 0x17e70 bytes
    // dxgi.dll .text:0x12f70, 0x17e70 bytes
    // dxgi.dll .text:0x740b0, 0x18b10 bytes
    // dxgi.dll .text:0xe480, 0x17e70 bytes
    //
    _v6(sdk::unknown_ptr) get_frame_statistics;
    
    // [GetFrameStatisticsCore@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x12d40, 0x17e70 bytes
    // dxgi.dll .text:0x12fa0, 0x17e70 bytes
    // dxgi.dll .text:0x8e90, 0x18b10 bytes
    // dxgi.dll .text:0xe4b0, 0x17e70 bytes
    //
    _v7(sdk::unknown_ptr) get_frame_statistics_core;
    
    // [GetFrameStatisticsDWM@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x135d0, 0x17e70 bytes
    // dxgi.dll .text:0x13830, 0x17e70 bytes
    // dxgi.dll .text:0xf140, 0x18b10 bytes
    // dxgi.dll .text:0xed40, 0x17e70 bytes
    //
    _v8(sdk::unknown_ptr) get_frame_statistics_dwm;
    
    // [GetFrameStatisticsMedia@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2220, 0x17e70 bytes
    // dxgi.dll .text:0x2220, 0x17e70 bytes
    // dxgi.dll .text:0x8e50, 0x18b10 bytes
    // dxgi.dll .text:0x40a0, 0x17e70 bytes
    //
    _v9(sdk::unknown_ptr) get_frame_statistics_media;
    
    // [GetFrameStatisticsPartner@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x67a50, 0x17e70 bytes
    // dxgi.dll .text:0x67b60, 0x17e70 bytes
    // dxgi.dll .text:0x740e0, 0x18b10 bytes
    // dxgi.dll .text:0x68f90, 0x17e70 bytes
    //
    _w0(sdk::unknown_ptr) get_frame_statistics_partner;
    
    // [GetFrameStatisticsTest@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x67a90, 0x17e70 bytes
    // dxgi.dll .text:0x67ba0, 0x17e70 bytes
    // dxgi.dll .text:0x74120, 0x18b10 bytes
    // dxgi.dll .text:0x68fd0, 0x17e70 bytes
    //
    _w1(sdk::unknown_ptr) get_frame_statistics_test;
    
    // [GetFrontBufferRenderingCapability@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6ecc0, 0x17e70 bytes
    // dxgi.dll .text:0x6edd0, 0x17e70 bytes
    // dxgi.dll .text:0x2b200, 0x18b10 bytes
    // dxgi.dll .text:0x70200, 0x17e70 bytes
    //
    _w2(sdk::unknown_ptr) get_front_buffer_rendering_capability;
    
    // [GetFullscreenDesc@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x67ad0, 0x17e70 bytes
    // dxgi.dll .text:0x67be0, 0x17e70 bytes
    // dxgi.dll .text:0x74160, 0x18b10 bytes
    // dxgi.dll .text:0x69010, 0x17e70 bytes
    //
    _w3(sdk::unknown_ptr) get_fullscreen_desc;
    
    // [GetFullscreenState@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x20190, 0x17e70 bytes
    // dxgi.dll .text:0x20470, 0x17e70 bytes
    // dxgi.dll .text:0x2a580, 0x18b10 bytes
    // dxgi.dll .text:0x21110, 0x17e70 bytes
    //
    _w4(sdk::unknown_ptr) get_fullscreen_state;
    
    // [GetFullscreenStateNonInvasive@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2029c, 0x17e70 bytes
    // dxgi.dll .text:0x2057c, 0x17e70 bytes
    // dxgi.dll .text:0x2a6a8, 0x18b10 bytes
    // dxgi.dll .text:0x2121c, 0x17e70 bytes
    //
    _w5(sdk::unknown_ptr) get_fullscreen_state_non_invasive;
    
    // [GetHardwareProtection@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x23fc0, 0x17e70 bytes
    // dxgi.dll .text:0x242c0, 0x17e70 bytes
    // dxgi.dll .text:0x258b0, 0x18b10 bytes
    // dxgi.dll .text:0x250e0, 0x17e70 bytes
    //
    _w6(sdk::unknown_ptr) get_hardware_protection;
    
    // [GetHwnd@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x67bc0, 0x17e70 bytes
    // dxgi.dll .text:0x67cd0, 0x17e70 bytes
    // dxgi.dll .text:0x74250, 0x18b10 bytes
    // dxgi.dll .text:0x69100, 0x17e70 bytes
    //
    _w7(sdk::unknown_ptr) get_hwnd;
    
    // [GetLastPresentCount@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x27ff0, 0x17e70 bytes
    // dxgi.dll .text:0x28300, 0x17e70 bytes
    // dxgi.dll .text:0x2f930, 0x18b10 bytes
    // dxgi.dll .text:0x29780, 0x17e70 bytes
    //
    _w8(sdk::unknown_ptr) get_last_present_count;
    
    // [GetLogicalSurfaceHandle@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x28000, 0x17e70 bytes
    // dxgi.dll .text:0x28310, 0x17e70 bytes
    // dxgi.dll .text:0x2f950, 0x18b10 bytes
    // dxgi.dll .text:0x29790, 0x17e70 bytes
    //
    _w9(sdk::unknown_ptr) get_logical_surface_handle;
    
    // [GetMatrixTransform@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x67c10, 0x17e70 bytes
    // dxgi.dll .text:0x67d20, 0x17e70 bytes
    // dxgi.dll .text:0x742a0, 0x18b10 bytes
    // dxgi.dll .text:0x69150, 0x17e70 bytes
    //
    _x0(sdk::unknown_ptr) get_matrix_transform;
    
    // [GetMaximumFrameLatency@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x3740, 0x17e70 bytes
    // dxgi.dll .text:0x3740, 0x17e70 bytes
    // dxgi.dll .text:0x83e0, 0x18b10 bytes
    // dxgi.dll .text:0x55c0, 0x17e70 bytes
    //
    _x1(sdk::unknown_ptr) get_maximum_frame_latency;
    
    // [GetMonitorRect@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x67d44, 0x17e70 bytes
    // dxgi.dll .text:0x67e54, 0x17e70 bytes
    // dxgi.dll .text:0x743b4, 0x18b10 bytes
    // dxgi.dll .text:0x69284, 0x17e70 bytes
    //
    _x2(sdk::unknown_ptr) get_monitor_rect;
    
    // [GetMultiplaneOverlayCaps@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xad30, 0x17e70 bytes
    // dxgi.dll .text:0xad60, 0x17e70 bytes
    // dxgi.dll .text:0x254e0, 0x18b10 bytes
    // dxgi.dll .text:0x1f570, 0x17e70 bytes
    //
    _x3(sdk::unknown_ptr) get_multiplane_overlay_caps;
    
    // [GetMultiplaneOverlayPriority@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x67e84, 0x17e70 bytes
    // dxgi.dll .text:0x67f94, 0x17e70 bytes
    // dxgi.dll .text:0x7b78, 0x18b10 bytes
    // dxgi.dll .text:0x693c4, 0x17e70 bytes
    //
    _x4(sdk::unknown_ptr) get_multiplane_overlay_priority;
    
    // [GetParent@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x28020, 0x17e70 bytes
    // dxgi.dll .text:0x28330, 0x17e70 bytes
    // dxgi.dll .text:0x2f990, 0x18b10 bytes
    // dxgi.dll .text:0x297b0, 0x17e70 bytes
    //
    _x5(sdk::unknown_ptr) get_parent;
    
    // [GetPrivateData@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x28060, 0x17e70 bytes
    // dxgi.dll .text:0x28370, 0x17e70 bytes
    // dxgi.dll .text:0x2fa10, 0x18b10 bytes
    // dxgi.dll .text:0x297f0, 0x17e70 bytes
    //
    _x6(sdk::unknown_ptr) get_private_data;
    
    // [GetResourceParent@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x23eb0, 0x17e70 bytes
    // dxgi.dll .text:0x241b0, 0x17e70 bytes
    // dxgi.dll .text:0x25430, 0x18b10 bytes
    // dxgi.dll .text:0x24fb0, 0x17e70 bytes
    //
    _x7(sdk::unknown_ptr) get_resource_parent;
    
    // [GetRestrictToOutput@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x67f70, 0x17e70 bytes
    // dxgi.dll .text:0x68080, 0x17e70 bytes
    // dxgi.dll .text:0x74550, 0x18b10 bytes
    // dxgi.dll .text:0x694b0, 0x17e70 bytes
    //
    _x8(sdk::unknown_ptr) get_restrict_to_output;
    
    // [GetRotation@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x67fb0, 0x17e70 bytes
    // dxgi.dll .text:0x680c0, 0x17e70 bytes
    // dxgi.dll .text:0x745a0, 0x18b10 bytes
    // dxgi.dll .text:0x694f0, 0x17e70 bytes
    //
    _x9(sdk::unknown_ptr) get_rotation;
    
    // [GetSourceRect@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x680a0, 0x17e70 bytes
    // dxgi.dll .text:0x681b0, 0x17e70 bytes
    // dxgi.dll .text:0x74690, 0x18b10 bytes
    // dxgi.dll .text:0x695e0, 0x17e70 bytes
    //
    _y0(sdk::unknown_ptr) get_source_rect;
    
    // [GetSourceSize@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x68180, 0x17e70 bytes
    // dxgi.dll .text:0x68290, 0x17e70 bytes
    // dxgi.dll .text:0x74750, 0x18b10 bytes
    // dxgi.dll .text:0x696c0, 0x17e70 bytes
    //
    _y1(sdk::unknown_ptr) get_source_size;
    
    // [GetTargetRect@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x682c0, 0x17e70 bytes
    // dxgi.dll .text:0x683d0, 0x17e70 bytes
    // dxgi.dll .text:0x74870, 0x18b10 bytes
    // dxgi.dll .text:0x69800, 0x17e70 bytes
    //
    _y2(sdk::unknown_ptr) get_target_rect;
    
    // [HasProxyFrontBufferSurface@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x683c0, 0x17e70 bytes
    // dxgi.dll .text:0x684d0, 0x17e70 bytes
    // dxgi.dll .text:0x74930, 0x18b10 bytes
    // dxgi.dll .text:0x69900, 0x17e70 bytes
    //
    _y3(sdk::unknown_ptr) has_proxy_front_buffer_surface;
    
    // [IncrementPresentCount@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x683d4, 0x17e70 bytes
    // dxgi.dll .text:0x684e4, 0x17e70 bytes
    // dxgi.dll .text:0xf840, 0x18b10 bytes
    // dxgi.dll .text:0x69914, 0x17e70 bytes
    //
    _y4(sdk::unknown_ptr) increment_present_count;
    
    // [InitCrossAdapterFence@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x68430, 0x17e70 bytes
    // dxgi.dll .text:0x68540, 0x17e70 bytes
    // dxgi.dll .text:0x74944, 0x18b10 bytes
    // dxgi.dll .text:0x69970, 0x17e70 bytes
    //
    _y5(sdk::unknown_ptr) init_cross_adapter_fence;
    
    // [InitDirectFlip@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1d104, 0x17e70 bytes
    // dxgi.dll .text:0x1d414, 0x17e70 bytes
    // dxgi.dll .text:0x18650, 0x18b10 bytes
    // dxgi.dll .text:0x18994, 0x17e70 bytes
    //
    _y6(sdk::unknown_ptr) init_direct_flip;
    
    // [InitializeSwapChainBuffers@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1da70, 0x17e70 bytes
    // dxgi.dll .text:0x1dd80, 0x17e70 bytes
    // dxgi.dll .text:0x251fc, 0x18b10 bytes
    // dxgi.dll .text:0x19300, 0x17e70 bytes
    //
    _y7(sdk::unknown_ptr) initialize_swap_chain_buffers;
    
    // [InitializeSwapChainCompositionState@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xaff4, 0x17e70 bytes
    // dxgi.dll .text:0xb024, 0x17e70 bytes
    // dxgi.dll .text:0x1faf4, 0x18b10 bytes
    // dxgi.dll .text:0x1f834, 0x17e70 bytes
    //
    _y8(sdk::unknown_ptr) initialize_swap_chain_composition_state;
    
    // [InitializeSwapChainCreationStateFullScreen@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x202c4, 0x17e70 bytes
    // dxgi.dll .text:0x205a4, 0x17e70 bytes
    // dxgi.dll .text:0x27a5c, 0x18b10 bytes
    // dxgi.dll .text:0x21244, 0x17e70 bytes
    //
    _y9(sdk::unknown_ptr) initialize_swap_chain_creation_state_full_screen;
    
    // [InitializeSwapChainDeviceState@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1d554, 0x17e70 bytes
    // dxgi.dll .text:0x1d864, 0x17e70 bytes
    // dxgi.dll .text:0x23db4, 0x18b10 bytes
    // dxgi.dll .text:0x18de4, 0x17e70 bytes
    //
    _z0(sdk::unknown_ptr) initialize_swap_chain_device_state;
    
    // [InitializeSwapChainState@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1db08, 0x17e70 bytes
    // dxgi.dll .text:0x1de18, 0x17e70 bytes
    // dxgi.dll .text:0x1cbf8, 0x18b10 bytes
    // dxgi.dll .text:0x19398, 0x17e70 bytes
    //
    _z1(sdk::unknown_ptr) initialize_swap_chain_state;
    
    // [InitializeSwapChainWindowState@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb1f8, 0x17e70 bytes
    // dxgi.dll .text:0xb228, 0x17e70 bytes
    // dxgi.dll .text:0x2585c, 0x18b10 bytes
    // dxgi.dll .text:0x1fa38, 0x17e70 bytes
    //
    _z2(sdk::unknown_ptr) initialize_swap_chain_window_state;
    
    // [IsColorSpaceSupported@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x3ecc, 0x17e70 bytes
    // dxgi.dll .text:0x3ecc, 0x17e70 bytes
    // dxgi.dll .text:0x1a8b4, 0x18b10 bytes
    // dxgi.dll .text:0x5d4c, 0x17e70 bytes
    //
    _z3(sdk::unknown_ptr) is_color_space_supported;
    
    // [IsCompositionBinding@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb02c, 0x17e70 bytes
    // dxgi.dll .text:0xb05c, 0x17e70 bytes
    // dxgi.dll .text:0x1fb20, 0x18b10 bytes
    // dxgi.dll .text:0x1f86c, 0x17e70 bytes
    //
    _z4(sdk::unknown_ptr) is_composition_binding;
    
    // [IsDWMPlane@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x685fc, 0x17e70 bytes
    // dxgi.dll .text:0x6870c, 0x17e70 bytes
    // dxgi.dll .text:0x6a0c, 0x18b10 bytes
    // dxgi.dll .text:0x69b3c, 0x17e70 bytes
    //
    _z5(sdk::unknown_ptr) is_dwm_plane;
    
    // [IsFullscreenDDAAllowed@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x21338, 0x17e70 bytes
    // dxgi.dll .text:0x21618, 0x17e70 bytes
    // dxgi.dll .text:0x2a418, 0x18b10 bytes
    // dxgi.dll .text:0x222b8, 0x17e70 bytes
    //
    _z6(sdk::unknown_ptr) is_fullscreen_dda_allowed;
    
    // [IsHwndBinding@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x41c0, 0x17e70 bytes
    // dxgi.dll .text:0x41c0, 0x17e70 bytes
    // dxgi.dll .text:0x6e98, 0x18b10 bytes
    // dxgi.dll .text:0x6040, 0x17e70 bytes
    //
    _z7(sdk::unknown_ptr) is_hwnd_binding;
    
    // [IsIndirectDisplay@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1b81c, 0x17e70 bytes
    // dxgi.dll .text:0x1bb2c, 0x17e70 bytes
    // dxgi.dll .text:0x193e0, 0x18b10 bytes
    // dxgi.dll .text:0x170ac, 0x17e70 bytes
    //
    _z8(sdk::unknown_ptr) is_indirect_display;
    
    // [IsIndirectUsingPrimaries@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x68630, 0x17e70 bytes
    // dxgi.dll .text:0x68740, 0x17e70 bytes
    // dxgi.dll .text:0x74a8c, 0x18b10 bytes
    // dxgi.dll .text:0x69b70, 0x17e70 bytes
    //
    _z9(sdk::unknown_ptr) is_indirect_using_primaries;
    
    // [IsMaximizedWindowedFullscreenEnabled@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1b894, 0x17e70 bytes
    // dxgi.dll .text:0x1bba4, 0x17e70 bytes
    // dxgi.dll .text:0x19f88, 0x18b10 bytes
    // dxgi.dll .text:0x17124, 0x17e70 bytes
    //
    _a0(sdk::unknown_ptr) is_maximized_windowed_fullscreen_enabled;
    
    // [IsMaximizedWindowedSwapEffectTransitionEnabled@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb640, 0x17e70 bytes
    // dxgi.dll .text:0xb670, 0x17e70 bytes
    // dxgi.dll .text:0x1cbd4, 0x18b10 bytes
    // dxgi.dll .text:0x6850, 0x17e70 bytes
    //
    _a1(sdk::unknown_ptr) is_maximized_windowed_swap_effect_transition_enabled;
    
    // [IsMaximizedWindowedUpgradesEnabled@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x20e70, 0x17e70 bytes
    // dxgi.dll .text:0x21150, 0x17e70 bytes
    // dxgi.dll .text:0x29378, 0x18b10 bytes
    // dxgi.dll .text:0x21df0, 0x17e70 bytes
    //
    _a2(sdk::unknown_ptr) is_maximized_windowed_upgrades_enabled;
    
    // [IsRedirected@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x68798, 0x17e70 bytes
    // dxgi.dll .text:0x688a8, 0x17e70 bytes
    // dxgi.dll .text:0x74be8, 0x18b10 bytes
    // dxgi.dll .text:0x69cd8, 0x17e70 bytes
    //
    _a3(sdk::unknown_ptr) is_redirected;
    
    // [IsTemporaryMonoSupported@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x687d0, 0x17e70 bytes
    // dxgi.dll .text:0x688e0, 0x17e70 bytes
    // dxgi.dll .text:0x74c20, 0x18b10 bytes
    // dxgi.dll .text:0x69d10, 0x17e70 bytes
    //
    _a4(sdk::unknown_ptr) is_temporary_mono_supported;
    
    // [IsTemporaryMonoSupportedImpl@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x68838, 0x17e70 bytes
    // dxgi.dll .text:0x68948, 0x17e70 bytes
    // dxgi.dll .text:0x74c88, 0x18b10 bytes
    // dxgi.dll .text:0x69d78, 0x17e70 bytes
    //
    _a5(sdk::unknown_ptr) is_temporary_mono_supported_impl;
    
    // [IsValidSwapChainColorSpace@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x53c0, 0x17e70 bytes
    // dxgi.dll .text:0x53c0, 0x17e70 bytes
    // dxgi.dll .text:0x1a97c, 0x18b10 bytes
    // dxgi.dll .text:0x2e80, 0x17e70 bytes
    //
    _a6(sdk::unknown_ptr) is_valid_swap_chain_color_space;
    
    // [IsVariableRefreshRateOverrideEligible@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x68864, 0x17e70 bytes
    // dxgi.dll .text:0x68974, 0x17e70 bytes
    // dxgi.dll .text:0x74cb4, 0x18b10 bytes
    // dxgi.dll .text:0x69da4, 0x17e70 bytes
    //
    _a7(sdk::unknown_ptr) is_variable_refresh_rate_override_eligible;
    
    // [IsWindowedInternal@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1b868, 0x17e70 bytes
    // dxgi.dll .text:0x1bb78, 0x17e70 bytes
    // dxgi.dll .text:0x19cf4, 0x18b10 bytes
    // dxgi.dll .text:0x170f8, 0x17e70 bytes
    //
    _a8(sdk::unknown_ptr) is_windowed_internal;
    
    // [IsYUVSwapChain@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1c204, 0x17e70 bytes
    // dxgi.dll .text:0x1c514, 0x17e70 bytes
    // dxgi.dll .text:0x19d20, 0x18b10 bytes
    // dxgi.dll .text:0x17a94, 0x17e70 bytes
    //
    _a9(sdk::unknown_ptr) is_yuv_swap_chain;
    
    // [LogSwapChainCreationEvent@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb194, 0x17e70 bytes
    // dxgi.dll .text:0xb1c4, 0x17e70 bytes
    // dxgi.dll .text:0x1cae4, 0x18b10 bytes
    // dxgi.dll .text:0x1f9d4, 0x17e70 bytes
    //
    _b0(sdk::unknown_ptr) log_swap_chain_creation_event;
    
    // [MakeWindowAssociation@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1fcb0, 0x17e70 bytes
    // dxgi.dll .text:0x1ff90, 0x17e70 bytes
    // dxgi.dll .text:0x1f65c, 0x18b10 bytes
    // dxgi.dll .text:0x2088c, 0x17e70 bytes
    //
    _b1(sdk::unknown_ptr) make_window_association;
    
    // [OnPrintScreen@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6897c, 0x17e70 bytes
    // dxgi.dll .text:0x68a8c, 0x17e70 bytes
    // dxgi.dll .text:0x74ce8, 0x18b10 bytes
    // dxgi.dll .text:0x69ebc, 0x17e70 bytes
    //
    _b2(sdk::unknown_ptr) on_print_screen;
    
    // [PrepareIndirectPresent@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x68a50, 0x17e70 bytes
    // dxgi.dll .text:0x68b60, 0x17e70 bytes
    // dxgi.dll .text:0x74dc4, 0x18b10 bytes
    // dxgi.dll .text:0x69f90, 0x17e70 bytes
    //
    _b3(sdk::unknown_ptr) prepare_indirect_present;
    
    // [PrepareResizeBuffers@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x21eb0, 0x17e70 bytes
    // dxgi.dll .text:0x22190, 0x17e70 bytes
    // dxgi.dll .text:0x28648, 0x18b10 bytes
    // dxgi.dll .text:0x22e30, 0x17e70 bytes
    //
    _b4(sdk::unknown_ptr) prepare_resize_buffers;
    
    // [PrepareWindowedBltCrossAdapterSurface@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x68b98, 0x17e70 bytes
    // dxgi.dll .text:0x68ca8, 0x17e70 bytes
    // dxgi.dll .text:0x74f40, 0x18b10 bytes
    // dxgi.dll .text:0x6a0d8, 0x17e70 bytes
    //
    _b5(sdk::unknown_ptr) prepare_windowed_blt_cross_adapter_surface;
    
    // [PrepareWindowedBltPresent@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x68e74, 0x17e70 bytes
    // dxgi.dll .text:0x68f84, 0x17e70 bytes
    // dxgi.dll .text:0x75260, 0x18b10 bytes
    // dxgi.dll .text:0x6a3b4, 0x17e70 bytes
    //
    _b6(sdk::unknown_ptr) prepare_windowed_blt_present;
    
    // [Present@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4f80, 0x17e70 bytes
    // dxgi.dll .text:0x4f80, 0x17e70 bytes
    // dxgi.dll .text:0x14d0, 0x18b10 bytes
    // dxgi.dll .text:0x2a40, 0x17e70 bytes
    //
    _b7(sdk::unknown_ptr) present;
    
    // [PresentBuffer@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x696b0, 0x17e70 bytes
    // dxgi.dll .text:0x697c0, 0x17e70 bytes
    // dxgi.dll .text:0x75910, 0x18b10 bytes
    // dxgi.dll .text:0x6abf0, 0x17e70 bytes
    //
    _b8(sdk::unknown_ptr) present_buffer;
    
    // [PresentDWM@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x132a0, 0x17e70 bytes
    // dxgi.dll .text:0x13500, 0x17e70 bytes
    // dxgi.dll .text:0xd160, 0x18b10 bytes
    // dxgi.dll .text:0xea10, 0x17e70 bytes
    //
    _b9(sdk::unknown_ptr) present_dwm;
    
    // [PresentFullscreenFlip@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xa8e8, 0x17e70 bytes
    // dxgi.dll .text:0xa8e8, 0x17e70 bytes
    // dxgi.dll .text:0x75b44, 0x18b10 bytes
    // dxgi.dll .text:0x1f0f8, 0x17e70 bytes
    //
    _c0(sdk::unknown_ptr) present_fullscreen_flip;
    
    // [PresentImpl@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x13410, 0x17e70 bytes
    // dxgi.dll .text:0x13670, 0x17e70 bytes
    // dxgi.dll .text:0xd2c0, 0x18b10 bytes
    // dxgi.dll .text:0xeb80, 0x17e70 bytes
    //
    _c1(sdk::unknown_ptr) present_impl;
    
    // [PresentImplCore@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x137c0, 0x17e70 bytes
    // dxgi.dll .text:0x13a20, 0x17e70 bytes
    // dxgi.dll .text:0xde00, 0x18b10 bytes
    // dxgi.dll .text:0xef30, 0x17e70 bytes
    //
    _c2(sdk::unknown_ptr) present_impl_core;
    
    // [PresentMultiplaneOverlay@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6eea0, 0x17e70 bytes
    // dxgi.dll .text:0x6efb0, 0x17e70 bytes
    // dxgi.dll .text:0xcf30, 0x18b10 bytes
    // dxgi.dll .text:0x703e0, 0x17e70 bytes
    //
    _c3(sdk::unknown_ptr) present_multiplane_overlay;
    
    // [PresentMultiplaneOverlayInternal@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x69908, 0x17e70 bytes
    // dxgi.dll .text:0x69a18, 0x17e70 bytes
    // dxgi.dll .text:0xd480, 0x18b10 bytes
    // dxgi.dll .text:0x6ae48, 0x17e70 bytes
    //
    _c4(sdk::unknown_ptr) present_multiplane_overlay_internal;
    
    // [QIDecode@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x20e0, 0x17e70 bytes
    // dxgi.dll .text:0x20e0, 0x17e70 bytes
    // dxgi.dll .text:0x66e0, 0x18b10 bytes
    // dxgi.dll .text:0x3f60, 0x17e70 bytes
    //
    _c5(sdk::unknown_ptr) qi_decode;
    
    // [QIMedia@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2130, 0x17e70 bytes
    // dxgi.dll .text:0x2130, 0x17e70 bytes
    // dxgi.dll .text:0x5890, 0x18b10 bytes
    // dxgi.dll .text:0x3fb0, 0x17e70 bytes
    //
    _c6(sdk::unknown_ptr) qi_media;
    
    // [QIXAML@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6a0c0, 0x17e70 bytes
    // dxgi.dll .text:0x6a1d0, 0x17e70 bytes
    // dxgi.dll .text:0x75d80, 0x18b10 bytes
    // dxgi.dll .text:0x6b600, 0x17e70 bytes
    //
    _c7(sdk::unknown_ptr) qixaml;
    
    // [ReCreateSwapchainBufferForProtection@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6a12c, 0x17e70 bytes
    // dxgi.dll .text:0x6a23c, 0x17e70 bytes
    // dxgi.dll .text:0x75e08, 0x18b10 bytes
    // dxgi.dll .text:0x6b66c, 0x17e70 bytes
    //
    _c8(sdk::unknown_ptr) re_create_swapchain_buffer_for_protection;
    
    // [RecreateWindowedBuffers@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6a38c, 0x17e70 bytes
    // dxgi.dll .text:0x6a49c, 0x17e70 bytes
    // dxgi.dll .text:0x760a0, 0x18b10 bytes
    // dxgi.dll .text:0x6b8cc, 0x17e70 bytes
    //
    _c9(sdk::unknown_ptr) recreate_windowed_buffers;
    
    // [RegisterSwapChainInGlobalModule@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb328, 0x17e70 bytes
    // dxgi.dll .text:0xb358, 0x17e70 bytes
    // dxgi.dll .text:0x1d544, 0x18b10 bytes
    // dxgi.dll .text:0x6538, 0x17e70 bytes
    //
    _d0(sdk::unknown_ptr) register_swap_chain_in_global_module;
    
    // [ReleaseHybridFSSurfaces@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x21944, 0x17e70 bytes
    // dxgi.dll .text:0x21c24, 0x17e70 bytes
    // dxgi.dll .text:0x2a47c, 0x18b10 bytes
    // dxgi.dll .text:0x228c4, 0x17e70 bytes
    //
    _d1(sdk::unknown_ptr) release_hybrid_fs_surfaces;
    
    // [ReleaseLastIndirectBuffer@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6a82c, 0x17e70 bytes
    // dxgi.dll .text:0x6a93c, 0x17e70 bytes
    // dxgi.dll .text:0x76590, 0x18b10 bytes
    // dxgi.dll .text:0x6bd6c, 0x17e70 bytes
    //
    _d2(sdk::unknown_ptr) release_last_indirect_buffer;
    
    // [ReleaseRedirectionSurface@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6a880, 0x17e70 bytes
    // dxgi.dll .text:0x6a990, 0x17e70 bytes
    // dxgi.dll .text:0x765ec, 0x18b10 bytes
    // dxgi.dll .text:0x6bdc0, 0x17e70 bytes
    //
    _d3(sdk::unknown_ptr) release_redirection_surface;
    
    // [ReleaseUseBuffer@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6a940, 0x17e70 bytes
    // dxgi.dll .text:0x6aa50, 0x17e70 bytes
    // dxgi.dll .text:0x766ac, 0x18b10 bytes
    // dxgi.dll .text:0x6be80, 0x17e70 bytes
    //
    _d4(sdk::unknown_ptr) release_use_buffer;
    
    // [ResetBlitParameters@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1d08c, 0x17e70 bytes
    // dxgi.dll .text:0x1d39c, 0x17e70 bytes
    // dxgi.dll .text:0x19fbc, 0x18b10 bytes
    // dxgi.dll .text:0x1891c, 0x17e70 bytes
    //
    _d5(sdk::unknown_ptr) reset_blit_parameters;
    
    // [ResizeBuffers@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x20410, 0x17e70 bytes
    // dxgi.dll .text:0x206f0, 0x17e70 bytes
    // dxgi.dll .text:0x27b10, 0x18b10 bytes
    // dxgi.dll .text:0x21390, 0x17e70 bytes
    //
    _d6(sdk::unknown_ptr) resize_buffers;
    
    // [ResizeBuffers1@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6ab70, 0x17e70 bytes
    // dxgi.dll .text:0x6ac80, 0x17e70 bytes
    // dxgi.dll .text:0x76a80, 0x18b10 bytes
    // dxgi.dll .text:0x6c0b0, 0x17e70 bytes
    //
    _d7(sdk::unknown_ptr) resize_buffers1;
    
    // [ResizeTarget@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6af00, 0x17e70 bytes
    // dxgi.dll .text:0x6b010, 0x17e70 bytes
    // dxgi.dll .text:0x76f90, 0x18b10 bytes
    // dxgi.dll .text:0x6c440, 0x17e70 bytes
    //
    _d8(sdk::unknown_ptr) resize_target;
    
    // [ResizeWindow@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x20ee4, 0x17e70 bytes
    // dxgi.dll .text:0x211c4, 0x17e70 bytes
    // dxgi.dll .text:0x293d4, 0x18b10 bytes
    // dxgi.dll .text:0x21e64, 0x17e70 bytes
    //
    _d9(sdk::unknown_ptr) resize_window;
    
    // [ScenarioEnterOrLeaveFullscreen@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x20994, 0x17e70 bytes
    // dxgi.dll .text:0x20c74, 0x17e70 bytes
    // dxgi.dll .text:0x28ed0, 0x18b10 bytes
    // dxgi.dll .text:0x21914, 0x17e70 bytes
    //
    _e0(sdk::unknown_ptr) scenario_enter_or_leave_fullscreen;
    
    // [ScenarioResizeBuffers@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x206f4, 0x17e70 bytes
    // dxgi.dll .text:0x209d4, 0x17e70 bytes
    // dxgi.dll .text:0x28248, 0x18b10 bytes
    // dxgi.dll .text:0x21674, 0x17e70 bytes
    //
    _e1(sdk::unknown_ptr) scenario_resize_buffers;
    
    // [ScenarioResizeTarget@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6b490, 0x17e70 bytes
    // dxgi.dll .text:0x6b5a0, 0x17e70 bytes
    // dxgi.dll .text:0x7712c, 0x18b10 bytes
    // dxgi.dll .text:0x6c9d0, 0x17e70 bytes
    //
    _e2(sdk::unknown_ptr) scenario_resize_target;
    
    // [SendStatusTelemetry@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ff10, 0x17e70 bytes
    // dxgi.dll .text:0x201f0, 0x17e70 bytes
    // dxgi.dll .text:0x1eddc, 0x18b10 bytes
    // dxgi.dll .text:0x20aec, 0x17e70 bytes
    //
    _e3(sdk::unknown_ptr) send_status_telemetry;
    
    // [SetAlphaMode@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6bb80, 0x17e70 bytes
    // dxgi.dll .text:0x6bc90, 0x17e70 bytes
    // dxgi.dll .text:0x77810, 0x18b10 bytes
    // dxgi.dll .text:0x6d0c0, 0x17e70 bytes
    //
    _e4(sdk::unknown_ptr) set_alpha_mode;
    
    // [SetBackgroundColor@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6bba0, 0x17e70 bytes
    // dxgi.dll .text:0x6bcb0, 0x17e70 bytes
    // dxgi.dll .text:0x77830, 0x18b10 bytes
    // dxgi.dll .text:0x6d0e0, 0x17e70 bytes
    //
    _e5(sdk::unknown_ptr) set_background_color;
    
    // [SetBufferUsage@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1b6c0, 0x17e70 bytes
    // dxgi.dll .text:0x1b9d0, 0x17e70 bytes
    // dxgi.dll .text:0x19268, 0x18b10 bytes
    // dxgi.dll .text:0x16f50, 0x17e70 bytes
    //
    _e6(sdk::unknown_ptr) set_buffer_usage;
    
    // [SetColorSpace@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6bd00, 0x17e70 bytes
    // dxgi.dll .text:0x6be10, 0x17e70 bytes
    // dxgi.dll .text:0x779a0, 0x18b10 bytes
    // dxgi.dll .text:0x6d240, 0x17e70 bytes
    //
    _e7(sdk::unknown_ptr) set_color_space;
    
    // [SetColorSpace1@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x3e80, 0x17e70 bytes
    // dxgi.dll .text:0x3e80, 0x17e70 bytes
    // dxgi.dll .text:0x8540, 0x18b10 bytes
    // dxgi.dll .text:0x5d00, 0x17e70 bytes
    //
    _e8(sdk::unknown_ptr) set_color_space1;
    
    // [SetDecodeBuffer@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6be64, 0x17e70 bytes
    // dxgi.dll .text:0x6bf74, 0x17e70 bytes
    // dxgi.dll .text:0x77ae4, 0x18b10 bytes
    // dxgi.dll .text:0x6d3a4, 0x17e70 bytes
    //
    _e9(sdk::unknown_ptr) set_decode_buffer;
    
    // [SetDestSize@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6bf50, 0x17e70 bytes
    // dxgi.dll .text:0x6c060, 0x17e70 bytes
    // dxgi.dll .text:0x77bd0, 0x18b10 bytes
    // dxgi.dll .text:0x6d490, 0x17e70 bytes
    //
    _f0(sdk::unknown_ptr) set_dest_size;
    
    // [SetFrontBufferRenderingMode@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ea90, 0x17e70 bytes
    // dxgi.dll .text:0x1eda0, 0x17e70 bytes
    // dxgi.dll .text:0x268f0, 0x18b10 bytes
    // dxgi.dll .text:0x1fb90, 0x17e70 bytes
    //
    _f1(sdk::unknown_ptr) set_front_buffer_rendering_mode;
    
    // [SetFullscreenState@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x221d0, 0x17e70 bytes
    // dxgi.dll .text:0x224b0, 0x17e70 bytes
    // dxgi.dll .text:0x286d0, 0x18b10 bytes
    // dxgi.dll .text:0x23150, 0x17e70 bytes
    //
    _f2(sdk::unknown_ptr) set_fullscreen_state;
    
    // [SetHardwareProtection@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6f190, 0x17e70 bytes
    // dxgi.dll .text:0x6f2a0, 0x17e70 bytes
    // dxgi.dll .text:0x7a940, 0x18b10 bytes
    // dxgi.dll .text:0x706d0, 0x17e70 bytes
    //
    _f3(sdk::unknown_ptr) set_hardware_protection;
    
    // [SetHDRMetaData@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x3fb0, 0x17e70 bytes
    // dxgi.dll .text:0x3fb0, 0x17e70 bytes
    // dxgi.dll .text:0x8950, 0x18b10 bytes
    // dxgi.dll .text:0x5e30, 0x17e70 bytes
    //
    _f4(sdk::unknown_ptr) set_hdr_meta_data;
    
    // [SetHybridCrossAdapterFlip@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1d314, 0x17e70 bytes
    // dxgi.dll .text:0x1d624, 0x17e70 bytes
    // dxgi.dll .text:0x77c94, 0x18b10 bytes
    // dxgi.dll .text:0x18ba4, 0x17e70 bytes
    //
    _f5(sdk::unknown_ptr) set_hybrid_cross_adapter_flip;
    
    // [SetLatencyHint@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6f2a0, 0x17e70 bytes
    // dxgi.dll .text:0x6f3b0, 0x17e70 bytes
    // dxgi.dll .text:0x7aa70, 0x18b10 bytes
    // dxgi.dll .text:0x707e0, 0x17e70 bytes
    //
    _f6(sdk::unknown_ptr) set_latency_hint;
    
    // [SetMatrixTransform@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x3450, 0x17e70 bytes
    // dxgi.dll .text:0x3450, 0x17e70 bytes
    // dxgi.dll .text:0x80b0, 0x18b10 bytes
    // dxgi.dll .text:0x52d0, 0x17e70 bytes
    //
    _f7(sdk::unknown_ptr) set_matrix_transform;
    
    // [SetMaximumFrameLatency@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2a80, 0x17e70 bytes
    // dxgi.dll .text:0x2a80, 0x17e70 bytes
    // dxgi.dll .text:0x7390, 0x18b10 bytes
    // dxgi.dll .text:0x4900, 0x17e70 bytes
    //
    _f8(sdk::unknown_ptr) set_maximum_frame_latency;
    
    // [SetPresentDuration@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6c040, 0x17e70 bytes
    // dxgi.dll .text:0x6c150, 0x17e70 bytes
    // dxgi.dll .text:0x77d60, 0x18b10 bytes
    // dxgi.dll .text:0x6d580, 0x17e70 bytes
    //
    _f9(sdk::unknown_ptr) set_present_duration;
    
    // [SetPreviousBackBufferInitialized@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6c0a0, 0x17e70 bytes
    // dxgi.dll .text:0x6c1b0, 0x17e70 bytes
    // dxgi.dll .text:0x77db4, 0x18b10 bytes
    // dxgi.dll .text:0x6d5e0, 0x17e70 bytes
    //
    _g0(sdk::unknown_ptr) set_previous_back_buffer_initialized;
    
    // [SetPrivateData@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x28560, 0x17e70 bytes
    // dxgi.dll .text:0x28870, 0x17e70 bytes
    // dxgi.dll .text:0x303d0, 0x18b10 bytes
    // dxgi.dll .text:0x29cf0, 0x17e70 bytes
    //
    _g1(sdk::unknown_ptr) set_private_data;
    
    // [SetPrivateDataInterface@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x62940, 0x17e70 bytes
    // dxgi.dll .text:0x62a30, 0x17e70 bytes
    // dxgi.dll .text:0x6e530, 0x18b10 bytes
    // dxgi.dll .text:0x63e60, 0x17e70 bytes
    //
    _g2(sdk::unknown_ptr) set_private_data_interface;
    
    // [SetPrivateFrameDuration@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ee60, 0x17e70 bytes
    // dxgi.dll .text:0x1f170, 0x17e70 bytes
    // dxgi.dll .text:0x26ac0, 0x18b10 bytes
    // dxgi.dll .text:0x1ff60, 0x17e70 bytes
    //
    _g3(sdk::unknown_ptr) set_private_frame_duration;
    
    // [SetRotation@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x3800, 0x17e70 bytes
    // dxgi.dll .text:0x3800, 0x17e70 bytes
    // dxgi.dll .text:0x84a0, 0x18b10 bytes
    // dxgi.dll .text:0x5680, 0x17e70 bytes
    //
    _g4(sdk::unknown_ptr) set_rotation;
    
    // [SetSourceRect@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6c140, 0x17e70 bytes
    // dxgi.dll .text:0x6c250, 0x17e70 bytes
    // dxgi.dll .text:0x77e50, 0x18b10 bytes
    // dxgi.dll .text:0x6d680, 0x17e70 bytes
    //
    _g5(sdk::unknown_ptr) set_source_rect;
    
    // [SetSourceSize@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x3640, 0x17e70 bytes
    // dxgi.dll .text:0x3640, 0x17e70 bytes
    // dxgi.dll .text:0x82d0, 0x18b10 bytes
    // dxgi.dll .text:0x54c0, 0x17e70 bytes
    //
    _g6(sdk::unknown_ptr) set_source_size;
    
    // [SetTargetRect@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6c240, 0x17e70 bytes
    // dxgi.dll .text:0x6c350, 0x17e70 bytes
    // dxgi.dll .text:0x77f30, 0x18b10 bytes
    // dxgi.dll .text:0x6d780, 0x17e70 bytes
    //
    _g7(sdk::unknown_ptr) set_target_rect;
    
    // [SetupIndirectSwapChain@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6c340, 0x17e70 bytes
    // dxgi.dll .text:0x6c450, 0x17e70 bytes
    // dxgi.dll .text:0x7800c, 0x18b10 bytes
    // dxgi.dll .text:0x6d880, 0x17e70 bytes
    //
    _g8(sdk::unknown_ptr) setup_indirect_swap_chain;
    
    // [ShouldTerminateOnIndirectStall@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6c74c, 0x17e70 bytes
    // dxgi.dll .text:0x6c85c, 0x17e70 bytes
    // dxgi.dll .text:0x78430, 0x18b10 bytes
    // dxgi.dll .text:0x6dc8c, 0x17e70 bytes
    //
    _g9(sdk::unknown_ptr) should_terminate_on_indirect_stall;
    
    // [SwapBuffers@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6f370, 0x17e70 bytes
    // dxgi.dll .text:0x6f480, 0x17e70 bytes
    // dxgi.dll .text:0x7ab60, 0x18b10 bytes
    // dxgi.dll .text:0x708b0, 0x17e70 bytes
    //
    _h0(sdk::unknown_ptr) swap_buffers;
    
    // [SynchronizeCurrentDisplayProperties@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6cc54, 0x17e70 bytes
    // dxgi.dll .text:0x6cd64, 0x17e70 bytes
    // dxgi.dll .text:0x35ff4, 0x18b10 bytes
    // dxgi.dll .text:0x6e194, 0x17e70 bytes
    //
    _h1(sdk::unknown_ptr) synchronize_current_display_properties;
    
    // [TransformDirtyRegions@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6cdb4, 0x17e70 bytes
    // dxgi.dll .text:0x6cec4, 0x17e70 bytes
    // dxgi.dll .text:0x787f4, 0x18b10 bytes
    // dxgi.dll .text:0x6e2f4, 0x17e70 bytes
    //
    _h2(sdk::unknown_ptr) transform_dirty_regions;
    
    // [TransitionBackBuffer0ForProtection@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6cf0c, 0x17e70 bytes
    // dxgi.dll .text:0x6d01c, 0x17e70 bytes
    // dxgi.dll .text:0x7894c, 0x18b10 bytes
    // dxgi.dll .text:0x6e44c, 0x17e70 bytes
    //
    _h3(sdk::unknown_ptr) transition_back_buffer0_for_protection;
    
    // [UCBreakCyclicReferences@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1f450, 0x17e70 bytes
    // dxgi.dll .text:0x1f730, 0x17e70 bytes
    // dxgi.dll .text:0x25b90, 0x18b10 bytes
    // dxgi.dll .text:0x210b0, 0x17e70 bytes
    //
    _h4(sdk::unknown_ptr) uc_break_cyclic_references;
    
    // [UCEstablishCyclicReferences@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6d0c0, 0x17e70 bytes
    // dxgi.dll .text:0x6d1d0, 0x17e70 bytes
    // dxgi.dll .text:0x78b30, 0x18b10 bytes
    // dxgi.dll .text:0x6e600, 0x17e70 bytes
    //
    _h5(sdk::unknown_ptr) uc_establish_cyclic_references;
    
    // [UCQueryInterface@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6d100, 0x17e70 bytes
    // dxgi.dll .text:0x6d210, 0x17e70 bytes
    // dxgi.dll .text:0x78b90, 0x18b10 bytes
    // dxgi.dll .text:0x6e640, 0x17e70 bytes
    //
    _h6(sdk::unknown_ptr) uc_query_interface;
    
    // [UnbindFromDwm@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x20934, 0x17e70 bytes
    // dxgi.dll .text:0x20c14, 0x17e70 bytes
    // dxgi.dll .text:0x1f8c8, 0x18b10 bytes
    // dxgi.dll .text:0x218b4, 0x17e70 bytes
    //
    _h7(sdk::unknown_ptr) unbind_from_dwm;
    
    // [UpdateDirectScanoutEligibilityInfo@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6d248, 0x17e70 bytes
    // dxgi.dll .text:0x6d358, 0x17e70 bytes
    // dxgi.dll .text:0x78d00, 0x18b10 bytes
    // dxgi.dll .text:0x6e788, 0x17e70 bytes
    //
    _h8(sdk::unknown_ptr) update_direct_scanout_eligibility_info;
    
    // [UpdateEmulatedFrameStatistics@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6d560, 0x17e70 bytes
    // dxgi.dll .text:0x6d670, 0x17e70 bytes
    // dxgi.dll .text:0x79018, 0x18b10 bytes
    // dxgi.dll .text:0x6eaa0, 0x17e70 bytes
    //
    _h9(sdk::unknown_ptr) update_emulated_frame_statistics;
    
    // [UpdatePrintScreenHandling@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6d6e8, 0x17e70 bytes
    // dxgi.dll .text:0x6d7f8, 0x17e70 bytes
    // dxgi.dll .text:0x791a0, 0x18b10 bytes
    // dxgi.dll .text:0x6ec28, 0x17e70 bytes
    //
    _i0(sdk::unknown_ptr) update_print_screen_handling;
    
    // [UseProxyFlipCore@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1cfa0, 0x17e70 bytes
    // dxgi.dll .text:0x1d2b0, 0x17e70 bytes
    // dxgi.dll .text:0x190f0, 0x18b10 bytes
    // dxgi.dll .text:0x18830, 0x17e70 bytes
    //
    _i1(sdk::unknown_ptr) use_proxy_flip_core;
    
    // [ValidatePresent@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x14b60, 0x17e70 bytes
    // dxgi.dll .text:0x14dc0, 0x17e70 bytes
    // dxgi.dll .text:0xf450, 0x18b10 bytes
    // dxgi.dll .text:0x102d0, 0x17e70 bytes
    //
    _i2(sdk::unknown_ptr) validate_present;
    
    // [ValidateResizeBuffers@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x21f34, 0x17e70 bytes
    // dxgi.dll .text:0x22214, 0x17e70 bytes
    // dxgi.dll .text:0x289ec, 0x18b10 bytes
    // dxgi.dll .text:0x22eb4, 0x17e70 bytes
    //
    _i3(sdk::unknown_ptr) validate_resize_buffers;
};
#include "magic/api.end.hpp"
