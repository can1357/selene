#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::gpm_helper
{
    // [GetServiceInfo@GPMHelper]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x64910, 0x18b10 bytes
    //
    _m0(sdk::unknown_ptr) get_service_info;
    
    // [IdempotentInitialze@GPMHelper]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x64cbc, 0x18b10 bytes
    //
    _m1(sdk::unknown_ptr) idempotent_initialze;
    
    // [NotifyPerformanceMonitor@GPMHelper]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x35c14, 0x18b10 bytes
    //
    _m2(sdk::unknown_ptr) notify_performance_monitor;
};
#include "magic/api.end.hpp"
