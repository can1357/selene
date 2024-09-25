#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::render_pass_dx12::c_render_pass_quad
{
    // [Cleanup@CRenderPassQuad@RenderPassDx12]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8df9c, 0x18b10 bytes
    //
    _m0(sdk::unknown_ptr) cleanup;
    
    // [CreateCBSRDescriptor@CRenderPassQuad@RenderPassDx12]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8e3ec, 0x18b10 bytes
    //
    _m1(sdk::unknown_ptr) create_cbsr_descriptor;
    
    // [CreateRenderTargetDescriptor@CRenderPassQuad@RenderPassDx12]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8e70c, 0x18b10 bytes
    //
    _m2(sdk::unknown_ptr) create_render_target_descriptor;
    
    // [Initialize@CRenderPassQuad@RenderPassDx12]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8f42c, 0x18b10 bytes
    //
    _m3(sdk::unknown_ptr) initialize;
    
    // [Render@CRenderPassQuad@RenderPassDx12]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8f740, 0x18b10 bytes
    //
    _m4(sdk::unknown_ptr) render;
};
#include "magic/api.end.hpp"
