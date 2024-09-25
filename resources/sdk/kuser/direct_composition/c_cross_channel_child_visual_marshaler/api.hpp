#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_cross_channel_child_visual_marshaler
{
    // [EmitCreationCommand@CCrossChannelChildVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7fac0, 0x1eb80 bytes
    // win32kbase.sys .text:0x49a0, 0x243e0 bytes
    // win32kbase.sys .text:0x8930, 0x27ef0 bytes
    // win32kbase.sys .text:0x49a0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_creation_command;
    
    // [EmitDeletionCommand@CCrossChannelChildVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7fa20, 0x1eb80 bytes
    // win32kbase.sys .text:0x200aa0, 0x243e0 bytes
    // win32kbase.sys .text:0x7340, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fe870, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_deletion_command;
    
    // [IsAssociatedWithSystemVisual@CCrossChannelChildVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7fa70, 0x1eb80 bytes
    // win32kbase.sys .text:0x1de4a0, 0x243e0 bytes
    // win32kbase.sys .text:0x8030, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dc260, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) is_associated_with_system_visual;
    
    // [IsCrossChannelChildVisual@CCrossChannelChildVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f790, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9ae0, 0x243e0 bytes
    // win32kbase.sys .text:0xdab10, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8480, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) is_cross_channel_child_visual;
    
    // [ReleaseAllReferences@CCrossChannelChildVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7fa80, 0x1eb80 bytes
    // win32kbase.sys .text:0x200af0, 0x243e0 bytes
    // win32kbase.sys .text:0x7030, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fe8c0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
};
#include "magic/api.end.hpp"
