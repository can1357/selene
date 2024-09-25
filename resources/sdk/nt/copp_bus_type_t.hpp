#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _COPP_BusType]
    //  WDK 10
    //
    enum class copp_bus_type_t : int32_t
    {                                   
        integrated =  -0x80000000,        // WDK 10
        unknown =     0x0,                // WDK 10
        pci =         0x1,                // WDK 10
        pcix =        0x2,                // WDK 10
        pci_express = 0x3,                // WDK 10
        agp =         0x4,                // WDK 10
        force_dword = 0x7fffffff,         // WDK 10
    };                                  
};
