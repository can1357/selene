#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _MMFLUSH_TYPE]
    //  WDK 10
    //
    enum class mmflush_type_t : int32_t
    {                                  
        _delete = 0x0,                   // WDK 10
        write =   0x1,                   // WDK 10
    };                                 
};
