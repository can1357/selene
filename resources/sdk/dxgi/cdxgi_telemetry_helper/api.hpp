#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cdxgi_telemetry_helper
{
    // [LogDeviceRemovalSupportStatus@CDXGITelemetryHelper]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x1e080, 0x18b10 bytes
    //
    _m0(sdk::unknown_ptr) log_device_removal_support_status;
    
    // [LogHybridScanOutInfo@CDXGITelemetryHelper]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x80308, 0x18b10 bytes
    //
    _m1(sdk::unknown_ptr) log_hybrid_scan_out_info;
    
    // [LogSetFullscreenState@CDXGITelemetryHelper]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x28c50, 0x18b10 bytes
    //
    _m2(sdk::unknown_ptr) log_set_fullscreen_state;
    
    // [LogSwapChainStatus@CDXGITelemetryHelper]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x1eccc, 0x18b10 bytes
    //
    _m3(sdk::unknown_ptr) log_swap_chain_status;
    
    // [Register@CDXGITelemetryHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x754b0, 0x17e70 bytes
    // dxgi.dll .text:0x755c0, 0x17e70 bytes
    // dxgi.dll .text:0x80710, 0x18b10 bytes
    // dxgi.dll .text:0x769f0, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) _register;
    
    // [??0CDXGITelemetryHelper@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xa668, 0x17e70 bytes
    // dxgi.dll .text:0xa668, 0x17e70 bytes
    // dxgi.dll .text:0x24d18, 0x18b10 bytes
    // dxgi.dll .text:0x1ee78, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) construct_instance;
    
    // [LogCreateSwapChainDDAEvent@CDXGITelemetryHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x745e0, 0x17e70 bytes
    // dxgi.dll .text:0x746f0, 0x17e70 bytes
    // dxgi.dll .text:0x7f828, 0x18b10 bytes
    // dxgi.dll .text:0x75b20, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) log_create_swap_chain_dda_event;
    
    // [LogCreateSwapChainEvent@CDXGITelemetryHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x746dc, 0x17e70 bytes
    // dxgi.dll .text:0x747ec, 0x17e70 bytes
    // dxgi.dll .text:0x7f924, 0x18b10 bytes
    // dxgi.dll .text:0x75c1c, 0x17e70 bytes
    //
    _m7(sdk::unknown_ptr) log_create_swap_chain_event;
    
    // [LogCreateSwapChainEvent_Worker@CDXGITelemetryHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb664, 0x17e70 bytes
    // dxgi.dll .text:0xb694, 0x17e70 bytes
    // dxgi.dll .text:0x1c34c, 0x18b10 bytes
    // dxgi.dll .text:0x6874, 0x17e70 bytes
    //
    _m8(sdk::unknown_ptr) log_create_swap_chain_event_worker;
    
    // [LogCreateSwapChainForCompositionEvent@CDXGITelemetryHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x747d4, 0x17e70 bytes
    // dxgi.dll .text:0x748e4, 0x17e70 bytes
    // dxgi.dll .text:0x28d4, 0x18b10 bytes
    // dxgi.dll .text:0x75d14, 0x17e70 bytes
    //
    _m9(sdk::unknown_ptr) log_create_swap_chain_for_composition_event;
    
    // [LogCreateSwapChainForCompositionSurfaceHandleEvent@CDXGITelemetryHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x31e8, 0x17e70 bytes
    // dxgi.dll .text:0x31e8, 0x17e70 bytes
    // dxgi.dll .text:0x2c18, 0x18b10 bytes
    // dxgi.dll .text:0x5068, 0x17e70 bytes
    //
    _n0(sdk::unknown_ptr) log_create_swap_chain_for_composition_surface_handle_event;
    
    // [LogCreateSwapChainForCoreWindowEvent@CDXGITelemetryHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x748d0, 0x17e70 bytes
    // dxgi.dll .text:0x749e0, 0x17e70 bytes
    // dxgi.dll .text:0x7fa1c, 0x18b10 bytes
    // dxgi.dll .text:0x75e10, 0x17e70 bytes
    //
    _n1(sdk::unknown_ptr) log_create_swap_chain_for_core_window_event;
    
    // [LogCreateSwapChainForHwndEvent@CDXGITelemetryHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x749d8, 0x17e70 bytes
    // dxgi.dll .text:0x74ae8, 0x17e70 bytes
    // dxgi.dll .text:0x7fb24, 0x18b10 bytes
    // dxgi.dll .text:0x75f18, 0x17e70 bytes
    //
    _n2(sdk::unknown_ptr) log_create_swap_chain_for_hwnd_event;
    
    // [LogDXGI2FactoryCreateAttempt@CDXGITelemetryHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x74ad8, 0x17e70 bytes
    // dxgi.dll .text:0x74be8, 0x17e70 bytes
    // dxgi.dll .text:0x7fc24, 0x18b10 bytes
    // dxgi.dll .text:0x76018, 0x17e70 bytes
    //
    _n3(sdk::unknown_ptr) log_dxgi2_factory_create_attempt;
    
    // [LogFullscreenPresentInfo@CDXGITelemetryHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x74d68, 0x17e70 bytes
    // dxgi.dll .text:0x74e78, 0x17e70 bytes
    // dxgi.dll .text:0x7fe9c, 0x18b10 bytes
    // dxgi.dll .text:0x762a8, 0x17e70 bytes
    //
    _n4(sdk::unknown_ptr) log_fullscreen_present_info;
    
    // [LogGpuPreferenceInfo@CDXGITelemetryHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xde88, 0x17e70 bytes
    // dxgi.dll .text:0xdeb8, 0x17e70 bytes
    // dxgi.dll .text:0x16208, 0x18b10 bytes
    // dxgi.dll .text:0x9368, 0x17e70 bytes
    //
    _n5(sdk::unknown_ptr) log_gpu_preference_info;
    
    // [LogHighDpiCompatShimEvent_Worker@CDXGITelemetryHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7519c, 0x17e70 bytes
    // dxgi.dll .text:0x752ac, 0x17e70 bytes
    // dxgi.dll .text:0x80224, 0x18b10 bytes
    // dxgi.dll .text:0x766dc, 0x17e70 bytes
    //
    _n6(sdk::unknown_ptr) log_high_dpi_compat_shim_event_worker;
    
    // [LogMultiSwapChainPresentEvent@CDXGITelemetryHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x75280, 0x17e70 bytes
    // dxgi.dll .text:0x75390, 0x17e70 bytes
    // dxgi.dll .text:0x80460, 0x18b10 bytes
    // dxgi.dll .text:0x767c0, 0x17e70 bytes
    //
    _n7(sdk::unknown_ptr) log_multi_swap_chain_present_event;
    
    // [LogResizeBuffers@CDXGITelemetryHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x20684, 0x17e70 bytes
    // dxgi.dll .text:0x20964, 0x17e70 bytes
    // dxgi.dll .text:0x27e24, 0x18b10 bytes
    // dxgi.dll .text:0x21604, 0x17e70 bytes
    //
    _n8(sdk::unknown_ptr) log_resize_buffers;
    
    // [LogSetColorSpace1ChangeEvent@CDXGITelemetryHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x75300, 0x17e70 bytes
    // dxgi.dll .text:0x75410, 0x17e70 bytes
    // dxgi.dll .text:0x804e0, 0x18b10 bytes
    // dxgi.dll .text:0x76840, 0x17e70 bytes
    //
    _n9(sdk::unknown_ptr) log_set_color_space1_change_event;
    
    // [LogSetMaximumFrameLatency@CDXGITelemetryHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2bf8, 0x17e70 bytes
    // dxgi.dll .text:0x2bf8, 0x17e70 bytes
    // dxgi.dll .text:0x7508, 0x18b10 bytes
    // dxgi.dll .text:0x4a78, 0x17e70 bytes
    //
    _o0(sdk::unknown_ptr) log_set_maximum_frame_latency;
    
    // [LogTakeOwnershipCall@CDXGITelemetryHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7542c, 0x17e70 bytes
    // dxgi.dll .text:0x7553c, 0x17e70 bytes
    // dxgi.dll .text:0x8068c, 0x18b10 bytes
    // dxgi.dll .text:0x7696c, 0x17e70 bytes
    //
    _o1(sdk::unknown_ptr) log_take_ownership_call;
};
#include "magic/api.end.hpp"
