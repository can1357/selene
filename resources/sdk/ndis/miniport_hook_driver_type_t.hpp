#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_MINIPORT_HOOK_DRIVER_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class miniport_hook_driver_type_t : int32_t
    {                                               
        none =    0x0,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wdi =     0x1,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum = 0x2,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
