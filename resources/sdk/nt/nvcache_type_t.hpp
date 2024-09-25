#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _NVCACHE_TYPE]
    //  WDK 10
    //
    enum class nvcache_type_t : int32_t
    {                                  
        unknown =       0x0,             // WDK 10
        none =          0x1,             // WDK 10
        write_back =    0x2,             // WDK 10
        write_through = 0x3,             // WDK 10
    };                                 
};
