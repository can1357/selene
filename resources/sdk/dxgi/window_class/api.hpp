#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::window_class
{
    // [??1WindowClass@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xafcc, 0x17e70 bytes
    // dxgi.dll .text:0xaffc, 0x17e70 bytes
    // dxgi.dll .text:0x25a50, 0x18b10 bytes
    // dxgi.dll .text:0x1f80c, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
