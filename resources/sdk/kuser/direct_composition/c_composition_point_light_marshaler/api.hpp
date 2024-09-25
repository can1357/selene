#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_composition_point_light_marshaler
{
    // [GetType@CCompositionPointLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f5c0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CCompositionPointLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8670, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitUpdateCommands@CCompositionPointLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf0e70, 0x1eb80 bytes
    // win32kbase.sys .text:0x1fada0, 0x243e0 bytes
    // win32kbase.sys .text:0x249ee0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f8b70, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CCompositionPointLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf0f90, 0x1eb80 bytes
    // win32kbase.sys .text:0x1faf50, 0x243e0 bytes
    // win32kbase.sys .text:0x24a090, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f8d20, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) initialize;
    
    // [ReleaseAllReferences@CCompositionPointLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf0fd0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1fafc0, 0x243e0 bytes
    // win32kbase.sys .text:0x24a100, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f8d90, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CCompositionPointLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf1010, 0x1eb80 bytes
    // win32kbase.sys .text:0x1fb010, 0x243e0 bytes
    // win32kbase.sys .text:0x24a150, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f8de0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_buffer_property;
    
    // [SetFloatProperty@CCompositionPointLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf1070, 0x1eb80 bytes
    // win32kbase.sys .text:0x1fb080, 0x243e0 bytes
    // win32kbase.sys .text:0x24a1c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f8e50, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_float_property;
    
    // [SetReferenceProperty@CCompositionPointLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf10e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1fb170, 0x243e0 bytes
    // win32kbase.sys .text:0x24a2c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f8f40, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CCompositionPointLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf1190, 0x1eb80 bytes
    // win32kbase.sys .text:0x1fb230, 0x243e0 bytes
    // win32kbase.sys .text:0x24a380, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f9000, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
