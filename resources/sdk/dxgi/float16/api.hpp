#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::float16
{
    // [make@float16]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x56e2c, 0x17e70 bytes
    // dxgi.dll .text:0x56f1c, 0x17e70 bytes
    // dxgi.dll .text:0x62004, 0x18b10 bytes
    // dxgi.dll .text:0x583ac, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) make;
    
    // [toFloat32_AsUINT32Bits@float16]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x56fac, 0x17e70 bytes
    // dxgi.dll .text:0x5709c, 0x17e70 bytes
    // dxgi.dll .text:0x620c0, 0x18b10 bytes
    // dxgi.dll .text:0x5852c, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) to_float32_as_uint32_bits;
};
#include "magic/api.end.hpp"
