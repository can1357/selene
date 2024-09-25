#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_compiled_effect_template_marshaler
{
    // [GetType@CCompiledEffectTemplateMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f840, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CCompiledEffectTemplateMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xeba40, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [ClearSynchronizationEvents@CCompiledEffectTemplateMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbb308, 0x243e0 bytes
    // win32kbase.sys .text:0xd0028, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4e28, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) clear_synchronization_events;
    
    // [SetHandleProperty@CCompiledEffectTemplateMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7c710, 0x243e0 bytes
    // win32kbase.sys .text:0xa1840, 0x27ef0 bytes
    // win32kbase.sys .text:0x819d0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_handle_property;
    
    // [EmitUpdate@CCompiledEffectTemplateMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeb928, 0x1eb80 bytes
    // win32kbase.sys .text:0x7d480, 0x243e0 bytes
    // win32kbase.sys .text:0xa0f1c, 0x27ef0 bytes
    // win32kbase.sys .text:0x80240, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_update;
    
    // [EmitUpdateCommands@CCompiledEffectTemplateMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeb9b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x7d3f0, 0x243e0 bytes
    // win32kbase.sys .text:0xa0e90, 0x27ef0 bytes
    // win32kbase.sys .text:0x801b0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CCompiledEffectTemplateMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeba60, 0x1eb80 bytes
    // win32kbase.sys .text:0xbb2d0, 0x243e0 bytes
    // win32kbase.sys .text:0xcfff0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4df0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) release_all_references;
    
    // [SetIntegerProperty@CCompiledEffectTemplateMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeba90, 0x1eb80 bytes
    // win32kbase.sys .text:0xb50e0, 0x243e0 bytes
    // win32kbase.sys .text:0xcbfc0, 0x27ef0 bytes
    // win32kbase.sys .text:0xae7b0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CCompiledEffectTemplateMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xebad0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb5130, 0x243e0 bytes
    // win32kbase.sys .text:0xcbf10, 0x27ef0 bytes
    // win32kbase.sys .text:0xae9b0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CCompiledEffectTemplateMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xebb70, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f7880, 0x243e0 bytes
    // win32kbase.sys .text:0x246280, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f5640, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
