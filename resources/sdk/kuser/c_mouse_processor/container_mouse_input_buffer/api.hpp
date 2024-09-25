#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_mouse_processor::container_mouse_input_buffer
{
    // [CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c8790, 0x243e0 bytes
    // win32kbase.sys .text:0x2118b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c6570, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) commit_staged_chunk_input;
    
    // [FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c97dc, 0x243e0 bytes
    // win32kbase.sys .text:0x21281c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c75bc, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) flush_input_destined_for_container;
    
    // [StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cb644, 0x243e0 bytes
    // win32kbase.sys .text:0x2149a8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c9424, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) stage_mouse_chunk;
};
#include "magic/api.end.hpp"
