#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/concurrency_accounting_t.start.hpp"
namespace ppm
{
    // [struct _PPM_CONCURRENCY_ACCOUNTING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct concurrency_accounting_t                                
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                         
        _m00 uint64_t                          lock;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 uint32_t                          processors;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Processors
        _m02 uint32_t                          active_processors;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ActiveProcessors
        _m03 uint64_t                          last_update_time;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .LastUpdateTime
        _m04 uint64_t                          total_time;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TotalTime
        _m05 sdk::array<uint64_t, 1>           accumulated_time;     //{ +0x0020    +0x0020    +0x0148    +0x0020    } | .AccumulatedTime
                                                                   
        // Windows 11                                              
        //                                                         
        _m06 sdk::array<volatile uint64_t, 37> idle_interval_stats;  //{ +0x0020    } | .IdleIntervalStats
                                                                   
        SDK_MAGIC_PROPERTIES( "_PPM_CONCURRENCY_ACCOUNTING.$", 0x28, true, 0xcb490459f62e8d27 );                    
        SDK_DYNAMIC_SIZE( concurrency_accounting_t );                    
    };                                                             
};
#include "magic/concurrency_accounting_t.end.hpp"
