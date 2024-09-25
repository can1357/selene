#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kpriqueue_t.hpp"
#include "../nt/exqueueindex_t.hpp"

namespace nt { struct enode_t;  }
namespace nt { struct kevent_t; }

#include "magic/work_queue_t.start.hpp"
namespace ex
{
    struct partition_t;

    // [struct _EX_WORK_QUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct work_queue_t                                             
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                          
        _m00 struct nt::kpriqueue_t  work_pri_queue;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WorkPriQueue
        _m01 struct nt::enode_t*     node;                            //{ +0x02b0    +0x02b8    +0x02b8    +0x02b8    } | .Node
        _m02 volatile uint32_t       work_items_processed;            //{ +0x02b8    +0x02c0    +0x02c0    +0x02c0    } | .WorkItemsProcessed
        _m03 uint32_t                work_items_processed_last_pass;  //{ +0x02bc    +0x02c4    +0x02c4    +0x02c4    } | .WorkItemsProcessedLastPass
        _m04 volatile int32_t        thread_count;                    //{ +0x02c0    +0x02c8    +0x02c8    +0x02c8    } | .ThreadCount
        _m05 int31_t                 min_threads;                     //{ +0x02c4@0  +0x02cc@0  +0x02cc@0  +0x02cc@0  } | .MinThreads
        _m06 uint1_t                 try_failed;                      //{ +0x02c4@31 +0x02cc@31 +0x02cc@31 +0x02cc@31 } | .TryFailed
        _m07 int32_t                 max_threads;                     //{ +0x02c8    +0x02d0    +0x02d0    +0x02d0    } | .MaxThreads
        _m08 enum nt::exqueueindex_t queue_index;                     //{ +0x02cc    +0x02d4    +0x02d4    +0x02d4    } | .QueueIndex
                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                          
        _m09 struct ex::partition_t* partition;                       //{ +0x02b0    +0x02b0    +0x02b0    } | .Partition
        _m10 struct nt::kevent_t*    all_threads_exited_event;        //{ +0x02d8    +0x02d8    +0x02d8    } | .AllThreadsExitedEvent
                                                                    
        SDK_MAGIC_PROPERTIES( "_EX_WORK_QUEUE.$", 0x2e0, true, 0xbac83a9df099dc4e );                               
        SDK_DYNAMIC_SIZE( work_queue_t );                               
    };                                                              
};
#include "magic/work_queue_t.end.hpp"
