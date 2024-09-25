#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_manipulation_marshaler
{
    // [GetType@CManipulationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f670, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CManipulationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8780, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitEdgyConfiguration@CManipulationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ed5cc, 0x243e0 bytes
    // win32kbase.sys .text:0x2324d8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eb38c, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_edgy_configuration;
    
    // [EmitInjections@CManipulationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ed684, 0x243e0 bytes
    // win32kbase.sys .text:0x2325a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eb444, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_injections;
    
    // [GetSourceModifierHandle@CManipulationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ed914, 0x243e0 bytes
    // win32kbase.sys .text:0x232844, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eb6d4, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_source_modifier_handle;
    
    // [ReleaseAllReferences@CManipulationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ed9e0, 0x243e0 bytes
    // win32kbase.sys .text:0x232870, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eb7a0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CManipulationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1edb00, 0x243e0 bytes
    // win32kbase.sys .text:0x232990, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eb8c0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_buffer_property;
    
    // [SetReferenceProperty@CManipulationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1edd40, 0x243e0 bytes
    // win32kbase.sys .text:0x232be0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ebb00, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_reference_property;
    
    // [SetSourceModifier@CManipulationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ede38, 0x243e0 bytes
    // win32kbase.sys .text:0x232cd8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ebbf8, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_source_modifier;
    
    // [EmitSettings@CManipulationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe9ee8, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ed78c, 0x243e0 bytes
    // win32kbase.sys .text:0x2326b4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eb54c, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) emit_settings;
    
    // [EmitUpdateCommands@CManipulationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe9fb0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ed840, 0x243e0 bytes
    // win32kbase.sys .text:0x232770, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eb600, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) emit_update_commands;
    
    // [SetBoolProperty@CManipulationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe9fb8, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eda58, 0x243e0 bytes
    // win32kbase.sys .text:0x2328e8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eb818, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_bool_property;
    
    // [SetIntegerProperty@CManipulationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xea0d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1edc60, 0x243e0 bytes
    // win32kbase.sys .text:0x232b00, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eba20, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CManipulationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f820, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eddf0, 0x243e0 bytes
    // win32kbase.sys .text:0x232c90, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ebbb0, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
