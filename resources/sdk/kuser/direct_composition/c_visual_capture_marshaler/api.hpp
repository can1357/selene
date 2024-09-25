#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_visual_capture_marshaler
{
    // [EmitUpdateCommands@CVisualCaptureMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fbb50, 0x243e0 bytes
    // win32kbase.sys .text:0x24ae50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f9920, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CVisualCaptureMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fbc20, 0x243e0 bytes
    // win32kbase.sys .text:0x24af20, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f99f0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
    
    // [ReleaseAllReferences@CVisualCaptureMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fbc40, 0x243e0 bytes
    // win32kbase.sys .text:0x24af40, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f9a10, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) release_all_references;
    
    // [SetFloatProperty@CVisualCaptureMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fbcb0, 0x243e0 bytes
    // win32kbase.sys .text:0x24afb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f9a80, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_float_property;
    
    // [SetIntegerProperty@CVisualCaptureMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fbce0, 0x243e0 bytes
    // win32kbase.sys .text:0x24aff0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f9ab0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CVisualCaptureMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fbd40, 0x243e0 bytes
    // win32kbase.sys .text:0x24b060, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f9b10, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CVisualCaptureMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9af0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaaf0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8490, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
