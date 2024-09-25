#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NET_IF_MEDIA_DUPLEX_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class net_if_media_duplex_state_t : int32_t
    {                                               
        unknown = 0x0,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        half =    0x1,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        full =    0x2,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
