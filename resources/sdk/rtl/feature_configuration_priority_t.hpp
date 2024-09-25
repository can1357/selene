#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl
{
    // [enum _RTL_FEATURE_CONFIGURATION_PRIORITY]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class feature_configuration_priority_t : int32_t
    {                                                    
        image_default =  0x0,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        enrollment =     0x2,                              // Windows 11
        service =        0x4,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        user =           0x8,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_policy =    0xa,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        test =           0xc,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_override = 0xf,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =            0xf,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                   
};
