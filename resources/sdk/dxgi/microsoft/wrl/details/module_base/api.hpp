#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::microsoft::wrl::details::module_base
{
    // [module_@ModuleBase@Details@WRL@Microsoft]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf478, 0x17e70 bytes
    // dxgi.dll .data:0xcf478, 0x17e70 bytes
    // dxgi.dll .data:0xcd630, 0x18b10 bytes
    // dxgi.dll .data:0xd04b0, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) module_;
};
#include "magic/api.end.hpp"
