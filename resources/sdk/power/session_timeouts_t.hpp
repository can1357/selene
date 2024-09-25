#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/session_timeouts_t.start.hpp"
namespace power
{
    // [struct _POWER_SESSION_TIMEOUTS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct session_timeouts_t         
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t input_timeout;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .InputTimeout
        _m01 uint32_t display_timeout;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DisplayTimeout
                                      
        SDK_NONVOL_PROPERTIES( "_POWER_SESSION_TIMEOUTS.$", 0x8, true, 0x7fdfb8564cef47e9 );                
        SDK_FIXED_SIZE( session_timeouts_t, 0x8 );                
    };                                
};
#include "magic/session_timeouts_t.end.hpp"
SDK_VERIFY( struct power::session_timeouts_t, 0x8 );
