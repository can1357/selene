#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::cd_display_render_target_marshaler
{
    // [EmitCreate@CDDisplayRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f7268, 0x243e0 bytes
    // win32kbase.sys .text:0x245b60, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f5028, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_create;
    
    // [EmitUpdateCommands@CDDisplayRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f7350, 0x243e0 bytes
    // win32kbase.sys .text:0x245c40, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f5110, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_update_commands;
    
    // [GetType@CDDisplayRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9dd0, 0x243e0 bytes
    // win32kbase.sys .text:0xdae70, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8770, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) get_type;
    
    // [Initialize@CDDisplayRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f7430, 0x243e0 bytes
    // win32kbase.sys .text:0x245d70, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f51f0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) initialize;
    
    // [IsOfType@CDDisplayRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1de4e0, 0x243e0 bytes
    // win32kbase.sys .text:0x22cbb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dc2a0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) is_of_type;
    
    // [IsShellResource@CDDisplayRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9ae0, 0x243e0 bytes
    // win32kbase.sys .text:0xdab10, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8480, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) is_shell_resource;
    
    // [ReleaseAllReferences@CDDisplayRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f7450, 0x243e0 bytes
    // win32kbase.sys .text:0x245d90, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f5210, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CDDisplayRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f74a0, 0x243e0 bytes
    // win32kbase.sys .text:0x245de0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f5260, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_buffer_property;
    
    // [SetFloatProperty@CDDisplayRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f7570, 0x243e0 bytes
    // win32kbase.sys .text:0x245f50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f5330, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_float_property;
    
    // [SetHandleProperty@CDDisplayRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f75b0, 0x243e0 bytes
    // win32kbase.sys .text:0x245fb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f5370, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_handle_property;
    
    // [SetIntegerProperty@CDDisplayRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f7680, 0x243e0 bytes
    // win32kbase.sys .text:0x246080, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f5440, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CDDisplayRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f7780, 0x243e0 bytes
    // win32kbase.sys .text:0x246180, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f5540, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CDDisplayRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f7830, 0x243e0 bytes
    // win32kbase.sys .text:0x246230, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f55f0, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
