#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _CDROM_PERFORMANCE_REQUEST_TYPE]
    //  WDK 10
    //
    enum class cdrom_performance_request_type_t : int32_t
    {                                                    
        performance_request = 0x1,                         // WDK 10
        write_speed_request = 0x2,                         // WDK 10
    };                                                   
};
