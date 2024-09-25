#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_cursor_visual_marshaler
{
    // [EmitSetCursorIdCommand@CCursorVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x238ed4, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) emit_set_cursor_id_command;
    
    // [EmitSetIsHardwareCursorEnabledCommand@CCursorVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x2399f0, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) emit_set_is_hardware_cursor_enabled_command;
    
    // [Initialize@CCursorVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x23d780, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) initialize;
    
    // [SetBufferProperty@CCursorVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x23dfc0, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) set_buffer_property;
    
    // [EmitCursorId@CCursorVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5408, 0x243e0 bytes
    // win32kbase.sys .text:0x1f31c8, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_cursor_id;
    
    // [EmitEnableRendering@CCursorVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5480, 0x243e0 bytes
    // win32kbase.sys .text:0x1f3240, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_enable_rendering;
    
    // [EmitInputDeviceId@CCursorVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1f54f8, 0x243e0 bytes
    // win32kbase.sys .text:0x1f32b8, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) emit_input_device_id;
    
    // [EmitOrientation@CCursorVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5570, 0x243e0 bytes
    // win32kbase.sys .text:0x1f3330, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) emit_orientation;
    
    // [EmitVisualReference@CCursorVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5678, 0x243e0 bytes
    // win32kbase.sys .text:0x1f3438, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) emit_visual_reference;
    
    // [IsShellResource@CCursorVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xc9af0, 0x243e0 bytes
    // win32kbase.sys .text:0xc8490, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) is_shell_resource;
    
    // [ReleaseAllReferences@CCursorVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5700, 0x243e0 bytes
    // win32kbase.sys .text:0x1f34c0, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) release_all_references;
    
    // [SetReferenceProperty@CCursorVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1f57f0, 0x243e0 bytes
    // win32kbase.sys .text:0x1f35b0, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_reference_property;
    
    // [EmitUpdateCommands@CCursorVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f55f0, 0x243e0 bytes
    // win32kbase.sys .text:0x23c650, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f33b0, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) emit_update_commands;
    
    // [SetIntegerProperty@CCursorVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5750, 0x243e0 bytes
    // win32kbase.sys .text:0x23e580, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f3510, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CCursorVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5890, 0x243e0 bytes
    // win32kbase.sys .text:0x240240, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f3650, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
