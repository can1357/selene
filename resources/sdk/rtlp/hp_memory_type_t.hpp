#pragma once
#include <sdkgen/support_library.hpp>

namespace rtlp
{
    // [enum _RTLP_HP_MEMORY_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class hp_memory_type_t : int32_t
    {                                    
        memory_paged =        0x0,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_non_paged =    0x1,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory64k_page =      0x2,         // Windows 11
        memory_large_page =   0x2,         // Windows 10 v2004, Windows 10 v20H2
        memory_huge_page =    0x3,         // Windows 10 v2004, Windows 10 v20H2
        //memory_large_page = 0x3,         // Windows 11
        //memory_huge_page =  0x4,         // Windows 11
        memory_type_max =     0x4,         // Windows 10 v2004, Windows 10 v20H2
        memory_type_custom =  0x5,         // Windows 11
        //memory_type_max =   0x6,         // Windows 11
    };                                   
};
