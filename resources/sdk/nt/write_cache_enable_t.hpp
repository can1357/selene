#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _WRITE_CACHE_ENABLE]
    //  WDK 10
    //
    enum class write_cache_enable_t : int32_t
    {                                        
        enable_unknown = 0x0,                  // WDK 10
        disabled =       0x1,                  // WDK 10
        enabled =        0x2,                  // WDK 10
    };                                       
};
