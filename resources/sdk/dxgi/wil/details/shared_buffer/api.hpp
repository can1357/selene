#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::wil::details::shared_buffer
{
    // [assign@shared_buffer@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4629c, 0x17e70 bytes
    // dxgi.dll .text:0x4638c, 0x17e70 bytes
    // dxgi.dll .text:0x5176c, 0x18b10 bytes
    // dxgi.dll .text:0x4775c, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) assign;
    
    // [create@shared_buffer@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x462e0, 0x17e70 bytes
    // dxgi.dll .text:0x463d0, 0x17e70 bytes
    // dxgi.dll .text:0x517b0, 0x18b10 bytes
    // dxgi.dll .text:0x477a0, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) create;
    
    // [reset@shared_buffer@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x466b8, 0x17e70 bytes
    // dxgi.dll .text:0x467a8, 0x17e70 bytes
    // dxgi.dll .text:0x51c98, 0x18b10 bytes
    // dxgi.dll .text:0x47b78, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) reset;
};
#include "magic/api.end.hpp"
