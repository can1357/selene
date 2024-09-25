#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::c_locked_factory_child
{
    // [ReleaseLock@CLockedFactoryChild]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x9b10, 0x17e70 bytes
    // dxgi.dll .text:0x9b10, 0x17e70 bytes
    // dxgi.dll .text:0x237a0, 0x18b10 bytes
    // dxgi.dll .text:0x1e320, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) release_lock;
    
    // [TakeLock@CLockedFactoryChild]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5df0, 0x17e70 bytes
    // dxgi.dll .text:0x5df0, 0x17e70 bytes
    // dxgi.dll .text:0x20dc0, 0x18b10 bytes
    // dxgi.dll .text:0x1a9a0, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) take_lock;
};
#include "magic/api.end.hpp"
