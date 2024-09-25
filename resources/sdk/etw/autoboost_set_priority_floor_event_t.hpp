#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/autoboost_set_priority_floor_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_AUTOBOOST_SET_PRIORITY_FLOOR_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct autoboost_set_priority_floor_event_t  
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 void*    lock;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 uint32_t thread_id;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ThreadId
        _m02 int8_t   new_cpu_priority_floor;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .NewCpuPriorityFloor
        _m03 int8_t   old_cpu_priority;            //{ +0x000d    +0x000d    +0x000d    +0x000d    } | .OldCpuPriority
        _m04 int3_t   new_io_priority_floor;       //{ +0x000e@0  +0x000e@0  +0x000e@0  +0x000e@0  } | .NewIoPriorityFloor
        _m05 int3_t   old_io_priority;             //{ +0x000e@3  +0x000e@3  +0x000e@3  +0x000e@3  } | .OldIoPriority
        _m06 int1_t   new_io_qo_s_priority_floor;  //{ +0x000e@6  +0x000e@6  +0x000e@6  +0x000e@6  } | .NewIoQoSPriorityFloor
        _m07 int1_t   old_io_qo_s_priority;        //{ +0x000e@7  +0x000e@7  +0x000e@7  +0x000e@7  } | .OldIoQoSPriority
        _m08 int8_t   io_priorities;               //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .IoPriorities
        _m09 uint1_t  executing_dpc;               //{ +0x000f@0  +0x000f@0  +0x000f@0  +0x000f@0  } | .ExecutingDpc
        _m10 uint1_t  wakeup_boost;                //{ +0x000f@1  +0x000f@1  +0x000f@1  +0x000f@1  } | .WakeupBoost
        _m11 uint2_t  boosted_outstanding_irps;    //{ +0x000f@2  +0x000f@2  +0x000f@2  +0x000f@2  } | .BoostedOutstandingIrps
        _m12 uint8_t  flags;                       //{ +0x000f    +0x000f    +0x000f    +0x000f    } | .Flags
                                                 
        SDK_MAGIC_PROPERTIES( "_ETW_AUTOBOOST_SET_PRIORITY_FLOOR_EVENT.$", 0x10, true, 0x1a28a74d91d03a2 );                           
        SDK_FIXED_SIZE( autoboost_set_priority_floor_event_t, 0x10 );                           
    };                                           
};
#include "magic/autoboost_set_priority_floor_event_t.end.hpp"
SDK_VERIFY( struct etw::autoboost_set_priority_floor_event_t, 0x10 );
