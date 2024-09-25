#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::std::generic_error_category
{
    // [message@_Generic_error_category@std]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x46560, 0x17e70 bytes
    // dxgi.dll .text:0x46650, 0x17e70 bytes
    // dxgi.dll .text:0x51a50, 0x18b10 bytes
    // dxgi.dll .text:0x47a20, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) message;
    
    // [name@_Generic_error_category@std]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x46620, 0x17e70 bytes
    // dxgi.dll .text:0x46710, 0x17e70 bytes
    // dxgi.dll .text:0x51b10, 0x18b10 bytes
    // dxgi.dll .text:0x47ae0, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) name;
};
#include "magic/api.end.hpp"
