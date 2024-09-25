#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::std::system_error_category
{
    // [default_error_condition@_System_error_category@std]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x46380, 0x17e70 bytes
    // dxgi.dll .text:0x46470, 0x17e70 bytes
    // dxgi.dll .text:0x51860, 0x18b10 bytes
    // dxgi.dll .text:0x47840, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) default_error_condition;
    
    // [message@_System_error_category@std]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x465e0, 0x17e70 bytes
    // dxgi.dll .text:0x466d0, 0x17e70 bytes
    // dxgi.dll .text:0x51ad0, 0x18b10 bytes
    // dxgi.dll .text:0x47aa0, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) message;
    
    // [name@_System_error_category@std]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x46640, 0x17e70 bytes
    // dxgi.dll .text:0x46730, 0x17e70 bytes
    // dxgi.dll .text:0x51b50, 0x18b10 bytes
    // dxgi.dll .text:0x47b00, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) name;
};
#include "magic/api.end.hpp"
