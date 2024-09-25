#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum DL_ADDRESS_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dl_address_type_t : int32_t
    {                                     
        unicast =   0x0,                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        multicast = 0x1,                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        broadcast = 0x2,                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
