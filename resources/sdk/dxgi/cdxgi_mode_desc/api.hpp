#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cdxgi_mode_desc
{
    // [??0CDXGIModeDesc@@QEAA@AEBUDXGI_MODE_DESC1@@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x21dc4, 0x17e70 bytes
    // dxgi.dll .text:0x220a4, 0x17e70 bytes
    // dxgi.dll .text:0x29fd0, 0x18b10 bytes
    // dxgi.dll .text:0x22d44, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0CDXGIModeDesc@@QEAA@AEBU_devicemodeW@@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4f5c0, 0x17e70 bytes
    // dxgi.dll .text:0x4f6b0, 0x17e70 bytes
    // dxgi.dll .text:0x5a674, 0x18b10 bytes
    // dxgi.dll .text:0x50b40, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??1CDXGIModeDesc@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb230, 0x17e70 bytes
    // dxgi.dll .text:0xb260, 0x17e70 bytes
    // dxgi.dll .text:0x1f1b4, 0x18b10 bytes
    // dxgi.dll .text:0x1fa70, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
