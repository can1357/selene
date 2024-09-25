#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace video::memory_budget_module_data
{
    // [Init@VideoMemoryBudgetModuleData]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6f86c, 0x17e70 bytes
    // dxgi.dll .text:0x6f97c, 0x17e70 bytes
    // dxgi.dll .text:0x7b07c, 0x18b10 bytes
    // dxgi.dll .text:0x70dac, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) init;
};
#include "magic/api.end.hpp"
