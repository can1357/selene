#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_ASSOCIATION_TYPE]
    //  WDK 10
    //
    enum class storage_association_type_t : int32_t
    {                                              
        device = 0x0,                                // WDK 10
        port =   0x1,                                // WDK 10
        target = 0x2,                                // WDK 10
    };                                             
};
