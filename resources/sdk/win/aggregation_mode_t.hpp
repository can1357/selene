#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _AGGREGATION_MODE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class aggregation_mode_t : int32_t
    {                                      
        none =    0x70,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        sum =     0x71,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        min =     0x72,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =     0x73,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid = 0x74,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
