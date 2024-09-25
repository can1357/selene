#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::gdi_thunks
{
    // [??0GDI_THUNKS@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x70bc0, 0x17e70 bytes
    // dxgi.dll .text:0x70cd0, 0x17e70 bytes
    // dxgi.dll .text:0x7c328, 0x18b10 bytes
    // dxgi.dll .text:0x72100, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
