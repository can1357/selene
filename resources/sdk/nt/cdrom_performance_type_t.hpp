#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _CDROM_PERFORMANCE_TYPE]
    //  WDK 10
    //
    enum class cdrom_performance_type_t : int32_t
    {                                            
        read_performance =  0x1,                   // WDK 10
        write_performance = 0x2,                   // WDK 10
    };                                           
};
