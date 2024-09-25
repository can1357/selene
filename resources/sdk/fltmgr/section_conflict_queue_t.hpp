#pragma once
#include <sdkgen/support_library.hpp>
#include "../io/csq_t.hpp"
#include "../nt/fast_mutex_t.hpp"

namespace io { struct workitem_t; }

#include "magic/section_conflict_queue_t.start.hpp"
namespace fltmgr
{
    struct section_list_ctrl_t;

    // [struct _SECTION_CONFLICT_QUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct section_conflict_queue_t                                       
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                
        _m00 struct io::csq_t                    csq;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Csq
        _m01 nt::list_entry_t                    queue_head;                //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .QueueHead
        _m02 struct nt::fast_mutex_t             queue_lock;                //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .QueueLock
        _m03 volatile int32_t                    queue_coordination_count;  //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .QueueCoordinationCount
        _m04 struct io::workitem_t*              work_item;                 //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .WorkItem
        _m05 struct fltmgr::section_list_ctrl_t* section_list_ctrl;         //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .SectionListCtrl
                                                                          
        SDK_MAGIC_PROPERTIES( "_SECTION_CONFLICT_QUEUE.$", 0xa0, true, 0xb3bdf9616b3ecb41 );                         
        SDK_FIXED_SIZE( section_conflict_queue_t, 0xa0 );                         
    };                                                                    
};
#include "magic/section_conflict_queue_t.end.hpp"
SDK_VERIFY( struct fltmgr::section_conflict_queue_t, 0xa0 );
