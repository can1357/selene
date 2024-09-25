#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_transform_group_marshaler
{
    // [GetType@CTransformGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6e6e0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CTransformGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6e620, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitSetChildrenCommand@CTransformGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x38ec, 0x243e0 bytes
    // win32kbase.sys .text:0x38ec, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_set_children_command;
    
    // [EmitUpdateCommands@CTransformGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6e440, 0x1eb80 bytes
    // win32kbase.sys .text:0x38a0, 0x243e0 bytes
    // win32kbase.sys .text:0x8050, 0x27ef0 bytes
    // win32kbase.sys .text:0x38a0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CTransformGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6e650, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e5e10, 0x243e0 bytes
    // win32kbase.sys .text:0x9780, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e3bd0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
    
    // [SetReferenceArrayProperty@CTransformGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6e540, 0x1eb80 bytes
    // win32kbase.sys .text:0x4bc0, 0x243e0 bytes
    // win32kbase.sys .text:0x8330, 0x27ef0 bytes
    // win32kbase.sys .text:0x4bc0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_reference_array_property;
    
    // [SetRemarshalingFlags@CTransformGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xedef0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e90c0, 0x243e0 bytes
    // win32kbase.sys .text:0x240e60, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e6e80, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
