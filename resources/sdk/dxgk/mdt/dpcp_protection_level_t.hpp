#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk::mdt
{
    // [enum _DXGKMDT_DPCP_PROTECTION_LEVEL]
    //  WDK 10
    //
    enum class dpcp_protection_level_t : int32_t
    {                                           
        off =         0x0,                        // WDK 10
        on =          0x1,                        // WDK 10
        force_ulong = 0x7fffffff,                 // WDK 10
    };                                          
};
