#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::auto_hrgn
{
    // [Combine@AutoHRGN]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x64eb4, 0x17e70 bytes
    // dxgi.dll .text:0x64fa4, 0x17e70 bytes
    // dxgi.dll .text:0x709e4, 0x18b10 bytes
    // dxgi.dll .text:0x663d4, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) combine;
    
    // [??1AutoHRGN@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1f200, 0x17e70 bytes
    // dxgi.dll .text:0x1f510, 0x17e70 bytes
    // dxgi.dll .text:0x25910, 0x18b10 bytes
    // dxgi.dll .text:0x20e90, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [Set@AutoHRGN]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6bae0, 0x17e70 bytes
    // dxgi.dll .text:0x6bbf0, 0x17e70 bytes
    // dxgi.dll .text:0x77770, 0x18b10 bytes
    // dxgi.dll .text:0x6d020, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) set;
};
#include "magic/api.end.hpp"
