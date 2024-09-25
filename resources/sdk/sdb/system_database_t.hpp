#pragma once
#include <sdkgen/support_library.hpp>

namespace sdb
{
    // [enum SDB_SYSTEM_DATABASE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class system_database_t : int32_t
    {                                     
        uninitialized = 0x0,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system =        0x1,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pca =           0x2,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        driver =        0x3,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        msi =           0x4,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        frameworks =    0x5,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        appraiser =     0x6,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        count =         0x7,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
