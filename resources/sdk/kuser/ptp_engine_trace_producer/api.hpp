#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::ptp_engine_trace_producer
{
    // [??0PTPEngineTraceProducer@@AEAA@PEAVIPTPEngine@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d306c, 0x243e0 bytes
    // win32kbase.sys .text:0x21d3f4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d0e4c, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [Create@PTPEngineTraceProducer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d3168, 0x243e0 bytes
    // win32kbase.sys .text:0x21d504, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d0f48, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) create;
    
    // [??1PTPEngineTraceProducer@@UEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d30dc, 0x243e0 bytes
    // win32kbase.sys .text:0x21d464, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d0ebc, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [OnEngineOutput@PTPEngineTraceProducer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d31d0, 0x243e0 bytes
    // win32kbase.sys .text:0xf8590, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d0fb0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) on_engine_output;
    
    // [OnEvent@PTPEngineTraceProducer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d3300, 0x243e0 bytes
    // win32kbase.sys .text:0x21d670, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d10e0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) on_event;
    
    // [OnInput@PTPEngineTraceProducer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d33a0, 0x243e0 bytes
    // win32kbase.sys .text:0xf86b6, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d1180, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) on_input;
    
    // [OnTelemetryOutput@PTPEngineTraceProducer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d3500, 0x243e0 bytes
    // win32kbase.sys .text:0x21d710, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d12e0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) on_telemetry_output;
    
    // [SetClient@PTPEngineTraceProducer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9d30, 0x243e0 bytes
    // win32kbase.sys .text:0xdad80, 0x27ef0 bytes
    // win32kbase.sys .text:0xc86d0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_client;
    
    // [SetEnvironment@PTPEngineTraceProducer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d35a0, 0x243e0 bytes
    // win32kbase.sys .text:0x21d7b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d1380, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_environment;
    
    // [TraceEnvironment@PTPEngineTraceProducer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d367c, 0x243e0 bytes
    // win32kbase.sys .text:0x21d864, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d145c, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) trace_environment;
};
#include "magic/api.end.hpp"
