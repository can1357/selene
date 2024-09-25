#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_render_target_target_marshaler
{
    // [EmitCreate@CRenderTargetTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7c530, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) emit_create;
    
    // [EmitUpdateCommands@CRenderTargetTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7c3d0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) emit_update_commands;
    
    // [EmitUpdateTransform@CRenderTargetTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7c430, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_transform;
    
    // [GetType@CRenderTargetTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7c6e0, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CRenderTargetTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7c6a0, 0x1eb80 bytes
    //
    _m4(sdk::unknown_ptr) is_of_type;
    
    // [SetBufferProperty@CRenderTargetTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7c4c0, 0x1eb80 bytes
    //
    _m5(sdk::unknown_ptr) set_buffer_property;
    
    // [SetHandleProperty@CRenderTargetTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7c680, 0x1eb80 bytes
    //
    _m6(sdk::unknown_ptr) set_handle_property;
    
    // [SetIntegerProperty@CRenderTargetTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7c620, 0x1eb80 bytes
    //
    _m7(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CRenderTargetTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xeb8e0, 0x1eb80 bytes
    //
    _m8(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
