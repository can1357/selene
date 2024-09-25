#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::c_source_bits_existing_dxgi_surface
{
    // [??1CSourceBitsExistingDXGISurface@@UEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x5b620, 0x18b10 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0CSourceBitsExistingDXGISurface@@QEAA@PEAUIDXGIResource@@W4DXGI_MODE_ROTATION@@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4ffc4, 0x17e70 bytes
    // dxgi.dll .text:0x500b4, 0x17e70 bytes
    // dxgi.dll .text:0x5b060, 0x18b10 bytes
    // dxgi.dll .text:0x51544, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [GetDesc@CSourceBitsExistingDXGISurface]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x53d20, 0x17e70 bytes
    // dxgi.dll .text:0x53e10, 0x17e70 bytes
    // dxgi.dll .text:0x5ec20, 0x18b10 bytes
    // dxgi.dll .text:0x552a0, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) get_desc;
    
    // [Map@CSourceBitsExistingDXGISurface]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x55d40, 0x17e70 bytes
    // dxgi.dll .text:0x55e30, 0x17e70 bytes
    // dxgi.dll .text:0x60e00, 0x18b10 bytes
    // dxgi.dll .text:0x572c0, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) map;
    
    // [Rotation@CSourceBitsExistingDXGISurface]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ec30, 0x17e70 bytes
    // dxgi.dll .text:0x1ef40, 0x17e70 bytes
    // dxgi.dll .text:0x26700, 0x18b10 bytes
    // dxgi.dll .text:0x1fd30, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) rotation;
    
    // [Unmap@CSourceBitsExistingDXGISurface]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x56a30, 0x17e70 bytes
    // dxgi.dll .text:0x56b20, 0x17e70 bytes
    // dxgi.dll .text:0x61c30, 0x18b10 bytes
    // dxgi.dll .text:0x57fb0, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) unmap;
};
#include "magic/api.end.hpp"
