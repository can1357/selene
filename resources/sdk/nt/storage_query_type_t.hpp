#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_QUERY_TYPE]
    //  WDK 10
    //
    enum class storage_query_type_t : int32_t
    {                                        
        standard_query =    0x0,               // WDK 10
        exists_query =      0x1,               // WDK 10
        mask_query =        0x2,               // WDK 10
        query_max_defined = 0x3,               // WDK 10
    };                                       
};
