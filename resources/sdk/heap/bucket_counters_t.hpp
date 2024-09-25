#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bucket_counters_t.start.hpp"
namespace heap
{
    // [union _HEAP_BUCKET_COUNTERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union bucket_counters_t              
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t total_blocks;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TotalBlocks
        _m01 uint32_t sub_segment_counts;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SubSegmentCounts
        _m02 int64_t  aggregate64;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Aggregate64
                                         
        SDK_MAGIC_PROPERTIES( "_HEAP_BUCKET_COUNTERS.$", 0x8, true, 0x3e11850a4a936733 );                   
        SDK_FIXED_SIZE( bucket_counters_t, 0x8 );                   
    };                                   
};
#include "magic/bucket_counters_t.end.hpp"
SDK_VERIFY( union heap::bucket_counters_t, 0x8 );
