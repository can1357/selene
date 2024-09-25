#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::wil
{
    // [g_fBreakOnFailure@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf3a8, 0x17e70 bytes
    // dxgi.dll .data:0xcf3a8, 0x17e70 bytes
    // dxgi.dll .data:0xcd568, 0x18b10 bytes
    // dxgi.dll .data:0xd0408, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) g_f_break_on_failure;
    
    // [g_fIsDebuggerPresent@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf398, 0x17e70 bytes
    // dxgi.dll .data:0xcf398, 0x17e70 bytes
    // dxgi.dll .data:0xcd558, 0x18b10 bytes
    // dxgi.dll .data:0xd03f8, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) g_f_is_debugger_present;
    
    // [g_pfnIsDebuggerPresent@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf390, 0x17e70 bytes
    // dxgi.dll .data:0xcf390, 0x17e70 bytes
    // dxgi.dll .data:0xcd550, 0x18b10 bytes
    // dxgi.dll .data:0xd03f0, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) g_pfn_is_debugger_present;
    
    // [g_pfnWilFailFast@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf3d8, 0x17e70 bytes
    // dxgi.dll .data:0xcf3d8, 0x17e70 bytes
    // dxgi.dll .data:0xcd598, 0x18b10 bytes
    // dxgi.dll .data:0xd0438, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) g_pfn_wil_fail_fast;
    
    // [GetFailureLogString@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x44454, 0x17e70 bytes
    // dxgi.dll .text:0x44544, 0x17e70 bytes
    // dxgi.dll .text:0x4f874, 0x18b10 bytes
    // dxgi.dll .text:0x455b4, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) get_failure_log_string;
    
    // [ProcessShutdownInProgress@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1870c, 0x17e70 bytes
    // dxgi.dll .text:0x1896c, 0x17e70 bytes
    // dxgi.dll .text:0x9430, 0x18b10 bytes
    // dxgi.dll .text:0x13e7c, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) process_shutdown_in_progress;
};
#include "magic/api.end.hpp"
