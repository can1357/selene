#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_802_11_NETWORK_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class _802_11_network_type_t : int32_t
    {                                          
        ndis802_11fh =                0x0,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndis802_11ds =                0x1,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndis802_11ofdm5 =             0x2,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndis802_11ofdm24 =            0x3,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndis802_11_automode =         0x4,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndis802_11_network_type_max = 0x5,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
