#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::atl::c_atl_base_module
{
    // [m_bInitFailed@CAtlBaseModule@ATL]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbeb4, 0x17e70 bytes
    // dxgi.dll .data:0xcbeb4, 0x17e70 bytes
    // dxgi.dll .data:0xcaf44, 0x18b10 bytes
    // dxgi.dll .data:0xccf00, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) m_b_init_failed;
};
#include "magic/api.end.hpp"
