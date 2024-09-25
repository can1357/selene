#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_hover_pointer_source_marshaler
{
    // [EmitUpdateCommands@CHoverPointerSourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9ae0, 0x243e0 bytes
    // win32kbase.sys .text:0xdab10, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8480, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [SetRemarshalingFlags@CHoverPointerSourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9af0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaaf0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8490, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
