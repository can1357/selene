#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_property_set_marshaler
{
    // [EmitSetProperties@CPropertySetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x77458, 0x243e0 bytes
    // win32kbase.sys .text:0x286b8, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d48, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_set_properties;
    
    // [EmitUpdateCommands@CPropertySetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x77400, 0x243e0 bytes
    // win32kbase.sys .text:0x28660, 0x27ef0 bytes
    // win32kbase.sys .text:0x8cf0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_update_commands;
    
    // [SetBufferProperty@CPropertySetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x415e0, 0x243e0 bytes
    // win32kbase.sys .text:0xae500, 0x27ef0 bytes
    // win32kbase.sys .text:0x3a5f0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_buffer_property;
    
    // [SetIntegerProperty@CPropertySetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f4ba0, 0x243e0 bytes
    // win32kbase.sys .text:0x2436a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f2960, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CPropertySetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f4be0, 0x243e0 bytes
    // win32kbase.sys .text:0x2436e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f29a0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
