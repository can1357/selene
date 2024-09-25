#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_matrix_transform_marshaler
{
    // [GetType@CMatrixTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6e860, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CMatrixTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6e870, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitUpdateCommands@CMatrixTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6e7d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x4720, 0x243e0 bytes
    // win32kbase.sys .text:0x7fc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x4720, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_commands;
    
    // [GetFloatAnimatableProperty@CMatrixTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf28d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ed110, 0x243e0 bytes
    // win32kbase.sys .text:0x231e70, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eaed0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) get_float_animatable_property;
    
    // [Initialize@CMatrixTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6e760, 0x1eb80 bytes
    // win32kbase.sys .text:0x5550, 0x243e0 bytes
    // win32kbase.sys .text:0x8e70, 0x27ef0 bytes
    // win32kbase.sys .text:0x5550, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) initialize;
    
    // [IsPropertyAnimatable@CMatrixTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf2900, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ed150, 0x243e0 bytes
    // win32kbase.sys .text:0x231eb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eaf10, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) is_property_animatable;
    
    // [SetBufferProperty@CMatrixTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6e8a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x4420, 0x243e0 bytes
    // win32kbase.sys .text:0x79d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x4420, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_buffer_property;
    
    // [SetFloatProperty@CMatrixTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf2920, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ed170, 0x243e0 bytes
    // win32kbase.sys .text:0x231ee0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eaf30, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_float_property;
    
    // [SetMatrixHelper@CMatrixTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6e770, 0x1eb80 bytes
    // win32kbase.sys .text:0x445c, 0x243e0 bytes
    // win32kbase.sys .text:0x7a0c, 0x27ef0 bytes
    // win32kbase.sys .text:0x445c, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_matrix_helper;
    
    // [SetRemarshalingFlags@CMatrixTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf2970, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ed1d0, 0x243e0 bytes
    // win32kbase.sys .text:0x231f40, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eaf90, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
