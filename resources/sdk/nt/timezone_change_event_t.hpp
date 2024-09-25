#pragma once
#include <sdkgen/support_library.hpp>
#include "kdpc_t.hpp"
#include "ktimer_t.hpp"
#include "work_queue_item_t.hpp"

#include "magic/timezone_change_event_t.start.hpp"
namespace nt
{
    // [struct _TIMEZONE_CHANGE_EVENT]
    // => Windows 11
    //
    struct timezone_change_event_t                  
    {                                               
        // Windows 11                               
        //                                          
        _m00 struct nt::kdpc_t            dpc;        //{ +0x0000    } | .Dpc
        _m01 struct nt::ktimer_t          timer;      //{ +0x0040    } | .Timer
        _m02 struct nt::work_queue_item_t work_item;  //{ +0x0080    } | .WorkItem
                                                    
        SDK_MAGIC_PROPERTIES( "_TIMEZONE_CHANGE_EVENT.$", 0x0, false, 0x5353afbd9874274a );          
        SDK_FIXED_SIZE( timezone_change_event_t, 0xa0 );          
    };                                              
};
#include "magic/timezone_change_event_t.end.hpp"
SDK_VERIFY( struct nt::timezone_change_event_t, 0xa0 );
