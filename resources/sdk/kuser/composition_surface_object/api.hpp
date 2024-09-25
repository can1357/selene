#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::composition_surface_object
{
    // [GetAdapterLuidAndGpuSync@CompositionSurfaceObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x42220, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_adapter_luid_and_gpu_sync;
    
    // [HasActiveBinding@CompositionSurfaceObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x42438, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) has_active_binding;
    
    // [ImmediateSignalGpuFence@CompositionSurfaceObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x4228c, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) immediate_signal_gpu_fence;
    
    // [NotifyOfRedirectionStop@CompositionSurfaceObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf85fc, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) notify_of_redirection_stop;
};
#include "magic/api.end.hpp"
