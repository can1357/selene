#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::output_enumerator
{
    // [next@OutputEnumerator]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4ad74, 0x17e70 bytes
    // dxgi.dll .text:0x4ae64, 0x17e70 bytes
    // dxgi.dll .text:0x560c8, 0x18b10 bytes
    // dxgi.dll .text:0x4c2f4, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) next;
};
#include "magic/api.end.hpp"
