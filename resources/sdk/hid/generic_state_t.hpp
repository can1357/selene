#pragma once
#include <sdkgen/support_library.hpp>

namespace hid
{
    // [enum _GENERIC_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class generic_state_t : int32_t
    {                                   
        ignored =         0x3e8,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        empty_sub_state = 0x3e9,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        null =            0x3ea,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
