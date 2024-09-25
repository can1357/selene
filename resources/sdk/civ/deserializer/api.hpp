#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace civ::deserializer
{
    // [Deserialize@CIVDeserializer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x2151fc, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) deserialize;
};
#include "magic/api.end.hpp"
