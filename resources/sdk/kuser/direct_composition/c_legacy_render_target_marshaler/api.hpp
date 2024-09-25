#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_legacy_render_target_marshaler
{
    // [EmitUpdateCommands@CLegacyRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xba840, 0x243e0 bytes
    // win32kbase.sys .text:0xce220, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4160, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [GetType@CLegacyRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9df0, 0x243e0 bytes
    // win32kbase.sys .text:0xdae80, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8790, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) get_type;
    
    // [Initialize@CLegacyRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc8460, 0x243e0 bytes
    // win32kbase.sys .text:0xda0b0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc1020, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) initialize;
    
    // [IsOfType@CLegacyRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x9d100, 0x243e0 bytes
    // win32kbase.sys .text:0xa6db0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8bdf0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) is_of_type;
    
    // [IsShellResource@CLegacyRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9ae0, 0x243e0 bytes
    // win32kbase.sys .text:0xdab10, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8480, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) is_shell_resource;
    
    // [ReleaseAllReferences@CLegacyRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc8050, 0x243e0 bytes
    // win32kbase.sys .text:0xd9c00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc0c30, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CLegacyRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc160, 0x243e0 bytes
    // win32kbase.sys .text:0xd2ae0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb65d0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_buffer_property;
    
    // [SetFloatProperty@CLegacyRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f6f30, 0x243e0 bytes
    // win32kbase.sys .text:0xd89e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f4cf0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_float_property;
    
    // [SetIntegerProperty@CLegacyRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbee40, 0x243e0 bytes
    // win32kbase.sys .text:0xd49a0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb8440, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CLegacyRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc7230, 0x243e0 bytes
    // win32kbase.sys .text:0xd92d0, 0x27ef0 bytes
    // win32kbase.sys .text:0xbfea0, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CLegacyRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f6f70, 0x243e0 bytes
    // win32kbase.sys .text:0x245860, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f4d30, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
