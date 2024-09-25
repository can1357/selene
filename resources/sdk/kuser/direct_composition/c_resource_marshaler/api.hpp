#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_resource_marshaler
{
    // [EmitDeletionHelper@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6b034, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) emit_deletion_helper;
    
    // [GetTargetProperty@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xb4900, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) get_target_property;
    
    // [SetRemarshalingFlags@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xdaaf0, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) set_remarshaling_flags;
    
    // [HasAnimations@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 11
    // win32kbase.sys .text:0x6af30, 0x1eb80 bytes
    // win32kbase.sys .text:0x9e5d4, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) has_animations;
    
    // [AddRef@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1dde44, 0x243e0 bytes
    // win32kbase.sys .text:0x2b41c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dbc04, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) add_ref;
    
    // [EmitUpdateCommands@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9ae0, 0x243e0 bytes
    // win32kbase.sys .text:0xdab10, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8480, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_update_commands;
    
    // [GetType@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9e20, 0x243e0 bytes
    // win32kbase.sys .text:0xdaf00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc87c0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) get_type;
    
    // [IsShellResource@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9af0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaaf0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8490, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) is_shell_resource;
    
    // [SetHandleArrayProperty@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9dc0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaee0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8760, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_handle_array_property;
    
    // [SetResourceLifetimeTag@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    // win32kbase.sys .text:0xabdbc, 0x243e0 bytes
    // win32kbase.sys .text:0xa1a8c, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_resource_lifetime_tag;
    
    // [Disconnect@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    // win32kbase.sys .text:0xa8860, 0x243e0 bytes
    // win32kbase.sys .text:0xad750, 0x27ef0 bytes
    // win32kbase.sys .text:0x15eb0, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) disconnect;
    
    // [EmitCreationCommand@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6b0a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x78590, 0x243e0 bytes
    // win32kbase.sys .text:0x29610, 0x27ef0 bytes
    // win32kbase.sys .text:0x9e80, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) emit_creation_command;
    
    // [EmitDeletionCommand@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6b000, 0x1eb80 bytes
    // win32kbase.sys .text:0x78530, 0x243e0 bytes
    // win32kbase.sys .text:0x295b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x9e20, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) emit_deletion_command;
    
    // [EmitDuplicateHelper@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6af74, 0x1eb80 bytes
    // win32kbase.sys .text:0x75cf4, 0x243e0 bytes
    // win32kbase.sys .text:0xbe760, 0x27ef0 bytes
    // win32kbase.sys .text:0x76e0, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) emit_duplicate_helper;
    
    // [FindAnimationBindings@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6b10c, 0x1eb80 bytes
    // win32kbase.sys .text:0x7eedc, 0x243e0 bytes
    // win32kbase.sys .text:0x9e61c, 0x27ef0 bytes
    // win32kbase.sys .text:0x7f800, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) find_animation_bindings;
    
    // [GetBaseAnimation@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) get_base_animation;
    
    // [GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f780, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9dc0, 0x243e0 bytes
    // win32kbase.sys .text:0x22d810, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8760, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) get_float_animatable_property;
    
    // [Initialize@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) initialize;
    
    // [IsCrossChannelChildVisual@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ae80, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9af0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaaf0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8490, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) is_cross_channel_child_visual;
    
    // [IsCrossChannelParentVisual@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ae80, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9af0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaaf0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8490, 0x243e0 bytes
    //
    _n9(sdk::unknown_ptr) is_cross_channel_parent_visual;
    
    // [IsEarlyDestroyNotificationSupported@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ae80, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9af0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaaf0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8490, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) is_early_destroy_notification_supported;
    
    // [IsOfType@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ae80, 0x1eb80 bytes
    // win32kbase.sys .text:0x9d130, 0x243e0 bytes
    // win32kbase.sys .text:0xa6de0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8be20, 0x243e0 bytes
    //
    _o1(sdk::unknown_ptr) is_of_type;
    
    // [IsPropertyAnimatable@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ae80, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9af0, 0x243e0 bytes
    // win32kbase.sys .text:0xb4880, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8490, 0x243e0 bytes
    //
    _o2(sdk::unknown_ptr) is_property_animatable;
    
    // [LinkVisualChild@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    // win32kbase.sys .text:0xa8860, 0x243e0 bytes
    // win32kbase.sys .text:0xad750, 0x27ef0 bytes
    // win32kbase.sys .text:0x15eb0, 0x243e0 bytes
    //
    _o3(sdk::unknown_ptr) link_visual_child;
    
    // [OpenSharedHandle@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9e60, 0x243e0 bytes
    // win32kbase.sys .text:0xdaed0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8800, 0x243e0 bytes
    //
    _o4(sdk::unknown_ptr) open_shared_handle;
    
    // [ReleaseAllReferences@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    // win32kbase.sys .text:0xa8860, 0x243e0 bytes
    // win32kbase.sys .text:0xad750, 0x27ef0 bytes
    // win32kbase.sys .text:0x15eb0, 0x243e0 bytes
    //
    _o5(sdk::unknown_ptr) release_all_references;
    
    // [ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    // win32kbase.sys .text:0xabeb8, 0x243e0 bytes
    // win32kbase.sys .text:0xbc3c0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa1b88, 0x243e0 bytes
    //
    _o6(sdk::unknown_ptr) return_resource_lifetime_tag;
    
    // [SetBufferProperty@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f780, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9dc0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaee0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8760, 0x243e0 bytes
    //
    _o7(sdk::unknown_ptr) set_buffer_property;
    
    // [SetCallbackId@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ae50, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9e60, 0x243e0 bytes
    // win32kbase.sys .text:0xdaed0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8800, 0x243e0 bytes
    //
    _o8(sdk::unknown_ptr) set_callback_id;
    
    // [SetFloatProperty@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f780, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9dc0, 0x243e0 bytes
    // win32kbase.sys .text:0xb48b0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8760, 0x243e0 bytes
    //
    _o9(sdk::unknown_ptr) set_float_property;
    
    // [SetHandleProperty@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f780, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9dc0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaee0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8760, 0x243e0 bytes
    //
    _p0(sdk::unknown_ptr) set_handle_property;
    
    // [SetIntegerProperty@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f780, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9dc0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaee0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8760, 0x243e0 bytes
    //
    _p1(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceArrayProperty@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f780, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9dc0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaee0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8760, 0x243e0 bytes
    //
    _p2(sdk::unknown_ptr) set_reference_array_property;
    
    // [SetReferenceProperty@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f780, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9dc0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaee0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8760, 0x243e0 bytes
    //
    _p3(sdk::unknown_ptr) set_reference_property;
    
    // [UnlinkVisualChild@CResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    // win32kbase.sys .text:0xa8860, 0x243e0 bytes
    // win32kbase.sys .text:0xad750, 0x27ef0 bytes
    // win32kbase.sys .text:0x15eb0, 0x243e0 bytes
    //
    _p4(sdk::unknown_ptr) unlink_visual_child;
};
#include "magic/api.end.hpp"
