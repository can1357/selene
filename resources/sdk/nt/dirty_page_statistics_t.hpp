#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dirty_page_statistics_t.start.hpp"
namespace nt
{
    // [struct _DIRTY_PAGE_STATISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dirty_page_statistics_t                    
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint64_t dirty_pages;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DirtyPages
        _m01 uint64_t dirty_pages_last_scan;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DirtyPagesLastScan
        _m02 uint32_t dirty_pages_scheduled_last_scan;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DirtyPagesScheduledLastScan
                                                      
        SDK_MAGIC_PROPERTIES( "_DIRTY_PAGE_STATISTICS.$", 0x18, true, 0x752ba8e7c598f33a );                                
        SDK_FIXED_SIZE( dirty_page_statistics_t, 0x18 );                                
    };                                                
};
#include "magic/dirty_page_statistics_t.end.hpp"
SDK_VERIFY( struct nt::dirty_page_statistics_t, 0x18 );
