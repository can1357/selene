#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_conditional_expression_marshaler
{
    // [GetType@CConditionalExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f5e0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CConditionalExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe86a0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitAddConditionAnimationResources@CConditionalExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf0208, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f3e40, 0x243e0 bytes
    // win32kbase.sys .text:0x242a90, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f1c00, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_add_condition_animation_resources;
    
    // [EmitSetDefaultAnimation@CConditionalExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf0330, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f3f9c, 0x243e0 bytes
    // win32kbase.sys .text:0x242bec, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f1d5c, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_set_default_animation;
    
    // [EmitSetSelection@CConditionalExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf03ac, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f4030, 0x243e0 bytes
    // win32kbase.sys .text:0x242c80, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f1df0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_set_selection;
    
    // [EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf0420, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f40c0, 0x243e0 bytes
    // win32kbase.sys .text:0x242d10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f1e80, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CConditionalExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf0490, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f4130, 0x243e0 bytes
    // win32kbase.sys .text:0x242d80, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f1ef0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) release_all_references;
    
    // [SetIntegerProperty@CConditionalExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf0510, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f41d0, 0x243e0 bytes
    // win32kbase.sys .text:0x242e30, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f1f90, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceArrayProperty@CConditionalExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf0540, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f4220, 0x243e0 bytes
    // win32kbase.sys .text:0x242e80, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f1fe0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_reference_array_property;
    
    // [SetReferenceProperty@CConditionalExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf0620, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f4340, 0x243e0 bytes
    // win32kbase.sys .text:0x242f80, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f2100, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CConditionalExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf06b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f4400, 0x243e0 bytes
    // win32kbase.sys .text:0x243040, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f21c0, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
