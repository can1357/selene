#pragma once
#include <sdkgen/support_library.hpp>
#include "counter_reading_t.hpp"

#include "magic/kthread_counters_t.start.hpp"
namespace nt
{
    struct thread_performance_data_t;

    // [struct _KTHREAD_COUNTERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kthread_counters_t                                                 
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                    
        _m00 uint64_t                                     wait_reason_bit_map;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WaitReasonBitMap
        _m01 struct nt::thread_performance_data_t*        user_data;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UserData
        _m02 uint32_t                                     flags;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
        _m03 uint32_t                                     context_switches;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ContextSwitches
        _m04 uint64_t                                     cycle_time_bias;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CycleTimeBias
        _m05 uint64_t                                     hardware_counters;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HardwareCounters
        _m06 sdk::array<struct nt::counter_reading_t, 16> hw_counter;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .HwCounter
                                                                              
        SDK_MAGIC_PROPERTIES( "_KTHREAD_COUNTERS.$", 0x1a8, true, 0x71044505f506e2a0 );                    
        SDK_FIXED_SIZE( kthread_counters_t, 0x1a8 );                          
    };                                                                        
};
#include "magic/kthread_counters_t.end.hpp"
SDK_VERIFY( struct nt::kthread_counters_t, 0x1a8 );
