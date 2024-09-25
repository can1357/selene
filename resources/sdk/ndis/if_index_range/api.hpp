#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::if_index_range
{
    // [AllocateAnyBit@IfIndexRange]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .text:0x2b9e0, 0x1d2c0 bytes
    // ndis.sys .text:0x251f8, 0x1e858 bytes
    // ndis.sys .text:0x2ba00, 0x1d2c0 bytes
    //
    _m0(sdk::unknown_ptr) allocate_any_bit;
    
    // [Grow@IfIndexRange]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .text:0x39858, 0x1d2c0 bytes
    // ndis.sys .text:0x336e0, 0x1e858 bytes
    // ndis.sys .text:0x39878, 0x1d2c0 bytes
    //
    _m1(sdk::unknown_ptr) grow;
};
#include "magic/api.end.hpp"
