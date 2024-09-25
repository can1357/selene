#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_sprite_shape_marshaler
{
    // [EmitUpdateCommands@CSpriteShapeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f0cd0, 0x243e0 bytes
    // win32kbase.sys .text:0x236250, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eea90, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CSpriteShapeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f0ea0, 0x243e0 bytes
    // win32kbase.sys .text:0x236420, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eec60, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
    
    // [ReleaseAllReferences@CSpriteShapeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f0ec0, 0x243e0 bytes
    // win32kbase.sys .text:0x236440, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eec80, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CSpriteShapeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f0f30, 0x243e0 bytes
    // win32kbase.sys .text:0x2364b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eecf0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_buffer_property;
    
    // [SetFloatProperty@CSpriteShapeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f0ff0, 0x243e0 bytes
    // win32kbase.sys .text:0x236580, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eedb0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_float_property;
    
    // [SetIntegerProperty@CSpriteShapeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f1040, 0x243e0 bytes
    // win32kbase.sys .text:0x2365e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eee00, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CSpriteShapeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f10e0, 0x243e0 bytes
    // win32kbase.sys .text:0x236680, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eeea0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CSpriteShapeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f11e0, 0x243e0 bytes
    // win32kbase.sys .text:0x236780, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eefa0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
