#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_scene_mesh_renderer_component_marshaler
{
    // [EmitUpdateCommands@CSceneMeshRendererComponentMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fffe0, 0x243e0 bytes
    // win32kbase.sys .text:0x24f120, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fddb0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CSceneMeshRendererComponentMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x200090, 0x243e0 bytes
    // win32kbase.sys .text:0x24f1d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fde60, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CSceneMeshRendererComponentMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2000e0, 0x243e0 bytes
    // win32kbase.sys .text:0x24f220, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fdeb0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_buffer_property;
    
    // [SetReferenceProperty@CSceneMeshRendererComponentMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2001b0, 0x243e0 bytes
    // win32kbase.sys .text:0x24f300, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fdf80, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CSceneMeshRendererComponentMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2002b0, 0x243e0 bytes
    // win32kbase.sys .text:0x24f400, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fe080, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
