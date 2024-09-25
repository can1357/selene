#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum _NPEM_CONTROL_STANDARD_CONTROL_BIT]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class npem_control_standard_control_bit_t : int32_t
    {                                                       
        initiate_reset =              0x1,                    // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ok_control =                  0x2,                    // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        locate_control =              0x3,                    // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fail_control =                0x4,                    // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rebuild_control =             0x5,                    // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pfa_control =                 0x6,                    // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hot_spare_control =           0x7,                    // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_a_critical_array_control = 0x8,                    // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_a_failed_array_control =   0x9,                    // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid_device_type_control = 0xa,                    // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled_control =            0xb,                    // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                      
};
