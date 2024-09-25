#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_composition_ambient_light_marshaler
{
    // [GetType@CCompositionAmbientLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f590, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CCompositionAmbientLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8640, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [SetFloatProperty@CCompositionAmbientLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fa6e0, 0x243e0 bytes
    // win32kbase.sys .text:0x249810, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f84b0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_float_property;
    
    // [EmitUpdateCommands@CCompositionAmbientLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf0760, 0x1eb80 bytes
    // win32kbase.sys .text:0xad590, 0x243e0 bytes
    // win32kbase.sys .text:0xa7f90, 0x27ef0 bytes
    // win32kbase.sys .text:0xa3df0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CCompositionAmbientLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf07c0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc3630, 0x243e0 bytes
    // win32kbase.sys .text:0xd7930, 0x27ef0 bytes
    // win32kbase.sys .text:0xbca60, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) initialize;
    
    // [SetBufferProperty@CCompositionAmbientLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf07d0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc1130, 0x243e0 bytes
    // win32kbase.sys .text:0x2497d0, 0x27ef0 bytes
    // win32kbase.sys .text:0xba860, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_buffer_property;
    
    // [SetRemarshalingFlags@CCompositionAmbientLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf0800, 0x1eb80 bytes
    // win32kbase.sys .text:0x1fa720, 0x243e0 bytes
    // win32kbase.sys .text:0x249850, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f84f0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
