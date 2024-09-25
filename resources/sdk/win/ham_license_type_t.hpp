#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _HAM_LICENSE_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ham_license_type_t : int32_t
    {                                      
        none =       0x0,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        background = 0x1,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        prelaunch =  0x2,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        foreground = 0x3,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_count = 0x4,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
