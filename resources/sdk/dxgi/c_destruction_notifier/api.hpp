#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::c_destruction_notifier
{
    // [??0CDestructionNotifier@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1d808, 0x17e70 bytes
    // dxgi.dll .text:0x1db18, 0x17e70 bytes
    // dxgi.dll .text:0x24df8, 0x18b10 bytes
    // dxgi.dll .text:0x19098, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [Destroy@CDestructionNotifier]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x113f4, 0x17e70 bytes
    // dxgi.dll .text:0x11424, 0x17e70 bytes
    // dxgi.dll .text:0x138f0, 0x18b10 bytes
    // dxgi.dll .text:0xc8d4, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy;
    
    // [??1CDestructionNotifier@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1f6dc, 0x17e70 bytes
    // dxgi.dll .text:0x1f9bc, 0x17e70 bytes
    // dxgi.dll .text:0x1f0a8, 0x18b10 bytes
    // dxgi.dll .text:0x202b8, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [RegisterDestructionCallback@CDestructionNotifier]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4a120, 0x17e70 bytes
    // dxgi.dll .text:0x4a210, 0x17e70 bytes
    // dxgi.dll .text:0x554b0, 0x18b10 bytes
    // dxgi.dll .text:0x4b6a0, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) register_destruction_callback;
    
    // [UnregisterDestructionCallback@CDestructionNotifier]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4a8c0, 0x17e70 bytes
    // dxgi.dll .text:0x4a9b0, 0x17e70 bytes
    // dxgi.dll .text:0x55ca0, 0x18b10 bytes
    // dxgi.dll .text:0x4be40, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) unregister_destruction_callback;
};
#include "magic/api.end.hpp"
