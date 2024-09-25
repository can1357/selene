#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_redirect_visual_marshaler
{
    // [EmitUpdateCommands@CRedirectVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fbe80, 0x243e0 bytes
    // win32kbase.sys .text:0x24b1a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f9c50, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CRedirectVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5cf0, 0x243e0 bytes
    // win32kbase.sys .text:0x23de10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e3ab0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) release_all_references;
    
    // [SetReferenceProperty@CRedirectVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fbf20, 0x243e0 bytes
    // win32kbase.sys .text:0x24b240, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f9cf0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CRedirectVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fbfe0, 0x243e0 bytes
    // win32kbase.sys .text:0x24b300, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f9db0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
