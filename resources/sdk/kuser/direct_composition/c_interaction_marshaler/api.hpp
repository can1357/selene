#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_interaction_marshaler
{
    // [CaptureManipulationToCompositor@CInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xeb220, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) capture_manipulation_to_compositor;
    
    // [CapturePointer@CInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xeb2a0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) capture_pointer;
    
    // [GetType@CInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6f0a0, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6eed0, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) is_of_type;
    
    // [SetDefaultConfiguration@CInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 11
    // win32kbase.sys .text:0x6ed60, 0x1eb80 bytes
    // win32kbase.sys .text:0xb20ac, 0x27ef0 bytes
    //
    _m4(sdk::unknown_ptr) set_default_configuration;
    
    // [EmitHoverPointerSource@CInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7bf3c, 0x243e0 bytes
    // win32kbase.sys .text:0xba7f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x9bf5c, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_hover_pointer_source;
    
    // [CheckInputSinkTypes@CInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6ea4c, 0x1eb80 bytes
    // win32kbase.sys .text:0xa2470, 0x243e0 bytes
    // win32kbase.sys .text:0xb23f4, 0x27ef0 bytes
    // win32kbase.sys .text:0x918b0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) check_input_sink_types;
    
    // [EmitCreationCommand@CInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6f010, 0x1eb80 bytes
    // win32kbase.sys .text:0xb33f0, 0x243e0 bytes
    // win32kbase.sys .text:0xcc170, 0x27ef0 bytes
    // win32kbase.sys .text:0xaba60, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) emit_creation_command;
    
    // [EmitInputSink@CInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6e988, 0x1eb80 bytes
    // win32kbase.sys .text:0x7c124, 0x243e0 bytes
    // win32kbase.sys .text:0xba9e8, 0x27ef0 bytes
    // win32kbase.sys .text:0x9c144, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) emit_input_sink;
    
    // [EmitUpdateCommands@CInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6ef60, 0x1eb80 bytes
    // win32kbase.sys .text:0x7b2b0, 0x243e0 bytes
    // win32kbase.sys .text:0xba1f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x9b920, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) emit_update_commands;
    
    // [EmitUpdateFlags@CInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6eb68, 0x1eb80 bytes
    // win32kbase.sys .text:0x7c058, 0x243e0 bytes
    // win32kbase.sys .text:0xba90c, 0x27ef0 bytes
    // win32kbase.sys .text:0x9c078, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) emit_update_flags;
    
    // [EmitUpdateRails@CInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6e900, 0x1eb80 bytes
    // win32kbase.sys .text:0x7bfc4, 0x243e0 bytes
    // win32kbase.sys .text:0xba878, 0x27ef0 bytes
    // win32kbase.sys .text:0x9bfe4, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) emit_update_rails;
    
    // [Initialize@CInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6e8e0, 0x1eb80 bytes
    // win32kbase.sys .text:0xba810, 0x243e0 bytes
    // win32kbase.sys .text:0xd2ab0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4130, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) initialize;
    
    // [ReleaseAllReferences@CInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6ee70, 0x1eb80 bytes
    // win32kbase.sys .text:0xa2180, 0x243e0 bytes
    // win32kbase.sys .text:0xb2c40, 0x27ef0 bytes
    // win32kbase.sys .text:0x915c0, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) release_all_references;
    
    // [ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6ea10, 0x1eb80 bytes
    // win32kbase.sys .text:0xa2b58, 0x243e0 bytes
    // win32kbase.sys .text:0xb2df8, 0x27ef0 bytes
    // win32kbase.sys .text:0x91f98, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) release_composition_input_object;
    
    // [SetBufferProperty@CInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6eda0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa2270, 0x243e0 bytes
    // win32kbase.sys .text:0xb2600, 0x27ef0 bytes
    // win32kbase.sys .text:0x916b0, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) set_buffer_property;
    
    // [SetHandleProperty@CInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6ed80, 0x1eb80 bytes
    // win32kbase.sys .text:0xa2050, 0x243e0 bytes
    // win32kbase.sys .text:0xb2190, 0x27ef0 bytes
    // win32kbase.sys .text:0x91490, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) set_handle_property;
    
    // [SetInputSinkHelper@CInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6ec28, 0x1eb80 bytes
    // win32kbase.sys .text:0xa207c, 0x243e0 bytes
    // win32kbase.sys .text:0xb21bc, 0x27ef0 bytes
    // win32kbase.sys .text:0x914bc, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) set_input_sink_helper;
    
    // [SetIntegerProperty@CInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6edf0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb3c20, 0x243e0 bytes
    // win32kbase.sys .text:0xca010, 0x27ef0 bytes
    // win32kbase.sys .text:0xac120, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeb390, 0x1eb80 bytes
    // win32kbase.sys .text:0xc3850, 0x243e0 bytes
    // win32kbase.sys .text:0xd5cf0, 0x27ef0 bytes
    // win32kbase.sys .text:0xbcb60, 0x243e0 bytes
    //
    _n9(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CInteractionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeb440, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f4d00, 0x243e0 bytes
    // win32kbase.sys .text:0x2439a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f2ac0, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
