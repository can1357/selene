#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::wil::result_exception
{
    // [what@ResultException@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x46710, 0x17e70 bytes
    // dxgi.dll .text:0x46800, 0x17e70 bytes
    // dxgi.dll .text:0x51d00, 0x18b10 bytes
    // dxgi.dll .text:0x47bd0, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) what;
};
#include "magic/api.end.hpp"
