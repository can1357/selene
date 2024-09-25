#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _CLASS_DEBUG_LEVEL]
    //  WDK 10
    //
    enum class class_debug_level_t : int32_t
    {                                       
        error =         0x0,                  // WDK 10
        warning =       0x1,                  // WDK 10
        trace =         0x2,                  // WDK 10
        info =          0x3,                  // WDK 10
        media_locks =   0x8,                  // WDK 10
        mcn =           0x9,                  // WDK 10
        delayed_retry = 0xa,                  // WDK 10
        sense_info =    0xb,                  // WDK 10
        remove_lock =   0xc,                  // WDK 10
        external4 =     0xd,                  // WDK 10
        external3 =     0xe,                  // WDK 10
        external2 =     0xf,                  // WDK 10
        external1 =     0x10,                 // WDK 10
    };                                      
};
