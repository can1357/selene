#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::c_source_bits
{
    // [??1CSourceBits@@UEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1eba0, 0x17e70 bytes
    // dxgi.dll .text:0x1eeb0, 0x17e70 bytes
    // dxgi.dll .text:0x26660, 0x18b10 bytes
    // dxgi.dll .text:0x1fca0, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [Rotation@CSourceBits]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ec20, 0x17e70 bytes
    // dxgi.dll .text:0x1ef30, 0x17e70 bytes
    // dxgi.dll .text:0x266f0, 0x18b10 bytes
    // dxgi.dll .text:0x1fd20, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) rotation;
};
#include "magic/api.end.hpp"
