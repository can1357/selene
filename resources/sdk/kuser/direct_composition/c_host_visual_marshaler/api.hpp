#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_host_visual_marshaler
{
    // [InitializeFromSharedResource@CHostVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa8150, 0x243e0 bytes
    // win32kbase.sys .text:0xb6ccc, 0x27ef0 bytes
    // win32kbase.sys .text:0x9c3b0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) initialize_from_shared_resource;
    
    // [AddChild@CHostVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f780, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9dc0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaee0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8760, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) add_child;
    
    // [Create@CHostVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x40c4, 0x1eb80 bytes
    // win32kbase.sys .text:0xa80b4, 0x243e0 bytes
    // win32kbase.sys .text:0xb6bc4, 0x27ef0 bytes
    // win32kbase.sys .text:0x9c314, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) create;
    
    // [EmitCreationCommand@CHostVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4240, 0x1eb80 bytes
    // win32kbase.sys .text:0xbb340, 0x243e0 bytes
    // win32kbase.sys .text:0xbe720, 0x27ef0 bytes
    // win32kbase.sys .text:0x60d0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_creation_command;
    
    // [EmitUpdateCommands@CHostVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4180, 0x1eb80 bytes
    // win32kbase.sys .text:0x7b220, 0x243e0 bytes
    // win32kbase.sys .text:0xc6b30, 0x27ef0 bytes
    // win32kbase.sys .text:0x6040, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_update_commands;
    
    // [OpenSharedHandle@CHostVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4250, 0x1eb80 bytes
    // win32kbase.sys .text:0x7e650, 0x243e0 bytes
    // win32kbase.sys .text:0x9c770, 0x27ef0 bytes
    // win32kbase.sys .text:0xaea90, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) open_shared_handle;
    
    // [ReleaseAllReferences@CHostVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4200, 0x1eb80 bytes
    // win32kbase.sys .text:0xa2e70, 0x243e0 bytes
    // win32kbase.sys .text:0xaddb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x92380, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) release_all_references;
    
    // [RemoveAllChildren@CHostVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x82c60, 0x1eb80 bytes
    // win32kbase.sys .text:0xca0d0, 0x243e0 bytes
    // win32kbase.sys .text:0xdb180, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8a70, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) remove_all_children;
    
    // [RemoveChild@CHostVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f780, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9dc0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaee0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8760, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) remove_child;
    
    // [SetHandleProperty@CHostVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f780, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9dc0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaee0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8760, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_handle_property;
    
    // [SetIntegerProperty@CHostVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f780, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9dc0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaee0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8760, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CHostVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf56a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x57d0, 0x243e0 bytes
    // win32kbase.sys .text:0x9750, 0x27ef0 bytes
    // win32kbase.sys .text:0x57d0, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CHostVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf56b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x200b90, 0x243e0 bytes
    // win32kbase.sys .text:0x2501c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fe960, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
