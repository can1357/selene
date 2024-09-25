#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::render_pass_dx12::c3d_lut_builder_dx12
{
    // [Cleanup@C3DLutBuilderDx12@RenderPassDx12]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8dde8, 0x18b10 bytes
    //
    _m0(sdk::unknown_ptr) cleanup;
    
    // [Initialize@C3DLutBuilderDx12@RenderPassDx12]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8e924, 0x18b10 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
    
    // [Update3DLutResource@C3DLutBuilderDx12@RenderPassDx12]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8fd58, 0x18b10 bytes
    //
    _m2(sdk::unknown_ptr) update3d_lut_resource;
};
#include "magic/api.end.hpp"
