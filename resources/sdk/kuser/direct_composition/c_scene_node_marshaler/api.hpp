#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_scene_node_marshaler
{
    // [EmitSetChildrenCommand@CSceneNodeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1e0550, 0x243e0 bytes
    // win32kbase.sys .text:0x1de310, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_set_children_command;
    
    // [EmitSetComponentsCommand@CSceneNodeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1e096c, 0x243e0 bytes
    // win32kbase.sys .text:0x1de72c, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_set_components_command;
    
    // [EmitSetTransformCommand@CSceneNodeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e3fc0, 0x243e0 bytes
    // win32kbase.sys .text:0x23c384, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e1d80, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_set_transform_command;
    
    // [EmitUpdateCommands@CSceneNodeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e4c50, 0x243e0 bytes
    // win32kbase.sys .text:0x23d120, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e2a10, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CSceneNodeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5c30, 0x243e0 bytes
    // win32kbase.sys .text:0x23dd50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e39f0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
    
    // [SetReferenceArrayProperty@CSceneNodeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e7040, 0x243e0 bytes
    // win32kbase.sys .text:0x23ebb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e4e00, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_reference_array_property;
    
    // [SetReferenceProperty@CSceneNodeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e7ee0, 0x243e0 bytes
    // win32kbase.sys .text:0x23fae0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e5ca0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CSceneNodeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e8e10, 0x243e0 bytes
    // win32kbase.sys .text:0x240b90, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e6bd0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
