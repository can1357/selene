#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pmem_page_range_t.start.hpp"
namespace whea
{
    // [struct _WHEA_PMEM_PAGE_RANGE]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pmem_page_range_t            
    {                                   
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint64_t starting_pfn;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartingPfn
        _m01 uint64_t page_count;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PageCount
        _m02 uint64_t marked_bad_bitmap;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MarkedBadBitmap
                                        
        SDK_NONVOL_PROPERTIES( "_WHEA_PMEM_PAGE_RANGE.$", 0x18, true, 0x556de7373860441a );                  
        SDK_FIXED_SIZE( pmem_page_range_t, 0x18 );                  
    };                                  
};
#include "magic/pmem_page_range_t.end.hpp"
SDK_VERIFY( struct whea::pmem_page_range_t, 0x18 );
