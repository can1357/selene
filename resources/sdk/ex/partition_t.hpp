#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct epartition_t; }

#include "magic/partition_t.start.hpp"
namespace ex
{
    struct work_queue_t;
    struct work_queue_manager_t;

    // [struct _EX_PARTITION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct partition_t                                                 
    {                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                             
        _m00 struct nt::epartition_t*            partition_object;       //{ +0x0000    +0x0000    +0x0000    } | .PartitionObject
        _m01 struct ex::work_queue_t* volatile** work_queues;            //{ +0x0008    +0x0008    +0x0008    } | .WorkQueues
        _m02 struct ex::work_queue_manager_t**   work_queue_managers;    //{ +0x0010    +0x0010    +0x0010    } | .WorkQueueManagers
        _m03 volatile int32_t                    queue_allocation_mask;  //{ +0x0018    +0x0018    +0x0018    } | .QueueAllocationMask
                                                                       
        SDK_MAGIC_PROPERTIES( "_EX_PARTITION.$", 0x20, true, 0x8499ab5ddf413dbd );                      
        SDK_FIXED_SIZE( partition_t, 0x20 );                           
    };                                                                 
};
#include "magic/partition_t.end.hpp"
SDK_VERIFY( struct ex::partition_t, 0x20 );
