#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/jobobject_io_attribution_stats_t.start.hpp"
namespace win
{
    // [struct _JOBOBJECT_IO_ATTRIBUTION_STATS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_io_attribution_stats_t             
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                              
        _m00 uint64_t io_count;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IoCount
        _m01 uint64_t total_non_overlapped_queue_time;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TotalNonOverlappedQueueTime
        _m02 uint64_t total_non_overlapped_service_time;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TotalNonOverlappedServiceTime
        _m03 uint64_t total_size;                         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TotalSize
                                                        
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_IO_ATTRIBUTION_STATS.$", 0x20, true, 0xce3df382aad38c2 );                                  
        SDK_FIXED_SIZE( jobobject_io_attribution_stats_t, 0x20 );                                  
    };                                                  
};
#include "magic/jobobject_io_attribution_stats_t.end.hpp"
SDK_VERIFY( struct win::jobobject_io_attribution_stats_t, 0x20 );
