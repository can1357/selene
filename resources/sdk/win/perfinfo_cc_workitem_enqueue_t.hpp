#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_cc_workitem_enqueue_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_CC_WORKITEM_ENQUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_cc_workitem_enqueue_t
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint64_t work_item_key;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WorkItemKey
        _m01 uint64_t file_object_key;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileObjectKey
        _m02 uint8_t  queue_type;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .QueueType
        _m03 uint8_t  work_item_type;      //{ +0x0011    +0x0011    +0x0011    +0x0011    } | .WorkItemType
        _m04 uint8_t  requeue;             //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .Requeue
                                         
        SDK_MAGIC_PROPERTIES( "_PERFINFO_CC_WORKITEM_ENQUEUE.$", 0x18, true, 0xe632456bd5236c76 );                
        SDK_FIXED_SIZE( perfinfo_cc_workitem_enqueue_t, 0x18 );                
    };                                   
};
#include "magic/perfinfo_cc_workitem_enqueue_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_cc_workitem_enqueue_t, 0x18 );
