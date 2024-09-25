#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::c_telemetry_helper
{
    // [UnRegister@CTelemetryHelper]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x65c60, 0x18b10 bytes
    //
    _m0(sdk::unknown_ptr) un_register;
    
    // [NotifyPerformanceMonitor@CTelemetryHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x68898, 0x17e70 bytes
    // dxgi.dll .text:0x689a8, 0x17e70 bytes
    // dxgi.dll .text:0x69dd8, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) notify_performance_monitor;
    
    // [Register@CTelemetryHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7f10, 0x17e70 bytes
    // dxgi.dll .text:0x7f10, 0x17e70 bytes
    // dxgi.dll .text:0xbf80, 0x18b10 bytes
    // dxgi.dll .text:0x1cac0, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) _register;
};
#include "magic/api.end.hpp"
