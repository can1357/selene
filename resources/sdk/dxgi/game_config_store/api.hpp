#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::game_config_store
{
    // [??0GameConfigStore@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1bff0, 0x17e70 bytes
    // dxgi.dll .text:0x1c300, 0x17e70 bytes
    // dxgi.dll .text:0x19d44, 0x18b10 bytes
    // dxgi.dll .text:0x17880, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1GameConfigStore@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xa890, 0x17e70 bytes
    // dxgi.dll .text:0xa890, 0x17e70 bytes
    // dxgi.dll .text:0x24d7c, 0x18b10 bytes
    // dxgi.dll .text:0x1f0a0, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
