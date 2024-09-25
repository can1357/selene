#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _CDROM_SPEED_REQUEST]
    //  WDK 10
    //
    enum class cdrom_speed_request_t : int32_t
    {                                         
        speed =     0x0,                        // WDK 10
        streaming = 0x1,                        // WDK 10
    };                                        
};
