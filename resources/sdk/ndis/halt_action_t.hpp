#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_HALT_ACTION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class halt_action_t : int32_t   
    {                                    
        disabled =                0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        instance_de_initialized = 0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        powered_down =            0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        surprise_removed =        0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        failed =                  0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initialization_failed =   0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopped =                 0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
