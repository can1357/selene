#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/work_queue_item_t.hpp"

#include "magic/queued_close_t.start.hpp"
namespace ndis
{
    // [struct _QUEUED_CLOSE]
    // => Windows 10 v1607
    //
    struct queued_close_t                           
    {                                               
        // Windows 10 v1607                         
        //                                          
        _m00 int32_t                      status;     //{ +0x0000    } | .Status
        _m01 struct nt::work_queue_item_t work_item;  //{ +0x0008    } | .WorkItem
                                                    
        SDK_MAGIC_PROPERTIES( "_QUEUED_CLOSE.$", 0x0, false, 0x1a7f7451a8f84f2 );          
        SDK_FIXED_SIZE( queued_close_t, 0x28 );          
    };                                              
};
#include "magic/queued_close_t.end.hpp"
SDK_VERIFY( struct ndis::queued_close_t, 0x28 );
