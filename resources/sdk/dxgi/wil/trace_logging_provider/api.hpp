#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::wil::trace_logging_provider
{
    // [Register@TraceLoggingProvider@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v20H2
    // dxgi.dll .text:0x46538, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) _register;
    
    // [Initialize@TraceLoggingProvider@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0xb230, 0x17e70 bytes
    // dxgi.dll .text:0xb260, 0x17e70 bytes
    // dxgi.dll .text:0x1fa70, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
    
    // [NotifyFailure@TraceLoggingProvider@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7c810, 0x17e70 bytes
    // dxgi.dll .text:0x7c990, 0x17e70 bytes
    // dxgi.dll .text:0x46220, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) notify_failure;
    
    // [OnErrorReported@TraceLoggingProvider@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7c850, 0x17e70 bytes
    // dxgi.dll .text:0x7c9d0, 0x17e70 bytes
    // dxgi.dll .text:0x46260, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) on_error_reported;
    
    // [ReportTelemetryFailure@TraceLoggingProvider@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7cb60, 0x17e70 bytes
    // dxgi.dll .text:0x7cce0, 0x17e70 bytes
    // dxgi.dll .text:0x46874, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) report_telemetry_failure;
    
    // [ReportTraceLoggingFailure@TraceLoggingProvider@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7ccb0, 0x17e70 bytes
    // dxgi.dll .text:0x7ce30, 0x17e70 bytes
    // dxgi.dll .text:0x469c4, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) report_trace_logging_failure;
};
#include "magic/api.end.hpp"
