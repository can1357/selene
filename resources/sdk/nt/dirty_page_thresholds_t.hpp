#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dirty_page_thresholds_t.start.hpp"
namespace nt
{
    // [struct _DIRTY_PAGE_THRESHOLDS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dirty_page_thresholds_t                
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint64_t dirty_page_threshold;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DirtyPageThreshold
        _m01 uint64_t dirty_page_threshold_top;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DirtyPageThresholdTop
        _m02 uint64_t dirty_page_threshold_bottom;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DirtyPageThresholdBottom
        _m03 uint32_t dirty_page_target;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DirtyPageTarget
        _m04 uint64_t aggregate_available_pages;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .AggregateAvailablePages
        _m05 uint64_t aggregate_dirty_pages;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .AggregateDirtyPages
        _m06 uint32_t available_history;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .AvailableHistory
                                                  
        SDK_MAGIC_PROPERTIES( "_DIRTY_PAGE_THRESHOLDS.$", 0x38, true, 0x445394f8b56dc92f );                            
        SDK_FIXED_SIZE( dirty_page_thresholds_t, 0x38 );                            
    };                                            
};
#include "magic/dirty_page_thresholds_t.end.hpp"
SDK_VERIFY( struct nt::dirty_page_thresholds_t, 0x38 );
