#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::wil::details_abi::usage_indexes
{
    // [Record@UsageIndexes@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x18c3c, 0x17e70 bytes
    // dxgi.dll .text:0x18e9c, 0x17e70 bytes
    // dxgi.dll .text:0xa4b4, 0x18b10 bytes
    // dxgi.dll .text:0x143ac, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) record;
};
#include "magic/api.end.hpp"
