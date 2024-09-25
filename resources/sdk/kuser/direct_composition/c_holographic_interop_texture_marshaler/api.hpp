#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_holographic_interop_texture_marshaler
{
    // [EmitFlags@CHolographicInteropTextureMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5ba4, 0x243e0 bytes
    // win32kbase.sys .text:0x244484, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f3964, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_flags;
    
    // [EmitPosition@CHolographicInteropTextureMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5c14, 0x243e0 bytes
    // win32kbase.sys .text:0x2444f4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f39d4, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_position;
    
    // [EmitRootVisual@CHolographicInteropTextureMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5c98, 0x243e0 bytes
    // win32kbase.sys .text:0x244578, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f3a58, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_root_visual;
    
    // [EmitUpdateCommands@CHolographicInteropTextureMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5d20, 0x243e0 bytes
    // win32kbase.sys .text:0x244600, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f3ae0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CHolographicInteropTextureMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) initialize;
    
    // [ReleaseAllReferences@CHolographicInteropTextureMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5240, 0x243e0 bytes
    // win32kbase.sys .text:0x2446c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f3000, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) release_all_references;
    
    // [SetIntegerProperty@CHolographicInteropTextureMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5de0, 0x243e0 bytes
    // win32kbase.sys .text:0x2446f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f3ba0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CHolographicInteropTextureMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5e80, 0x243e0 bytes
    // win32kbase.sys .text:0x244790, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f3c40, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CHolographicInteropTextureMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5f20, 0x243e0 bytes
    // win32kbase.sys .text:0x244830, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f3ce0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
