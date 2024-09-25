#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cdxgi_swap_chain_dwm_legacy
{
    // [CheckDirectFlipSupport@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x38a0, 0x17e70 bytes
    // dxgi.dll .text:0x38a0, 0x17e70 bytes
    // dxgi.dll .text:0x8a90, 0x18b10 bytes
    // dxgi.dll .text:0x5720, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) check_direct_flip_support;
    
    // [CheckDwmVidPnOwnership@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1f320, 0x17e70 bytes
    // dxgi.dll .text:0x1f630, 0x17e70 bytes
    // dxgi.dll .text:0x272f0, 0x18b10 bytes
    // dxgi.dll .text:0x20fb0, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) check_dwm_vid_pn_ownership;
    
    // [CheckMultiplaneOverlaySupport@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6ebc0, 0x17e70 bytes
    // dxgi.dll .text:0x6ecd0, 0x17e70 bytes
    // dxgi.dll .text:0x7e80, 0x18b10 bytes
    // dxgi.dll .text:0x70100, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) check_multiplane_overlay_support;
    
    // [CheckPresentDurationSupport@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6ec00, 0x17e70 bytes
    // dxgi.dll .text:0x6ed10, 0x17e70 bytes
    // dxgi.dll .text:0x7a6d0, 0x18b10 bytes
    // dxgi.dll .text:0x70140, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) check_present_duration_support;
    
    // [GetBackBufferImplicitRotationCount@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x70d0, 0x17e70 bytes
    // dxgi.dll .text:0x70d0, 0x17e70 bytes
    // dxgi.dll .text:0x22aa0, 0x18b10 bytes
    // dxgi.dll .text:0x1bc80, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) get_back_buffer_implicit_rotation_count;
    
    // [GetBuffer@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x23f10, 0x17e70 bytes
    // dxgi.dll .text:0x24210, 0x17e70 bytes
    // dxgi.dll .text:0x2b390, 0x18b10 bytes
    // dxgi.dll .text:0x25010, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) get_buffer;
    
    // [GetCompositionSurface@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6ec60, 0x17e70 bytes
    // dxgi.dll .text:0x6ed70, 0x17e70 bytes
    // dxgi.dll .text:0x7a740, 0x18b10 bytes
    // dxgi.dll .text:0x701a0, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) get_composition_surface;
    
    // [GetContainingOutput@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6ec80, 0x17e70 bytes
    // dxgi.dll .text:0x6ed90, 0x17e70 bytes
    // dxgi.dll .text:0x7a770, 0x18b10 bytes
    // dxgi.dll .text:0x701c0, 0x17e70 bytes
    //
    _m7(sdk::unknown_ptr) get_containing_output;
    
    // [GetCurrentBackBufferIndex@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ec40, 0x17e70 bytes
    // dxgi.dll .text:0x1ef50, 0x17e70 bytes
    // dxgi.dll .text:0x26ab0, 0x18b10 bytes
    // dxgi.dll .text:0x1fd40, 0x17e70 bytes
    //
    _m8(sdk::unknown_ptr) get_current_back_buffer_index;
    
    // [GetDesc@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24020, 0x17e70 bytes
    // dxgi.dll .text:0x24320, 0x17e70 bytes
    // dxgi.dll .text:0x2b4b0, 0x18b10 bytes
    // dxgi.dll .text:0x25140, 0x17e70 bytes
    //
    _m9(sdk::unknown_ptr) get_desc;
    
    // [GetDevice@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6eca0, 0x17e70 bytes
    // dxgi.dll .text:0x6edb0, 0x17e70 bytes
    // dxgi.dll .text:0x7a7a0, 0x18b10 bytes
    // dxgi.dll .text:0x701e0, 0x17e70 bytes
    //
    _n0(sdk::unknown_ptr) get_device;
    
    // [GetFrameStatistics@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7480, 0x17e70 bytes
    // dxgi.dll .text:0x7480, 0x17e70 bytes
    // dxgi.dll .text:0x7a7d0, 0x18b10 bytes
    // dxgi.dll .text:0x1c030, 0x17e70 bytes
    //
    _n1(sdk::unknown_ptr) get_frame_statistics;
    
    // [GetFrameStatisticsDWM@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5e70, 0x17e70 bytes
    // dxgi.dll .text:0x5e70, 0x17e70 bytes
    // dxgi.dll .text:0x22020, 0x18b10 bytes
    // dxgi.dll .text:0x1aa20, 0x17e70 bytes
    //
    _n2(sdk::unknown_ptr) get_frame_statistics_dwm;
    
    // [GetFrontBufferRenderingCapability@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6ed50, 0x17e70 bytes
    // dxgi.dll .text:0x6ee60, 0x17e70 bytes
    // dxgi.dll .text:0x2b480, 0x18b10 bytes
    // dxgi.dll .text:0x70290, 0x17e70 bytes
    //
    _n3(sdk::unknown_ptr) get_front_buffer_rendering_capability;
    
    // [GetHardwareProtection@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24000, 0x17e70 bytes
    // dxgi.dll .text:0x24300, 0x17e70 bytes
    // dxgi.dll .text:0x258e0, 0x18b10 bytes
    // dxgi.dll .text:0x25120, 0x17e70 bytes
    //
    _n4(sdk::unknown_ptr) get_hardware_protection;
    
    // [GetLastPresentCount@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7010, 0x17e70 bytes
    // dxgi.dll .text:0x7010, 0x17e70 bytes
    // dxgi.dll .text:0x227a0, 0x18b10 bytes
    // dxgi.dll .text:0x1bbc0, 0x17e70 bytes
    //
    _n5(sdk::unknown_ptr) get_last_present_count;
    
    // [GetLogicalSurfaceHandle@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6ee10, 0x17e70 bytes
    // dxgi.dll .text:0x6ef20, 0x17e70 bytes
    // dxgi.dll .text:0x7a800, 0x18b10 bytes
    // dxgi.dll .text:0x70350, 0x17e70 bytes
    //
    _n6(sdk::unknown_ptr) get_logical_surface_handle;
    
    // [GetMultiplaneOverlayCaps@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xad10, 0x17e70 bytes
    // dxgi.dll .text:0xad40, 0x17e70 bytes
    // dxgi.dll .text:0x254c0, 0x18b10 bytes
    // dxgi.dll .text:0x1f550, 0x17e70 bytes
    //
    _n7(sdk::unknown_ptr) get_multiplane_overlay_caps;
    
    // [GetParent@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6ee30, 0x17e70 bytes
    // dxgi.dll .text:0x6ef40, 0x17e70 bytes
    // dxgi.dll .text:0x7a830, 0x18b10 bytes
    // dxgi.dll .text:0x70370, 0x17e70 bytes
    //
    _n8(sdk::unknown_ptr) get_parent;
    
    // [GetPrivateData@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6ee50, 0x17e70 bytes
    // dxgi.dll .text:0x6ef60, 0x17e70 bytes
    // dxgi.dll .text:0x7a860, 0x18b10 bytes
    // dxgi.dll .text:0x70390, 0x17e70 bytes
    //
    _n9(sdk::unknown_ptr) get_private_data;
    
    // [Present@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6ee80, 0x17e70 bytes
    // dxgi.dll .text:0x6ef90, 0x17e70 bytes
    // dxgi.dll .text:0x7a890, 0x18b10 bytes
    // dxgi.dll .text:0x703c0, 0x17e70 bytes
    //
    _o0(sdk::unknown_ptr) present;
    
    // [PresentDWM@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5cd0, 0x17e70 bytes
    // dxgi.dll .text:0x5cd0, 0x17e70 bytes
    // dxgi.dll .text:0x21f60, 0x18b10 bytes
    // dxgi.dll .text:0x1a880, 0x17e70 bytes
    //
    _o1(sdk::unknown_ptr) present_dwm;
    
    // [PresentMultiplaneOverlay@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6f120, 0x17e70 bytes
    // dxgi.dll .text:0x6f230, 0x17e70 bytes
    // dxgi.dll .text:0xcf10, 0x18b10 bytes
    // dxgi.dll .text:0x70660, 0x17e70 bytes
    //
    _o2(sdk::unknown_ptr) present_multiplane_overlay;
    
    // [ResizeBuffers@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6f140, 0x17e70 bytes
    // dxgi.dll .text:0x6f250, 0x17e70 bytes
    // dxgi.dll .text:0x7a8c0, 0x18b10 bytes
    // dxgi.dll .text:0x70680, 0x17e70 bytes
    //
    _o3(sdk::unknown_ptr) resize_buffers;
    
    // [ResizeTarget@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6f150, 0x17e70 bytes
    // dxgi.dll .text:0x6f260, 0x17e70 bytes
    // dxgi.dll .text:0x7a8e0, 0x18b10 bytes
    // dxgi.dll .text:0x70690, 0x17e70 bytes
    //
    _o4(sdk::unknown_ptr) resize_target;
    
    // [SetFrontBufferRenderingMode@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6f170, 0x17e70 bytes
    // dxgi.dll .text:0x6f280, 0x17e70 bytes
    // dxgi.dll .text:0x7a910, 0x18b10 bytes
    // dxgi.dll .text:0x706b0, 0x17e70 bytes
    //
    _o5(sdk::unknown_ptr) set_front_buffer_rendering_mode;
    
    // [SetHardwareProtection@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6f280, 0x17e70 bytes
    // dxgi.dll .text:0x6f390, 0x17e70 bytes
    // dxgi.dll .text:0x7aa40, 0x18b10 bytes
    // dxgi.dll .text:0x707c0, 0x17e70 bytes
    //
    _o6(sdk::unknown_ptr) set_hardware_protection;
    
    // [SetLatencyHint@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6f2c0, 0x17e70 bytes
    // dxgi.dll .text:0x6f3d0, 0x17e70 bytes
    // dxgi.dll .text:0x7aa90, 0x18b10 bytes
    // dxgi.dll .text:0x70800, 0x17e70 bytes
    //
    _o7(sdk::unknown_ptr) set_latency_hint;
    
    // [SetPrivateData@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6f2e0, 0x17e70 bytes
    // dxgi.dll .text:0x6f3f0, 0x17e70 bytes
    // dxgi.dll .text:0x7aac0, 0x18b10 bytes
    // dxgi.dll .text:0x70820, 0x17e70 bytes
    //
    _o8(sdk::unknown_ptr) set_private_data;
    
    // [SetPrivateDataInterface@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6f310, 0x17e70 bytes
    // dxgi.dll .text:0x6f420, 0x17e70 bytes
    // dxgi.dll .text:0x7aaf0, 0x18b10 bytes
    // dxgi.dll .text:0x70850, 0x17e70 bytes
    //
    _o9(sdk::unknown_ptr) set_private_data_interface;
    
    // [SetPrivateFrameDuration@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6f350, 0x17e70 bytes
    // dxgi.dll .text:0x6f460, 0x17e70 bytes
    // dxgi.dll .text:0x7ab30, 0x18b10 bytes
    // dxgi.dll .text:0x70890, 0x17e70 bytes
    //
    _p0(sdk::unknown_ptr) set_private_frame_duration;
    
    // [SwapBuffers@CDXGISwapChainDWMLegacy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6f460, 0x17e70 bytes
    // dxgi.dll .text:0x6f570, 0x17e70 bytes
    // dxgi.dll .text:0x7ac60, 0x18b10 bytes
    // dxgi.dll .text:0x709a0, 0x17e70 bytes
    //
    _p1(sdk::unknown_ptr) swap_buffers;
};
#include "magic/api.end.hpp"
