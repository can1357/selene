#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _RAID_SYSTEM_POWER]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class raid_system_power_t : int32_t
    {                                       
        unknown = 0x0,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lowest =  0x1,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        low =     0x2,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium =  0x3,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        high =    0x4,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
