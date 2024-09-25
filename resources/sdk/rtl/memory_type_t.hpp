#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl
{
    // [enum _RTL_MEMORY_TYPE]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class memory_type_t : int32_t
    {                                 
        type_paged =        0x0,        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_non_paged =    0x1,        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type64k_page =      0x2,        // Windows 11
        type_large_page =   0x2,        // WDK 10, Windows 10 v2004, Windows 10 v20H2
        type_huge_page =    0x3,        // WDK 10, Windows 10 v2004, Windows 10 v20H2
        //type_large_page = 0x3,        // Windows 11
        //type_huge_page =  0x4,        // Windows 11
        type_max =          0x4,        // WDK 10, Windows 10 v2004, Windows 10 v20H2
        type_custom =       0x5,        // Windows 11
        //type_max =        0x6,        // Windows 11
    };                                
};
