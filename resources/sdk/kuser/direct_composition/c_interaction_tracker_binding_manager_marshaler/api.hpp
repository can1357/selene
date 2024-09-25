#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_interaction_tracker_binding_manager_marshaler
{
    // [Disconnect@CInteractionTrackerBindingManagerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x248880, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) disconnect;
    
    // [ReleaseAllReferences@CInteractionTrackerBindingManagerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x248b30, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) release_all_references;
    
    // [RemoveBindingManagerReferenceFromTrackerIfNecessary@CInteractionTrackerBindingManagerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1f9e6c, 0x243e0 bytes
    // win32kbase.sys .text:0x1f7c1c, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) remove_binding_manager_reference_from_tracker_if_necessary;
    
    // [CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f9b48, 0x243e0 bytes
    // win32kbase.sys .text:0x248758, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f78f8, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) clean_up_list_items_pending_deletion;
    
    // [EmitBoundTrackerMarshalerUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f9bec, 0x243e0 bytes
    // win32kbase.sys .text:0x248898, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f799c, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_bound_tracker_marshaler_update_commands;
    
    // [EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f9c8c, 0x243e0 bytes
    // win32kbase.sys .text:0x248938, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f7a3c, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_set_tracker_binding_mode;
    
    // [EmitUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f9dd0, 0x243e0 bytes
    // win32kbase.sys .text:0x248a90, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f7b80, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) emit_update_commands;
    
    // [RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f9fe4, 0x243e0 bytes
    // win32kbase.sys .text:0x248bac, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f7d94, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) remove_tracker_bindings;
    
    // [SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fa070, 0x243e0 bytes
    // win32kbase.sys .text:0x248c50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f7e20, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_buffer_property;
    
    // [SetRemarshalingFlags@CInteractionTrackerBindingManagerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fa320, 0x243e0 bytes
    // win32kbase.sys .text:0x248f10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f80f0, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
