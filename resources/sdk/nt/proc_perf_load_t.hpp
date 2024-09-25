#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/proc_perf_load_t.start.hpp"
namespace nt
{
    // [struct _PROC_PERF_LOAD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct proc_perf_load_t               
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                
        _m00 uint8_t busy_percentage;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BusyPercentage
        _m01 uint8_t frequency_percentage;  //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .FrequencyPercentage
                                          
        SDK_MAGIC_PROPERTIES( "_PROC_PERF_LOAD.$", 0x2, true, 0x5f1d9ebd08e7ec03 );                     
        SDK_FIXED_SIZE( proc_perf_load_t, 0x2 );                     
    };                                    
};
#include "magic/proc_perf_load_t.end.hpp"
SDK_VERIFY( struct nt::proc_perf_load_t, 0x2 );
