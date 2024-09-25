#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_composition_swapchain_buffer
{
    // [AddRealization@CCompositionSwapchainBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x82e20, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) add_realization;
    
    // [GetEnableScanout@CCompositionSwapchainBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x206b0, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) get_enable_scanout;
    
    // [NotifyFlipContentTokenInFrame@CCompositionSwapchainBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x830d4, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) notify_flip_content_token_in_frame;
    
    // [UpdateIndependentFlipState@CCompositionSwapchainBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x83538, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) update_independent_flip_state;
    
    // [Create@CCompositionSwapchainBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x645fc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x82e60, 0x84380 bytes
    // dxgkrnl.sys .text:0x6478c, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) create;
    
    // [GetInfo@CCompositionSwapchainBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x646f0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x82f20, 0x84380 bytes
    // dxgkrnl.sys .text:0x64880, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) get_info;
    
    // [GetType@CCompositionSwapchainBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a7a0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x202e0, 0x84380 bytes
    // dxgkrnl.sys .text:0x1ae20, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_type;
    
    // [Initialize@CCompositionSwapchainBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x64820, 0x762b0 bytes
    // dxgkrnl.sys .text:0x82ff8, 0x84380 bytes
    // dxgkrnl.sys .text:0x649b0, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) initialize;
    
    // [NotifyTokenInFrame@CCompositionSwapchainBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x64980, 0x762b0 bytes
    // dxgkrnl.sys .text:0x831b0, 0x84380 bytes
    // dxgkrnl.sys .text:0x64b10, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) notify_token_in_frame;
    
    // [UpdateAttributes@CCompositionSwapchainBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x64a54, 0x762b0 bytes
    // dxgkrnl.sys .text:0x83244, 0x84380 bytes
    // dxgkrnl.sys .text:0x64be4, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) update_attributes;
};
#include "magic/api.end.hpp"
