#pragma once
#include <sdkgen/support_library.hpp>

namespace rtlp
{
    // [enum _RTLP_HP_LOCK_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class hp_lock_type_t : int32_t
    {                                  
        paged =     0x0,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        non_paged = 0x1,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_max =  0x2,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
