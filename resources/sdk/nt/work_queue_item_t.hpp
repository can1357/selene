#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/work_queue_item_t.start.hpp"
namespace nt
{
    // [struct _WORK_QUEUE_ITEM]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct work_queue_item_t                            
    {                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                              
        _m00 nt::list_entry_t            list;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .List
        _m01 sdk::function<void(void*)>* worker_routine;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .WorkerRoutine
        _m02 void*                       parameter;       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Parameter
                                                        
        SDK_NONVOL_PROPERTIES( "_WORK_QUEUE_ITEM.$", 0x20, true, 0xecf93b27eb939375 );               
        SDK_FIXED_SIZE( work_queue_item_t, 0x20 );               
    };                                                  
};
#include "magic/work_queue_item_t.end.hpp"
SDK_VERIFY( struct nt::work_queue_item_t, 0x20 );
