#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_projected_shadow_scene_marshaler
{
    // [EmitAddCasters@CProjectedShadowSceneMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x34ac, 0x243e0 bytes
    // win32kbase.sys .text:0x6a70, 0x27ef0 bytes
    // win32kbase.sys .text:0x34ac, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_add_casters;
    
    // [EmitAddReceivers@CProjectedShadowSceneMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x33a8, 0x243e0 bytes
    // win32kbase.sys .text:0x696c, 0x27ef0 bytes
    // win32kbase.sys .text:0x33a8, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_add_receivers;
    
    // [EmitUpdateCommands@CProjectedShadowSceneMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2ed0, 0x243e0 bytes
    // win32kbase.sys .text:0x6520, 0x27ef0 bytes
    // win32kbase.sys .text:0x2ed0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CProjectedShadowSceneMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x48a0, 0x243e0 bytes
    // win32kbase.sys .text:0x6450, 0x27ef0 bytes
    // win32kbase.sys .text:0x48a0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) release_all_references;
    
    // [ReleaseResourceMarshalers@CProjectedShadowSceneMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4910, 0x243e0 bytes
    // win32kbase.sys .text:0x64b4, 0x27ef0 bytes
    // win32kbase.sys .text:0x4910, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_resource_marshalers;
    
    // [SetFloatProperty@CProjectedShadowSceneMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4c20, 0x243e0 bytes
    // win32kbase.sys .text:0x8670, 0x27ef0 bytes
    // win32kbase.sys .text:0x4c20, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_float_property;
    
    // [SetReferenceArrayProperty@CProjectedShadowSceneMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3a60, 0x243e0 bytes
    // win32kbase.sys .text:0x62b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x3a60, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_reference_array_property;
    
    // [SetReferenceProperty@CProjectedShadowSceneMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5310, 0x243e0 bytes
    // win32kbase.sys .text:0x8390, 0x27ef0 bytes
    // win32kbase.sys .text:0x5310, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CProjectedShadowSceneMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fece0, 0x243e0 bytes
    // win32kbase.sys .text:0x24e3a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fcab0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
