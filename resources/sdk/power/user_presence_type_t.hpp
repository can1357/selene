#pragma once
#include <sdkgen/support_library.hpp>

namespace power
{
    // [enum POWER_USER_PRESENCE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class user_presence_type_t : int32_t
    {                                        
        not_present = 0x0,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        present =     0x1,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unknown =     0xff,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
