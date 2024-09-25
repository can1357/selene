#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_scene_visual_marshaler
{
    // [EmitSetRootCommand@CSceneVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e3064, 0x243e0 bytes
    // win32kbase.sys .text:0x23b53c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e0e24, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_set_root_command;
    
    // [EmitUpdateCommands@CSceneVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e4d60, 0x243e0 bytes
    // win32kbase.sys .text:0x23d280, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e2b20, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CSceneVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5cf0, 0x243e0 bytes
    // win32kbase.sys .text:0x23de10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e3ab0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) release_all_references;
    
    // [SetReferenceProperty@CSceneVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e80f0, 0x243e0 bytes
    // win32kbase.sys .text:0x23fcf0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e5eb0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CSceneVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e8ee0, 0x243e0 bytes
    // win32kbase.sys .text:0x240c60, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e6ca0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
