#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_yield_processor_information_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_YIELD_PROCESSOR_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_yield_processor_information_t
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t yield_reason;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .YieldReason
        _m01 uint32_t dpc_watchdog_count;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DpcWatchdogCount
        _m02 uint32_t dpc_time_count;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DpcTimeCount
                                                 
        SDK_MAGIC_PROPERTIES( "_PERFINFO_YIELD_PROCESSOR_INFORMATION.$", 0xc, true, 0xa3a23619402337cd );                   
        SDK_FIXED_SIZE( perfinfo_yield_processor_information_t, 0xc );                   
    };                                           
};
#include "magic/perfinfo_yield_processor_information_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_yield_processor_information_t, 0xc );
