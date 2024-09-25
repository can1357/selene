#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::rbrush
{
    // [vFreeOrCacheRBrush@RBRUSH]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7f8e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x32410, 0x243e0 bytes
    // win32kbase.sys .text:0x95080, 0x27ef0 bytes
    // win32kbase.sys .text:0x45ee0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) v_free_or_cache_r_brush;
};
#include "magic/api.end.hpp"
