#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_matrix_transform3d_marshaler
{
    // [GetType@CMatrixTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7d850, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CMatrixTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7d860, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitUpdateCommands@CMatrixTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4600, 0x1eb80 bytes
    // win32kbase.sys .text:0xc66e0, 0x243e0 bytes
    // win32kbase.sys .text:0x231fc0, 0x27ef0 bytes
    // win32kbase.sys .text:0xbf3c0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_commands;
    
    // [GetFloatAnimatableProperty@CMatrixTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf29d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ed250, 0x243e0 bytes
    // win32kbase.sys .text:0x232050, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eb010, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) get_float_animatable_property;
    
    // [Initialize@CMatrixTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d830, 0x1eb80 bytes
    // win32kbase.sys .text:0xc6b60, 0x243e0 bytes
    // win32kbase.sys .text:0x8310, 0x27ef0 bytes
    // win32kbase.sys .text:0xbf770, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) initialize;
    
    // [IsPropertyAnimatable@CMatrixTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf2a00, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ed290, 0x243e0 bytes
    // win32kbase.sys .text:0x232090, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eb050, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) is_property_animatable;
    
    // [SetBufferProperty@CMatrixTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d880, 0x1eb80 bytes
    // win32kbase.sys .text:0xc3e00, 0x243e0 bytes
    // win32kbase.sys .text:0x7c70, 0x27ef0 bytes
    // win32kbase.sys .text:0xbd1c0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_buffer_property;
    
    // [SetFloatProperty@CMatrixTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf2a20, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ed2b0, 0x243e0 bytes
    // win32kbase.sys .text:0x2320c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eb070, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_float_property;
    
    // [SetRemarshalingFlags@CMatrixTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf2a70, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ed300, 0x243e0 bytes
    // win32kbase.sys .text:0x232110, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eb0c0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
