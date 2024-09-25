#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_hit_test_state
{
    // [Set@CHitTestState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1f7c5c, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) set;
};
#include "magic/api.end.hpp"
