#pragma once
#include <sdkgen/support_library.hpp>
#include "coverage_sampler_perf_stats_t.hpp"
#include "../etwi/coverage_sampler_information_t.hpp"

#include "magic/coverage_sampler_perf_info_t.start.hpp"
namespace etw
{
    // [struct _ETW_COVERAGE_SAMPLER_PERF_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct coverage_sampler_perf_info_t                             
    {                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                          
        _m00 struct etwi::coverage_sampler_information_t common;      //{ +0x0000    +0x0000    +0x0000    } | .Common
        _m01 struct etw::coverage_sampler_perf_stats_t   perf_stats;  //{ +0x0010    +0x0010    +0x0010    } | .PerfStats
                                                                    
        SDK_MAGIC_PROPERTIES( "_ETW_COVERAGE_SAMPLER_PERF_INFO.$", 0x1d0, true, 0x5cbd9ec840c3b6f0 );           
        SDK_DYNAMIC_SIZE( coverage_sampler_perf_info_t );           
    };                                                              
};
#include "magic/coverage_sampler_perf_info_t.end.hpp"
