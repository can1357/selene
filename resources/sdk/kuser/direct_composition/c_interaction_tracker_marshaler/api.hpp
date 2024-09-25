#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_interaction_tracker_marshaler
{
    // [EmitSetRequestedPositionDelta@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xec6cc, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) emit_set_requested_position_delta;
    
    // [GetType@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f850, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xeca60, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) is_of_type;
    
    // [EmitDwmRestartCompleted@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f7d2c, 0x243e0 bytes
    // win32kbase.sys .text:0x246748, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f5aec, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_dwm_restart_completed;
    
    // [EmitSetInertiaCenterpointAnimations@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f7ee8, 0x243e0 bytes
    // win32kbase.sys .text:0x246904, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f5ca8, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_set_inertia_centerpoint_animations;
    
    // [EmitSetRequestedDeltaPosition@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f8538, 0x243e0 bytes
    // win32kbase.sys .text:0x246f64, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f62f8, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_set_requested_delta_position;
    
    // [EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f85fc, 0x243e0 bytes
    // win32kbase.sys .text:0x247028, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f63bc, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) emit_set_requested_in_order;
    
    // [SetBindingManagerMarshaler@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f8d68, 0x243e0 bytes
    // win32kbase.sys .text:0x2477c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f6b28, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_binding_manager_marshaler;
    
    // [SetInertiaCenterpoint@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f94dc, 0x243e0 bytes
    // win32kbase.sys .text:0x2480e8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f728c, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_inertia_centerpoint;
    
    // [EmitApplyPositionImpulse@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xebcb4, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f79e8, 0x243e0 bytes
    // win32kbase.sys .text:0x246404, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f57a8, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) emit_apply_position_impulse;
    
    // [EmitApplyPositionShift@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xebd40, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f7a80, 0x243e0 bytes
    // win32kbase.sys .text:0x24649c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f5840, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) emit_apply_position_shift;
    
    // [EmitApplyScaleImpulse@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xebec8, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f7be4, 0x243e0 bytes
    // win32kbase.sys .text:0x246600, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f59a4, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) emit_apply_scale_impulse;
    
    // [EmitConfigureInternalProperties@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xebf5c, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f7c88, 0x243e0 bytes
    // win32kbase.sys .text:0x2466a4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f5a48, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) emit_configure_internal_properties;
    
    // [EmitDwmStarted@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xebfe4, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f7da0, 0x243e0 bytes
    // win32kbase.sys .text:0x2467bc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f5b60, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) emit_dwm_started;
    
    // [EmitSetCallbackPropertyIdSet@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xec05c, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f7e64, 0x243e0 bytes
    // win32kbase.sys .text:0x246880, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f5c24, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) emit_set_callback_property_id_set;
    
    // [EmitSetInertiaDecayRates@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xec0d4, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f7fe8, 0x243e0 bytes
    // win32kbase.sys .text:0x246a14, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f5da8, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) emit_set_inertia_decay_rates;
    
    // [EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xec160, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f8080, 0x243e0 bytes
    // win32kbase.sys .text:0x246aac, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f5e40, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) emit_set_inertia_modifier_animations;
    
    // [EmitSetManipulations@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xec234, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f815c, 0x243e0 bytes
    // win32kbase.sys .text:0x246b88, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f5f1c, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) emit_set_manipulations;
    
    // [EmitSetMaxPosition@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xec3e8, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f8328, 0x243e0 bytes
    // win32kbase.sys .text:0x246d54, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f60e8, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) emit_set_max_position;
    
    // [EmitSetMaxScale@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xec460, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f83ac, 0x243e0 bytes
    // win32kbase.sys .text:0x246dd8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f616c, 0x243e0 bytes
    //
    _n9(sdk::unknown_ptr) emit_set_max_scale;
    
    // [EmitSetMinPosition@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xec4d4, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f8430, 0x243e0 bytes
    // win32kbase.sys .text:0x246e5c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f61f0, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) emit_set_min_position;
    
    // [EmitSetMinScale@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xec54c, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f84b4, 0x243e0 bytes
    // win32kbase.sys .text:0x246ee0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f6274, 0x243e0 bytes
    //
    _o1(sdk::unknown_ptr) emit_set_min_scale;
    
    // [EmitSetRequestedPosition@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xec5c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f8694, 0x243e0 bytes
    // win32kbase.sys .text:0x2470c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f6454, 0x243e0 bytes
    //
    _o2(sdk::unknown_ptr) emit_set_requested_position;
    
    // [EmitSetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xec644, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f8750, 0x243e0 bytes
    // win32kbase.sys .text:0x247184, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f6510, 0x243e0 bytes
    //
    _o3(sdk::unknown_ptr) emit_set_requested_position_animation;
    
    // [EmitSetRequestedScale@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xec758, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f8854, 0x243e0 bytes
    // win32kbase.sys .text:0x247288, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f6614, 0x243e0 bytes
    //
    _o4(sdk::unknown_ptr) emit_set_requested_scale;
    
    // [EmitSetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xec7f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f88f8, 0x243e0 bytes
    // win32kbase.sys .text:0x24732c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f66b8, 0x243e0 bytes
    //
    _o5(sdk::unknown_ptr) emit_set_requested_scale_animation;
    
    // [EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xec890, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f8a10, 0x243e0 bytes
    // win32kbase.sys .text:0x247450, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f67d0, 0x243e0 bytes
    //
    _o6(sdk::unknown_ptr) emit_update_commands;
    
    // [GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeca3c, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f8b78, 0x243e0 bytes
    // win32kbase.sys .text:0x2475b8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f6938, 0x243e0 bytes
    //
    _o7(sdk::unknown_ptr) get_inertia_modifier_marshaler_flag;
    
    // [ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeca70, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f8bc0, 0x243e0 bytes
    // win32kbase.sys .text:0x247600, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f6980, 0x243e0 bytes
    //
    _o8(sdk::unknown_ptr) release_all_references;
    
    // [ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xecb18, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f8cc4, 0x243e0 bytes
    // win32kbase.sys .text:0x247710, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f6a84, 0x243e0 bytes
    //
    _o9(sdk::unknown_ptr) release_manipulation_references;
    
    // [SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xecbc0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f8dd0, 0x243e0 bytes
    // win32kbase.sys .text:0x247820, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f6b90, 0x243e0 bytes
    //
    _p0(sdk::unknown_ptr) set_buffer_property;
    
    // [SetFloatProperty@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xecf40, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f9170, 0x243e0 bytes
    // win32kbase.sys .text:0x247d60, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f6f20, 0x243e0 bytes
    //
    _p1(sdk::unknown_ptr) set_float_property;
    
    // [SetIntegerProperty@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xed290, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f95b0, 0x243e0 bytes
    // win32kbase.sys .text:0x2481c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f7360, 0x243e0 bytes
    //
    _p2(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xed350, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f9700, 0x243e0 bytes
    // win32kbase.sys .text:0x248310, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f74b0, 0x243e0 bytes
    //
    _p3(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xed490, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f9900, 0x243e0 bytes
    // win32kbase.sys .text:0x248510, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f76b0, 0x243e0 bytes
    //
    _p4(sdk::unknown_ptr) set_remarshaling_flags;
    
    // [SetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xed50c, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f99d0, 0x243e0 bytes
    // win32kbase.sys .text:0x2485e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f7780, 0x243e0 bytes
    //
    _p5(sdk::unknown_ptr) set_requested_position_animation;
    
    // [SetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xed5c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f9a8c, 0x243e0 bytes
    // win32kbase.sys .text:0x24869c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f783c, 0x243e0 bytes
    //
    _p6(sdk::unknown_ptr) set_requested_scale_animation;
};
#include "magic/api.end.hpp"
