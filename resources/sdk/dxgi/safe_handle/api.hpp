#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::safe_handle
{
    // [Close@SafeHANDLE]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xae0c, 0x17e70 bytes
    // dxgi.dll .text:0xae3c, 0x17e70 bytes
    // dxgi.dll .text:0x1fa7c, 0x18b10 bytes
    // dxgi.dll .text:0x1f64c, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) close;
    
    // [??0SafeHANDLE@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xaa60, 0x17e70 bytes
    // dxgi.dll .text:0xaa90, 0x17e70 bytes
    // dxgi.dll .text:0x23780, 0x18b10 bytes
    // dxgi.dll .text:0x1f2a0, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [??1SafeHANDLE@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x472a0, 0x17e70 bytes
    // dxgi.dll .text:0x47390, 0x17e70 bytes
    // dxgi.dll .text:0x525a0, 0x18b10 bytes
    // dxgi.dll .text:0x48820, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
