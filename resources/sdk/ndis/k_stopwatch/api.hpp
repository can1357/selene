#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::k_stopwatch
{
    // [GetElapsedTimeInMicroseconds@KStopwatch]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys .text:0xca40c, 0x1e858 bytes
    //
    _m0(sdk::unknown_ptr) get_elapsed_time_in_microseconds;
    
    // [Stop@KStopwatch]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys .text:0x19cc0, 0x1e858 bytes
    //
    _m1(sdk::unknown_ptr) stop;
    
    // [GetElapsedTimeInMilliseconds@KStopwatch]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .text:0x23390, 0x1d2c0 bytes
    // ndis.sys .text:0x19cf0, 0x1e858 bytes
    // ndis.sys .text:0x233b0, 0x1d2c0 bytes
    //
    _m2(sdk::unknown_ptr) get_elapsed_time_in_milliseconds;
};
#include "magic/api.end.hpp"
