#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::wil::details_abi::thread_local_failure_info
{
    // [Set@ThreadLocalFailureInfo@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x45790, 0x17e70 bytes
    // dxgi.dll .text:0x45880, 0x17e70 bytes
    // dxgi.dll .text:0x50b3c, 0x18b10 bytes
    // dxgi.dll .text:0x46c50, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) set;
};
#include "magic/api.end.hpp"
