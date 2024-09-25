#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace psz
{
    // [pszType1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .rdata:0x2ef580, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) type1;
};
#include "magic/api.end.hpp"
