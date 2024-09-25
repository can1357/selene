#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_scene_model_transform_marshaler
{
    // [EmitSetTransformCommand@CSceneModelTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e3f40, 0x243e0 bytes
    // win32kbase.sys .text:0x23c304, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e1d00, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_set_transform_command;
    
    // [EmitUpdateCommands@CSceneModelTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e4c30, 0x243e0 bytes
    // win32kbase.sys .text:0x23d100, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e29f0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CSceneModelTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5c00, 0x243e0 bytes
    // win32kbase.sys .text:0x23dd20, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e39c0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) release_all_references;
    
    // [SetReferenceProperty@CSceneModelTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e7e30, 0x243e0 bytes
    // win32kbase.sys .text:0x23fa30, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e5bf0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CSceneModelTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e8df0, 0x243e0 bytes
    // win32kbase.sys .text:0x240b70, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e6bb0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
