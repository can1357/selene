#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum FEATURE_CHANGE_TIME]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class feature_change_time_t : int32_t
    {                                         
        read =          0x0,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        module_reload = 0x1,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        session =       0x2,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reboot =        0x3,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_flag =     0x80,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
