#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::wil::details::thread_failure_callback_holder
{
    // [GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x442c0, 0x17e70 bytes
    // dxgi.dll .text:0x443b0, 0x17e70 bytes
    // dxgi.dll .text:0x4f6d0, 0x18b10 bytes
    // dxgi.dll .text:0x45420, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) get_context_and_notify_failure;
    
    // [GetThreadContext@ThreadFailureCallbackHolder@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x44890, 0x17e70 bytes
    // dxgi.dll .text:0x44980, 0x17e70 bytes
    // dxgi.dll .text:0x4fd04, 0x18b10 bytes
    // dxgi.dll .text:0x459f0, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) get_thread_context;
    
    // [s_telemetryId@ThreadFailureCallbackHolder@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcb4a0, 0x17e70 bytes
    // dxgi.dll .data:0xcb4a0, 0x17e70 bytes
    // dxgi.dll .data:0xca540, 0x18b10 bytes
    // dxgi.dll .data:0xcc4e4, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) s_telemetry_id;
};
#include "magic/api.end.hpp"
