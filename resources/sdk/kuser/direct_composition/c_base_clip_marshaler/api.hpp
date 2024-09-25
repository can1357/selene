#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_base_clip_marshaler
{
    // [EmitUpdateCommands@CBaseClipMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6bcf0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [GetType@CBaseClipMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f510, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CBaseClipMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6bcd0, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) is_of_type;
    
    // [ReleaseAllReferences@CBaseClipMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6bd40, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) release_all_references;
    
    // [SetReferenceProperty@CBaseClipMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xee100, 0x1eb80 bytes
    //
    _m4(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CBaseClipMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xee1a0, 0x1eb80 bytes
    //
    _m5(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
