#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::ui_privelege_isolation
{
    // [fEnforce@UIPrivelegeIsolation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x25ad78, 0x243e0 bytes
    // win32kbase.sys .data:0x2afb88, 0x27ef0 bytes
    // win32kbase.sys .data:0x257da8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) f_enforce;
};
#include "magic/api.end.hpp"
