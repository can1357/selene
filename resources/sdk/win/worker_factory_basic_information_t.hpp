#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/worker_factory_basic_information_t.start.hpp"
namespace win
{
    // [struct _WORKER_FACTORY_BASIC_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct worker_factory_basic_information_t                           
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                              
        _m00 int64_t                        timeout;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Timeout
        _m01 int64_t                        retry_timeout;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RetryTimeout
        _m02 int64_t                        idle_timeout;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IdleTimeout
        _m03 uint8_t                        paused;                       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Paused
        _m04 uint8_t                        timer_set;                    //{ +0x0019    +0x0019    +0x0019    +0x0019    } | .TimerSet
        _m05 uint8_t                        queued_to_ex_worker;          //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .QueuedToExWorker
        _m06 uint8_t                        may_create;                   //{ +0x001b    +0x001b    +0x001b    +0x001b    } | .MayCreate
        _m07 uint8_t                        create_in_progress;           //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .CreateInProgress
        _m08 uint8_t                        inserted_into_queue;          //{ +0x001d    +0x001d    +0x001d    +0x001d    } | .InsertedIntoQueue
        _m09 uint8_t                        shutdown;                     //{ +0x001e    +0x001e    +0x001e    +0x001e    } | .Shutdown
        _m10 uint32_t                       binding_count;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BindingCount
        _m11 uint32_t                       thread_minimum;               //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .ThreadMinimum
        _m12 uint32_t                       thread_maximum;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ThreadMaximum
        _m13 uint32_t                       pending_worker_count;         //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .PendingWorkerCount
        _m14 uint32_t                       waiting_worker_count;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .WaitingWorkerCount
        _m15 uint32_t                       total_worker_count;           //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .TotalWorkerCount
        _m16 uint32_t                       release_count;                //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ReleaseCount
        _m17 int64_t                        infinite_wait_goal;           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .InfiniteWaitGoal
        _m18 sdk::function<int32_t(void*)>* start_routine;                //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .StartRoutine
        _m19 void*                          start_parameter;              //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .StartParameter
        _m20 void*                          process_id;                   //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ProcessId
        _m21 uint64_t                       stack_reserve;                //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .StackReserve
        _m22 uint64_t                       stack_commit;                 //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .StackCommit
        _m23 int32_t                        last_thread_creation_status;  //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .LastThreadCreationStatus
                                                                        
        SDK_MAGIC_PROPERTIES( "_WORKER_FACTORY_BASIC_INFORMATION.$", 0x78, true, 0x5d2bf4d74e0a38a6 );                            
        SDK_FIXED_SIZE( worker_factory_basic_information_t, 0x78 );                            
    };                                                                  
};
#include "magic/worker_factory_basic_information_t.end.hpp"
SDK_VERIFY( struct win::worker_factory_basic_information_t, 0x78 );
