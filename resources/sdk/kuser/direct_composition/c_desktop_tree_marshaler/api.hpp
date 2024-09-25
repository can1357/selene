#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_desktop_tree_marshaler
{
    // [EmitUpdateCommands@CDesktopTreeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc25d0, 0x243e0 bytes
    // win32kbase.sys .text:0xd5800, 0x27ef0 bytes
    // win32kbase.sys .text:0xbbbc0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [IsShellResource@CDesktopTreeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9ae0, 0x243e0 bytes
    // win32kbase.sys .text:0xdab10, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8480, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) is_shell_resource;
    
    // [ReleaseAllReferences@CDesktopTreeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc5ec0, 0x243e0 bytes
    // win32kbase.sys .text:0xd8390, 0x27ef0 bytes
    // win32kbase.sys .text:0xbee80, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) release_all_references;
    
    // [ReleaseRootVisual@CDesktopTreeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc5ed8, 0x243e0 bytes
    // win32kbase.sys .text:0xd8458, 0x27ef0 bytes
    // win32kbase.sys .text:0xbee98, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) release_root_visual;
    
    // [SetBufferProperty@CDesktopTreeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc73c0, 0x243e0 bytes
    // win32kbase.sys .text:0xd9480, 0x27ef0 bytes
    // win32kbase.sys .text:0xc0000, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_buffer_property;
    
    // [SetReferenceProperty@CDesktopTreeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc5e10, 0x243e0 bytes
    // win32kbase.sys .text:0xd83b0, 0x27ef0 bytes
    // win32kbase.sys .text:0xbedd0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CDesktopTreeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f4da0, 0x243e0 bytes
    // win32kbase.sys .text:0x243a50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f2b60, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
