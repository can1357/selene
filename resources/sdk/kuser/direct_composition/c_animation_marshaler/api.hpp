#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_animation_marshaler
{
    // [EmitSetHandoff@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6da1c, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) emit_set_handoff;
    
    // [GetType@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6dec0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6df30, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) is_of_type;
    
    // [CalculateAnimationTimeState@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6d648, 0x1eb80 bytes
    // win32kbase.sys .text:0xb1480, 0x243e0 bytes
    // win32kbase.sys .text:0xc9b64, 0x27ef0 bytes
    // win32kbase.sys .text:0xa7910, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) calculate_animation_time_state;
    
    // [EmitAddTimeEvents@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6d78c, 0x1eb80 bytes
    // win32kbase.sys .text:0xaad70, 0x243e0 bytes
    // win32kbase.sys .text:0xc1e70, 0x27ef0 bytes
    // win32kbase.sys .text:0xa0880, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_add_time_events;
    
    // [EmitBeginTime@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6db88, 0x1eb80 bytes
    // win32kbase.sys .text:0xaaff4, 0x243e0 bytes
    // win32kbase.sys .text:0xc20f4, 0x27ef0 bytes
    // win32kbase.sys .text:0xa0b04, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_begin_time;
    
    // [EmitClearTimeEvents@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6d878, 0x1eb80 bytes
    // win32kbase.sys .text:0xaadc4, 0x243e0 bytes
    // win32kbase.sys .text:0xc1ec4, 0x27ef0 bytes
    // win32kbase.sys .text:0xa08d4, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) emit_clear_time_events;
    
    // [EmitSetInstance@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6d8d4, 0x1eb80 bytes
    // win32kbase.sys .text:0xaadec, 0x243e0 bytes
    // win32kbase.sys .text:0xc1eec, 0x27ef0 bytes
    // win32kbase.sys .text:0xa08fc, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) emit_set_instance;
    
    // [EmitSetPaused@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6d9b4, 0x1eb80 bytes
    // win32kbase.sys .text:0xaaee4, 0x243e0 bytes
    // win32kbase.sys .text:0xc1fe4, 0x27ef0 bytes
    // win32kbase.sys .text:0xa09f4, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) emit_set_paused;
    
    // [EmitSetPrimitives@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6daf8, 0x1eb80 bytes
    // win32kbase.sys .text:0xaaf58, 0x243e0 bytes
    // win32kbase.sys .text:0xc2058, 0x27ef0 bytes
    // win32kbase.sys .text:0xa0a68, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) emit_set_primitives;
    
    // [EmitSetSeek@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6d938, 0x1eb80 bytes
    // win32kbase.sys .text:0xaae5c, 0x243e0 bytes
    // win32kbase.sys .text:0xc1f5c, 0x27ef0 bytes
    // win32kbase.sys .text:0xa096c, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) emit_set_seek;
    
    // [EmitUpdateCommands@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6d520, 0x1eb80 bytes
    // win32kbase.sys .text:0xaac70, 0x243e0 bytes
    // win32kbase.sys .text:0xc1d70, 0x27ef0 bytes
    // win32kbase.sys .text:0xa0780, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) emit_update_commands;
    
    // [EnsureTimeListEntry@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6d6fc, 0x1eb80 bytes
    // win32kbase.sys .text:0xaccb8, 0x243e0 bytes
    // win32kbase.sys .text:0xc3c64, 0x27ef0 bytes
    // win32kbase.sys .text:0xa3428, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) ensure_time_list_entry;
    
    // [GetAnimationTime@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6dc98, 0x1eb80 bytes
    // win32kbase.sys .text:0x1df2f8, 0x243e0 bytes
    // win32kbase.sys .text:0x22d84c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dd0b8, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) get_animation_time;
    
    // [GetAnimationTimeState@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6ddd4, 0x1eb80 bytes
    // win32kbase.sys .text:0x1df360, 0x243e0 bytes
    // win32kbase.sys .text:0x22d8b4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dd120, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) get_animation_time_state;
    
    // [GetExpressionType@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f4b0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9db0, 0x243e0 bytes
    // win32kbase.sys .text:0xdae50, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8750, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) get_expression_type;
    
    // [HasEnded@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6dcec, 0x1eb80 bytes
    // win32kbase.sys .text:0xb1e44, 0x243e0 bytes
    // win32kbase.sys .text:0xcad14, 0x27ef0 bytes
    // win32kbase.sys .text:0xa854, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) has_ended;
    
    // [Initialize@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6de90, 0x1eb80 bytes
    // win32kbase.sys .text:0xacb10, 0x243e0 bytes
    // win32kbase.sys .text:0xc3ac0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa3280, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) initialize;
    
    // [ReleaseAllReferences@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6ded0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb60d0, 0x243e0 bytes
    // win32kbase.sys .text:0xcf290, 0x27ef0 bytes
    // win32kbase.sys .text:0xafa10, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6dfc0, 0x1eb80 bytes
    // win32kbase.sys .text:0xacb40, 0x243e0 bytes
    // win32kbase.sys .text:0xc3af0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa32b0, 0x243e0 bytes
    //
    _n9(sdk::unknown_ptr) set_buffer_property;
    
    // [SetCallbackId@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6e230, 0x1eb80 bytes
    // win32kbase.sys .text:0x1df450, 0x243e0 bytes
    // win32kbase.sys .text:0x22d9a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dd210, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) set_callback_id;
    
    // [SetFloatProperty@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6e1d0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc0fb0, 0x243e0 bytes
    // win32kbase.sys .text:0xd7c90, 0x27ef0 bytes
    // win32kbase.sys .text:0xba6e0, 0x243e0 bytes
    //
    _o1(sdk::unknown_ptr) set_float_property;
    
    // [SetIntegerProperty@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6df40, 0x1eb80 bytes
    // win32kbase.sys .text:0xb34d0, 0x243e0 bytes
    // win32kbase.sys .text:0xccc70, 0x27ef0 bytes
    // win32kbase.sys .text:0xabb40, 0x243e0 bytes
    //
    _o2(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6e250, 0x1eb80 bytes
    // win32kbase.sys .text:0xb4260, 0x243e0 bytes
    // win32kbase.sys .text:0xcdd50, 0x27ef0 bytes
    // win32kbase.sys .text:0xac560, 0x243e0 bytes
    //
    _o3(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xee500, 0x1eb80 bytes
    // win32kbase.sys .text:0x1df480, 0x243e0 bytes
    // win32kbase.sys .text:0x22d9d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dd240, 0x243e0 bytes
    //
    _o4(sdk::unknown_ptr) set_remarshaling_flags;
    
    // [UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6dd44, 0x1eb80 bytes
    // win32kbase.sys .text:0xb13f0, 0x243e0 bytes
    // win32kbase.sys .text:0xc9ad4, 0x27ef0 bytes
    // win32kbase.sys .text:0xa7880, 0x243e0 bytes
    //
    _o5(sdk::unknown_ptr) update_animation_time_state;
};
#include "magic/api.end.hpp"
