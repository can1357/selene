#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DISK_CACHE_STATE]
    //  WDK 10
    //
    enum class disk_cache_state_t : int32_t  
    {                                        
        normal =                      0x0,     // WDK 10
        write_through_not_supported = 0x1,     // WDK 10
        modify_unsuccessful =         0x2,     // WDK 10
    };                                       
};
