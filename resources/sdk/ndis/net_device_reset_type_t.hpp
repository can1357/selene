#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NET_DEVICE_RESET_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class net_device_reset_type_t : int32_t
    {                                           
        function_level_reset = 0x0,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        platform_level_reset = 0x1,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
