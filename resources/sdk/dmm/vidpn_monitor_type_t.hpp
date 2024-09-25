#pragma once
#include <sdkgen/support_library.hpp>

namespace dmm
{
    // [enum _DMM_VIDPN_MONITOR_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class vidpn_monitor_type_t : int32_t
    {                                        
        uninitialized =           0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        physical_monitor =        0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        boot_persistent_monitor = 0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        persistent_monitor =      0x3,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        temporary_monitor =       0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        simulated_monitor =       0x5,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
