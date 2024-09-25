#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _DEVICE_RESET_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class device_reset_type_t : int32_t 
    {                                        
        function_level_device_reset = 0x0,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        platform_level_device_reset = 0x1,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
