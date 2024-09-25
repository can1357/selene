#pragma once
#include <sdkgen/support_library.hpp>

namespace io
{
    // [enum _IO_SESSION_STATE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class session_state_t : int32_t  
    {                                     
        //created =                0x0,     // WDK 10
        created =                  0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //initialized =            0x1,     // WDK 10
        //connected =              0x2,     // WDK 10
        initialized =              0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        connected =                0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //disconnected =           0x3,     // WDK 10
        disconnected =             0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //disconnected_logged_on = 0x4,     // WDK 10
        disconnected_logged_on =   0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //logged_on =              0x5,     // WDK 10
        //logged_off =             0x6,     // WDK 10
        logged_on =                0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        logged_off =               0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //terminated =             0x7,     // WDK 10
        //max =                    0x8,     // WDK 10
        terminated =               0x8,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                      0x9,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
