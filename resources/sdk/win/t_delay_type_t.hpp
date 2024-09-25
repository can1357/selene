#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum tDelayType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class t_delay_type_t : int32_t
    {                                  
        fixed_delay =  0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        random_delay = 0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
