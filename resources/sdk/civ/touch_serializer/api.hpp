#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace civ::touch_serializer
{
    // [Serialize@CIVTouchSerializer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x216288, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) serialize;
};
#include "magic/api.end.hpp"
