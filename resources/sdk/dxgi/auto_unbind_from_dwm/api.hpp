#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::auto_unbind_from_dwm
{
    // [??1AutoUnbindFromDWM@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x637cc, 0x17e70 bytes
    // dxgi.dll .text:0x638bc, 0x17e70 bytes
    // dxgi.dll .text:0x6f66c, 0x18b10 bytes
    // dxgi.dll .text:0x64cec, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
