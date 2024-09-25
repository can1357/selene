#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::occlusion_module_data
{
    // [Init@OcclusionModuleData]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xcb5c, 0x17e70 bytes
    // dxgi.dll .text:0xcb8c, 0x17e70 bytes
    // dxgi.dll .text:0x1e5a4, 0x18b10 bytes
    // dxgi.dll .text:0x7d6c, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) init;
};
#include "magic/api.end.hpp"
