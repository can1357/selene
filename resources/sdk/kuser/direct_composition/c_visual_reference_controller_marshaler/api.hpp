#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_visual_reference_controller_marshaler
{
    // [EmitUpdateCommands@CVisualReferenceControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb6dd0, 0x243e0 bytes
    // win32kbase.sys .text:0xcf9b0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb0cc0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CVisualReferenceControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa5b30, 0x243e0 bytes
    // win32kbase.sys .text:0xa8630, 0x27ef0 bytes
    // win32kbase.sys .text:0x94b50, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) release_all_references;
    
    // [SetReferenceProperty@CVisualReferenceControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa5a10, 0x243e0 bytes
    // win32kbase.sys .text:0xa7b30, 0x27ef0 bytes
    // win32kbase.sys .text:0x94a30, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CVisualReferenceControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1eeae0, 0x243e0 bytes
    // win32kbase.sys .text:0x233e90, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ec8a0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_remarshaling_flags;
    
    // [SetVisual@CVisualReferenceControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa5a8c, 0x243e0 bytes
    // win32kbase.sys .text:0xa7bac, 0x27ef0 bytes
    // win32kbase.sys .text:0x94aac, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_visual;
};
#include "magic/api.end.hpp"
