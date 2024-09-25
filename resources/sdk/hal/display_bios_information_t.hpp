#pragma once
#include <sdkgen/support_library.hpp>

namespace hal
{
    // [enum _HAL_DISPLAY_BIOS_INFORMATION]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class display_bios_information_t : int32_t
    {                                              
        int10_bios =    0x0,                         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        emulated_bios = 0x1,                         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_bios =       0x2,                         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
