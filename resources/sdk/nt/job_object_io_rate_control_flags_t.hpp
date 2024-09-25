#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum JOB_OBJECT_IO_RATE_CONTROL_FLAGS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class job_object_io_rate_control_flags_t : int32_t
    {                                                      
        enable =                        0x1,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        standalone_volume =             0x2,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //valid_flags =                 0x3,                 // Windows 10 v1607
        force_unit_access_all =         0x4,                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        force_unit_access_on_soft_cap = 0x8,                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        valid_flags =                   0xf,                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
