#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::prediction::tag_rls_filter
{
    // [Filter@tagRlsFilter@Prediction]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1c7fdc, 0x13864 bytes
    // win32kfull.sys .text:0x1ecb14, 0x1596d bytes
    // win32kfull.sys .text:0x1e9048, 0x1659e bytes
    // win32kfull.sys .text:0x1ec974, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) filter;
    
    // [vInit@tagRlsFilter@Prediction]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1c9f60, 0x13864 bytes
    // win32kfull.sys .text:0x1eedac, 0x1596d bytes
    // win32kfull.sys .text:0x1eb18c, 0x1659e bytes
    // win32kfull.sys .text:0x1eec0c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) v_init;
};
#include "magic/api.end.hpp"
