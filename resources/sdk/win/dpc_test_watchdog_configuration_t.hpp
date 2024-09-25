#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dpc_test_watchdog_configuration_t.start.hpp"
namespace win
{
    // [struct _DPC_TEST_WATCHDOG_CONFIGURATION]
    // => Windows 11
    //
    struct dpc_test_watchdog_configuration_t                              
    {                                                                     
        // Windows 11                                                     
        //                                                                
        _m00 uint32_t dpc_profiling_buffer_size;                            //{ +0x0000    } | .DpcProfilingBufferSize
        _m01 uint32_t dpc_time_limit_ticks;                                 //{ +0x0004    } | .DpcTimeLimitTicks
        _m02 uint32_t dpc_watchdog_period_ticks;                            //{ +0x0008    } | .DpcWatchdogPeriodTicks
        _m03 uint32_t single_dpc_soft_time_limit_ticks;                     //{ +0x000c    } | .SingleDpcSoftTimeLimitTicks
        _m04 uint32_t cumulative_dpc_soft_time_limit_ticks;                 //{ +0x0010    } | .CumulativeDpcSoftTimeLimitTicks
        _m05 uint32_t dpc_watchdog_profile_single_dpc_threshold_ticks;      //{ +0x0014    } | .DpcWatchdogProfileSingleDpcThresholdTicks
        _m06 uint32_t dpc_watchdog_profile_cumulative_dpc_threshold_ticks;  //{ +0x0018    } | .DpcWatchdogProfileCumulativeDpcThresholdTicks
        _m07 void**   dpc_watchdog_profile;                                 //{ +0x0020    } | .DpcWatchdogProfile
                                                                          
        SDK_MAGIC_PROPERTIES( "_DPC_TEST_WATCHDOG_CONFIGURATION.$", 0x0, false, 0xd1e48a98999c08be );                                                    
        SDK_FIXED_SIZE( dpc_test_watchdog_configuration_t, 0x28 );                                                    
    };                                                                    
};
#include "magic/dpc_test_watchdog_configuration_t.end.hpp"
SDK_VERIFY( struct win::dpc_test_watchdog_configuration_t, 0x28 );
