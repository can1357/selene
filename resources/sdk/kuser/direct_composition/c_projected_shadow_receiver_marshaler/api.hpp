#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_projected_shadow_receiver_marshaler
{
    // [EmitUpdateCommands@CProjectedShadowReceiverMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x49c0, 0x243e0 bytes
    // win32kbase.sys .text:0x8460, 0x27ef0 bytes
    // win32kbase.sys .text:0x49c0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CProjectedShadowReceiverMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x58b0, 0x243e0 bytes
    // win32kbase.sys .text:0x98c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x58b0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) release_all_references;
    
    // [SetIntegerProperty@CProjectedShadowReceiverMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fec60, 0x243e0 bytes
    // win32kbase.sys .text:0x24e2a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fca30, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CProjectedShadowReceiverMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5570, 0x243e0 bytes
    // win32kbase.sys .text:0x8a70, 0x27ef0 bytes
    // win32kbase.sys .text:0x5570, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CProjectedShadowReceiverMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1feca0, 0x243e0 bytes
    // win32kbase.sys .text:0x24e2e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fca70, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
