#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_SET_TYPE]
    //  WDK 10
    //
    enum class storage_set_type_t : int32_t
    {                                      
        standard_set =    0x0,               // WDK 10
        exists_set =      0x1,               // WDK 10
        set_max_defined = 0x2,               // WDK 10
    };                                     
};
