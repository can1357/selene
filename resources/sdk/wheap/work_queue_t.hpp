#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"
#include "../nt/work_queue_item_t.hpp"

#include "magic/work_queue_t.start.hpp"
namespace wheap
{
    struct work_queue_t;

    // [struct _WHEAP_WORK_QUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct work_queue_t                                
    {                                                  
        using work_routine_t = sdk::function<void(struct wheap::work_queue_t*, nt::list_entry_t*)>*;             
                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                             
        _m00 nt::list_entry_t             list_head;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListHead
        _m01 uint64_t                     list_lock;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ListLock
        _m02 volatile int32_t             item_count;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ItemCount
        _m03 struct nt::kdpc_t            dpc;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Dpc
        _m04 struct nt::work_queue_item_t work_item;     //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .WorkItem
        _m05 work_routine_t               work_routine;  //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .WorkRoutine
                                                       
        SDK_MAGIC_PROPERTIES( "_WHEAP_WORK_QUEUE.$", 0x88, true, 0xd951bb108832cb1d );             
        SDK_FIXED_SIZE( work_queue_t, 0x88 );             
    };                                                 
};
#include "magic/work_queue_t.end.hpp"
SDK_VERIFY( struct wheap::work_queue_t, 0x88 );
