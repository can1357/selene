#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/ksemaphore_t.hpp"
#include "fx_work_pool_item_t.hpp"

namespace nt { struct kthread_t; }

#include "magic/fx_work_pool_t.start.hpp"
namespace pop
{
    struct fx_plugin_t;

    // [struct _POP_FX_WORK_POOL]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fx_work_pool_t                                                             
    {                                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                            
        _m00 struct pop::fx_plugin_t*                       plugin;                     //{ +0x0000    +0x0000    +0x0000    } | .Plugin
        _m01 uint64_t                                       emergency_work_queue_lock;  //{ +0x0008    +0x0008    +0x0008    } | .EmergencyWorkQueueLock
        _m02 nt::list_entry_t                               emergency_work_queue;       //{ +0x0010    +0x0010    +0x0010    } | .EmergencyWorkQueue
        _m03 sdk::array<struct nt::ksemaphore_t, 2>         work_pool_queues;           //{ +0x0020    +0x0020    +0x0020    } | .WorkPoolQueues
        _m04 volatile int32_t                               work_item_status;           //{ +0x0060    +0x0060    +0x0060    } | .WorkItemStatus
        _m05 sdk::array<struct pop::fx_work_pool_item_t, 4> work_items;                 //{ +0x0068    +0x0068    +0x0068    } | .WorkItems
                                                                                      
        // Windows 10 v2004, Windows 10 v20H2                                         
        //                                                                            
        _m06 struct nt::kthread_t*                          emergency_worker_thread;    //{ +0x0108    +0x0108    } | .EmergencyWorkerThread
        _m07 sdk::array<struct nt::kthread_t*, 4>           dynamic_worker_threads;     //{ +0x0110    +0x0110    } | .DynamicWorkerThreads
                                                                                      
        // Windows 11                                                                 
        //                                                                            
        _m08 sdk::array<struct nt::kthread_t*, 5>           pool_worker_threads;        //{ +0x0108    } | .PoolWorkerThreads
                                                                                      
        SDK_MAGIC_PROPERTIES( "_POP_FX_WORK_POOL.$", 0x130, true, 0x729115cdf26bc552 );                          
        SDK_FIXED_SIZE( fx_work_pool_t, 0x130 );                                      
    };                                                                                
};
#include "magic/fx_work_pool_t.end.hpp"
SDK_VERIFY( struct pop::fx_work_pool_t, 0x130 );
