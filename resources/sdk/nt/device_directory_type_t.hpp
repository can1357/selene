#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DEVICE_DIRECTORY_TYPE]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class device_directory_type_t : int32_t
    {                                           
        device_directory_data = 0x0,              // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
