#pragma once
#include <sdkgen/support_library.hpp>
#include "throttle_element_t.hpp"

#include "magic/throttled_work_item_ctrl_t.start.hpp"
namespace fltmgr
{
    // [struct _THROTTLED_WORK_ITEM_CTRL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct throttled_work_item_ctrl_t                                       
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                                  
        _m00 uint64_t                                         throttle_lock;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ThrottleLock
        _m01 sdk::array<struct fltmgr::throttle_element_t, 3> queues;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Queues
                                                                            
        SDK_MAGIC_PROPERTIES( "_THROTTLED_WORK_ITEM_CTRL.$", 0x50, true, 0x6756f3f8d7484e1 );              
        SDK_FIXED_SIZE( throttled_work_item_ctrl_t, 0x50 );                 
    };                                                                      
};
#include "magic/throttled_work_item_ctrl_t.end.hpp"
SDK_VERIFY( struct fltmgr::throttled_work_item_ctrl_t, 0x50 );
