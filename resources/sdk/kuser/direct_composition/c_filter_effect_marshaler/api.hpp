#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_filter_effect_marshaler
{
    // [GetType@CFilterEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f600, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CFilterEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x3bc0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3c40, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e93b0, 0x243e0 bytes
    // win32kbase.sys .text:0x22dd10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7170, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_commands;
    
    // [GetMaxInputs@CFilterEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d4a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9e360, 0x243e0 bytes
    // win32kbase.sys .text:0xb3c80, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d1e0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) get_max_inputs;
    
    // [Initialize@CFilterEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3c10, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e93d0, 0x243e0 bytes
    // win32kbase.sys .text:0x22dd30, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7190, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) initialize;
    
    // [IsEarlyDestroyNotificationSupported@CFilterEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f790, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9ae0, 0x243e0 bytes
    // win32kbase.sys .text:0xdab10, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8480, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) is_early_destroy_notification_supported;
    
    // [ReleaseAllReferences@CFilterEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3c50, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9410, 0x243e0 bytes
    // win32kbase.sys .text:0x22dd70, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e71d0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CFilterEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3db0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9480, 0x243e0 bytes
    // win32kbase.sys .text:0x22dde0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7240, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_buffer_property;
    
    // [SetIntegerProperty@CFilterEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3cb0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e94f0, 0x243e0 bytes
    // win32kbase.sys .text:0x22de50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e72b0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CFilterEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3cf0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9560, 0x243e0 bytes
    // win32kbase.sys .text:0x22dec0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7320, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xedee0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9640, 0x243e0 bytes
    // win32kbase.sys .text:0x22dfa0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7400, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
