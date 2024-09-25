#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_flip_ex_buffer
{
    // [GetSwapChainRealizationInfo@CFlipExBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x13520, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) get_swap_chain_realization_info;
    
    // [UpdatePendingFlipValues@CFlipExBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x64590, 0x762b0 bytes
    // dxgkrnl.sys .text:0x64720, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) update_pending_flip_values;
    
    // [DisableCascadedSignaling@CFlipExBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x129dc, 0x762b0 bytes
    // dxgkrnl.sys .text:0xffc4, 0x84380 bytes
    // dxgkrnl.sys .text:0x12e6c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) disable_cascaded_signaling;
    
    // [EnableCascadedSignaling@CFlipExBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x640f8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x78b28, 0x84380 bytes
    // dxgkrnl.sys .text:0x64288, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) enable_cascaded_signaling;
    
    // [EnsureHDR10MetaData@CFlipExBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x64254, 0x762b0 bytes
    // dxgkrnl.sys .text:0x78d00, 0x84380 bytes
    // dxgkrnl.sys .text:0x643e4, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) ensure_hdr10_meta_data;
    
    // [FromBuffer@CFlipExBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x635e0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x77e60, 0x84380 bytes
    // dxgkrnl.sys .text:0x63770, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) from_buffer;
    
    // [GetAdapterLuidAndGpuSync@CFlipExBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x642b0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x78d60, 0x84380 bytes
    // dxgkrnl.sys .text:0x64440, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_adapter_luid_and_gpu_sync;
    
    // [GetHDR10PlusMetaData@CFlipExBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x64330, 0x762b0 bytes
    // dxgkrnl.sys .text:0x78de0, 0x84380 bytes
    // dxgkrnl.sys .text:0x644c0, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) get_hdr10_plus_meta_data;
    
    // [GetInfoInternal@CFlipExBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x17588, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1c358, 0x84380 bytes
    // dxgkrnl.sys .text:0x17d18, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) get_info_internal;
    
    // [InitializeAttributes@CFlipExBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x11b38, 0x762b0 bytes
    // dxgkrnl.sys .text:0x13708, 0x84380 bytes
    // dxgkrnl.sys .text:0x11fc8, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) initialize_attributes;
    
    // [InsertCascadedTokenSignal@CFlipExBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x64378, 0x762b0 bytes
    // dxgkrnl.sys .text:0x78e28, 0x84380 bytes
    // dxgkrnl.sys .text:0x64508, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) insert_cascaded_token_signal;
    
    // [InsertCascadedTokenWait@CFlipExBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x64450, 0x762b0 bytes
    // dxgkrnl.sys .text:0x78f00, 0x84380 bytes
    // dxgkrnl.sys .text:0x645e0, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) insert_cascaded_token_wait;
    
    // [IsSwapchainType@CFlipExBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a7b0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20050, 0x84380 bytes
    // dxgkrnl.sys .text:0x1ae30, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) is_swapchain_type;
    
    // [PreNotifyPendingFlipPresent@CFlipExBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x64500, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1f00, 0x84380 bytes
    // dxgkrnl.sys .text:0x64690, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) pre_notify_pending_flip_present;
    
    // [SetPendingIndependentFlipAttributes@CFlipExBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1b664, 0x762b0 bytes
    // dxgkrnl.sys .text:0x195d8, 0x84380 bytes
    // dxgkrnl.sys .text:0x1bce4, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) set_pending_independent_flip_attributes;
    
    // [SignalGpuFence@CFlipExBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4510, 0x762b0 bytes
    // dxgkrnl.sys .text:0x8430, 0x84380 bytes
    // dxgkrnl.sys .text:0x58b0, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) signal_gpu_fence;
    
    // [UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6451c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x78fac, 0x84380 bytes
    // dxgkrnl.sys .text:0x646ac, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) update_dxgkrnl_independent_flip_duration;
};
#include "magic/api.end.hpp"
