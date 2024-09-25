#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_trace_logging::delivery
{
    // [CallDefaultInputHandler@Delivery@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x228d64, 0x1596d bytes
    // win32kfull.sys .text:0x224794, 0x1659e bytes
    // win32kfull.sys .text:0x228c24, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) call_default_input_handler;
    
    // [CallDelegateThread@Delivery@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e06cc, 0x1596d bytes
    // win32kfull.sys .text:0x1dde34, 0x1659e bytes
    // win32kfull.sys .text:0x1e0538, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) call_delegate_thread;
    
    // [CoalesceMessage@Delivery@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1962c0, 0x243e0 bytes
    // win32kfull.sys .text:0xc244c, 0x1659e bytes
    // win32kbase.sys .text:0x1946c8, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) coalesce_message;
    
    // [PostInputMessage@Delivery@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb019c, 0x1596d bytes
    // win32kfull.sys .text:0x3b5a0, 0x1659e bytes
    // win32kfull.sys .text:0xb0d0c, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) post_input_message;
    
    // [ScanSysQueue@Delivery@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb1550, 0x1596d bytes
    // win32kfull.sys .text:0x3b618, 0x1659e bytes
    // win32kfull.sys .text:0xb20c0, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) scan_sys_queue;
    
    // [UpdateISODState@Delivery@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1534, 0x243e0 bytes
    // win32kbase.sys .text:0x170c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1534, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) update_isod_state;
};
#include "magic/api.end.hpp"
