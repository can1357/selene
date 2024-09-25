#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::std::error_category
{
    // [default_error_condition@error_category@std]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x463d0, 0x17e70 bytes
    // dxgi.dll .text:0x464c0, 0x17e70 bytes
    // dxgi.dll .text:0x518b0, 0x18b10 bytes
    // dxgi.dll .text:0x47890, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) default_error_condition;
    
    // [equivalent@error_category@std]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x46410, 0x17e70 bytes
    // dxgi.dll .text:0x46500, 0x17e70 bytes
    // dxgi.dll .text:0x518f0, 0x18b10 bytes
    // dxgi.dll .text:0x478d0, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) equivalent;
};
#include "magic/api.end.hpp"
