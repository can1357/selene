#pragma once
#include <sdkgen/support_library.hpp>

namespace wwan
{
    // [enum _WWAN_CELLULAR_CLASS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cellular_class_t : int32_t
    {                                    
        unknown = 0x0,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        gsm =     0x1,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cdma =    0x2,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =     0x3,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
