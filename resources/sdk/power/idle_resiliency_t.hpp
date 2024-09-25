#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/idle_resiliency_t.start.hpp"
namespace power
{
    // [struct _POWER_IDLE_RESILIENCY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct idle_resiliency_t                 
    {                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t coalescing_timeout;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CoalescingTimeout
        _m01 uint32_t idle_resiliency_period;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .IdleResiliencyPeriod
                                             
        SDK_NONVOL_PROPERTIES( "_POWER_IDLE_RESILIENCY.$", 0x8, true, 0xec24459026e7a80f );                       
        SDK_FIXED_SIZE( idle_resiliency_t, 0x8 );                       
    };                                       
};
#include "magic/idle_resiliency_t.end.hpp"
SDK_VERIFY( struct power::idle_resiliency_t, 0x8 );
