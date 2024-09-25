#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _WRITE_CACHE_CHANGE]
    //  WDK 10
    //
    enum class write_cache_change_t : int32_t
    {                                        
        change_unknown = 0x0,                  // WDK 10
        not_changeable = 0x1,                  // WDK 10
        changeable =     0x2,                  // WDK 10
    };                                       
};
