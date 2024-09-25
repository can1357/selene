#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum _PCI_FPB_RESOURCE_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class fpb_resource_type_t : int32_t
    {                                       
        bus_numbers = 0x1,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_low =  0x2,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_high = 0x3,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =         0x4,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
