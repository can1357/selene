#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [enum GROUP_WINDOW_ROLE]
    //  Windows 10 v2004, Windows 10 v20H2
    //
    enum class group_window_role_t : int32_t
    {                                       
        _default =    0x0,                    // Windows 10 v2004, Windows 10 v20H2
        application = 0x1,                    // Windows 10 v2004, Windows 10 v20H2
        fallback =    0x2,                    // Windows 10 v2004, Windows 10 v20H2
        max =         0x2,                    // Windows 10 v2004, Windows 10 v20H2
    };                                      
};
