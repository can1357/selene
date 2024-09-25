#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kdpc_watchdog_information_t.start.hpp"
namespace nt
{
    // [struct _KDPC_WATCHDOG_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kdpc_watchdog_information_t   
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t dpc_time_limit;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DpcTimeLimit
        _m01 uint32_t dpc_time_count;      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DpcTimeCount
        _m02 uint32_t dpc_watchdog_limit;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DpcWatchdogLimit
        _m03 uint32_t dpc_watchdog_count;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .DpcWatchdogCount
                                         
        SDK_NONVOL_PROPERTIES( "_KDPC_WATCHDOG_INFORMATION.$", 0x14, true, 0xe2bfb0045fb9aed7 );                   
        SDK_FIXED_SIZE( kdpc_watchdog_information_t, 0x14 );                   
    };                                   
};
#include "magic/kdpc_watchdog_information_t.end.hpp"
SDK_VERIFY( struct nt::kdpc_watchdog_information_t, 0x14 );
