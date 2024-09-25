#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::log_marker_helper
{
    // [??1DXGILogMarkerHelper@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x505a8, 0x17e70 bytes
    // dxgi.dll .text:0x50698, 0x17e70 bytes
    // dxgi.dll .text:0x5b668, 0x18b10 bytes
    // dxgi.dll .text:0x51b28, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
