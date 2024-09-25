#pragma once
#include <sdkgen/support_library.hpp>
#include "counter_reading_t.hpp"
#include "processor_number_t.hpp"

#include "magic/thread_performance_data_t.start.hpp"
namespace nt
{
    // [struct _THREAD_PERFORMANCE_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thread_performance_data_t                                          
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                    
        _m00 uint16_t                                     size;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                                     version;              //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 struct nt::processor_number_t                processor_number;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ProcessorNumber
        _m03 uint32_t                                     context_switches;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ContextSwitches
        _m04 uint32_t                                     hw_counters_count;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .HwCountersCount
        _m05 volatile uint64_t                            update_count;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .UpdateCount
        _m06 uint64_t                                     wait_reason_bit_map;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .WaitReasonBitMap
        _m07 uint64_t                                     hardware_counters;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HardwareCounters
        _m08 struct nt::counter_reading_t                 cycle_time;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CycleTime
        _m09 sdk::array<struct nt::counter_reading_t, 16> hw_counters;          //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .HwCounters
                                                                              
        SDK_MAGIC_PROPERTIES( "_THREAD_PERFORMANCE_DATA.$", 0x1c0, true, 0xeffc8d3484519d86 );                    
        SDK_FIXED_SIZE( thread_performance_data_t, 0x1c0 );                    
    };                                                                        
};
#include "magic/thread_performance_data_t.end.hpp"
SDK_VERIFY( struct nt::thread_performance_data_t, 0x1c0 );
