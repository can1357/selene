#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_PORT_AUTHORIZATION_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class port_authorization_state_t : int32_t
    {                                              
        authorization_unknown = 0x0,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        authorized =            0x1,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unauthorized =          0x2,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reauthorizing =         0x3,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
