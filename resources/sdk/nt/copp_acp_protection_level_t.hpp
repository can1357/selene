#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _COPP_ACP_Protection_Level]
    //  WDK 10
    //
    enum class copp_acp_protection_level_t : int32_t
    {                                               
        level0 =      0x0,                            // WDK 10
        level_min =   0x0,                            // WDK 10
        level1 =      0x1,                            // WDK 10
        level2 =      0x2,                            // WDK 10
        level3 =      0x3,                            // WDK 10
        level_max =   0x3,                            // WDK 10
        force_dword = 0x7fffffff,                     // WDK 10
    };                                              
};
