#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_render_target_group_marshaler
{
    // [EmitUpdateCommands@CRenderTargetGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7c150, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [GetType@CRenderTargetGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7c3c0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CRenderTargetGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7c320, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) is_of_type;
    
    // [ReleaseAllReferences@CRenderTargetGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7c330, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) release_all_references;
    
    // [SetReferenceArrayProperty@CRenderTargetGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7c240, 0x1eb80 bytes
    //
    _m4(sdk::unknown_ptr) set_reference_array_property;
    
    // [SetRemarshalingFlags@CRenderTargetGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xee4f0, 0x1eb80 bytes
    //
    _m5(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
