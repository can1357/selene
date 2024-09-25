#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl
{
    // [enum RTL_DISK_SPEED_POLICY]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class disk_speed_policy_t : int32_t
    {                                       
        normal = 0xa,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fast =   0x14,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
