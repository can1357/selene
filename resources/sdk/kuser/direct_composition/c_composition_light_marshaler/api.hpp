#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_composition_light_marshaler
{
    // [GetType@CCompositionLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f5b0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CCompositionLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8660, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [Initialize@CCompositionLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xca070, 0x243e0 bytes
    // win32kbase.sys .text:0xdb120, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8a10, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) initialize;
    
    // [SetIntegerProperty@CCompositionLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fa600, 0x243e0 bytes
    // win32kbase.sys .text:0xf89b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f83d0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_integer_property;
    
    // [EmitAddTargets@CCompositionLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xedbcc, 0x1eb80 bytes
    // win32kbase.sys .text:0xad694, 0x243e0 bytes
    // win32kbase.sys .text:0xa8074, 0x27ef0 bytes
    // win32kbase.sys .text:0xa3ef4, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_add_targets;
    
    // [EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xedcd0, 0x1eb80 bytes
    // win32kbase.sys .text:0xad610, 0x243e0 bytes
    // win32kbase.sys .text:0xa7ff0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa3e70, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CCompositionLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xedd50, 0x1eb80 bytes
    // win32kbase.sys .text:0xbb210, 0x243e0 bytes
    // win32kbase.sys .text:0xceb20, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4c30, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) release_all_references;
    
    // [ReleaseResourceMarshalers@CCompositionLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xedd70, 0x1eb80 bytes
    // win32kbase.sys .text:0x4910, 0x243e0 bytes
    // win32kbase.sys .text:0x64b4, 0x27ef0 bytes
    // win32kbase.sys .text:0x4910, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) release_resource_marshalers;
    
    // [SetReferenceArrayProperty@CCompositionLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeddd0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa0850, 0x243e0 bytes
    // win32kbase.sys .text:0xad370, 0x27ef0 bytes
    // win32kbase.sys .text:0x8f5f0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_reference_array_property;
    
    // [SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f790, 0x1eb80 bytes
    // win32kbase.sys .text:0x1fa640, 0x243e0 bytes
    // win32kbase.sys .text:0x2496b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f8410, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
