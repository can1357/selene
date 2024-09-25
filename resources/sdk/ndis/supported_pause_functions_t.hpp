#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class supported_pause_functions_t : int32_t
    {                                               
        unsupported =      0x0,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        send_only =        0x1,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        receive_only =     0x2,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        send_and_receive = 0x3,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unknown =          0x4,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
