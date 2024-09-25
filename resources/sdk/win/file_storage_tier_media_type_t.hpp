#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _FILE_STORAGE_TIER_MEDIA_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class file_storage_tier_media_type_t : int32_t
    {                                                  
        unspecified = 0x0,                               // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disk =        0x1,                               // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ssd =         0x2,                               // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scm =         0x4,                               // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =         0x5,                               // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
