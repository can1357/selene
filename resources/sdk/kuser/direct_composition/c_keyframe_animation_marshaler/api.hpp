#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_keyframe_animation_marshaler
{
    // [EmitAddExpressionResources@CKeyframeAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x62218, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) emit_add_expression_resources;
    
    // [GetType@CKeyframeAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x62870, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CKeyframeAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x62750, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) is_of_type;
    
    // [EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x62268, 0x1eb80 bytes
    // win32kbase.sys .text:0x79a5c, 0x243e0 bytes
    // win32kbase.sys .text:0xa9848, 0x27ef0 bytes
    // win32kbase.sys .text:0x677c, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_set_keyframe_data;
    
    // [EmitSetSeekState@CKeyframeAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x620c8, 0x1eb80 bytes
    // win32kbase.sys .text:0x79900, 0x243e0 bytes
    // win32kbase.sys .text:0xa96ec, 0x27ef0 bytes
    // win32kbase.sys .text:0x6620, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_set_seek_state;
    
    // [EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x61f90, 0x1eb80 bytes
    // win32kbase.sys .text:0x797c0, 0x243e0 bytes
    // win32kbase.sys .text:0xa9580, 0x27ef0 bytes
    // win32kbase.sys .text:0x64e0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_update_commands;
    
    // [EmitUpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x62180, 0x1eb80 bytes
    // win32kbase.sys .text:0x799bc, 0x243e0 bytes
    // win32kbase.sys .text:0xa97a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x66dc, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) emit_update_playback_state;
    
    // [GetFloatAnimatableProperty@CKeyframeAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeaa40, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f3c60, 0x243e0 bytes
    // win32kbase.sys .text:0x2428c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f1a20, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) get_float_animatable_property;
    
    // [IsPropertyAnimatable@CKeyframeAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x42f0, 0x1eb80 bytes
    // win32kbase.sys .text:0xbaec0, 0x243e0 bytes
    // win32kbase.sys .text:0xd4970, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4820, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) is_property_animatable;
    
    // [ReleaseAllReferences@CKeyframeAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x62770, 0x1eb80 bytes
    // win32kbase.sys .text:0xa5b60, 0x243e0 bytes
    // win32kbase.sys .text:0xa8910, 0x27ef0 bytes
    // win32kbase.sys .text:0x94b80, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x62510, 0x1eb80 bytes
    // win32kbase.sys .text:0xa77e0, 0x243e0 bytes
    // win32kbase.sys .text:0xb89b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x96f10, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_buffer_property;
    
    // [SetFloatProperty@CKeyframeAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x42a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x41a0, 0x243e0 bytes
    // win32kbase.sys .text:0x8770, 0x27ef0 bytes
    // win32kbase.sys .text:0x41a0, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_float_property;
    
    // [SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x625a0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa17a0, 0x243e0 bytes
    // win32kbase.sys .text:0xb3480, 0x27ef0 bytes
    // win32kbase.sys .text:0x90be0, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceArrayProperty@CKeyframeAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeaa60, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f3c80, 0x243e0 bytes
    // win32kbase.sys .text:0x2428f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f1a40, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) set_reference_array_property;
    
    // [SetReferenceProperty@CKeyframeAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x62390, 0x1eb80 bytes
    // win32kbase.sys .text:0xa60a0, 0x243e0 bytes
    // win32kbase.sys .text:0xb73b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x95230, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CKeyframeAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeab60, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f3db0, 0x243e0 bytes
    // win32kbase.sys .text:0x242a00, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f1b70, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) set_remarshaling_flags;
    
    // [UpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x62000, 0x1eb80 bytes
    // win32kbase.sys .text:0xa1bb4, 0x243e0 bytes
    // win32kbase.sys .text:0xb3890, 0x27ef0 bytes
    // win32kbase.sys .text:0x90ff4, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) update_playback_state;
};
#include "magic/api.end.hpp"
