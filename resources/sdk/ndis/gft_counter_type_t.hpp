#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_GFT_COUNTER_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class gft_counter_type_t : int32_t
    {                                      
        undefined =             0x0,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        packet =                0x1,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        byte =                  0x2,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        packet_byte =           0x3,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        packet_byte_and_state = 0x4,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                   0x5,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
