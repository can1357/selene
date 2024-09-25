#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::atl::c_atl_com_module
{
    // [ExecuteObjectMain@CAtlComModule@ATL]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x8104, 0x17e70 bytes
    // dxgi.dll .text:0x8104, 0x17e70 bytes
    // dxgi.dll .text:0x9910, 0x18b10 bytes
    // dxgi.dll .text:0x1ccb4, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) execute_object_main;
};
#include "magic/api.end.hpp"
