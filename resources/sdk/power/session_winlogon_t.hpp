#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/session_winlogon_t.start.hpp"
namespace power
{
    // [struct _POWER_SESSION_WINLOGON]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct session_winlogon_t    
    {                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t session_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SessionId
        _m01 uint8_t  console;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Console
        _m02 uint8_t  locked;      //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .Locked
                                 
        SDK_NONVOL_PROPERTIES( "_POWER_SESSION_WINLOGON.$", 0x8, true, 0x147b89cdb2718b63 );           
        SDK_FIXED_SIZE( session_winlogon_t, 0x8 );           
    };                           
};
#include "magic/session_winlogon_t.end.hpp"
SDK_VERIFY( struct power::session_winlogon_t, 0x8 );
