#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::microsoft::wrl::details
{
    // [SafeUnknownDecrementReference@Details@WRL@Microsoft]
    // Ldr = [dxgi.dll]
    // => Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x65834, 0x18b10 bytes
    // dxgi.dll .text:0x28620, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) safe_unknown_decrement_reference;
    
    // [SafeUnknownIncrementReference@Details@WRL@Microsoft]
    // Ldr = [dxgi.dll]
    // => Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x65860, 0x18b10 bytes
    // dxgi.dll .text:0x2864c, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) safe_unknown_increment_reference;
};
#include "magic/api.end.hpp"
