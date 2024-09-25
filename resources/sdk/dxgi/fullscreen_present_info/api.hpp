#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::fullscreen_present_info
{
    // [UpdateMaxMinRect@FullscreenPresentInfo]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6d69c, 0x17e70 bytes
    // dxgi.dll .text:0x6d7ac, 0x17e70 bytes
    // dxgi.dll .text:0x79154, 0x18b10 bytes
    // dxgi.dll .text:0x6ebdc, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) update_max_min_rect;
};
#include "magic/api.end.hpp"
