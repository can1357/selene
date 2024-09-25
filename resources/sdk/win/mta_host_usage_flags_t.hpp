#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum MTA_HOST_USAGE_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class mta_host_usage_flags_t : int32_t
    {                                          
        none =                 0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mtainitialized =       0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        activatorinitialized = 0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unloadcalled =         0x4,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
