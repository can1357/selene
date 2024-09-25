#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SYSTEM_VA_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class system_va_type_t : int32_t
    {                                    
        all =            0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        non_paged_pool = 0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        paged_pool =     0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_cache =   0x3,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_ptes =    0x4,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        session_space =  0x5,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =            0x6,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
