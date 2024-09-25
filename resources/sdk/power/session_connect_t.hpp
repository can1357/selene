#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/session_connect_t.start.hpp"
namespace power
{
    // [struct _POWER_SESSION_CONNECT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct session_connect_t   
    {                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                     
        _m00 uint8_t connected;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Connected
        _m01 uint8_t console;    //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .Console
                               
        SDK_NONVOL_PROPERTIES( "_POWER_SESSION_CONNECT.$", 0x2, true, 0xfa5b5dc7b5f65ceb );          
        SDK_FIXED_SIZE( session_connect_t, 0x2 );          
    };                         
};
#include "magic/session_connect_t.end.hpp"
SDK_VERIFY( struct power::session_connect_t, 0x2 );
