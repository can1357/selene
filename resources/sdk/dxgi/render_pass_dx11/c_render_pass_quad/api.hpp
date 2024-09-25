#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::render_pass_dx11::c_render_pass_quad
{
    // [Cleanup@CRenderPassQuad@RenderPassDx11]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x90874, 0x18b10 bytes
    //
    _m0(sdk::unknown_ptr) cleanup;
    
    // [Initialize@CRenderPassQuad@RenderPassDx11]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x90dd0, 0x18b10 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
    
    // [Render@CRenderPassQuad@RenderPassDx11]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x9132c, 0x18b10 bytes
    //
    _m2(sdk::unknown_ptr) render;
    
    // [SetupRenderState@CRenderPassQuad@RenderPassDx11]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x915a8, 0x18b10 bytes
    //
    _m3(sdk::unknown_ptr) setup_render_state;
    
    // [WaitForAll@CRenderPassQuad@RenderPassDx11]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x91a48, 0x18b10 bytes
    //
    _m4(sdk::unknown_ptr) wait_for_all;
};
#include "magic/api.end.hpp"
