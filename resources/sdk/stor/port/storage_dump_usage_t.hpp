#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _STORAGE_DUMP_USAGE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class storage_dump_usage_t : int32_t
    {                                        
        unknown =     0x0,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        crash =       0x1,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        hibernation = 0x2,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =         0x3,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
