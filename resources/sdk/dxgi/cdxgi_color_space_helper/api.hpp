#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cdxgi_color_space_helper
{
    // [IsRGBColorSpace@CDXGIColorSpaceHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x540c, 0x17e70 bytes
    // dxgi.dll .text:0x540c, 0x17e70 bytes
    // dxgi.dll .text:0x1a9c8, 0x18b10 bytes
    // dxgi.dll .text:0x2ecc, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) is_rgb_color_space;
};
#include "magic/api.end.hpp"
