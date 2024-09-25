#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _CDROM_PERFORMANCE_TOLERANCE_TYPE]
    //  WDK 10
    //
    enum class cdrom_performance_tolerance_type_t : int32_t
    {                                                      
        cdrom10_nominal20_exceptions = 0x1,                  // WDK 10
    };                                                     
};
