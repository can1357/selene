#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_sprite_visual_marshaler
{
    // [GetDefaultBorderMode@CSpriteVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_default_border_mode;
    
    // [GetType@CSpriteVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f710, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CSpriteVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8880, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) is_of_type;
    
    // [EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeecd0, 0x1eb80 bytes
    // win32kbase.sys .text:0x77250, 0x243e0 bytes
    // win32kbase.sys .text:0x285e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8b40, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CSpriteVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeed50, 0x1eb80 bytes
    // win32kbase.sys .text:0xa2ec0, 0x243e0 bytes
    // win32kbase.sys .text:0xaded0, 0x27ef0 bytes
    // win32kbase.sys .text:0x923d0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
    
    // [SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeedb0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9f550, 0x243e0 bytes
    // win32kbase.sys .text:0x28060, 0x27ef0 bytes
    // win32kbase.sys .text:0x8e340, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CSpriteVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeeeb0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eeb00, 0x243e0 bytes
    // win32kbase.sys .text:0x233f40, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ec8c0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
