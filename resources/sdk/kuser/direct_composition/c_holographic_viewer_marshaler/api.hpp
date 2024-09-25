#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_holographic_viewer_marshaler
{
    // [EmitInitialize@CHolographicViewerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f6a28, 0x243e0 bytes
    // win32kbase.sys .text:0x245358, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f47e8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_initialize;
    
    // [EmitUpdateCommands@CHolographicViewerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f6b50, 0x243e0 bytes
    // win32kbase.sys .text:0x245480, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f4910, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_update_commands;
    
    // [EmitUpdateFlags@CHolographicViewerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f6bac, 0x243e0 bytes
    // win32kbase.sys .text:0x2454dc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f496c, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_flags;
    
    // [EmitUpdateTargetFrameRate@CHolographicViewerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f6c10, 0x243e0 bytes
    // win32kbase.sys .text:0x245540, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f49d0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_target_frame_rate;
    
    // [SetBufferProperty@CHolographicViewerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f6c80, 0x243e0 bytes
    // win32kbase.sys .text:0x2455b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f4a40, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_buffer_property;
    
    // [SetHandleProperty@CHolographicViewerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f6d30, 0x243e0 bytes
    // win32kbase.sys .text:0x245660, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f4af0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_handle_property;
    
    // [SetIntegerProperty@CHolographicViewerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f6db0, 0x243e0 bytes
    // win32kbase.sys .text:0x2456e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f4b70, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CHolographicViewerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9af0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaaf0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8490, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
