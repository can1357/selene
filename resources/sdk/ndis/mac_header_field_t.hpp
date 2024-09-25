#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_MAC_HEADER_FIELD]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class mac_header_field_t : int32_t
    {                                      
        undefined =           0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        destination_address = 0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        source_address =      0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        protocol =            0x3,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        vlan_id =             0x4,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        priority =            0x5,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        packet_type =         0x6,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =             0x7,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
