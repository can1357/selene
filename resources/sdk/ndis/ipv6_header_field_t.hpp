#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_IPV6_HEADER_FIELD]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ipv6_header_field_t : int32_t
    {                                       
        undefined = 0x0,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        protocol =  0x1,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =   0x2,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
