#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cd3d11_format_helper
{
    // [GetName@CD3D11FormatHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x238a8, 0x17e70 bytes
    // dxgi.dll .text:0x23ba8, 0x17e70 bytes
    // dxgi.dll .text:0x2aab8, 0x18b10 bytes
    // dxgi.dll .text:0x249a8, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) get_name;
    
    // [s_FormatDetail@CD3D11FormatHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0x98a20, 0x17e70 bytes
    // dxgi.dll .rdata:0x98a20, 0x17e70 bytes
    // dxgi.dll .rdata:0x9b540, 0x18b10 bytes
    // dxgi.dll .rdata:0x996e0, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) s_format_detail;
    
    // [s_FormatNames@CD3D11FormatHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0x9c5f0, 0x17e70 bytes
    // dxgi.dll .rdata:0x9c5f0, 0x17e70 bytes
    // dxgi.dll .rdata:0x9fa00, 0x18b10 bytes
    // dxgi.dll .rdata:0x9d680, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) s_format_names;
};
#include "magic/api.end.hpp"
