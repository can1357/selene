#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_smart_floating_save
{
    // [Save@CSmartFloatingSave]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1dd7bc, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) save;
};
#include "magic/api.end.hpp"
