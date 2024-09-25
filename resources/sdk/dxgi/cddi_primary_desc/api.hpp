#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cddi_primary_desc
{
    // [??0CDDI_PRIMARY_DESC@@QEAA@IAEBUDXGI_MODE_DESC1@@W4DXGI_MODE_ROTATION@@I@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2187c, 0x17e70 bytes
    // dxgi.dll .text:0x21b5c, 0x17e70 bytes
    // dxgi.dll .text:0x25130, 0x18b10 bytes
    // dxgi.dll .text:0x227fc, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [flip_compatible@CDDI_PRIMARY_DESC]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x23b74, 0x17e70 bytes
    // dxgi.dll .text:0x23e74, 0x17e70 bytes
    // dxgi.dll .text:0x2afbc, 0x18b10 bytes
    // dxgi.dll .text:0x24c74, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) flip_compatible;
};
#include "magic/api.end.hpp"
