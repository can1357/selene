#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pd_ec_utilization_counter_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PD_EC_UTILIZATION_COUNTER]
    // => Windows 10 v1607
    //
    struct pd_ec_utilization_counter_t          
    {                                           
        // Windows 10 v1607                          
        //                                      
        _m00 uint32_t processor_number;           //{ +0x0000    } | .ProcessorNumber
        _m01 uint32_t iteration_count;            //{ +0x0004    } | .IterationCount
        _m02 uint32_t busy_wait_iteration_count;  //{ +0x0008    } | .BusyWaitIterationCount
        _m03 uint32_t tx_queue_count;             //{ +0x000c    } | .TxQueueCount
        _m04 uint32_t rx_queue_count;             //{ +0x0010    } | .RxQueueCount
        _m05 uint64_t cpu_cycle_time;             //{ +0x0018    } | .CpuCycleTime
        _m06 uint64_t thread_cycle_time;          //{ +0x0020    } | .ThreadCycleTime
        _m07 uint64_t processing_cycles;          //{ +0x0028    } | .ProcessingCycles
        _m08 uint64_t busy_wait_cycles;           //{ +0x0030    } | .BusyWaitCycles
        _m09 uint64_t idle_cycles;                //{ +0x0038    } | .IdleCycles
                                                
        SDK_MAGIC_PROPERTIES( "_NDIS_PD_EC_UTILIZATION_COUNTER.$", 0x0, false, 0x701ad5cafd686396 );                          
        SDK_FIXED_SIZE( pd_ec_utilization_counter_t, 0x40 );                          
    };                                          
};
#include "magic/pd_ec_utilization_counter_t.end.hpp"
SDK_VERIFY( struct ndis::pd_ec_utilization_counter_t, 0x40 );
