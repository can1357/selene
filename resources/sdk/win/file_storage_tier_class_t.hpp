#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _FILE_STORAGE_TIER_CLASS]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class file_storage_tier_class_t : int32_t
    {                                             
        unspecified = 0x0,                          // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        capacity =    0x1,                          // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        performance = 0x2,                          // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =         0x3,                          // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
