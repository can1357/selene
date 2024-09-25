#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/session_perf_counters_t.start.hpp"
namespace etw
{
    // [struct _ETW_SESSION_PERF_COUNTERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct session_perf_counters_t                 
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                         
        _m00 int32_t  buffer_memory_paged_pool;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BufferMemoryPagedPool
        _m01 int32_t  buffer_memory_non_paged_pool;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BufferMemoryNonPagedPool
        _m02 uint64_t events_logged_count;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EventsLoggedCount
        _m03 int32_t  events_lost;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .EventsLost
        _m04 int32_t  num_consumers;                 //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .NumConsumers
                                                   
        SDK_MAGIC_PROPERTIES( "_ETW_SESSION_PERF_COUNTERS.$", 0x18, true, 0x356377adb0f46d15 );                             
        SDK_FIXED_SIZE( session_perf_counters_t, 0x18 );                             
    };                                             
};
#include "magic/session_perf_counters_t.end.hpp"
SDK_VERIFY( struct etw::session_perf_counters_t, 0x18 );
