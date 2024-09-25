#pragma once
#include <sdkgen/support_library.hpp>

namespace po
{
    // [enum _PO_SLEEP_DISABLE_REASON]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class sleep_disable_reason_t : int32_t
    {                                          
        video =              0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hypervisor =         0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        vhd_boot =           0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        portable_workspace = 0x3,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        policy =             0x4,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        guarded_host =       0x5,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                0x6,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
