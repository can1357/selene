#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum _PCI_ACS_BIT]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class acs_bit_t : int32_t
    {                             
        reserved =      0x0,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_enable =    0x1,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_disable =   0x2,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_dont_care = 0x3,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                            
};
