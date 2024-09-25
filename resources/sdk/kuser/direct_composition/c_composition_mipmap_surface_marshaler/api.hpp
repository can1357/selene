#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_composition_mipmap_surface_marshaler
{
    // [EmitSurfaces@CCompositionMipmapSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ff8c0, 0x243e0 bytes
    // win32kbase.sys .text:0x24e8b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fd690, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_surfaces;
    
    // [EmitUpdateCommands@CCompositionMipmapSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ffa20, 0x243e0 bytes
    // win32kbase.sys .text:0x24ea10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fd7f0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CCompositionMipmapSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ffa90, 0x243e0 bytes
    // win32kbase.sys .text:0x24ea80, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fd860, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CCompositionMipmapSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ffb00, 0x243e0 bytes
    // win32kbase.sys .text:0x24eaf0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fd8d0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_buffer_property;
    
    // [SetIntegerProperty@CCompositionMipmapSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ffc80, 0x243e0 bytes
    // win32kbase.sys .text:0x24edc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fda50, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CCompositionMipmapSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ffcb0, 0x243e0 bytes
    // win32kbase.sys .text:0x24edf0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fda80, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CCompositionMipmapSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ffd80, 0x243e0 bytes
    // win32kbase.sys .text:0x24eec0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fdb50, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
