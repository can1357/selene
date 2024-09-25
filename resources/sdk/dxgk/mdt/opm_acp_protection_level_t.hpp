#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk::mdt
{
    // [enum _DXGKMDT_OPM_ACP_PROTECTION_LEVEL]
    //  WDK 10
    //
    enum class opm_acp_protection_level_t : int32_t
    {                                              
        off =         0x0,                           // WDK 10
        level_one =   0x1,                           // WDK 10
        level_two =   0x2,                           // WDK 10
        level_three = 0x3,                           // WDK 10
        force_ulong = 0x7fffffff,                    // WDK 10
    };                                             
};
