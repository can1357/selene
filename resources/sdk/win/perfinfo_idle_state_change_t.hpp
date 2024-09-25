#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_idle_state_change_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_IDLE_STATE_CHANGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_idle_state_change_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t state;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .State
        _m01 uint32_t throttle;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Throttle
        _m02 uint32_t direction;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Direction
                                       
        SDK_MAGIC_PROPERTIES( "_PERFINFO_IDLE_STATE_CHANGE.$", 0xc, true, 0x656ac09bf8acc358 );          
        SDK_FIXED_SIZE( perfinfo_idle_state_change_t, 0xc );          
    };                                 
};
#include "magic/perfinfo_idle_state_change_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_idle_state_change_t, 0xc );
