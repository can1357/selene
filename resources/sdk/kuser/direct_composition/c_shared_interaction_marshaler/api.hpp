#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_interaction_marshaler
{
    // [InitializeFromSharedResource@CSharedInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa2d04, 0x243e0 bytes
    // win32kbase.sys .text:0xb2fc4, 0x27ef0 bytes
    // win32kbase.sys .text:0x92144, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) initialize_from_shared_resource;
    
    // [Create@CSharedInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6fb48, 0x1eb80 bytes
    // win32kbase.sys .text:0xa1fd0, 0x243e0 bytes
    // win32kbase.sys .text:0xb2300, 0x27ef0 bytes
    // win32kbase.sys .text:0x91410, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) create;
    
    // [EmitCreationCommand@CSharedInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6fad0, 0x1eb80 bytes
    // win32kbase.sys .text:0xbf2e0, 0x243e0 bytes
    // win32kbase.sys .text:0xbe6e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x5a80, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_creation_command;
    
    // [OpenSharedHandle@CSharedInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6fb30, 0x1eb80 bytes
    // win32kbase.sys .text:0x7dd70, 0x243e0 bytes
    // win32kbase.sys .text:0x9b890, 0x27ef0 bytes
    // win32kbase.sys .text:0xb47b0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) open_shared_handle;
    
    // [ReleaseAllReferences@CSharedInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6fae0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa1ca0, 0x243e0 bytes
    // win32kbase.sys .text:0xb2130, 0x27ef0 bytes
    // win32kbase.sys .text:0x910e0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
};
#include "magic/api.end.hpp"
