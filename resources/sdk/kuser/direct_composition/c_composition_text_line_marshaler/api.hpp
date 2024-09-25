#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_composition_text_line_marshaler
{
    // [GetFloatAnimatableProperty@CCompositionTextLineMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5120, 0x243e0 bytes
    // win32kbase.sys .text:0x1e2ee0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) get_float_animatable_property;
    
    // [IsPropertyAnimatable@CCompositionTextLineMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5670, 0x243e0 bytes
    // win32kbase.sys .text:0x1e3430, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) is_property_animatable;
    
    // [SetFloatProperty@CCompositionTextLineMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1e6390, 0x243e0 bytes
    // win32kbase.sys .text:0x1e4150, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_float_property;
    
    // [EmitSetOffsetCommand@CCompositionTextLineMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e2454, 0x243e0 bytes
    // win32kbase.sys .text:0x23aa00, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e0214, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_set_offset_command;
    
    // [EmitSetThicknessCommand@CCompositionTextLineMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e3b88, 0x243e0 bytes
    // win32kbase.sys .text:0x23bf4c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e1948, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_set_thickness_command;
    
    // [EmitSetWidthCommand@CCompositionTextLineMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e41c4, 0x243e0 bytes
    // win32kbase.sys .text:0x23c484, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e1f84, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_set_width_command;
    
    // [EmitUpdateCommands@CCompositionTextLineMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e4300, 0x243e0 bytes
    // win32kbase.sys .text:0x23c5e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e20c0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CCompositionTextLineMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e54b0, 0x243e0 bytes
    // win32kbase.sys .text:0x23d760, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e3270, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) initialize;
    
    // [ReleaseAllReferences@CCompositionTextLineMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e58b0, 0x243e0 bytes
    // win32kbase.sys .text:0x23d9b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e3670, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) release_all_references;
    
    // [SetRemarshalingFlags@CCompositionTextLineMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e8520, 0x243e0 bytes
    // win32kbase.sys .text:0x2401d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e62e0, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
