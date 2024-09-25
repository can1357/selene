#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::keyboard_input_telemetry
{
    // [_BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1778, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) begin_keyboard_event_processing_by_input_service;
    
    // [BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1820, 0x243e0 bytes
    // win32kbase.sys .text:0x1820, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) begin_keyboard_event_processing_by_input_service_;
    
    // [EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1660, 0x243e0 bytes
    // win32kbase.sys .text:0x1660, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) end_keyboard_event_processing_by_input_service;
    
    // [GetKeyboardInputLatency@KeyboardInputTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x17e8, 0x243e0 bytes
    // win32kbase.sys .text:0x18f8, 0x27ef0 bytes
    // win32kbase.sys .text:0x17e8, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) get_keyboard_input_latency;
    
    // [LogHanging@KeyboardInputTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x14dc18, 0x243e0 bytes
    // win32kbase.sys .text:0x180b50, 0x27ef0 bytes
    // win32kbase.sys .text:0x14b238, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) log_hanging;
    
    // [_UpdateTelemetryBuffer@KeyboardInputTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x16c8, 0x243e0 bytes
    // win32kbase.sys .text:0x1804, 0x27ef0 bytes
    // win32kbase.sys .text:0x16c8, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) update_telemetry_buffer;
    
    // [_UploadTelemetryData@KeyboardInputTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19e0, 0x243e0 bytes
    // win32kbase.sys .text:0x1008, 0x27ef0 bytes
    // win32kbase.sys .text:0x19e0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) upload_telemetry_data;
};
#include "magic/api.end.hpp"
