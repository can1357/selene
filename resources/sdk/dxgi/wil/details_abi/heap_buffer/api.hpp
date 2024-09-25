#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::wil::details_abi::heap_buffer
{
    // [reserve@heap_buffer@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x9d4c, 0x18b10 bytes
    //
    _m0(sdk::unknown_ptr) reserve;
    
    // [ensure@heap_buffer@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x18a58, 0x17e70 bytes
    // dxgi.dll .text:0x18cb8, 0x17e70 bytes
    // dxgi.dll .text:0x9d1c, 0x18b10 bytes
    // dxgi.dll .text:0x141c8, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) ensure;
    
    // [push_back@heap_buffer@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x18554, 0x17e70 bytes
    // dxgi.dll .text:0x187b4, 0x17e70 bytes
    // dxgi.dll .text:0x51b60, 0x18b10 bytes
    // dxgi.dll .text:0x13cc4, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) push_back;
};
#include "magic/api.end.hpp"
