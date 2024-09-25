#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::c_source_bits_dib_section
{
    // [??1CSourceBitsDIBSection@@UEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x5b5bc, 0x18b10 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0CSourceBitsDIBSection@@QEAA@AEBUDXGI_SURFACE_DESC@@PEAPEAUHDC__@@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4fe44, 0x17e70 bytes
    // dxgi.dll .text:0x4ff34, 0x17e70 bytes
    // dxgi.dll .text:0x5aef8, 0x18b10 bytes
    // dxgi.dll .text:0x513c4, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [GetDesc@CSourceBitsDIBSection]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ebd0, 0x17e70 bytes
    // dxgi.dll .text:0x1eee0, 0x17e70 bytes
    // dxgi.dll .text:0x266a0, 0x18b10 bytes
    // dxgi.dll .text:0x1fcd0, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) get_desc;
    
    // [Map@CSourceBitsDIBSection]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ec00, 0x17e70 bytes
    // dxgi.dll .text:0x1ef10, 0x17e70 bytes
    // dxgi.dll .text:0x266d0, 0x18b10 bytes
    // dxgi.dll .text:0x1fd00, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) map;
    
    // [Unmap@CSourceBitsDIBSection]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb230, 0x17e70 bytes
    // dxgi.dll .text:0xb260, 0x17e70 bytes
    // dxgi.dll .text:0x26720, 0x18b10 bytes
    // dxgi.dll .text:0x1fa70, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) unmap;
};
#include "magic/api.end.hpp"
