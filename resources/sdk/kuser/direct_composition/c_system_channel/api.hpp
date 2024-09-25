#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_system_channel
{
    // [BoostCompositorClock@CSystemChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x22d480, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) boost_compositor_clock;
    
    // [Create@CSystemChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x79be0, 0x1eb80 bytes
    // win32kbase.sys .text:0xbe424, 0x243e0 bytes
    // win32kbase.sys .text:0x9fe40, 0x27ef0 bytes
    // win32kbase.sys .text:0x7dd88, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) create;
    
    // [DesktopCaptureBits@CSystemChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe8bd4, 0x1eb80 bytes
    // win32kbase.sys .text:0x1defa0, 0x243e0 bytes
    // win32kbase.sys .text:0x22d4f8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dcd60, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) desktop_capture_bits;
    
    // [EnableMMCSS@CSystemChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe8c88, 0x1eb80 bytes
    // win32kbase.sys .text:0x1df060, 0x243e0 bytes
    // win32kbase.sys .text:0x22d5b8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dce20, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) enable_mmcss;
    
    // [ForceRender@CSystemChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe8dd0, 0x1eb80 bytes
    // win32kbase.sys .text:0xd1ff4, 0x243e0 bytes
    // win32kbase.sys .text:0xe20bc, 0x27ef0 bytes
    // win32kbase.sys .text:0xd0994, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) force_render;
    
    // [GetType@CSystemChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f7b0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9d60, 0x243e0 bytes
    // win32kbase.sys .text:0xdade0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8700, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) get_type;
    
    // [ReleaseSystemResource@CSystemChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x79c68, 0x1eb80 bytes
    // win32kbase.sys .text:0x75450, 0x243e0 bytes
    // win32kbase.sys .text:0x2ba88, 0x27ef0 bytes
    // win32kbase.sys .text:0xd560, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) release_system_resource;
};
#include "magic/api.end.hpp"
