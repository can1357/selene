#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_SHUTDOWN_ACTION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class shutdown_action_t : int32_t
    {                                     
        power_off = 0x0,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bug_check = 0x1,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
