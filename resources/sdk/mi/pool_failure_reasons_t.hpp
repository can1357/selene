#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pool_failure_reasons_t.start.hpp"
namespace mi
{
    // [struct _MI_POOL_FAILURE_REASONS]
    // => Windows 10 v1607
    //
    struct pool_failure_reasons_t                      
    {                                                  
        // Windows 10 v1607                                 
        //                                             
        _m00 uint32_t non_paged_no_ptes;                 //{ +0x0000    } | .NonPagedNoPtes
        _m01 uint32_t priority_too_low;                  //{ +0x0004    } | .PriorityTooLow
        _m02 uint32_t non_paged_no_pages_available;      //{ +0x0008    } | .NonPagedNoPagesAvailable
        _m03 uint32_t paged_no_ptes;                     //{ +0x000c    } | .PagedNoPtes
        _m04 uint32_t session_paged_no_ptes;             //{ +0x0010    } | .SessionPagedNoPtes
        _m05 uint32_t paged_no_pages_available;          //{ +0x0014    } | .PagedNoPagesAvailable
        _m06 uint32_t session_paged_no_pages_available;  //{ +0x0018    } | .SessionPagedNoPagesAvailable
        _m07 uint32_t paged_no_commit;                   //{ +0x001c    } | .PagedNoCommit
        _m08 uint32_t session_paged_no_commit;           //{ +0x0020    } | .SessionPagedNoCommit
        _m09 uint32_t non_paged_no_resident_available;   //{ +0x0024    } | .NonPagedNoResidentAvailable
        _m10 uint32_t non_paged_no_commit;               //{ +0x0028    } | .NonPagedNoCommit
                                                       
        SDK_MAGIC_PROPERTIES( "_MI_POOL_FAILURE_REASONS.$", 0x0, false, 0xa377553fde1769d3 );                                 
        SDK_FIXED_SIZE( pool_failure_reasons_t, 0x2c );                                 
    };                                                 
};
#include "magic/pool_failure_reasons_t.end.hpp"
SDK_VERIFY( struct mi::pool_failure_reasons_t, 0x2c );
