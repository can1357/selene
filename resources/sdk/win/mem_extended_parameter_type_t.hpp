#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum MEM_EXTENDED_PARAMETER_TYPE]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class mem_extended_parameter_type_t : int32_t
    {                                                 
        invalid_type =         0x0,                     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        address_requirements = 0x1,                     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        numa_node =            0x2,                     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        partition_handle =     0x3,                     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_physical_handle = 0x4,                     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_flags =      0x5,                     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_machine =        0x6,                     // Windows 11
        max =                  0x6,                     // WDK 10, Windows 10 v2004, Windows 10 v20H2
        //max =                0x7,                     // Windows 11
    };                                                
};
