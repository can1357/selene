#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_composition_distant_light_marshaler
{
    // [GetType@CCompositionDistantLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f5a0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CCompositionDistantLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8650, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [SetFloatProperty@CCompositionDistantLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fa870, 0x243e0 bytes
    // win32kbase.sys .text:0x2499a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f8640, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_float_property;
    
    // [EmitUpdateCommands@CCompositionDistantLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf0980, 0x1eb80 bytes
    // win32kbase.sys .text:0xad040, 0x243e0 bytes
    // win32kbase.sys .text:0xa7c50, 0x27ef0 bytes
    // win32kbase.sys .text:0xa38a0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CCompositionDistantLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf0a20, 0x1eb80 bytes
    // win32kbase.sys .text:0xb73e0, 0x243e0 bytes
    // win32kbase.sys .text:0xc9680, 0x27ef0 bytes
    // win32kbase.sys .text:0xb12d0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) initialize;
    
    // [ReleaseAllReferences@CCompositionDistantLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf0a50, 0x1eb80 bytes
    // win32kbase.sys .text:0xbb1c0, 0x243e0 bytes
    // win32kbase.sys .text:0xcead0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4be0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CCompositionDistantLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf0a90, 0x1eb80 bytes
    // win32kbase.sys .text:0xc40a0, 0x243e0 bytes
    // win32kbase.sys .text:0xd6850, 0x27ef0 bytes
    // win32kbase.sys .text:0xbd460, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_buffer_property;
    
    // [SetReferenceProperty@CCompositionDistantLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf0af0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc14a0, 0x243e0 bytes
    // win32kbase.sys .text:0xd4a50, 0x27ef0 bytes
    // win32kbase.sys .text:0xbabd0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CCompositionDistantLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf0ba0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1fa8b0, 0x243e0 bytes
    // win32kbase.sys .text:0x2499f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f8680, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
