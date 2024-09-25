#pragma once
#include <sdkgen/support_library.hpp>
#include "hardware_counter_data_t.hpp"

#include "magic/performance_data_t.start.hpp"
namespace win
{
    // [struct _PERFORMANCE_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct performance_data_t                                                     
    {                                                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                        
        _m00 uint16_t                                        size;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint8_t                                         version;               //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 uint8_t                                         hw_counters_count;     //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .HwCountersCount
        _m03 uint32_t                                        context_switch_count;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ContextSwitchCount
        _m04 uint64_t                                        wait_reason_bit_map;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .WaitReasonBitMap
        _m05 uint64_t                                        cycle_time;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .CycleTime
        _m06 uint32_t                                        retry_count;           //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .RetryCount
        _m07 sdk::array<struct win::hardware_counter_data_t> hw_counters;           //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .HwCounters
                                                                                  
        SDK_NONVOL_PROPERTIES( "_PERFORMANCE_DATA.$", 0x120, true, 0xa095b0cf869912d6 );                     
        SDK_FIXED_SIZE( performance_data_t, 0x120 );                              
    };                                                                            
};
#include "magic/performance_data_t.end.hpp"
SDK_VERIFY( struct win::performance_data_t, 0x120 );
