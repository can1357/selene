#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_animation_trigger_marshaler
{
    // [GetType@CAnimationTriggerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839d0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CAnimationTriggerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8560, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [SetBufferProperty@CAnimationTriggerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf1c30, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) set_buffer_property;
    
    // [EmitSetAnimationsCommand@CAnimationTriggerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1df8fc, 0x243e0 bytes
    // win32kbase.sys .text:0x1dd6bc, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_set_animations_command;
    
    // [EmitSetConditionCommand@CAnimationTriggerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e0abc, 0x243e0 bytes
    // win32kbase.sys .text:0x238e54, 0x27ef0 bytes
    // win32kbase.sys .text:0x1de87c, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_set_condition_command;
    
    // [ReleaseAllReferences@CAnimationTriggerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5860, 0x243e0 bytes
    // win32kbase.sys .text:0x23d960, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e3620, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) release_all_references;
    
    // [SetReferenceArrayProperty@CAnimationTriggerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e6f60, 0x243e0 bytes
    // win32kbase.sys .text:0x23ead0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e4d20, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_reference_array_property;
    
    // [SetReferenceProperty@CAnimationTriggerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e7220, 0x243e0 bytes
    // win32kbase.sys .text:0x23ed70, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e4fe0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_reference_property;
    
    // [EmitUpdateCommands@CAnimationTriggerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf1bc0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e4240, 0x243e0 bytes
    // win32kbase.sys .text:0x23c500, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e2000, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) emit_update_commands;
    
    // [SetRemarshalingFlags@CAnimationTriggerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf1c80, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e8480, 0x243e0 bytes
    // win32kbase.sys .text:0x240130, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e6240, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
