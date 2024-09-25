#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_holographic_display_marshaler
{
    // [EmitCreate@CHolographicDisplayMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f58e8, 0x243e0 bytes
    // win32kbase.sys .text:0x2441c8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f36a8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_create;
    
    // [EmitDebugOverlayFlags@CHolographicDisplayMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5960, 0x243e0 bytes
    // win32kbase.sys .text:0x244240, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f3720, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_debug_overlay_flags;
    
    // [EmitFlags@CHolographicDisplayMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f59d0, 0x243e0 bytes
    // win32kbase.sys .text:0x2442b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f3790, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_flags;
    
    // [EmitUpdateCommands@CHolographicDisplayMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5a40, 0x243e0 bytes
    // win32kbase.sys .text:0x244320, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f3800, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [SetBufferProperty@CHolographicDisplayMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5af0, 0x243e0 bytes
    // win32kbase.sys .text:0x2443d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f38b0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_buffer_property;
    
    // [SetIntegerProperty@CHolographicDisplayMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5b60, 0x243e0 bytes
    // win32kbase.sys .text:0x244440, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f3920, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CHolographicDisplayMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xca050, 0x243e0 bytes
    // win32kbase.sys .text:0xdb100, 0x27ef0 bytes
    // win32kbase.sys .text:0xc89f0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
