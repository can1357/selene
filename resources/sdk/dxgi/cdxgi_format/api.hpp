#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cdxgi_format
{
    // [BitsOfDeepestColorChannel@CDXGIFormat]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x53e8, 0x17e70 bytes
    // dxgi.dll .text:0x53e8, 0x17e70 bytes
    // dxgi.dll .text:0x1a9a4, 0x18b10 bytes
    // dxgi.dll .text:0x2ea8, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) bits_of_deepest_color_channel;
};
#include "magic/api.end.hpp"
