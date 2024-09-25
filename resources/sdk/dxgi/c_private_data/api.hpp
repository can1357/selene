#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::c_private_data
{
    // [??0CPrivateData@@QEAA@AEBV0@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x8a08, 0x17e70 bytes
    // dxgi.dll .text:0x8a08, 0x17e70 bytes
    // dxgi.dll .text:0x183b8, 0x18b10 bytes
    // dxgi.dll .text:0x1d2e0, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CPrivateData@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x8604, 0x17e70 bytes
    // dxgi.dll .text:0x8604, 0x17e70 bytes
    // dxgi.dll .text:0x181fc, 0x18b10 bytes
    // dxgi.dll .text:0x1d1b4, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [Retrieve@CPrivateData]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4a250, 0x17e70 bytes
    // dxgi.dll .text:0x4a340, 0x17e70 bytes
    // dxgi.dll .text:0x55600, 0x18b10 bytes
    // dxgi.dll .text:0x4b7d0, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) retrieve;
    
    // [Set@CPrivateData]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x8a50, 0x17e70 bytes
    // dxgi.dll .text:0x8a50, 0x17e70 bytes
    // dxgi.dll .text:0x24eb4, 0x18b10 bytes
    // dxgi.dll .text:0x1d328, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) set;
};
#include "magic/api.end.hpp"
