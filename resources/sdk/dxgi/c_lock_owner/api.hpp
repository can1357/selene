#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::c_lock_owner
{
    // [AddRef@CLockOwner]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x23fa0, 0x17e70 bytes
    // dxgi.dll .text:0x242a0, 0x17e70 bytes
    // dxgi.dll .text:0x267f0, 0x18b10 bytes
    // dxgi.dll .text:0x1fdb0, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) add_ref;
    
    // [LOEnter@CLockOwner]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x619d0, 0x17e70 bytes
    // dxgi.dll .text:0x61ac0, 0x17e70 bytes
    // dxgi.dll .text:0x6d530, 0x18b10 bytes
    // dxgi.dll .text:0x62ef0, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) lo_enter;
    
    // [LOLeave@CLockOwner]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x61a10, 0x17e70 bytes
    // dxgi.dll .text:0x61b00, 0x17e70 bytes
    // dxgi.dll .text:0x6d570, 0x18b10 bytes
    // dxgi.dll .text:0x62f30, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) lo_leave;
    
    // [LOTryEnter@CLockOwner]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x61a50, 0x17e70 bytes
    // dxgi.dll .text:0x61b40, 0x17e70 bytes
    // dxgi.dll .text:0x6d5b0, 0x18b10 bytes
    // dxgi.dll .text:0x62f70, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) lo_try_enter;
    
    // [QueryInterface@CLockOwner]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x62300, 0x17e70 bytes
    // dxgi.dll .text:0x623f0, 0x17e70 bytes
    // dxgi.dll .text:0x6de70, 0x18b10 bytes
    // dxgi.dll .text:0x63820, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) query_interface;
    
    // [Release@CLockOwner]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x624a0, 0x17e70 bytes
    // dxgi.dll .text:0x62590, 0x17e70 bytes
    // dxgi.dll .text:0x6e090, 0x18b10 bytes
    // dxgi.dll .text:0x639c0, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
