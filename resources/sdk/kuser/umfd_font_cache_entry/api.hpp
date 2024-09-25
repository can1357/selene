#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::umfd_font_cache_entry
{
    // [FntCacheAllocate@UmfdFontCacheEntry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ded28, 0x1596d bytes
    // win32kfull.sys .text:0x2dea18, 0x1659e bytes
    // win32kfull.sys .text:0x2ded38, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) fnt_cache_allocate;
};
#include "magic/api.end.hpp"
