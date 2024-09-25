#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum DISPLAYCONFIG_SCALING]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class displayconfig_scaling_t : int32_t
    {                                           
        identity =               0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        centered =               0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stretched =              0x3,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        aspectratiocenteredmax = 0x4,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom =                 0x5,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        preferred =              0x80,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        force_uint32 =           0xff,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
