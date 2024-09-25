#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cdxgi_surface_dib_section
{
    // [??1CDXGISurfaceDIBSection@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5dae4, 0x17e70 bytes
    // dxgi.dll .text:0x5dbd4, 0x17e70 bytes
    // dxgi.dll .text:0x69714, 0x18b10 bytes
    // dxgi.dll .text:0x5f008, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [Init@CDXGISurfaceDIBSection]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x61768, 0x17e70 bytes
    // dxgi.dll .text:0x61858, 0x17e70 bytes
    // dxgi.dll .text:0x6d314, 0x18b10 bytes
    // dxgi.dll .text:0x62c88, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) init;
};
#include "magic/api.end.hpp"
