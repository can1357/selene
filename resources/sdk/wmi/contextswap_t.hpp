#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/contextswap_t.start.hpp"
namespace wmi
{
    // [struct _WMI_CONTEXTSWAP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct contextswap_t                             
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                           
        _m00 uint32_t  new_thread_id;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NewThreadId
        _m01 uint32_t  old_thread_id;                  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .OldThreadId
        _m02 char      new_thread_priority;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NewThreadPriority
        _m03 char      old_thread_priority;            //{ +0x0009    +0x0009    +0x0009    +0x0009    } | .OldThreadPriority
        _m04 uint8_t   previous_c_state;               //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .PreviousCState
        _m05 uint8_t   old_thread_rank;                //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .OldThreadRank
        _m06 char      new_thread_priority_decrement;  //{ +0x000b    +0x000b    +0x000b    +0x000b    } | .NewThreadPriorityDecrement
        _m07 uint8_t   old_thread_wait_reason;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .OldThreadWaitReason
        _m08 varuint_t old_thread_wait_mode;           //{ +0x000d    +0x000d@0  +0x000d@0  +0x000d@0  } | .OldThreadWaitMode
        _m09 uint8_t   old_thread_state;               //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .OldThreadState
        _m10 uint8_t   old_thread_ideal_processor;     //{ +0x000f    +0x000f    +0x000f    +0x000f    } | .OldThreadIdealProcessor
        _m11 uint32_t  new_thread_wait_time;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NewThreadWaitTime
        _m12 int32_t   old_thread_remaining_quantum;   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .OldThreadRemainingQuantum
                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                           
        _m13 uint3_t   old_thread_bam_qos_level;       //{ +0x000d@1  +0x000d@1  +0x000d@1  } | .OldThreadBamQosLevel
        _m14 uint3_t   new_thread_bam_qos_level;       //{ +0x000d@4  +0x000d@4  +0x000d@4  } | .NewThreadBamQosLevel
        _m15 uint8_t   flags;                          //{ +0x000d    +0x000d    +0x000d    } | .Flags
                                                     
        SDK_MAGIC_PROPERTIES( "_WMI_CONTEXTSWAP.$", 0x18, true, 0x4bee219a101a2f7e );                              
        SDK_FIXED_SIZE( contextswap_t, 0x18 );                              
    };                                               
};
#include "magic/contextswap_t.end.hpp"
SDK_VERIFY( struct wmi::contextswap_t, 0x18 );
