#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _NVCACHE_STATUS]
    //  WDK 10
    //
    enum class nvcache_status_t : int32_t
    {                                    
        unknown =   0x0,                   // WDK 10
        disabling = 0x1,                   // WDK 10
        disabled =  0x2,                   // WDK 10
        enabled =   0x3,                   // WDK 10
    };                                   
};
