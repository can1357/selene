#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pss_performance_counters_t.start.hpp"
namespace win
{
    // [struct PSS_PERFORMANCE_COUNTERS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pss_performance_counters_t             
    {                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint64_t total_cycle_count;            //{ +0x0000    +0x0000    +0x0000    } | .TotalCycleCount
        _m01 uint64_t total_wall_clock_period;      //{ +0x0008    +0x0008    +0x0008    } | .TotalWallClockPeriod
        _m02 uint64_t va_clone_cycle_count;         //{ +0x0010    +0x0010    +0x0010    } | .VaCloneCycleCount
        _m03 uint64_t va_clone_wall_clock_period;   //{ +0x0018    +0x0018    +0x0018    } | .VaCloneWallClockPeriod
        _m04 uint64_t va_space_cycle_count;         //{ +0x0020    +0x0020    +0x0020    } | .VaSpaceCycleCount
        _m05 uint64_t va_space_wall_clock_period;   //{ +0x0028    +0x0028    +0x0028    } | .VaSpaceWallClockPeriod
        _m06 uint64_t aux_pages_cycle_count;        //{ +0x0030    +0x0030    +0x0030    } | .AuxPagesCycleCount
        _m07 uint64_t aux_pages_wall_clock_period;  //{ +0x0038    +0x0038    +0x0038    } | .AuxPagesWallClockPeriod
        _m08 uint64_t handles_cycle_count;          //{ +0x0040    +0x0040    +0x0040    } | .HandlesCycleCount
        _m09 uint64_t handles_wall_clock_period;    //{ +0x0048    +0x0048    +0x0048    } | .HandlesWallClockPeriod
        _m10 uint64_t threads_cycle_count;          //{ +0x0050    +0x0050    +0x0050    } | .ThreadsCycleCount
        _m11 uint64_t threads_wall_clock_period;    //{ +0x0058    +0x0058    +0x0058    } | .ThreadsWallClockPeriod
                                                  
        SDK_MAGIC_PROPERTIES( "PSS_PERFORMANCE_COUNTERS.$", 0x60, true, 0x7235f09ea73273c5 );                            
        SDK_FIXED_SIZE( pss_performance_counters_t, 0x60 );                            
    };                                            
};
#include "magic/pss_performance_counters_t.end.hpp"
SDK_VERIFY( struct win::pss_performance_counters_t, 0x60 );
