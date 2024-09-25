#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_visual_marshaler
{
    // [GetDefaultBorderMode@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6a150, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_default_border_mode;
    
    // [GetType@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6af10, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6abb0, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) is_of_type;
    
    // [SetOffsetHelper@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xb4a88, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) set_offset_helper;
    
    // [SetRelativeOffsetHelper@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x233984, 0x27ef0 bytes
    //
    _m4(sdk::unknown_ptr) set_relative_offset_helper;
    
    // [SetRelativeSizeHelper@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xb4c84, 0x27ef0 bytes
    //
    _m5(sdk::unknown_ptr) set_relative_size_helper;
    
    // [SetSizeHelper@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xb4a24, 0x27ef0 bytes
    //
    _m6(sdk::unknown_ptr) set_size_helper;
    
    // [SetVisible@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xea39c, 0x1eb80 bytes
    //
    _m7(sdk::unknown_ptr) set_visible;
    
    // [EmitVisible@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x77b30, 0x243e0 bytes
    // win32kbase.sys .text:0x28bb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x9420, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) emit_visible;
    
    // [EmitWindowBackgroundTreatment@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x77f64, 0x243e0 bytes
    // win32kbase.sys .text:0x28fdc, 0x27ef0 bytes
    // win32kbase.sys .text:0x9854, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) emit_window_background_treatment;
    
    // [SetHeatMapColorHelper@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ee650, 0x243e0 bytes
    // win32kbase.sys .text:0x23392c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ec410, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_heat_map_color_helper;
    
    // [SetReferenceArrayProperty@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa30a0, 0x243e0 bytes
    // win32kbase.sys .text:0xc1450, 0x27ef0 bytes
    // win32kbase.sys .text:0x925b0, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_reference_array_property;
    
    // [UnlinkVisualChildInternal@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x6a484, 0x1eb80 bytes
    // win32kbase.sys .text:0xa0d88, 0x243e0 bytes
    // win32kbase.sys .text:0x8f908, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) unlink_visual_child_internal;
    
    // [AddChild@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6a320, 0x1eb80 bytes
    // win32kbase.sys .text:0xa5930, 0x243e0 bytes
    // win32kbase.sys .text:0x2b340, 0x27ef0 bytes
    // win32kbase.sys .text:0x94950, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) add_child;
    
    // [DetachFromParent@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6a160, 0x1eb80 bytes
    // win32kbase.sys .text:0xa9af0, 0x243e0 bytes
    // win32kbase.sys .text:0xb9240, 0x27ef0 bytes
    // win32kbase.sys .text:0x9f300, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) detach_from_parent;
    
    // [DiscardPendingChildRemoves@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6acd8, 0x1eb80 bytes
    // win32kbase.sys .text:0x765b8, 0x243e0 bytes
    // win32kbase.sys .text:0xb6a68, 0x27ef0 bytes
    // win32kbase.sys .text:0x9e258, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) discard_pending_child_removes;
    
    // [Disconnect@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6acd0, 0x1eb80 bytes
    // win32kbase.sys .text:0xbdf90, 0x243e0 bytes
    // win32kbase.sys .text:0xb6990, 0x27ef0 bytes
    // win32kbase.sys .text:0x9e180, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) disconnect;
    
    // [EmitClip@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6994c, 0x1eb80 bytes
    // win32kbase.sys .text:0x77edc, 0x243e0 bytes
    // win32kbase.sys .text:0x28f54, 0x27ef0 bytes
    // win32kbase.sys .text:0x97cc, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) emit_clip;
    
    // [EmitContent@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x698d8, 0x1eb80 bytes
    // win32kbase.sys .text:0x77e54, 0x243e0 bytes
    // win32kbase.sys .text:0x28ecc, 0x27ef0 bytes
    // win32kbase.sys .text:0x9744, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) emit_content;
    
    // [EmitEffect@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x699c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x77fec, 0x243e0 bytes
    // win32kbase.sys .text:0x29064, 0x27ef0 bytes
    // win32kbase.sys .text:0x98dc, 0x243e0 bytes
    //
    _n9(sdk::unknown_ptr) emit_effect;
    
    // [EmitInsertChildren@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x69d9c, 0x1eb80 bytes
    // win32kbase.sys .text:0x78378, 0x243e0 bytes
    // win32kbase.sys .text:0x293f4, 0x27ef0 bytes
    // win32kbase.sys .text:0x9c68, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) emit_insert_children;
    
    // [EmitInteraction@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x69864, 0x1eb80 bytes
    // win32kbase.sys .text:0x77c1c, 0x243e0 bytes
    // win32kbase.sys .text:0x28ca0, 0x27ef0 bytes
    // win32kbase.sys .text:0x950c, 0x243e0 bytes
    //
    _o1(sdk::unknown_ptr) emit_interaction;
    
    // [EmitOffset@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x69cac, 0x1eb80 bytes
    // win32kbase.sys .text:0x782f8, 0x243e0 bytes
    // win32kbase.sys .text:0x29374, 0x27ef0 bytes
    // win32kbase.sys .text:0x9be8, 0x243e0 bytes
    //
    _o2(sdk::unknown_ptr) emit_offset;
    
    // [EmitOpacity@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6967c, 0x1eb80 bytes
    // win32kbase.sys .text:0x77ba8, 0x243e0 bytes
    // win32kbase.sys .text:0x28c2c, 0x27ef0 bytes
    // win32kbase.sys .text:0x9498, 0x243e0 bytes
    //
    _o3(sdk::unknown_ptr) emit_opacity;
    
    // [EmitOptions@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x696e4, 0x1eb80 bytes
    // win32kbase.sys .text:0x77ca4, 0x243e0 bytes
    // win32kbase.sys .text:0x28d28, 0x27ef0 bytes
    // win32kbase.sys .text:0x9594, 0x243e0 bytes
    //
    _o4(sdk::unknown_ptr) emit_options;
    
    // [EmitPendingRemoves@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x69e58, 0x1eb80 bytes
    // win32kbase.sys .text:0x784a8, 0x243e0 bytes
    // win32kbase.sys .text:0x29524, 0x27ef0 bytes
    // win32kbase.sys .text:0x9d98, 0x243e0 bytes
    //
    _o5(sdk::unknown_ptr) emit_pending_removes;
    
    // [EmitRelativeOffset@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x69bb0, 0x1eb80 bytes
    // win32kbase.sys .text:0x78200, 0x243e0 bytes
    // win32kbase.sys .text:0x29278, 0x27ef0 bytes
    // win32kbase.sys .text:0x9af0, 0x243e0 bytes
    //
    _o6(sdk::unknown_ptr) emit_relative_offset;
    
    // [EmitRelativeSize@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x69b30, 0x1eb80 bytes
    // win32kbase.sys .text:0x78188, 0x243e0 bytes
    // win32kbase.sys .text:0x29200, 0x27ef0 bytes
    // win32kbase.sys .text:0x9a78, 0x243e0 bytes
    //
    _o7(sdk::unknown_ptr) emit_relative_size;
    
    // [EmitRemoveAllChildren@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x69d40, 0x1eb80 bytes
    // win32kbase.sys .text:0x7843c, 0x243e0 bytes
    // win32kbase.sys .text:0x294b8, 0x27ef0 bytes
    // win32kbase.sys .text:0x9d2c, 0x243e0 bytes
    //
    _o8(sdk::unknown_ptr) emit_remove_all_children;
    
    // [EmitRenderOptions@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x69764, 0x1eb80 bytes
    // win32kbase.sys .text:0x77d50, 0x243e0 bytes
    // win32kbase.sys .text:0x28dd4, 0x27ef0 bytes
    // win32kbase.sys .text:0x9640, 0x243e0 bytes
    //
    _o9(sdk::unknown_ptr) emit_render_options;
    
    // [EmitSize@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x69c30, 0x1eb80 bytes
    // win32kbase.sys .text:0x78284, 0x243e0 bytes
    // win32kbase.sys .text:0x292fc, 0x27ef0 bytes
    // win32kbase.sys .text:0x9b74, 0x243e0 bytes
    //
    _p0(sdk::unknown_ptr) emit_size;
    
    // [EmitTransform@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x69abc, 0x1eb80 bytes
    // win32kbase.sys .text:0x78104, 0x243e0 bytes
    // win32kbase.sys .text:0x2917c, 0x27ef0 bytes
    // win32kbase.sys .text:0x99f4, 0x243e0 bytes
    //
    _p1(sdk::unknown_ptr) emit_transform;
    
    // [EmitTransformParent@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x69a30, 0x1eb80 bytes
    // win32kbase.sys .text:0x78074, 0x243e0 bytes
    // win32kbase.sys .text:0x290ec, 0x27ef0 bytes
    // win32kbase.sys .text:0x9964, 0x243e0 bytes
    //
    _p2(sdk::unknown_ptr) emit_transform_parent;
    
    // [EmitUpdateCommands@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6ad20, 0x1eb80 bytes
    // win32kbase.sys .text:0x77570, 0x243e0 bytes
    // win32kbase.sys .text:0x28860, 0x27ef0 bytes
    // win32kbase.sys .text:0x8e60, 0x243e0 bytes
    //
    _p3(sdk::unknown_ptr) emit_update_commands;
    
    // [EnsureInteraction@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6a230, 0x1eb80 bytes
    // win32kbase.sys .text:0xa1e2c, 0x243e0 bytes
    // win32kbase.sys .text:0xb1fa4, 0x27ef0 bytes
    // win32kbase.sys .text:0x9126c, 0x243e0 bytes
    //
    _p4(sdk::unknown_ptr) ensure_interaction;
    
    // [GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x69558, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ee580, 0x243e0 bytes
    // win32kbase.sys .text:0x2b9c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ec340, 0x243e0 bytes
    //
    _p5(sdk::unknown_ptr) get_cross_channel_visual_child_no_ref;
    
    // [GetFloatAnimatableProperty@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xea180, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ee5e0, 0x243e0 bytes
    // win32kbase.sys .text:0x2336b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ec3a0, 0x243e0 bytes
    //
    _p6(sdk::unknown_ptr) get_float_animatable_property;
    
    // [Initialize@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6aeb0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa81b0, 0x243e0 bytes
    // win32kbase.sys .text:0xb6d30, 0x27ef0 bytes
    // win32kbase.sys .text:0x9c410, 0x243e0 bytes
    //
    _p7(sdk::unknown_ptr) initialize;
    
    // [IsAssociatedWithSystemVisual@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ae80, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9af0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaaf0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8490, 0x243e0 bytes
    //
    _p8(sdk::unknown_ptr) is_associated_with_system_visual;
    
    // [IsPropertyAnimatable@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xea1c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ee630, 0x243e0 bytes
    // win32kbase.sys .text:0x233700, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ec3f0, 0x243e0 bytes
    //
    _p9(sdk::unknown_ptr) is_property_animatable;
    
    // [LinkVisualChild@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f770, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9e50, 0x243e0 bytes
    // win32kbase.sys .text:0xdaec0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc87f0, 0x243e0 bytes
    //
    _q0(sdk::unknown_ptr) link_visual_child;
    
    // [ProcessFirstPendingRemove@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x69ed4, 0x1eb80 bytes
    // win32kbase.sys .text:0x78698, 0x243e0 bytes
    // win32kbase.sys .text:0x2b884, 0x27ef0 bytes
    // win32kbase.sys .text:0x38fa4, 0x243e0 bytes
    //
    _q1(sdk::unknown_ptr) process_first_pending_remove;
    
    // [RedirectMouseToHwnd@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x31c8, 0x1eb80 bytes
    // win32kbase.sys .text:0x1fdc, 0x243e0 bytes
    // win32kbase.sys .text:0x233728, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fdc, 0x243e0 bytes
    //
    _q2(sdk::unknown_ptr) redirect_mouse_to_hwnd;
    
    // [ReleaseAllReferences@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6abc0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa2f30, 0x243e0 bytes
    // win32kbase.sys .text:0xadf30, 0x27ef0 bytes
    // win32kbase.sys .text:0x92440, 0x243e0 bytes
    //
    _q3(sdk::unknown_ptr) release_all_references;
    
    // [RemoveAllChildren@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6a180, 0x1eb80 bytes
    // win32kbase.sys .text:0x76500, 0x243e0 bytes
    // win32kbase.sys .text:0xb69b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x9e1a0, 0x243e0 bytes
    //
    _q4(sdk::unknown_ptr) remove_all_children;
    
    // [RemoveChild@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6a3d0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa0cd0, 0x243e0 bytes
    // win32kbase.sys .text:0xae130, 0x27ef0 bytes
    // win32kbase.sys .text:0x8f850, 0x243e0 bytes
    //
    _q5(sdk::unknown_ptr) remove_child;
    
    // [SetBufferProperty@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6a4c0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb54a0, 0x243e0 bytes
    // win32kbase.sys .text:0xb4950, 0x27ef0 bytes
    // win32kbase.sys .text:0xaeb20, 0x243e0 bytes
    //
    _q6(sdk::unknown_ptr) set_buffer_property;
    
    // [SetClipRectangleHelper@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x69f58, 0x1eb80 bytes
    // win32kbase.sys .text:0xb54fc, 0x243e0 bytes
    // win32kbase.sys .text:0xb4af0, 0x27ef0 bytes
    // win32kbase.sys .text:0xaeb7c, 0x243e0 bytes
    //
    _q7(sdk::unknown_ptr) set_clip_rectangle_helper;
    
    // [SetFloatProperty@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6a9d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9d4f0, 0x243e0 bytes
    // win32kbase.sys .text:0x9e410, 0x27ef0 bytes
    // win32kbase.sys .text:0x16790, 0x243e0 bytes
    //
    _q8(sdk::unknown_ptr) set_float_property;
    
    // [SetIntegerProperty@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6a7b0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa3f80, 0x243e0 bytes
    // win32kbase.sys .text:0xb42b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x93670, 0x243e0 bytes
    //
    _q9(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6a550, 0x1eb80 bytes
    // win32kbase.sys .text:0x9f690, 0x243e0 bytes
    // win32kbase.sys .text:0xb0760, 0x27ef0 bytes
    // win32kbase.sys .text:0x8e480, 0x243e0 bytes
    //
    _r0(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xea1e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ee6b0, 0x243e0 bytes
    // win32kbase.sys .text:0x233a20, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ec470, 0x243e0 bytes
    //
    _r1(sdk::unknown_ptr) set_remarshaling_flags;
    
    // [SetTransformMatrixHelper@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6a05c, 0x1eb80 bytes
    // win32kbase.sys .text:0x4218, 0x243e0 bytes
    // win32kbase.sys .text:0x6e9c, 0x27ef0 bytes
    // win32kbase.sys .text:0x4218, 0x243e0 bytes
    //
    _r2(sdk::unknown_ptr) set_transform_matrix_helper;
    
    // [SetTransformParent@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x69598, 0x1eb80 bytes
    // win32kbase.sys .text:0x9f958, 0x243e0 bytes
    // win32kbase.sys .text:0xb0a48, 0x27ef0 bytes
    // win32kbase.sys .text:0x8e748, 0x243e0 bytes
    //
    _r3(sdk::unknown_ptr) set_transform_parent;
    
    // [UnlinkVisualChild@CVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe8940, 0x1eb80 bytes
    // win32kbase.sys .text:0x1de9f0, 0x243e0 bytes
    // win32kbase.sys .text:0x22cf90, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dc7b0, 0x243e0 bytes
    //
    _r4(sdk::unknown_ptr) unlink_visual_child;
};
#include "magic/api.end.hpp"
