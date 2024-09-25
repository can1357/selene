#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _CDROM_PERFORMANCE_EXCEPTION_TYPE]
    //  WDK 10
    //
    enum class cdrom_performance_exception_type_t : int32_t
    {                                                      
        nominal_performance =         0x1,                   // WDK 10
        entire_performance_list =     0x2,                   // WDK 10
        performance_exceptions_only = 0x3,                   // WDK 10
    };                                                     
};
