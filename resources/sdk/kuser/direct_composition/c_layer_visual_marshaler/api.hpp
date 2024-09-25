#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_layer_visual_marshaler
{
    // [EmitUpdateCommands@CLayerVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7b970, 0x243e0 bytes
    // win32kbase.sys .text:0xc1c20, 0x27ef0 bytes
    // win32kbase.sys .text:0x5f60, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CLayerVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa2e20, 0x243e0 bytes
    // win32kbase.sys .text:0xadd60, 0x27ef0 bytes
    // win32kbase.sys .text:0x92330, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) release_all_references;
    
    // [SetIntegerProperty@CLayerVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb5c20, 0x243e0 bytes
    // win32kbase.sys .text:0xcd5d0, 0x27ef0 bytes
    // win32kbase.sys .text:0xaf2a0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CLayerVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3ed0, 0x243e0 bytes
    // win32kbase.sys .text:0x92f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x3ed0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CLayerVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1eebe0, 0x243e0 bytes
    // win32kbase.sys .text:0x2340a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ec9a0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
