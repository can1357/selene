#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::dpi_internal
{
    // [CalcDpi@DpiInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x893e0, 0x1eb80 bytes
    // win32kbase.sys .text:0xd1798, 0x243e0 bytes
    // win32kbase.sys .text:0xe2dc8, 0x27ef0 bytes
    // win32kbase.sys .text:0xd0130, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) calc_dpi;
    
    // [CalcDpiOverride@DpiInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x892d4, 0x1eb80 bytes
    // win32kbase.sys .text:0xd1678, 0x243e0 bytes
    // win32kbase.sys .text:0xe2ca8, 0x27ef0 bytes
    // win32kbase.sys .text:0xd0010, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) calc_dpi_override;
    
    // [SatisfyMinResolutionBarForScaleIdx@DpiInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xccd14, 0x1eb80 bytes
    // win32kbase.sys .text:0x15685c, 0x243e0 bytes
    // win32kbase.sys .text:0x189ca8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1546fc, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) satisfy_min_resolution_bar_for_scale_idx;
    
    // [ScaleOverrideTestHookCore@DpiInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x88bd0, 0x1eb80 bytes
    // win32kbase.sys .text:0xd0e34, 0x243e0 bytes
    // win32kbase.sys .text:0xe22c8, 0x27ef0 bytes
    // win32kbase.sys .text:0xcf634, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) scale_override_test_hook_core;
};
#include "magic/api.end.hpp"
