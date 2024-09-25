#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/opportunistic_large_page_stats_t.start.hpp"
namespace heap
{
    // [struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct opportunistic_large_page_stats_t                    
    {                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                     
        _m00 volatile uint64_t small_pages_in_use_within_large;  //{ +0x0000    +0x0000    +0x0000    } | .SmallPagesInUseWithinLarge
        _m01 volatile uint64_t opportunistic_large_page_count;   //{ +0x0008    +0x0008    +0x0008    } | .OpportunisticLargePageCount
                                                               
        SDK_MAGIC_PROPERTIES( "_HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS.$", 0x10, true, 0x58e557e66624af0a );                                
        SDK_FIXED_SIZE( opportunistic_large_page_stats_t, 0x10 );                                
    };                                                         
};
#include "magic/opportunistic_large_page_stats_t.end.hpp"
SDK_VERIFY( struct heap::opportunistic_large_page_stats_t, 0x10 );
