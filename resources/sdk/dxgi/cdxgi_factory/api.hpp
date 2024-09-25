#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cdxgi_factory
{
    // [ApplicationPresentationMode@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5e300, 0x17e70 bytes
    // dxgi.dll .text:0x5e3f0, 0x17e70 bytes
    // dxgi.dll .text:0x69f70, 0x18b10 bytes
    // dxgi.dll .text:0x5f820, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) application_presentation_mode;
    
    // [ApplicationPresentationModeImpl@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5e3c8, 0x17e70 bytes
    // dxgi.dll .text:0x5e4b8, 0x17e70 bytes
    // dxgi.dll .text:0x6a050, 0x18b10 bytes
    // dxgi.dll .text:0x5f8e8, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) application_presentation_mode_impl;
    
    // [CheckFeatureSupport@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5e540, 0x17e70 bytes
    // dxgi.dll .text:0x5e630, 0x17e70 bytes
    // dxgi.dll .text:0x82a0, 0x18b10 bytes
    // dxgi.dll .text:0x5fa60, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) check_feature_support;
    
    // [CheckOcclusion@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x27b5c, 0x17e70 bytes
    // dxgi.dll .text:0x27e6c, 0x17e70 bytes
    // dxgi.dll .text:0x2f394, 0x18b10 bytes
    // dxgi.dll .text:0x292ec, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) check_occlusion;
    
    // [ClearAdapters@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xdf70, 0x17e70 bytes
    // dxgi.dll .text:0xdfa0, 0x17e70 bytes
    // dxgi.dll .text:0x16120, 0x18b10 bytes
    // dxgi.dll .text:0x9450, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) clear_adapters;
    
    // [CloseAdapters@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5e57c, 0x17e70 bytes
    // dxgi.dll .text:0x5e66c, 0x17e70 bytes
    // dxgi.dll .text:0x6a1c0, 0x18b10 bytes
    // dxgi.dll .text:0x5fa9c, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) close_adapters;
    
    // [??0CDXGIFactory@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xfe90, 0x17e70 bytes
    // dxgi.dll .text:0xfec0, 0x17e70 bytes
    // dxgi.dll .text:0x15210, 0x18b10 bytes
    // dxgi.dll .text:0xb370, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) construct_instance;
    
    // [CreateDecodeSwapChainForCompositionSurfaceHandle@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5e5f0, 0x17e70 bytes
    // dxgi.dll .text:0x5e6e0, 0x17e70 bytes
    // dxgi.dll .text:0x6a240, 0x18b10 bytes
    // dxgi.dll .text:0x5fb10, 0x17e70 bytes
    //
    _m7(sdk::unknown_ptr) create_decode_swap_chain_for_composition_surface_handle;
    
    // [CreateExclusiveWindowlessSwapChain@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5e7b0, 0x17e70 bytes
    // dxgi.dll .text:0x5e8a0, 0x17e70 bytes
    // dxgi.dll .text:0x6a400, 0x18b10 bytes
    // dxgi.dll .text:0x5fcd0, 0x17e70 bytes
    //
    _m8(sdk::unknown_ptr) create_exclusive_windowless_swap_chain;
    
    // [CreateIndirectSwapChain@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5e8f0, 0x17e70 bytes
    // dxgi.dll .text:0x5e9e0, 0x17e70 bytes
    // dxgi.dll .text:0x6a530, 0x18b10 bytes
    // dxgi.dll .text:0x5fe10, 0x17e70 bytes
    //
    _m9(sdk::unknown_ptr) create_indirect_swap_chain;
    
    // [CreateIndirectSwapChainImpl@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5e9dc, 0x17e70 bytes
    // dxgi.dll .text:0x5eacc, 0x17e70 bytes
    // dxgi.dll .text:0x6a620, 0x18b10 bytes
    // dxgi.dll .text:0x5fefc, 0x17e70 bytes
    //
    _n0(sdk::unknown_ptr) create_indirect_swap_chain_impl;
    
    // [CreateOutputFromHandle@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5eb6c, 0x17e70 bytes
    // dxgi.dll .text:0x5ec5c, 0x17e70 bytes
    // dxgi.dll .text:0x6a7b0, 0x18b10 bytes
    // dxgi.dll .text:0x6008c, 0x17e70 bytes
    //
    _n1(sdk::unknown_ptr) create_output_from_handle;
    
    // [CreateSoftwareAdapter@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x9dd0, 0x17e70 bytes
    // dxgi.dll .text:0x9dd0, 0x17e70 bytes
    // dxgi.dll .text:0x241c0, 0x18b10 bytes
    // dxgi.dll .text:0x1e5e0, 0x17e70 bytes
    //
    _n2(sdk::unknown_ptr) create_software_adapter;
    
    // [CreateSwapChain@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5ee20, 0x17e70 bytes
    // dxgi.dll .text:0x5ef10, 0x17e70 bytes
    // dxgi.dll .text:0x6aa70, 0x18b10 bytes
    // dxgi.dll .text:0x60340, 0x17e70 bytes
    //
    _n3(sdk::unknown_ptr) create_swap_chain;
    
    // [CreateSwapChainDDA@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5efd0, 0x17e70 bytes
    // dxgi.dll .text:0x5f0c0, 0x17e70 bytes
    // dxgi.dll .text:0x6ac10, 0x18b10 bytes
    // dxgi.dll .text:0x604f0, 0x17e70 bytes
    //
    _n4(sdk::unknown_ptr) create_swap_chain_dda;
    
    // [CreateSwapChainDDAFromHandle@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5f130, 0x17e70 bytes
    // dxgi.dll .text:0x5f220, 0x17e70 bytes
    // dxgi.dll .text:0x6ad70, 0x18b10 bytes
    // dxgi.dll .text:0x60650, 0x17e70 bytes
    //
    _n5(sdk::unknown_ptr) create_swap_chain_dda_from_handle;
    
    // [CreateSwapChainDWM@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5f1c0, 0x17e70 bytes
    // dxgi.dll .text:0x5f2b0, 0x17e70 bytes
    // dxgi.dll .text:0x6ae00, 0x18b10 bytes
    // dxgi.dll .text:0x606e0, 0x17e70 bytes
    //
    _n6(sdk::unknown_ptr) create_swap_chain_dwm;
    
    // [CreateSwapChainDWMFromHandle@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5f300, 0x17e70 bytes
    // dxgi.dll .text:0x5f3f0, 0x17e70 bytes
    // dxgi.dll .text:0x6af30, 0x18b10 bytes
    // dxgi.dll .text:0x60820, 0x17e70 bytes
    //
    _n7(sdk::unknown_ptr) create_swap_chain_dwm_from_handle;
    
    // [CreateSwapChainDWMImpl@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x22b54, 0x17e70 bytes
    // dxgi.dll .text:0x22e34, 0x17e70 bytes
    // dxgi.dll .text:0x27320, 0x18b10 bytes
    // dxgi.dll .text:0x23ad4, 0x17e70 bytes
    //
    _n8(sdk::unknown_ptr) create_swap_chain_dwm_impl;
    
    // [CreateSwapChainForComposition@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5f3a0, 0x17e70 bytes
    // dxgi.dll .text:0x5f490, 0x17e70 bytes
    // dxgi.dll .text:0x2780, 0x18b10 bytes
    // dxgi.dll .text:0x608c0, 0x17e70 bytes
    //
    _n9(sdk::unknown_ptr) create_swap_chain_for_composition;
    
    // [CreateSwapChainForCompositionSurfaceHandle@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x3070, 0x17e70 bytes
    // dxgi.dll .text:0x3070, 0x17e70 bytes
    // dxgi.dll .text:0x2ab0, 0x18b10 bytes
    // dxgi.dll .text:0x4ef0, 0x17e70 bytes
    //
    _o0(sdk::unknown_ptr) create_swap_chain_for_composition_surface_handle;
    
    // [CreateSwapChainForCoreWindow@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5f530, 0x17e70 bytes
    // dxgi.dll .text:0x5f620, 0x17e70 bytes
    // dxgi.dll .text:0x6afc0, 0x18b10 bytes
    // dxgi.dll .text:0x60a50, 0x17e70 bytes
    //
    _o1(sdk::unknown_ptr) create_swap_chain_for_core_window;
    
    // [CreateSwapChainForHwnd@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5f700, 0x17e70 bytes
    // dxgi.dll .text:0x5f7f0, 0x17e70 bytes
    // dxgi.dll .text:0x6b190, 0x18b10 bytes
    // dxgi.dll .text:0x60c20, 0x17e70 bytes
    //
    _o2(sdk::unknown_ptr) create_swap_chain_for_hwnd;
    
    // [CreateSwapChainForHwndImpl@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5f86c, 0x17e70 bytes
    // dxgi.dll .text:0x5f95c, 0x17e70 bytes
    // dxgi.dll .text:0x6b2ec, 0x18b10 bytes
    // dxgi.dll .text:0x60d8c, 0x17e70 bytes
    //
    _o3(sdk::unknown_ptr) create_swap_chain_for_hwnd_impl;
    
    // [CreateSwapChainImpl@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1e3dc, 0x17e70 bytes
    // dxgi.dll .text:0x1e6ec, 0x17e70 bytes
    // dxgi.dll .text:0x1d1e4, 0x18b10 bytes
    // dxgi.dll .text:0x19ca8, 0x17e70 bytes
    //
    _o4(sdk::unknown_ptr) create_swap_chain_impl;
    
    // [CreateSwapChainValidate@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1e088, 0x17e70 bytes
    // dxgi.dll .text:0x1e398, 0x17e70 bytes
    // dxgi.dll .text:0x1bfe0, 0x18b10 bytes
    // dxgi.dll .text:0x61e4, 0x17e70 bytes
    //
    _o5(sdk::unknown_ptr) create_swap_chain_validate;
    
    // [CreateSwapPoolInternal@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ecd0, 0x17e70 bytes
    // dxgi.dll .text:0x1efe0, 0x17e70 bytes
    // dxgi.dll .text:0x26810, 0x18b10 bytes
    // dxgi.dll .text:0x1fdd0, 0x17e70 bytes
    //
    _o6(sdk::unknown_ptr) create_swap_pool_internal;
    
    // [??1CDXGIFactory@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xe340, 0x17e70 bytes
    // dxgi.dll .text:0xe370, 0x17e70 bytes
    // dxgi.dll .text:0x15aa0, 0x18b10 bytes
    // dxgi.dll .text:0x9820, 0x17e70 bytes
    //
    _o7(sdk::unknown_ptr) destroy_instance;
    
    // [DumpObject@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5fb50, 0x17e70 bytes
    // dxgi.dll .text:0x5fc40, 0x17e70 bytes
    // dxgi.dll .text:0x6b5b0, 0x18b10 bytes
    // dxgi.dll .text:0x61070, 0x17e70 bytes
    //
    _o8(sdk::unknown_ptr) dump_object;
    
    // [DumpProducer@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5feb0, 0x17e70 bytes
    // dxgi.dll .text:0x5ffa0, 0x17e70 bytes
    // dxgi.dll .text:0x6b9a0, 0x18b10 bytes
    // dxgi.dll .text:0x613d0, 0x17e70 bytes
    //
    _o9(sdk::unknown_ptr) dump_producer;
    
    // [EnumAdapterByGpuPreference@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x60170, 0x17e70 bytes
    // dxgi.dll .text:0x60260, 0x17e70 bytes
    // dxgi.dll .text:0x6bcc0, 0x18b10 bytes
    // dxgi.dll .text:0x61690, 0x17e70 bytes
    //
    _p0(sdk::unknown_ptr) enum_adapter_by_gpu_preference;
    
    // [EnumAdapterByLuid@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2c80, 0x17e70 bytes
    // dxgi.dll .text:0x2c80, 0x17e70 bytes
    // dxgi.dll .text:0x24520, 0x18b10 bytes
    // dxgi.dll .text:0x4b00, 0x17e70 bytes
    //
    _p1(sdk::unknown_ptr) enum_adapter_by_luid;
    
    // [EnumAdapterImpl@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x10480, 0x17e70 bytes
    // dxgi.dll .text:0x104b0, 0x17e70 bytes
    // dxgi.dll .text:0x129b0, 0x18b10 bytes
    // dxgi.dll .text:0xb960, 0x17e70 bytes
    //
    _p2(sdk::unknown_ptr) enum_adapter_impl;
    
    // [EnumAdapters@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xa1c0, 0x17e70 bytes
    // dxgi.dll .text:0xa1c0, 0x17e70 bytes
    // dxgi.dll .text:0x23620, 0x18b10 bytes
    // dxgi.dll .text:0x1e9d0, 0x17e70 bytes
    //
    _p3(sdk::unknown_ptr) enum_adapters;
    
    // [EnumAdapters1@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x10470, 0x17e70 bytes
    // dxgi.dll .text:0x104a0, 0x17e70 bytes
    // dxgi.dll .text:0x129a0, 0x18b10 bytes
    // dxgi.dll .text:0xb950, 0x17e70 bytes
    //
    _p4(sdk::unknown_ptr) enum_adapters1;
    
    // [EnumOutputByLuid@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x603d0, 0x17e70 bytes
    // dxgi.dll .text:0x604c0, 0x17e70 bytes
    // dxgi.dll .text:0x6bf30, 0x18b10 bytes
    // dxgi.dll .text:0x618f0, 0x17e70 bytes
    //
    _p5(sdk::unknown_ptr) enum_output_by_luid;
    
    // [EnumWarpAdapter@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x605b0, 0x17e70 bytes
    // dxgi.dll .text:0x606a0, 0x17e70 bytes
    // dxgi.dll .text:0x6c0f0, 0x18b10 bytes
    // dxgi.dll .text:0x61ad0, 0x17e70 bytes
    //
    _p6(sdk::unknown_ptr) enum_warp_adapter;
    
    // [ETWWrite@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x600b8, 0x17e70 bytes
    // dxgi.dll .text:0x601a8, 0x17e70 bytes
    // dxgi.dll .text:0x6bc00, 0x18b10 bytes
    // dxgi.dll .text:0x615d8, 0x17e70 bytes
    //
    _p7(sdk::unknown_ptr) etw_write;
    
    // [FinalConstruct@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xf1d4, 0x17e70 bytes
    // dxgi.dll .text:0xf204, 0x17e70 bytes
    // dxgi.dll .text:0x140e0, 0x18b10 bytes
    // dxgi.dll .text:0xa6b4, 0x17e70 bytes
    //
    _p8(sdk::unknown_ptr) final_construct;
    
    // [FinalRelease@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xe0b8, 0x17e70 bytes
    // dxgi.dll .text:0xe0e8, 0x17e70 bytes
    // dxgi.dll .text:0x15e30, 0x18b10 bytes
    // dxgi.dll .text:0x9598, 0x17e70 bytes
    //
    _p9(sdk::unknown_ptr) final_release;
    
    // [FindBasicRender@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x9f64, 0x17e70 bytes
    // dxgi.dll .text:0x9f64, 0x17e70 bytes
    // dxgi.dll .text:0x2434c, 0x18b10 bytes
    // dxgi.dll .text:0x1e774, 0x17e70 bytes
    //
    _q0(sdk::unknown_ptr) find_basic_render;
    
    // [GetAllFrontBuffers@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x60d88, 0x17e70 bytes
    // dxgi.dll .text:0x60e78, 0x17e70 bytes
    // dxgi.dll .text:0x6c8dc, 0x18b10 bytes
    // dxgi.dll .text:0x622a8, 0x17e70 bytes
    //
    _q1(sdk::unknown_ptr) get_all_front_buffers;
    
    // [GetCreationFlags@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ed00, 0x17e70 bytes
    // dxgi.dll .text:0x1f010, 0x17e70 bytes
    // dxgi.dll .text:0x26850, 0x18b10 bytes
    // dxgi.dll .text:0x1fe00, 0x17e70 bytes
    //
    _q2(sdk::unknown_ptr) get_creation_flags;
    
    // [GetDeviceAdapter@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb424, 0x17e70 bytes
    // dxgi.dll .text:0xb454, 0x17e70 bytes
    // dxgi.dll .text:0x1b820, 0x18b10 bytes
    // dxgi.dll .text:0x6634, 0x17e70 bytes
    //
    _q3(sdk::unknown_ptr) get_device_adapter;
    
    // [GetListOfNotPresentingFullscreenSwapChains@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x61068, 0x17e70 bytes
    // dxgi.dll .text:0x61158, 0x17e70 bytes
    // dxgi.dll .text:0x6cb94, 0x18b10 bytes
    // dxgi.dll .text:0x62588, 0x17e70 bytes
    //
    _q4(sdk::unknown_ptr) get_list_of_not_presenting_fullscreen_swap_chains;
    
    // [GetOutput@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x611c0, 0x17e70 bytes
    // dxgi.dll .text:0x612b0, 0x17e70 bytes
    // dxgi.dll .text:0x6cd04, 0x18b10 bytes
    // dxgi.dll .text:0x626e0, 0x17e70 bytes
    //
    _q5(sdk::unknown_ptr) get_output;
    
    // [GetOutputFromWindow@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x613dc, 0x17e70 bytes
    // dxgi.dll .text:0x614cc, 0x17e70 bytes
    // dxgi.dll .text:0x6cf44, 0x18b10 bytes
    // dxgi.dll .text:0x628fc, 0x17e70 bytes
    //
    _q6(sdk::unknown_ptr) get_output_from_window;
    
    // [GetParent@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ed20, 0x17e70 bytes
    // dxgi.dll .text:0x1f030, 0x17e70 bytes
    // dxgi.dll .text:0x26880, 0x18b10 bytes
    // dxgi.dll .text:0x1fe20, 0x17e70 bytes
    //
    _q7(sdk::unknown_ptr) get_parent;
    
    // [GetPrivateData@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x615c0, 0x17e70 bytes
    // dxgi.dll .text:0x616b0, 0x17e70 bytes
    // dxgi.dll .text:0x6d140, 0x18b10 bytes
    // dxgi.dll .text:0x62ae0, 0x17e70 bytes
    //
    _q8(sdk::unknown_ptr) get_private_data;
    
    // [GetSharedResourceAdapterLuid@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x615e0, 0x17e70 bytes
    // dxgi.dll .text:0x616d0, 0x17e70 bytes
    // dxgi.dll .text:0x6d160, 0x18b10 bytes
    // dxgi.dll .text:0x62b00, 0x17e70 bytes
    //
    _q9(sdk::unknown_ptr) get_shared_resource_adapter_luid;
    
    // [GetSummaryInfoQueueMessageID@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x61680, 0x17e70 bytes
    // dxgi.dll .text:0x61770, 0x17e70 bytes
    // dxgi.dll .text:0x6d210, 0x18b10 bytes
    // dxgi.dll .text:0x62ba0, 0x17e70 bytes
    //
    _r0(sdk::unknown_ptr) get_summary_info_queue_message_id;
    
    // [GetVidPnSourceId@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ed50, 0x17e70 bytes
    // dxgi.dll .text:0x1f060, 0x17e70 bytes
    // dxgi.dll .text:0x268c0, 0x18b10 bytes
    // dxgi.dll .text:0x1fe50, 0x17e70 bytes
    //
    _r1(sdk::unknown_ptr) get_vid_pn_source_id;
    
    // [GetWindowAssociation@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x61690, 0x17e70 bytes
    // dxgi.dll .text:0x61780, 0x17e70 bytes
    // dxgi.dll .text:0x6d230, 0x18b10 bytes
    // dxgi.dll .text:0x62bb0, 0x17e70 bytes
    //
    _r2(sdk::unknown_ptr) get_window_association;
    
    // [Initialize@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xef88, 0x17e70 bytes
    // dxgi.dll .text:0xefb8, 0x17e70 bytes
    // dxgi.dll .text:0x144dc, 0x18b10 bytes
    // dxgi.dll .text:0xa468, 0x17e70 bytes
    //
    _r3(sdk::unknown_ptr) initialize;
    
    // [InsertSwapChain@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1d6a4, 0x17e70 bytes
    // dxgi.dll .text:0x1d9b4, 0x17e70 bytes
    // dxgi.dll .text:0x1d4c4, 0x18b10 bytes
    // dxgi.dll .text:0x18f34, 0x17e70 bytes
    //
    _r4(sdk::unknown_ptr) insert_swap_chain;
    
    // [IsCurrent@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7030, 0x17e70 bytes
    // dxgi.dll .text:0x7030, 0x17e70 bytes
    // dxgi.dll .text:0x226f0, 0x18b10 bytes
    // dxgi.dll .text:0x1bbe0, 0x17e70 bytes
    //
    _r5(sdk::unknown_ptr) is_current;
    
    // [IsPowerSettingsForcingPowerSavingGpuPreference@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2806c, 0x17e70 bytes
    // dxgi.dll .text:0x2837c, 0x17e70 bytes
    // dxgi.dll .text:0x2fa20, 0x18b10 bytes
    // dxgi.dll .text:0x297fc, 0x17e70 bytes
    //
    _r6(sdk::unknown_ptr) is_power_settings_forcing_power_saving_gpu_preference;
    
    // [IsStereoEnabled@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xc080, 0x17e70 bytes
    // dxgi.dll .text:0xc0b0, 0x17e70 bytes
    // dxgi.dll .text:0x1e6c0, 0x18b10 bytes
    // dxgi.dll .text:0x7290, 0x17e70 bytes
    //
    _r7(sdk::unknown_ptr) is_stereo_enabled;
    
    // [IsWindowedStereoEnabled@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2630, 0x17e70 bytes
    // dxgi.dll .text:0x2630, 0x17e70 bytes
    // dxgi.dll .text:0x7c00, 0x18b10 bytes
    // dxgi.dll .text:0x44b0, 0x17e70 bytes
    //
    _r8(sdk::unknown_ptr) is_windowed_stereo_enabled;
    
    // [LOEnter@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x619b0, 0x17e70 bytes
    // dxgi.dll .text:0x61aa0, 0x17e70 bytes
    // dxgi.dll .text:0x6d510, 0x18b10 bytes
    // dxgi.dll .text:0x62ed0, 0x17e70 bytes
    //
    _r9(sdk::unknown_ptr) lo_enter;
    
    // [LOLeave@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x619f0, 0x17e70 bytes
    // dxgi.dll .text:0x61ae0, 0x17e70 bytes
    // dxgi.dll .text:0x6d550, 0x18b10 bytes
    // dxgi.dll .text:0x62f10, 0x17e70 bytes
    //
    _s0(sdk::unknown_ptr) lo_leave;
    
    // [LOTryEnter@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x61a30, 0x17e70 bytes
    // dxgi.dll .text:0x61b20, 0x17e70 bytes
    // dxgi.dll .text:0x6d590, 0x18b10 bytes
    // dxgi.dll .text:0x62f50, 0x17e70 bytes
    //
    _s1(sdk::unknown_ptr) lo_try_enter;
    
    // [MakeWindowAssociation@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xd1d0, 0x17e70 bytes
    // dxgi.dll .text:0xd200, 0x17e70 bytes
    // dxgi.dll .text:0x16840, 0x18b10 bytes
    // dxgi.dll .text:0x83e0, 0x17e70 bytes
    //
    _s2(sdk::unknown_ptr) make_window_association;
    
    // [OnAltEnter@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x61a68, 0x17e70 bytes
    // dxgi.dll .text:0x61b58, 0x17e70 bytes
    // dxgi.dll .text:0x6d5c8, 0x18b10 bytes
    // dxgi.dll .text:0x62f88, 0x17e70 bytes
    //
    _s3(sdk::unknown_ptr) on_alt_enter;
    
    // [OnPrintScreen@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x61c90, 0x17e70 bytes
    // dxgi.dll .text:0x61d80, 0x17e70 bytes
    // dxgi.dll .text:0x6d804, 0x18b10 bytes
    // dxgi.dll .text:0x631b0, 0x17e70 bytes
    //
    _s4(sdk::unknown_ptr) on_print_screen;
    
    // [OpenIndirectSwapChainFromHandle@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x62150, 0x17e70 bytes
    // dxgi.dll .text:0x62240, 0x17e70 bytes
    // dxgi.dll .text:0x6dce0, 0x18b10 bytes
    // dxgi.dll .text:0x63670, 0x17e70 bytes
    //
    _s5(sdk::unknown_ptr) open_indirect_swap_chain_from_handle;
    
    // [OpenIndirectSwapChainFromName@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x62210, 0x17e70 bytes
    // dxgi.dll .text:0x62300, 0x17e70 bytes
    // dxgi.dll .text:0x6dd90, 0x18b10 bytes
    // dxgi.dll .text:0x63730, 0x17e70 bytes
    //
    _s6(sdk::unknown_ptr) open_indirect_swap_chain_from_name;
    
    // [QIFactory@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x172a0, 0x17e70 bytes
    // dxgi.dll .text:0x17500, 0x17e70 bytes
    // dxgi.dll .text:0x1b8f0, 0x18b10 bytes
    // dxgi.dll .text:0x12a10, 0x17e70 bytes
    //
    _s7(sdk::unknown_ptr) qi_factory;
    
    // [RegisterAdaptersChangedEvent@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x23980, 0x17e70 bytes
    // dxgi.dll .text:0x23c80, 0x17e70 bytes
    // dxgi.dll .text:0x2adc0, 0x18b10 bytes
    // dxgi.dll .text:0x24a80, 0x17e70 bytes
    //
    _s8(sdk::unknown_ptr) register_adapters_changed_event;
    
    // [RegisterOcclusionStatusEvent@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb9a0, 0x17e70 bytes
    // dxgi.dll .text:0xb9d0, 0x17e70 bytes
    // dxgi.dll .text:0x1e200, 0x18b10 bytes
    // dxgi.dll .text:0x6bb0, 0x17e70 bytes
    //
    _s9(sdk::unknown_ptr) register_occlusion_status_event;
    
    // [RegisterOcclusionStatusWindow@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6f9e0, 0x17e70 bytes
    // dxgi.dll .text:0x6faf0, 0x17e70 bytes
    // dxgi.dll .text:0x7b1f0, 0x18b10 bytes
    // dxgi.dll .text:0x70f20, 0x17e70 bytes
    //
    _t0(sdk::unknown_ptr) register_occlusion_status_window;
    
    // [RegisterStereoStatusEvent@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6fab0, 0x17e70 bytes
    // dxgi.dll .text:0x6fbc0, 0x17e70 bytes
    // dxgi.dll .text:0x7b2c0, 0x18b10 bytes
    // dxgi.dll .text:0x70ff0, 0x17e70 bytes
    //
    _t1(sdk::unknown_ptr) register_stereo_status_event;
    
    // [RegisterStereoStatusWinRTDisplayPropertiesCB@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6fb60, 0x17e70 bytes
    // dxgi.dll .text:0x6fc70, 0x17e70 bytes
    // dxgi.dll .text:0x7b370, 0x18b10 bytes
    // dxgi.dll .text:0x710a0, 0x17e70 bytes
    //
    _t2(sdk::unknown_ptr) register_stereo_status_win_rt_display_properties_cb;
    
    // [RegisterStereoStatusWindow@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6fbe0, 0x17e70 bytes
    // dxgi.dll .text:0x6fcf0, 0x17e70 bytes
    // dxgi.dll .text:0x7b3f0, 0x18b10 bytes
    // dxgi.dll .text:0x71120, 0x17e70 bytes
    //
    _t3(sdk::unknown_ptr) register_stereo_status_window;
    
    // [RegistryAppOnHMDChangedCallback@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x62350, 0x17e70 bytes
    // dxgi.dll .text:0x62440, 0x17e70 bytes
    // dxgi.dll .text:0x6ded0, 0x18b10 bytes
    // dxgi.dll .text:0x63870, 0x17e70 bytes
    //
    _t4(sdk::unknown_ptr) registry_app_on_hmd_changed_callback;
    
    // [ReleaseLock@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x73a0, 0x17e70 bytes
    // dxgi.dll .text:0x73a0, 0x17e70 bytes
    // dxgi.dll .text:0x22b30, 0x18b10 bytes
    // dxgi.dll .text:0x1bf50, 0x17e70 bytes
    //
    _t5(sdk::unknown_ptr) release_lock;
    
    // [SampleAdapters@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x100f0, 0x17e70 bytes
    // dxgi.dll .text:0x10120, 0x17e70 bytes
    // dxgi.dll .text:0x124d0, 0x18b10 bytes
    // dxgi.dll .text:0xb5d0, 0x17e70 bytes
    //
    _t6(sdk::unknown_ptr) sample_adapters;
    
    // [SampleAdaptersWorker@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x124b0, 0x17e70 bytes
    // dxgi.dll .text:0x12710, 0x17e70 bytes
    // dxgi.dll .text:0xfdd0, 0x18b10 bytes
    // dxgi.dll .text:0xdc20, 0x17e70 bytes
    //
    _t7(sdk::unknown_ptr) sample_adapters_worker;
    
    // [SetPrivateData@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x56580, 0x17e70 bytes
    // dxgi.dll .text:0x56670, 0x17e70 bytes
    // dxgi.dll .text:0x61780, 0x18b10 bytes
    // dxgi.dll .text:0x57b00, 0x17e70 bytes
    //
    _t8(sdk::unknown_ptr) set_private_data;
    
    // [SetPrivateDataInterface@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x62910, 0x17e70 bytes
    // dxgi.dll .text:0x62a00, 0x17e70 bytes
    // dxgi.dll .text:0x6e500, 0x18b10 bytes
    // dxgi.dll .text:0x63e30, 0x17e70 bytes
    //
    _t9(sdk::unknown_ptr) set_private_data_interface;
    
    // [SetStereoEnabled@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6fea0, 0x17e70 bytes
    // dxgi.dll .text:0x6ffb0, 0x17e70 bytes
    // dxgi.dll .text:0x7b6b0, 0x18b10 bytes
    // dxgi.dll .text:0x713e0, 0x17e70 bytes
    //
    _u0(sdk::unknown_ptr) set_stereo_enabled;
    
    // [SwapChainDeath@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1f220, 0x17e70 bytes
    // dxgi.dll .text:0x1f530, 0x17e70 bytes
    // dxgi.dll .text:0x25980, 0x18b10 bytes
    // dxgi.dll .text:0x20eb0, 0x17e70 bytes
    //
    _u1(sdk::unknown_ptr) swap_chain_death;
    
    // [TakeLock@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5e30, 0x17e70 bytes
    // dxgi.dll .text:0x5e30, 0x17e70 bytes
    // dxgi.dll .text:0x226b0, 0x18b10 bytes
    // dxgi.dll .text:0x1a9e0, 0x17e70 bytes
    //
    _u2(sdk::unknown_ptr) take_lock;
    
    // [TryCreateWatchdogThread@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x62970, 0x17e70 bytes
    // dxgi.dll .text:0x62a60, 0x17e70 bytes
    // dxgi.dll .text:0x6e560, 0x18b10 bytes
    // dxgi.dll .text:0x63e90, 0x17e70 bytes
    //
    _u3(sdk::unknown_ptr) try_create_watchdog_thread;
    
    // [UnregisterAdaptersChangedEvent@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x700e0, 0x17e70 bytes
    // dxgi.dll .text:0x701f0, 0x17e70 bytes
    // dxgi.dll .text:0x7b900, 0x18b10 bytes
    // dxgi.dll .text:0x71620, 0x17e70 bytes
    //
    _u4(sdk::unknown_ptr) unregister_adapters_changed_event;
    
    // [UnregisterOcclusionStatus@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb930, 0x17e70 bytes
    // dxgi.dll .text:0xb960, 0x17e70 bytes
    // dxgi.dll .text:0x6820, 0x18b10 bytes
    // dxgi.dll .text:0x6b40, 0x17e70 bytes
    //
    _u5(sdk::unknown_ptr) unregister_occlusion_status;
    
    // [UnregisterStereoStatus@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x701e0, 0x17e70 bytes
    // dxgi.dll .text:0x702f0, 0x17e70 bytes
    // dxgi.dll .text:0x7ba10, 0x18b10 bytes
    // dxgi.dll .text:0x71720, 0x17e70 bytes
    //
    _u6(sdk::unknown_ptr) unregister_stereo_status;
    
    // [UnregisterStereoStatusWinRTDisplayPropertiesCB@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x70250, 0x17e70 bytes
    // dxgi.dll .text:0x70360, 0x17e70 bytes
    // dxgi.dll .text:0x7ba80, 0x18b10 bytes
    // dxgi.dll .text:0x71790, 0x17e70 bytes
    //
    _u7(sdk::unknown_ptr) unregister_stereo_status_win_rt_display_properties_cb;
    
    // [ValidateSwapChainSource@CDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x32e4, 0x17e70 bytes
    // dxgi.dll .text:0x32e4, 0x17e70 bytes
    // dxgi.dll .text:0x2568, 0x18b10 bytes
    // dxgi.dll .text:0x5164, 0x17e70 bytes
    //
    _u8(sdk::unknown_ptr) validate_swap_chain_source;
};
#include "magic/api.end.hpp"
