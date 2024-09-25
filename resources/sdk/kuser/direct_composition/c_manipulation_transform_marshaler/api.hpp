#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_manipulation_transform_marshaler
{
    // [GetType@CManipulationTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6cb70, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CManipulationTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6cb80, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitSetComponents@CManipulationTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6ca48, 0x1eb80 bytes
    // win32kbase.sys .text:0xb131c, 0x243e0 bytes
    // win32kbase.sys .text:0xc647c, 0x27ef0 bytes
    // win32kbase.sys .text:0xa77ac, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_set_components;
    
    // [EmitSetTracingCookie@CManipulationTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6c9d8, 0x1eb80 bytes
    // win32kbase.sys .text:0xb129c, 0x243e0 bytes
    // win32kbase.sys .text:0xc63fc, 0x27ef0 bytes
    // win32kbase.sys .text:0xa772c, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_set_tracing_cookie;
    
    // [EmitUpdateCommands@CManipulationTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6cb20, 0x1eb80 bytes
    // win32kbase.sys .text:0xb1250, 0x243e0 bytes
    // win32kbase.sys .text:0xc63b0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa76e0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CManipulationTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6c960, 0x1eb80 bytes
    // win32kbase.sys .text:0xadcb0, 0x243e0 bytes
    // win32kbase.sys .text:0xbc020, 0x27ef0 bytes
    // win32kbase.sys .text:0xa1470, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) initialize;
    
    // [SetBufferProperty@CManipulationTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6cbb0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb25c0, 0x243e0 bytes
    // win32kbase.sys .text:0xc80f0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa8610, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_buffer_property;
    
    // [SetIntegerProperty@CManipulationTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf2b70, 0x1eb80 bytes
    // win32kbase.sys .text:0x1edf20, 0x243e0 bytes
    // win32kbase.sys .text:0x232dc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ebce0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CManipulationTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf2ba0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1edf50, 0x243e0 bytes
    // win32kbase.sys .text:0x232df0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ebd10, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
