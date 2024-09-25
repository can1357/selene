#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::atl::c_com_critical_section
{
    // [Init@CComCriticalSection@ATL]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xf1a4, 0x17e70 bytes
    // dxgi.dll .text:0xf1d4, 0x17e70 bytes
    // dxgi.dll .text:0x140b0, 0x18b10 bytes
    // dxgi.dll .text:0xa684, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) init;
};
#include "magic/api.end.hpp"
