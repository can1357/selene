#pragma once
#include <sdkgen/support_library.hpp>

namespace hid
{
    // [enum _PING_PONG_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ping_pong_state_t : int32_t
    {                                     
        not_initialized = 0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initialized =     0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        started =         0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
