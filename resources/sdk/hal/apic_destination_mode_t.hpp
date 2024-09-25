#pragma once
#include <sdkgen/support_library.hpp>

namespace hal
{
    // [enum HAL_APIC_DESTINATION_MODE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class apic_destination_mode_t : int32_t
    {                                           
        physical =          0x1,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        logical_flat =      0x2,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        logical_clustered = 0x3,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unknown =           0x4,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
