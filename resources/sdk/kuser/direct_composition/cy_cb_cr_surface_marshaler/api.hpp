#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::cy_cb_cr_surface_marshaler
{
    // [GetType@CYCbCrSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f760, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CYCbCrSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8930, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitUpdateCommands@CYCbCrSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf51b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f2c50, 0x243e0 bytes
    // win32kbase.sys .text:0x241770, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f0a10, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_commands;
    
    // [SetIntegerProperty@CYCbCrSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf5240, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f2ce0, 0x243e0 bytes
    // win32kbase.sys .text:0x241800, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f0aa0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CYCbCrSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf5270, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f2d10, 0x243e0 bytes
    // win32kbase.sys .text:0x241830, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f0ad0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CYCbCrSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf5360, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f2e00, 0x243e0 bytes
    // win32kbase.sys .text:0x241920, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f0bc0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
