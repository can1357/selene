#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::wil::details_abi::thread_local_data
{
    // [Clear@ThreadLocalData@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x43f1c, 0x17e70 bytes
    // dxgi.dll .text:0x4400c, 0x17e70 bytes
    // dxgi.dll .text:0x4f514, 0x18b10 bytes
    // dxgi.dll .text:0x4507c, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) clear;
    
    // [SetLastError@ThreadLocalData@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x45b08, 0x17e70 bytes
    // dxgi.dll .text:0x45bf8, 0x17e70 bytes
    // dxgi.dll .text:0x50eb8, 0x18b10 bytes
    // dxgi.dll .text:0x46fc8, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) set_last_error;
};
#include "magic/api.end.hpp"
