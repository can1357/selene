#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_view_box_marshaler
{
    // [EmitUpdateCommands@CViewBoxMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f05a0, 0x243e0 bytes
    // win32kbase.sys .text:0x235b20, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ee360, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CViewBoxMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f0690, 0x243e0 bytes
    // win32kbase.sys .text:0x235c10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ee450, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
    
    // [SetBufferProperty@CViewBoxMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f06b0, 0x243e0 bytes
    // win32kbase.sys .text:0x235c30, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ee470, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_buffer_property;
    
    // [SetFloatProperty@CViewBoxMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f0710, 0x243e0 bytes
    // win32kbase.sys .text:0x235c90, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ee4d0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_float_property;
    
    // [SetIntegerProperty@CViewBoxMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f0750, 0x243e0 bytes
    // win32kbase.sys .text:0x235cd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ee510, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CViewBoxMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9ed0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaf60, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8870, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
