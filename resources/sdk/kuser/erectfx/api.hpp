#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::erectfx
{
    // [vInclude@ERECTFX]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x74448, 0x1eb80 bytes
    // win32kbase.sys .text:0xcbe30, 0x243e0 bytes
    // win32kbase.sys .text:0xdc8a0, 0x27ef0 bytes
    // win32kbase.sys .text:0xca7d0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) v_include;
};
#include "magic/api.end.hpp"
