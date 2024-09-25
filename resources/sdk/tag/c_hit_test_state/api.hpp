#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace tag::c_hit_test_state
{
    // [Set@tagCHitTestState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1a5ba4, 0x243e0 bytes
    // win32kbase.sys .text:0x1a425c, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) set;
};
#include "magic/api.end.hpp"
