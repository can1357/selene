#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perf_counters_t.start.hpp"
namespace etw
{
    // [struct _ETW_PERF_COUNTERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perf_counters_t                              
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                              
        _m00 int32_t total_active_sessions;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TotalActiveSessions
        _m01 int32_t total_buffer_memory_non_paged_pool;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TotalBufferMemoryNonPagedPool
        _m02 int32_t total_buffer_memory_paged_pool;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TotalBufferMemoryPagedPool
        _m03 int32_t total_guids_enabled;                 //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TotalGuidsEnabled
        _m04 int32_t total_guids_not_enabled;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TotalGuidsNotEnabled
        _m05 int32_t total_guids_pre_enabled;             //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .TotalGuidsPreEnabled
                                                        
        SDK_MAGIC_PROPERTIES( "_ETW_PERF_COUNTERS.$", 0x18, true, 0x1c7e6ce2abd10af6 );                                   
        SDK_FIXED_SIZE( perf_counters_t, 0x18 );                                   
    };                                                  
};
#include "magic/perf_counters_t.end.hpp"
SDK_VERIFY( struct etw::perf_counters_t, 0x18 );
