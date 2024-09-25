#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_dpc_watchdog_information_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_DPC_WATCHDOG_INFORMATION]
    // => Windows 11
    //
    struct stor_dpc_watchdog_information_t
    {                                     
        // Windows 11                    
        //                               
        _m00 uint32_t dpc_time_limit;       //{ +0x0000    } | .DpcTimeLimit
        _m01 uint32_t dpc_time_count;       //{ +0x0004    } | .DpcTimeCount
        _m02 uint32_t dpc_watchdog_limit;   //{ +0x0008    } | .DpcWatchdogLimit
        _m03 uint32_t dpc_watchdog_count;   //{ +0x000c    } | .DpcWatchdogCount
                                          
        SDK_MAGIC_PROPERTIES( "_STOR_DPC_WATCHDOG_INFORMATION.$", 0x0, false, 0x6c6156aff5dfc044 );                   
        SDK_FIXED_SIZE( stor_dpc_watchdog_information_t, 0x14 );                   
    };                                    
};
#include "magic/stor_dpc_watchdog_information_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_dpc_watchdog_information_t, 0x14 );
