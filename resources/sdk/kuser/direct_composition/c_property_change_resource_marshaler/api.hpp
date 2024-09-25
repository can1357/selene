#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_property_change_resource_marshaler
{
    // [EmitSetPropertyIdSet@CPropertyChangeResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x778ac, 0x243e0 bytes
    // win32kbase.sys .text:0x28b30, 0x27ef0 bytes
    // win32kbase.sys .text:0x919c, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_set_property_id_set;
    
    // [EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6b22c, 0x1eb80 bytes
    // win32kbase.sys .text:0x7781c, 0x243e0 bytes
    // win32kbase.sys .text:0x287c8, 0x27ef0 bytes
    // win32kbase.sys .text:0x910c, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_update_commands;
    
    // [SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xea460, 0x1eb80 bytes
    // win32kbase.sys .text:0xa4280, 0x243e0 bytes
    // win32kbase.sys .text:0xb4540, 0x27ef0 bytes
    // win32kbase.sys .text:0x93970, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xea48c, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9164, 0x243e0 bytes
    // win32kbase.sys .text:0x22e4e8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e6f24, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
