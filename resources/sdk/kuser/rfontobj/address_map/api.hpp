#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::rfontobj::address_map
{
    // [Compare@AddressMap@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8910, 0x13864 bytes
    // win32kfull.sys .text:0x119270, 0x1596d bytes
    // win32kfull.sys .text:0x2a86d0, 0x1659e bytes
    // win32kfull.sys .text:0x11a1a0, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) compare;
};
#include "magic/api.end.hpp"
