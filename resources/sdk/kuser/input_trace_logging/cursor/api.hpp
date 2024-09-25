#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_trace_logging::cursor
{
    // [CursorApiToString@Cursor@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x23cd7c, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) cursor_api_to_string;
    
    // [SetCursorSuppression@Cursor@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1e87c8, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) set_cursor_suppression;
    
    // [CursorSuppressionState@Cursor@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x1ebc10, 0x1596d bytes
    // win32kfull.sys .text:0x1eba70, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) cursor_suppression_state;
    
    // [EnsureDpiCursor@Cursor@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d46e0, 0x1596d bytes
    // win32kfull.sys .text:0x1d1edc, 0x1659e bytes
    // win32kfull.sys .text:0x1d4580, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) ensure_dpi_cursor;
    
    // [SetCursorImage@Cursor@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2e008, 0x1596d bytes
    // win32kfull.sys .text:0xc6bb0, 0x1659e bytes
    // win32kfull.sys .text:0x2e418, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) set_cursor_image;
    
    // [UpdateBaseSize@Cursor@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d48fc, 0x1596d bytes
    // win32kfull.sys .text:0x1d209c, 0x1659e bytes
    // win32kfull.sys .text:0x1d479c, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) update_base_size;
};
#include "magic/api.end.hpp"
