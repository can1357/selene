#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum PAUSE_OR_RESTART]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pause_or_restart_t : int32_t
    {                                      
        paused =  0x0,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        running = 0x1,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
