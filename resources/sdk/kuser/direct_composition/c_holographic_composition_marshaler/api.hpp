#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_holographic_composition_marshaler
{
    // [EmitCreate@CHolographicCompositionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f6768, 0x243e0 bytes
    // win32kbase.sys .text:0x245098, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f4528, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_create;
    
    // [EmitSetQualityLevel@CHolographicCompositionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f67e8, 0x243e0 bytes
    // win32kbase.sys .text:0x245118, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f45a8, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_set_quality_level;
    
    // [EmitUpdateCommands@CHolographicCompositionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f6860, 0x243e0 bytes
    // win32kbase.sys .text:0x245190, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f4620, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_commands;
    
    // [SetBufferProperty@CHolographicCompositionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f6900, 0x243e0 bytes
    // win32kbase.sys .text:0x245230, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f46c0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_buffer_property;
    
    // [SetIntegerProperty@CHolographicCompositionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f6950, 0x243e0 bytes
    // win32kbase.sys .text:0x245280, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f4710, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CHolographicCompositionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f69a0, 0x243e0 bytes
    // win32kbase.sys .text:0x2452d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f4760, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
