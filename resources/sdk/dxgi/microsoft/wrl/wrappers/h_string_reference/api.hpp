#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::microsoft::wrl::wrappers::h_string_reference
{
    // [CreateReference@HStringReference@Wrappers@WRL@Microsoft]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x5859c, 0x17e70 bytes
    // dxgi.dll .text:0x5868c, 0x17e70 bytes
    // dxgi.dll .text:0x59b30, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) create_reference;
};
#include "magic/api.end.hpp"
