#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_drop_shadow_marshaler
{
    // [GetType@CDropShadowMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f860, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CDropShadowMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xed9a0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [SetIntegerProperty@CDropShadowMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5900, 0x243e0 bytes
    // win32kbase.sys .text:0x2494c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x5900, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_integer_property;
    
    // [EmitUpdateCommands@CDropShadowMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xed8a0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb5910, 0x243e0 bytes
    // win32kbase.sys .text:0x249290, 0x27ef0 bytes
    // win32kbase.sys .text:0xaef90, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CDropShadowMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xed9b0, 0x1eb80 bytes
    // win32kbase.sys .text:0xd2830, 0x243e0 bytes
    // win32kbase.sys .text:0x2493d0, 0x27ef0 bytes
    // win32kbase.sys .text:0xd11d0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CDropShadowMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xed9e0, 0x1eb80 bytes
    // win32kbase.sys .text:0xbd3e0, 0x243e0 bytes
    // win32kbase.sys .text:0x249400, 0x27ef0 bytes
    // win32kbase.sys .text:0xb71d0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_buffer_property;
    
    // [SetFloatProperty@CDropShadowMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeda50, 0x1eb80 bytes
    // win32kbase.sys .text:0xc0530, 0x243e0 bytes
    // win32kbase.sys .text:0x249480, 0x27ef0 bytes
    // win32kbase.sys .text:0xba000, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_float_property;
    
    // [SetReferenceProperty@CDropShadowMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xedac0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1fa450, 0x243e0 bytes
    // win32kbase.sys .text:0x249500, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f8220, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CDropShadowMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xedb70, 0x1eb80 bytes
    // win32kbase.sys .text:0x1fa510, 0x243e0 bytes
    // win32kbase.sys .text:0x2495c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f82e0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
