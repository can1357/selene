#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_keepalive_count_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_KEEPALIVE_COUNT_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_keepalive_count_information_t
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t wake_count;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .WakeCount
        _m01 uint32_t no_wake_count;              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .NoWakeCount
                                                
        SDK_NONVOL_PROPERTIES( "_PROCESS_KEEPALIVE_COUNT_INFORMATION.$", 0x8, true, 0x3394cbb2a5c89eb3 );              
        SDK_FIXED_SIZE( process_keepalive_count_information_t, 0x8 );              
    };                                          
};
#include "magic/process_keepalive_count_information_t.end.hpp"
SDK_VERIFY( struct win::process_keepalive_count_information_t, 0x8 );
