#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::render_pass_dx12::waitable_fence
{
    // [Cleanup@WaitableFence@RenderPassDx12]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8e034, 0x18b10 bytes
    //
    _m0(sdk::unknown_ptr) cleanup;
    
    // [Initialize@WaitableFence@RenderPassDx12]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8f618, 0x18b10 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
    
    // [SignalFence@WaitableFence@RenderPassDx12]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8fcb8, 0x18b10 bytes
    //
    _m2(sdk::unknown_ptr) signal_fence;
    
    // [WaitForFence@WaitableFence@RenderPassDx12]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x9033c, 0x18b10 bytes
    //
    _m3(sdk::unknown_ptr) wait_for_fence;
};
#include "magic/api.end.hpp"
