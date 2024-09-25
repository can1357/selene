#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_global_d_comp_visual_marshaler
{
    // [EmitSetBackgroundColorCommand@CGlobalDCompVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x238590, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) emit_set_background_color_command;
    
    // [EmitSetDCompVisualPointerCommand@CGlobalDCompVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x238f4c, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) emit_set_d_comp_visual_pointer_command;
    
    // [EmitUpdateCommands@CGlobalDCompVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x23c760, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_commands;
    
    // [SetBufferProperty@CGlobalDCompVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x23e0d0, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) set_buffer_property;
    
    // [SetIntegerProperty@CGlobalDCompVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x23e6a0, 0x27ef0 bytes
    //
    _m4(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CGlobalDCompVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x240350, 0x27ef0 bytes
    //
    _m5(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
