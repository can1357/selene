#pragma once
#include <sdkgen/support_library.hpp>

namespace ex
{
    // [enum _EX_HEAP_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class heap_type_t : int32_t
    {                               
        non_paged =     0x0,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        non_paged_min = 0x0,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        non_paged_max = 0x1,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        non_paged_nx =  0x1,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        paged =         0x2,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        paged_min =     0x2,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        mm_st =         0x3,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        paged_max =     0x3,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =           0x4,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        special_max =   0x4,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                              
};
