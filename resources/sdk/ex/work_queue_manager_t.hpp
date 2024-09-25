#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"
#include "../nt/ktimer_t.hpp"
#include "../nt/ktimer2_t.hpp"

namespace nt { struct enode_t; }

#include "magic/work_queue_manager_t.start.hpp"
namespace ex
{
    struct partition_t;

    // [struct _EX_WORK_QUEUE_MANAGER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct work_queue_manager_t                     
    {                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                          
        _m00 struct ex::partition_t* partition;       //{ +0x0000    +0x0000    +0x0000    } | .Partition
        _m01 struct nt::enode_t*     node;            //{ +0x0008    +0x0008    +0x0008    } | .Node
        _m02 struct nt::kevent_t     event;           //{ +0x0010    +0x0010    +0x0010    } | .Event
        _m03 struct nt::ktimer_t     deadlock_timer;  //{ +0x0028    +0x0028    +0x0028    } | .DeadlockTimer
        _m04 struct nt::kevent_t     reaper_event;    //{ +0x0068    +0x0068    +0x0068    } | .ReaperEvent
        _m05 struct nt::ktimer2_t    reaper_timer;    //{ +0x0080    +0x0080    +0x0080    } | .ReaperTimer
        _m06 void*                   thread_handle;   //{ +0x0108    +0x0108    +0x0108    } | .ThreadHandle
        _m07 volatile uint32_t       exit_thread;     //{ +0x0110    +0x0110    +0x0110    } | .ExitThread
        _m08 uint16_t                thread_seed;     //{ +0x0114    +0x0114    +0x0114    } | .ThreadSeed
                                                    
        SDK_MAGIC_PROPERTIES( "_EX_WORK_QUEUE_MANAGER.$", 0x118, true, 0x5ba4421190b4beef );               
        SDK_FIXED_SIZE( work_queue_manager_t, 0x118 );               
    };                                              
};
#include "magic/work_queue_manager_t.end.hpp"
SDK_VERIFY( struct ex::work_queue_manager_t, 0x118 );
