#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_clip_group_marshaler
{
    // [GetType@CClipGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f550, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CClipGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe85e0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitUpdateCommands@CClipGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xee1c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f20f0, 0x243e0 bytes
    // win32kbase.sys .text:0x237790, 0x27ef0 bytes
    // win32kbase.sys .text:0x1efeb0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CClipGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xee2d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ef8c0, 0x243e0 bytes
    // win32kbase.sys .text:0x234ea0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ed680, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) release_all_references;
    
    // [SetReferenceArrayProperty@CClipGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xee330, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f2210, 0x243e0 bytes
    // win32kbase.sys .text:0x2378b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1effd0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_reference_array_property;
    
    // [SetRemarshalingFlags@CClipGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xee420, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f2300, 0x243e0 bytes
    // win32kbase.sys .text:0x237990, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f00c0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
