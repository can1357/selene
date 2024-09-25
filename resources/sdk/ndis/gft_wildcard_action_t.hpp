#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_GFT_WILDCARD_ACTION]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class gft_wildcard_action_t : int32_t
    {                                         
        undefined = 0x0,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        allow =     0x1,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        drop =      0x2,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =       0x3,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
