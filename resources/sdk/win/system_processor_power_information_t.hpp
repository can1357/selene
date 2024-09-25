#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_processor_power_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_PROCESSOR_POWER_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_processor_power_information_t    
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                         
        _m00 uint8_t  current_frequency;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CurrentFrequency
        _m01 uint8_t  thermal_limit_frequency;       //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .ThermalLimitFrequency
        _m02 uint8_t  constant_throttle_frequency;   //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .ConstantThrottleFrequency
        _m03 uint8_t  degraded_throttle_frequency;   //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .DegradedThrottleFrequency
        _m04 uint8_t  last_busy_frequency;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .LastBusyFrequency
        _m05 uint8_t  last_c3_frequency;             //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .LastC3Frequency
        _m06 uint8_t  last_adjusted_busy_frequency;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .LastAdjustedBusyFrequency
        _m07 uint8_t  processor_min_throttle;        //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .ProcessorMinThrottle
        _m08 uint8_t  processor_max_throttle;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProcessorMaxThrottle
        _m09 uint32_t number_of_frequencies;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .NumberOfFrequencies
        _m10 uint32_t promotion_count;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PromotionCount
        _m11 uint32_t demotion_count;                //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .DemotionCount
        _m12 uint32_t error_count;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ErrorCount
        _m13 uint32_t retry_count;                   //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .RetryCount
        _m14 uint64_t current_frequency_time;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CurrentFrequencyTime
        _m15 uint64_t current_processor_time;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CurrentProcessorTime
        _m16 uint64_t current_processor_idle_time;   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CurrentProcessorIdleTime
        _m17 uint64_t last_processor_time;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .LastProcessorTime
        _m18 uint64_t last_processor_idle_time;      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .LastProcessorIdleTime
        _m19 uint64_t energy;                        //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Energy
                                                   
        SDK_MAGIC_PROPERTIES( "_SYSTEM_PROCESSOR_POWER_INFORMATION.$", 0x50, true, 0xbda9e6f16492382f );                             
        SDK_FIXED_SIZE( system_processor_power_information_t, 0x50 );                             
    };                                             
};
#include "magic/system_processor_power_information_t.end.hpp"
SDK_VERIFY( struct win::system_processor_power_information_t, 0x50 );
