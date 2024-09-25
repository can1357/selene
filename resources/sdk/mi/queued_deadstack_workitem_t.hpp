#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/work_queue_item_t.hpp"

#include "magic/queued_deadstack_workitem_t.start.hpp"
namespace mi
{
    // [struct _MI_QUEUED_DEADSTACK_WORKITEM]
    // => Windows 10 v1607
    //
    struct queued_deadstack_workitem_t              
    {                                               
        // Windows 10 v1607                         
        //                                          
        _m00 struct nt::work_queue_item_t work_item;  //{ +0x0000    } | .WorkItem
        _m01 volatile int32_t             active;     //{ +0x0020    } | .Active
                                                    
        SDK_MAGIC_PROPERTIES( "_MI_QUEUED_DEADSTACK_WORKITEM.$", 0x0, false, 0x4fb5c8461adbd553 );          
        SDK_FIXED_SIZE( queued_deadstack_workitem_t, 0x28 );          
    };                                              
};
#include "magic/queued_deadstack_workitem_t.end.hpp"
SDK_VERIFY( struct mi::queued_deadstack_workitem_t, 0x28 );
