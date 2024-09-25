#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::unique_hmodule
{
    // [attach@UniqueHMODULE]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xd164, 0x17e70 bytes
    // dxgi.dll .text:0xd194, 0x17e70 bytes
    // dxgi.dll .text:0x55fa4, 0x18b10 bytes
    // dxgi.dll .text:0x8374, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) attach;
    
    // [??1UniqueHMODULE@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xae3c, 0x17e70 bytes
    // dxgi.dll .text:0xae6c, 0x17e70 bytes
    // dxgi.dll .text:0x25888, 0x18b10 bytes
    // dxgi.dll .text:0x1f67c, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
