#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum _PCI_HARDWARE_INTERFACE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class hardware_interface_t : int32_t
    {                                        
        conventional = 0x0,                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        x_mode1 =      0x1,                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        x_mode2 =      0x2,                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        express =      0x3,                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
