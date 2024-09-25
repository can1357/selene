#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_composition_surface
{
    // [GetAdapterLuidAndGpuSync@CCompositionSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x41884, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_adapter_luid_and_gpu_sync;
    
    // [NotifyBuffersOfDwmTermination@CCompositionSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf7404, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) notify_buffers_of_dwm_termination;
    
    // [NotifyPendingFlipPresent@CCompositionSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x41b2c, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) notify_pending_flip_present;
    
    // [UpdateStats@CCompositionSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x41678, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) update_stats;
};
#include "magic/api.end.hpp"
