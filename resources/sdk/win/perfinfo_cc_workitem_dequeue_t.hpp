#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_cc_workitem_dequeue_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_CC_WORKITEM_DEQUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_cc_workitem_dequeue_t
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint64_t work_item_key;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WorkItemKey
                                         
        SDK_MAGIC_PROPERTIES( "_PERFINFO_CC_WORKITEM_DEQUEUE.$", 0x8, true, 0x3b7fe5f231917e65 );              
        SDK_FIXED_SIZE( perfinfo_cc_workitem_dequeue_t, 0x8 );              
    };                                   
};
#include "magic/perfinfo_cc_workitem_dequeue_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_cc_workitem_dequeue_t, 0x8 );
