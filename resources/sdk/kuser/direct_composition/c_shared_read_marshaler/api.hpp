#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_read_marshaler
{
    // [EmitDeletionCommand@CSharedReadMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x70290, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) emit_deletion_command;
    
    // [EmitCreationCommand@CSharedReadMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x70320, 0x1eb80 bytes
    // win32kbase.sys .text:0xb8330, 0x243e0 bytes
    // win32kbase.sys .text:0xbe740, 0x27ef0 bytes
    // win32kbase.sys .text:0x64c0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_creation_command;
    
    // [EmitUpdateCommands@CSharedReadMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f790, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9ae0, 0x243e0 bytes
    // win32kbase.sys .text:0xdab10, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8480, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_commands;
    
    // [GetType@CSharedReadMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) get_type;
    
    // [InitializeFromSharedResource@CSharedReadMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x702a0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb1560, 0x243e0 bytes
    // win32kbase.sys .text:0xc3770, 0x27ef0 bytes
    // win32kbase.sys .text:0xa79f0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) initialize_from_shared_resource;
    
    // [IsOfType@CSharedReadMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x702e0, 0x1eb80 bytes
    // win32kbase.sys .text:0xba800, 0x243e0 bytes
    // win32kbase.sys .text:0xcfe20, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4120, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) is_of_type;
    
    // [ReleaseAllReferences@CSharedReadMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x702f0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb7830, 0x243e0 bytes
    // win32kbase.sys .text:0xcc7f0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb18a0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) release_all_references;
    
    // [SetRemarshalingFlags@CSharedReadMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ae80, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9af0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaaf0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8490, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
