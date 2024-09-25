#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_target_visual_marshaler
{
    // [Create@CTargetVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6fe44, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [EmitDeletionCommand@CTargetVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x700b0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) emit_deletion_command;
    
    // [EmitRoot@CTargetVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6ffd4, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) emit_root;
    
    // [EmitUpdateCommands@CTargetVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6fee0, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [InitializeFromSharedResource@CTargetVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6fe00, 0x1eb80 bytes
    //
    _m4(sdk::unknown_ptr) initialize_from_shared_resource;
    
    // [IsOfType@CTargetVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae80, 0x1eb80 bytes
    //
    _m5(sdk::unknown_ptr) is_of_type;
    
    // [LinkVisualChild@CTargetVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f870, 0x1eb80 bytes
    //
    _m6(sdk::unknown_ptr) link_visual_child;
    
    // [ReleaseAllReferences@CTargetVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6ffa0, 0x1eb80 bytes
    //
    _m7(sdk::unknown_ptr) release_all_references;
    
    // [SetReferenceProperty@CTargetVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x700f0, 0x1eb80 bytes
    //
    _m8(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CTargetVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf5690, 0x1eb80 bytes
    //
    _m9(sdk::unknown_ptr) set_remarshaling_flags;
    
    // [UnlinkVisualChild@CTargetVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f870, 0x1eb80 bytes
    //
    _n0(sdk::unknown_ptr) unlink_visual_child;
    
    // [UpdateRootVisual@CTargetVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6fee8, 0x1eb80 bytes
    //
    _n1(sdk::unknown_ptr) update_root_visual;
};
#include "magic/api.end.hpp"
