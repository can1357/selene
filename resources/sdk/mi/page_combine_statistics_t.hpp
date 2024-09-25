#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/page_combine_statistics_t.start.hpp"
namespace mi
{
    // [struct _MI_PAGE_COMBINE_STATISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct page_combine_statistics_t                      
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                
        _m00 uint64_t pages_scanned_active;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PagesScannedActive
        _m01 uint64_t pages_scanned_standby;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PagesScannedStandby
        _m02 uint64_t pages_combined;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PagesCombined
        _m03 uint32_t combine_scan_count;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CombineScanCount
        _m04 int32_t  combined_blocks_in_use;               //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .CombinedBlocksInUse
        _m05 int32_t  sum_combined_blocks_reference_count;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SumCombinedBlocksReferenceCount
                                                          
        // Windows 11                                     
        //                                                
        _m06 uint32_t non_slab_pages_used_for_in_page;      //{ +0x0024    } | .NonSlabPagesUsedForInPage
                                                          
        SDK_MAGIC_PROPERTIES( "_MI_PAGE_COMBINE_STATISTICS.$", 0x28, true, 0xd1d12d9b29e2ea46 );                                    
        SDK_FIXED_SIZE( page_combine_statistics_t, 0x28 );                                    
    };                                                    
};
#include "magic/page_combine_statistics_t.end.hpp"
SDK_VERIFY( struct mi::page_combine_statistics_t, 0x28 );
