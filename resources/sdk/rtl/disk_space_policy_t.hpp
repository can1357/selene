#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl
{
    // [enum RTL_DISK_SPACE_POLICY]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class disk_space_policy_t : int32_t
    {                                       
        very_low =     0x5,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        low =          0xa,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        below_normal = 0xf,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        normal =       0x14,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
