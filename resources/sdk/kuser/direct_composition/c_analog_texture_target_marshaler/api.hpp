#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_analog_texture_target_marshaler
{
    // [EmitCreate@CAnalogTextureTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xeb710, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) emit_create;
    
    // [EmitRoot@CAnalogTextureTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xeb780, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) emit_root;
    
    // [EmitUpdateCommands@CAnalogTextureTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7c3d0, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_commands;
    
    // [GetType@CAnalogTextureTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f4f0, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) get_type;
    
    // [Initialize@CAnalogTextureTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _m4(sdk::unknown_ptr) initialize;
    
    // [ReleaseAllReferences@CAnalogTextureTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xed9b0, 0x1eb80 bytes
    //
    _m5(sdk::unknown_ptr) release_all_references;
    
    // [SetIntegerProperty@CAnalogTextureTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xeb7f0, 0x1eb80 bytes
    //
    _m6(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CAnalogTextureTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xeb830, 0x1eb80 bytes
    //
    _m7(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CAnalogTextureTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xeb8c0, 0x1eb80 bytes
    //
    _m8(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
