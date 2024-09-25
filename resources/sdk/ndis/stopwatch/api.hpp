#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::stopwatch
{
    // [GetElapsedTimeInMilliseconds@NdisStopwatch]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607
    // ndis.sys .text:0x1b770, 0x1c8a8 bytes
    //
    _m0(sdk::unknown_ptr) get_elapsed_time_in_milliseconds;
};
#include "magic/api.end.hpp"
