#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _RAID_MAX_OPERATIONAL_POWER_SOURCE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class raid_max_operational_power_source_t : int32_t
    {                                                       
        ioctl =     0x0,                                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_cfg = 0x1,                                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thermal =   0x2,                                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =       0x3,                                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                      
};
