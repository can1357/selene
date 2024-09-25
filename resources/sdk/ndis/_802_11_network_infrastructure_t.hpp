#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_802_11_NETWORK_INFRASTRUCTURE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class _802_11_network_infrastructure_t : int32_t
    {                                                    
        ndis802_11ibss =                0x0,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndis802_11_infrastructure =     0x1,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndis802_11_auto_unknown =       0x2,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndis802_11_infrastructure_max = 0x3,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                   
};
