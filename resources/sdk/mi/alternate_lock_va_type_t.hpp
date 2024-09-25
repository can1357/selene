#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_ALTERNATE_LOCK_VA_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class alternate_lock_va_type_t : int32_t
    {                                            
        system_ptes =    0x0,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        non_paged_pool = 0x1,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        user =           0x2,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system =         0x3,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =        0x4,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
