#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_cross_channel_parent_visual_marshaler
{
    // [DetachFromParent@CCrossChannelParentVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7f210, 0x1eb80 bytes
    // win32kbase.sys .text:0x1de1a0, 0x243e0 bytes
    // win32kbase.sys .text:0x7cf0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dbf60, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) detach_from_parent;
    
    // [EmitCreationCommand@CCrossChannelParentVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7f200, 0x1eb80 bytes
    // win32kbase.sys .text:0x4700, 0x243e0 bytes
    // win32kbase.sys .text:0x8440, 0x27ef0 bytes
    // win32kbase.sys .text:0x4700, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_creation_command;
    
    // [Initialize@CCrossChannelParentVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7f11c, 0x1eb80 bytes
    // win32kbase.sys .text:0x26a0, 0x243e0 bytes
    // win32kbase.sys .text:0x2644, 0x27ef0 bytes
    // win32kbase.sys .text:0x26a0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) initialize;
    
    // [IsAssociatedWithSystemVisual@CCrossChannelParentVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7f100, 0x1eb80 bytes
    // win32kbase.sys .text:0x1de4c0, 0x243e0 bytes
    // win32kbase.sys .text:0x6f70, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dc280, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) is_associated_with_system_visual;
    
    // [IsCrossChannelParentVisual@CCrossChannelParentVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f790, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9ae0, 0x243e0 bytes
    // win32kbase.sys .text:0xdab10, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8480, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) is_cross_channel_parent_visual;
    
    // [ReleaseAllReferences@CCrossChannelParentVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7f1d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x200b40, 0x243e0 bytes
    // win32kbase.sys .text:0x7f80, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fe910, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) release_all_references;
};
#include "magic/api.end.hpp"
