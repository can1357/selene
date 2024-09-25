#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/work_queue_item_t.hpp"

#include "magic/rebuild_large_page_timer_t.start.hpp"
namespace mi
{
    // [struct _MI_REBUILD_LARGE_PAGE_TIMER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rebuild_large_page_timer_t                            
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                       
        _m00 struct nt::work_queue_item_t work_item;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WorkItem
        _m01 uint8_t                      seconds_left;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SecondsLeft
        _m02 uint8_t                      rebuild_active;          //{ +0x0021    +0x0021    +0x0021    +0x0021    } | .RebuildActive
        _m03 uint8_t                      next_pass_delta;         //{ +0x0022    +0x0022    +0x0022    +0x0022    } | .NextPassDelta
        _m04 uint8_t                      large_sub_pages_active;  //{ +0x0023    +0x0023    +0x0023    +0x0023    } | .LargeSubPagesActive
                                                                 
        SDK_MAGIC_PROPERTIES( "_MI_REBUILD_LARGE_PAGE_TIMER.$", 0x28, true, 0x41bc19e1b5eedc9b );                       
        SDK_FIXED_SIZE( rebuild_large_page_timer_t, 0x28 );                       
    };                                                           
};
#include "magic/rebuild_large_page_timer_t.end.hpp"
SDK_VERIFY( struct mi::rebuild_large_page_timer_t, 0x28 );
