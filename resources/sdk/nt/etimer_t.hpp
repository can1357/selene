#pragma once
#include <sdkgen/support_library.hpp>
#include "kapc_t.hpp"
#include "kdpc_t.hpp"
#include "ktimer_t.hpp"

#include "magic/etimer_t.start.hpp"
namespace nt
{
    struct diagnostic_context_t;

    // [struct _ETIMER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct etimer_t                                                             
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                      
        _m00 struct nt::ktimer_t                       ke_timer;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KeTimer
        _m01 uint64_t                                  lock;                      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Lock
        _m02 struct nt::kapc_t                         timer_apc;                 //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .TimerApc
        _m03 struct nt::kdpc_t                         timer_dpc;                 //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .TimerDpc
        _m04 nt::list_entry_t                          active_timer_list_entry;   //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .ActiveTimerListEntry
        _m05 uint32_t                                  period;                    //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .Period
        _m06 char                                      timer_flags;               //{ +0x00f4    +0x00f4    +0x00f4    +0x00f4    } | .TimerFlags
        _m07 uint1_t                                   apc_associated;            //{ +0x00f4@0  +0x00f4@0  +0x00f4@0  +0x00f4@0  } | .ApcAssociated
        _m08 uint1_t                                   flush_dpcs;                //{ +0x00f4@1  +0x00f4@1  +0x00f4@1  +0x00f4@1  } | .FlushDpcs
        _m09 uint1_t                                   paused;                    //{ +0x00f4@2  +0x00f4@2  +0x00f4@2  +0x00f4@2  } | .Paused
        _m10 uint8_t                                   due_time_type;             //{ +0x00f5    +0x00f5    +0x00f5    +0x00f5    } | .DueTimeType
        _m11 struct nt::diagnostic_context_t volatile* wake_reason;               //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .WakeReason
        _m12 nt::list_entry_t                          wake_timer_list_entry;     //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .WakeTimerListEntry
        _m13 void*                                     virtualized_timer_cookie;  //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .VirtualizedTimerCookie
        _m14 nt::list_entry_t                          virtualized_timer_links;   //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .VirtualizedTimerLinks
        _m15 uint64_t                                  due_time;                  //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .DueTime
        _m16 uint32_t                                  coalescing_window;         //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .CoalescingWindow
                                                                                
        SDK_MAGIC_PROPERTIES( "_ETIMER.$", 0x138, true, 0x356c996d7ffdefb2 );                         
        SDK_FIXED_SIZE( etimer_t, 0x138 );                                      
    };                                                                          
};
#include "magic/etimer_t.end.hpp"
SDK_VERIFY( struct nt::etimer_t, 0x138 );
