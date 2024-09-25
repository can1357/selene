#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_super_wet_ink_visual_marshaler
{
    // [EmitSetSuperWetInkSourceCommand@CSuperWetInkVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e3718, 0x243e0 bytes
    // win32kbase.sys .text:0x23ba6c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e14d8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_set_super_wet_ink_source_command;
    
    // [EmitUpdateCommands@CSuperWetInkVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e4e30, 0x243e0 bytes
    // win32kbase.sys .text:0x23d350, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e2bf0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CSuperWetInkVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5cf0, 0x243e0 bytes
    // win32kbase.sys .text:0x23de10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e3ab0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) release_all_references;
    
    // [SetReferenceProperty@CSuperWetInkVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e81b0, 0x243e0 bytes
    // win32kbase.sys .text:0x23fdb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e5f70, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CSuperWetInkVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e8ee0, 0x243e0 bytes
    // win32kbase.sys .text:0x240c60, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e6ca0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
