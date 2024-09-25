#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pcw_processor_info_t.start.hpp"
namespace nt
{
    // [struct _PCW_PROCESSOR_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pcw_processor_info_t                 
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                      
        _m000 uint64_t idle_time;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IdleTime
        _m001 uint64_t available_time;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AvailableTime
        _m002 uint64_t user_time;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .UserTime
        _m003 uint64_t kernel_time;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .KernelTime
        _m004 uint32_t interrupts;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Interrupts
        _m005 uint64_t dpc_time;                  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DpcTime
        _m006 uint64_t interrupt_time;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .InterruptTime
        _m007 uint32_t clock_interrupts;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ClockInterrupts
        _m008 uint32_t dpc_count;                 //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .DpcCount
        _m009 uint32_t dpc_rate;                  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .DpcRate
        _m010 uint64_t c1_time;                   //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .C1Time
        _m011 uint64_t c2_time;                   //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .C2Time
        _m012 uint64_t c3_time;                   //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .C3Time
        _m013 uint64_t c1_transitions;            //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .C1Transitions
        _m014 uint64_t c2_transitions;            //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .C2Transitions
        _m015 uint64_t c3_transitions;            //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .C3Transitions
        _m016 uint64_t stall_time;                //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .StallTime
        _m017 uint32_t parking_status;            //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .ParkingStatus
        _m018 uint32_t current_frequency;         //{ +0x0084    +0x0084    +0x0084    +0x0084    } | .CurrentFrequency
        _m019 uint32_t percent_max_frequency;     //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .PercentMaxFrequency
        _m020 uint32_t state_flags;               //{ +0x008c    +0x008c    +0x008c    +0x008c    } | .StateFlags
        _m021 uint32_t nominal_throughput;        //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .NominalThroughput
        _m022 uint32_t active_throughput;         //{ +0x0094    +0x0094    +0x0094    +0x0094    } | .ActiveThroughput
        _m023 uint64_t scaled_throughput;         //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .ScaledThroughput
        _m024 uint64_t scaled_kernel_throughput;  //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .ScaledKernelThroughput
        _m025 uint64_t average_idle_time;         //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .AverageIdleTime
        _m026 uint64_t idle_break_events;         //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .IdleBreakEvents
        _m027 uint32_t performance_limit;         //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .PerformanceLimit
        _m028 uint32_t performance_limit_flags;   //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | .PerformanceLimitFlags
                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                      
        _m029 uint64_t scaled_frequency;          //{ +0x00c0    +0x00c0    +0x00c0    } | .ScaledFrequency
                                                
        SDK_MAGIC_PROPERTIES( "_PCW_PROCESSOR_INFO.$", 0xc8, true, 0xd7f5c02b61c7da77 );                         
        SDK_DYNAMIC_SIZE( pcw_processor_info_t );                         
    };                                          
};
#include "magic/pcw_processor_info_t.end.hpp"
