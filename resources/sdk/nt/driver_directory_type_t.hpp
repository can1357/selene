#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DRIVER_DIRECTORY_TYPE]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class driver_directory_type_t : int32_t
    {                                           
        image =       0x0,                        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        data =        0x1,                        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shared_data = 0x2,                        // Windows 11
    };                                          
};
