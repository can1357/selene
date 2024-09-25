#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::std::iostream_error_category
{
    // [message@_Iostream_error_category@std]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x465a0, 0x17e70 bytes
    // dxgi.dll .text:0x46690, 0x17e70 bytes
    // dxgi.dll .text:0x51a90, 0x18b10 bytes
    // dxgi.dll .text:0x47a60, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) message;
    
    // [name@_Iostream_error_category@std]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x46630, 0x17e70 bytes
    // dxgi.dll .text:0x46720, 0x17e70 bytes
    // dxgi.dll .text:0x51b30, 0x18b10 bytes
    // dxgi.dll .text:0x47af0, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) name;
};
#include "magic/api.end.hpp"
