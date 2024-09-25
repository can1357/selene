#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl
{
    // [enum _RTL_FEATURE_CONFIGURATION_TYPE]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class feature_configuration_type_t : int32_t
    {                                                
        boot =    0x0,                                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        runtime = 0x1,                                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        count =   0x2,                                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
