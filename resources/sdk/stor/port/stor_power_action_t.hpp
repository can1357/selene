#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum STOR_POWER_ACTION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class stor_power_action_t : int32_t
    {                                       
        none =           0x0,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved =       0x1,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleep =          0x2,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hibernate =      0x3,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shutdown =       0x4,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shutdown_reset = 0x5,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shutdown_off =   0x6,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        warm_eject =     0x7,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
