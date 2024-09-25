#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace fx
{
    // [fxPtSize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xbfea4, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) pt_size;
};
#include "magic/api.end.hpp"
