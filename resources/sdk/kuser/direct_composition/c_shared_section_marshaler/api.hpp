#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_section_marshaler
{
    // [CreateDwmHandle@CSharedSectionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x628f0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) create_dwm_handle;
    
    // [InitializeSection@CSharedSectionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x629a8, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) initialize_section;
    
    // [SetRemarshalingFlags@CSharedSectionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf4fa0, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) set_remarshaling_flags;
    
    // [CreateSection@CSharedSectionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb7d30, 0x243e0 bytes
    // win32kbase.sys .text:0xcd9f0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb1d30, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) create_section;
    
    // [EmitUpdateCommands@CSharedSectionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x62880, 0x1eb80 bytes
    // win32kbase.sys .text:0xb3690, 0x243e0 bytes
    // win32kbase.sys .text:0xab280, 0x27ef0 bytes
    // win32kbase.sys .text:0x40d20, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_update_commands;
    
    // [GetType@CSharedSectionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x62ae0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9ef0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaf80, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8890, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CSharedSectionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x62af0, 0x1eb80 bytes
    // win32kbase.sys .text:0xad020, 0x243e0 bytes
    // win32kbase.sys .text:0xc0da0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa3880, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) is_of_type;
};
#include "magic/api.end.hpp"
