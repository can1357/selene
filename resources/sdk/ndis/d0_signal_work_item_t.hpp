#pragma once
#include <sdkgen/support_library.hpp>
#include "work_item_t.hpp"

#include "magic/d0_signal_work_item_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_D0_SIGNAL_WORK_ITEM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct d0_signal_work_item_t                        
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                              
        _m00 struct ndis::work_item_t work_item;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WorkItem
        _m01 int32_t                  completion_status;  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .CompletionStatus
        _m02 uint8_t                  scheduled;          //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .Scheduled
                                                        
        SDK_MAGIC_PROPERTIES( "_NDIS_D0_SIGNAL_WORK_ITEM.$", 0x58, true, 0x5d93f09333b226b6 );                  
        SDK_FIXED_SIZE( d0_signal_work_item_t, 0x58 );                  
    };                                                  
};
#include "magic/d0_signal_work_item_t.end.hpp"
SDK_VERIFY( struct ndis::d0_signal_work_item_t, 0x58 );
