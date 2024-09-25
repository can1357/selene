#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_composition_spot_light_marshaler
{
    // [GetType@CCompositionSpotLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f5d0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CCompositionSpotLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8690, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitUpdateCommands@CCompositionSpotLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf1620, 0x1eb80 bytes
    // win32kbase.sys .text:0xad200, 0x243e0 bytes
    // win32kbase.sys .text:0xa7e10, 0x27ef0 bytes
    // win32kbase.sys .text:0xa3a60, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CCompositionSpotLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf17d0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb72b0, 0x243e0 bytes
    // win32kbase.sys .text:0xc9550, 0x27ef0 bytes
    // win32kbase.sys .text:0xb11a0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) initialize;
    
    // [ReleaseAllReferences@CCompositionSpotLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf0a50, 0x1eb80 bytes
    // win32kbase.sys .text:0xbb1c0, 0x243e0 bytes
    // win32kbase.sys .text:0xcead0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4be0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CCompositionSpotLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf1840, 0x1eb80 bytes
    // win32kbase.sys .text:0xc2490, 0x243e0 bytes
    // win32kbase.sys .text:0x24a950, 0x27ef0 bytes
    // win32kbase.sys .text:0xbbb20, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_buffer_property;
    
    // [SetFloatProperty@CCompositionSpotLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf18f0, 0x1eb80 bytes
    // win32kbase.sys .text:0xbed90, 0x243e0 bytes
    // win32kbase.sys .text:0xd2920, 0x27ef0 bytes
    // win32kbase.sys .text:0xb8390, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_float_property;
    
    // [SetReferenceProperty@CCompositionSpotLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf19e0, 0x1eb80 bytes
    // win32kbase.sys .text:0xbc6a0, 0x243e0 bytes
    // win32kbase.sys .text:0xcd4f0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb6700, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CCompositionSpotLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf1a90, 0x1eb80 bytes
    // win32kbase.sys .text:0x1fb710, 0x243e0 bytes
    // win32kbase.sys .text:0x24aa10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f94e0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
