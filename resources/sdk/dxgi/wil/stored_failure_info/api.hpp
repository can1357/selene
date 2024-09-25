#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::wil::stored_failure_info
{
    // [SetFailureInfo@StoredFailureInfo@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x458e4, 0x17e70 bytes
    // dxgi.dll .text:0x459d4, 0x17e70 bytes
    // dxgi.dll .text:0x50c8c, 0x18b10 bytes
    // dxgi.dll .text:0x46da4, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) set_failure_info;
};
#include "magic/api.end.hpp"
