#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_composition_buffer
{
    // [GetEnableScanout@CCompositionBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x20050, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) get_enable_scanout;
    
    // [GetSwapChainRealizationInfo@CCompositionBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x205b0, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) get_swap_chain_realization_info;
    
    // [GetAdapterLuidAndGpuSync@CCompositionBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x63ce0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x786e0, 0x84380 bytes
    // dxgkrnl.sys .text:0x63e70, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_adapter_luid_and_gpu_sync;
    
    // [GetHDR10PlusMetaData@CCompositionBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1ab00, 0x762b0 bytes
    // dxgkrnl.sys .text:0x205a0, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b180, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) get_hdr10_plus_meta_data;
    
    // [IsSwapchainType@CCompositionBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a9f0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1fd70, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b070, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) is_swapchain_type;
    
    // [PreNotifyPendingFlipPresent@CCompositionBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a740, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1fb60, 0x84380 bytes
    // dxgkrnl.sys .text:0x1adc0, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) pre_notify_pending_flip_present;
    
    // [SignalGpuFence@CCompositionBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1ab00, 0x762b0 bytes
    // dxgkrnl.sys .text:0x205a0, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b180, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) signal_gpu_fence;
};
#include "magic/api.end.hpp"
