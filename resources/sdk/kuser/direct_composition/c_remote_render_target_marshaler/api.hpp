#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_remote_render_target_marshaler
{
    // [EmitUpdateCommands@CRemoteRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd1850, 0x243e0 bytes
    // win32kbase.sys .text:0xe2df0, 0x27ef0 bytes
    // win32kbase.sys .text:0xd01f0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [GetType@CRemoteRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9e10, 0x243e0 bytes
    // win32kbase.sys .text:0xdaea0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc87b0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CRemoteRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd2590, 0x243e0 bytes
    // win32kbase.sys .text:0xe39e0, 0x27ef0 bytes
    // win32kbase.sys .text:0xd0f30, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) is_of_type;
    
    // [IsShellResource@CRemoteRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9ae0, 0x243e0 bytes
    // win32kbase.sys .text:0xdab10, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8480, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) is_shell_resource;
    
    // [ReleaseAllReferences@CRemoteRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd2890, 0x243e0 bytes
    // win32kbase.sys .text:0xe3bc0, 0x27ef0 bytes
    // win32kbase.sys .text:0xd1230, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CRemoteRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd2140, 0x243e0 bytes
    // win32kbase.sys .text:0xe36b0, 0x27ef0 bytes
    // win32kbase.sys .text:0xd0ae0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_buffer_property;
    
    // [SetIntegerProperty@CRemoteRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd2750, 0x243e0 bytes
    // win32kbase.sys .text:0xe3b90, 0x27ef0 bytes
    // win32kbase.sys .text:0xd10f0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CRemoteRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd23d0, 0x243e0 bytes
    // win32kbase.sys .text:0xe38b0, 0x27ef0 bytes
    // win32kbase.sys .text:0xd0d70, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CRemoteRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f7030, 0x243e0 bytes
    // win32kbase.sys .text:0x245920, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f4df0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
