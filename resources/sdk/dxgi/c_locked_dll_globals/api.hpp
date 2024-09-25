#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::c_locked_dll_globals
{
    // [??1CLockedDLLGlobals@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x49c9c, 0x17e70 bytes
    // dxgi.dll .text:0x49d8c, 0x17e70 bytes
    // dxgi.dll .text:0x54f88, 0x18b10 bytes
    // dxgi.dll .text:0x4b21c, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
