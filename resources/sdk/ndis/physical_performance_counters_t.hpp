#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/physical_performance_counters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PHYSICAL_PERFORMANCE_COUNTERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct physical_performance_counters_t  
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint32_t device_power_state;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DevicePowerState
        _m01 uint64_t time_suspended100ns;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TimeSuspended100ns
        _m02 uint64_t uptime100ns;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Uptime100ns
        _m03 uint32_t low_power_transitions;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LowPowerTransitions
                                            
        SDK_MAGIC_PROPERTIES( "_NDIS_PHYSICAL_PERFORMANCE_COUNTERS.$", 0x20, true, 0xb7f5bcd247d828dd );                      
        SDK_FIXED_SIZE( physical_performance_counters_t, 0x20 );                      
    };                                      
};
#include "magic/physical_performance_counters_t.end.hpp"
SDK_VERIFY( struct ndis::physical_performance_counters_t, 0x20 );
