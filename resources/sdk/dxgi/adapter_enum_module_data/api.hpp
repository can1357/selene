#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::adapter_enum_module_data
{
    // [DeInit@AdapterEnumModuleData]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x813c, 0x17e70 bytes
    // dxgi.dll .text:0x813c, 0x17e70 bytes
    // dxgi.dll .text:0x9838, 0x18b10 bytes
    // dxgi.dll .text:0x1ccec, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) de_init;
    
    // [Init@AdapterEnumModuleData]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x23a1c, 0x17e70 bytes
    // dxgi.dll .text:0x23d1c, 0x17e70 bytes
    // dxgi.dll .text:0x2ae64, 0x18b10 bytes
    // dxgi.dll .text:0x24b1c, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) init;
};
#include "magic/api.end.hpp"
