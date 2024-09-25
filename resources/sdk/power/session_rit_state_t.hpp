#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/session_rit_state_t.start.hpp"
namespace power
{
    // [struct _POWER_SESSION_RIT_STATE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct session_rit_state_t         
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                             
        _m00 uint8_t   active;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Active
        _m01 varuint_t last_input_time;  //{ +0x0004    +0x0004    +0x0004    +0x0008    +0x0004    } | .LastInputTime
                                       
        SDK_MAGIC_PROPERTIES( "_POWER_SESSION_RIT_STATE.$", 0x8, true, 0xced226ac0340a37a );                
        SDK_DYNAMIC_SIZE( session_rit_state_t );                
    };                                 
};
#include "magic/session_rit_state_t.end.hpp"
