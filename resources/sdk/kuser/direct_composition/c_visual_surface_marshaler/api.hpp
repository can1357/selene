#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_visual_surface_marshaler
{
    // [EmitUpdateCommands@CVisualSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f3490, 0x243e0 bytes
    // win32kbase.sys .text:0x241fb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f1250, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CVisualSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f35c0, 0x243e0 bytes
    // win32kbase.sys .text:0x2420e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f1380, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
    
    // [ReleaseAllReferences@CVisualSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f35e0, 0x243e0 bytes
    // win32kbase.sys .text:0x242100, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f13a0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CVisualSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f3610, 0x243e0 bytes
    // win32kbase.sys .text:0x242130, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f13d0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_buffer_property;
    
    // [SetIntegerProperty@CVisualSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f36b0, 0x243e0 bytes
    // win32kbase.sys .text:0x2421d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f1470, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CVisualSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f3710, 0x243e0 bytes
    // win32kbase.sys .text:0x242230, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f14d0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CVisualSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f37d0, 0x243e0 bytes
    // win32kbase.sys .text:0x2422f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f1590, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
