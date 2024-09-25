#pragma once
#include <sdkgen/support_library.hpp>

namespace etw
{
    // [enum _ETW_COVERAGE_SAMPLER_INFORMATION_CLASS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class coverage_sampler_information_class_t : int32_t
    {                                                        
        etw_coverage_sampler_create_information = 0x0,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        etw_coverage_sampler_query_information =  0x1,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        etw_coverage_sampler_bloom_information =  0x2,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        etw_coverage_sampler_perf_information =   0x3,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        etw_coverage_sampler_status_information = 0x4,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_etw_coverage_sampler_info_class =     0x5,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                       
};
