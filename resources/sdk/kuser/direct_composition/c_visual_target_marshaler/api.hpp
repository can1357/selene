#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_visual_target_marshaler
{
    // [Create@CVisualTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa9ed8, 0x243e0 bytes
    // win32kbase.sys .text:0xb9de8, 0x27ef0 bytes
    // win32kbase.sys .text:0x9f6e8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [EmitDeletionCommand@CVisualTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7c6d0, 0x243e0 bytes
    // win32kbase.sys .text:0xbfe80, 0x27ef0 bytes
    // win32kbase.sys .text:0xb3b40, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_deletion_command;
    
    // [EmitRoot@CVisualTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x79624, 0x243e0 bytes
    // win32kbase.sys .text:0xbfed8, 0x27ef0 bytes
    // win32kbase.sys .text:0xa080, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_root;
    
    // [EmitUpdateCommands@CVisualTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7b200, 0x243e0 bytes
    // win32kbase.sys .text:0xbfec0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb7ea0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [InitializeFromSharedResource@CVisualTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb1540, 0x243e0 bytes
    // win32kbase.sys .text:0xc3750, 0x27ef0 bytes
    // win32kbase.sys .text:0xa79d0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) initialize_from_shared_resource;
    
    // [IsOfType@CVisualTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9af0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaaf0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8490, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) is_of_type;
    
    // [LinkVisualChild@CVisualTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xca0e0, 0x243e0 bytes
    // win32kbase.sys .text:0xdb190, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8a80, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) link_visual_child;
    
    // [OpenSharedHandle@CVisualTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7e610, 0x243e0 bytes
    // win32kbase.sys .text:0x9c710, 0x27ef0 bytes
    // win32kbase.sys .text:0xb06d0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) open_shared_handle;
    
    // [ReleaseAllReferences@CVisualTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xac130, 0x243e0 bytes
    // win32kbase.sys .text:0xbbc50, 0x27ef0 bytes
    // win32kbase.sys .text:0xa2050, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) release_all_references;
    
    // [SetReferenceProperty@CVisualTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xac190, 0x243e0 bytes
    // win32kbase.sys .text:0xbbcb0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa20b0, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CVisualTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x200bc0, 0x243e0 bytes
    // win32kbase.sys .text:0x2501f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fe990, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_remarshaling_flags;
    
    // [UnlinkVisualChild@CVisualTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xca0e0, 0x243e0 bytes
    // win32kbase.sys .text:0xdb190, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8a80, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) unlink_visual_child;
    
    // [UpdateRootVisual@CVisualTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xac21c, 0x243e0 bytes
    // win32kbase.sys .text:0xbbd3c, 0x27ef0 bytes
    // win32kbase.sys .text:0xa213c, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) update_root_visual;
};
#include "magic/api.end.hpp"
