#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::wil::details_abi::semaphore_value
{
    // [CreateFromValueInternal@SemaphoreValue@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x43fcc, 0x17e70 bytes
    // dxgi.dll .text:0x440bc, 0x17e70 bytes
    // dxgi.dll .text:0xa228, 0x18b10 bytes
    // dxgi.dll .text:0x4512c, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) create_from_value_internal;
    
    // [Destroy@SemaphoreValue@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x44254, 0x17e70 bytes
    // dxgi.dll .text:0x44344, 0x17e70 bytes
    // dxgi.dll .text:0x4f624, 0x18b10 bytes
    // dxgi.dll .text:0x453b4, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy;
    
    // [GetValueFromSemaphore@SemaphoreValue@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x19f68, 0x17e70 bytes
    // dxgi.dll .text:0x1a218, 0x17e70 bytes
    // dxgi.dll .text:0xaf20, 0x18b10 bytes
    // dxgi.dll .text:0x15728, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) get_value_from_semaphore;
    
    // [TryGetPointer@SemaphoreValue@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x19cd4, 0x17e70 bytes
    // dxgi.dll .text:0x19f84, 0x17e70 bytes
    // dxgi.dll .text:0xac5c, 0x18b10 bytes
    // dxgi.dll .text:0x15494, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) try_get_pointer;
    
    // [TryGetValueInternal@SemaphoreValue@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x19d38, 0x17e70 bytes
    // dxgi.dll .text:0x19fe8, 0x17e70 bytes
    // dxgi.dll .text:0xacb0, 0x18b10 bytes
    // dxgi.dll .text:0x154f8, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) try_get_value_internal;
};
#include "magic/api.end.hpp"
