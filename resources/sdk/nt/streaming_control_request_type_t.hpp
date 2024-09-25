#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STREAMING_CONTROL_REQUEST_TYPE]
    //  WDK 10
    //
    enum class streaming_control_request_type_t : int32_t
    {                                                    
        disable =               0x1,                       // WDK 10
        enable_for_read_only =  0x2,                       // WDK 10
        enable_for_write_only = 0x3,                       // WDK 10
        enable_for_read_write = 0x4,                       // WDK 10
    };                                                   
};
