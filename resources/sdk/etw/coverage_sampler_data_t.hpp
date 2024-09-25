#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/coverage_sampler_data_t.start.hpp"
namespace etw
{
    // [struct _ETW_COVERAGE_SAMPLER_DATA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct coverage_sampler_data_t   
    {                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t header_size;     //{ +0x0000    +0x0000    +0x0000    } | .HeaderSize
        _m01 uint32_t total_size;      //{ +0x0004    +0x0004    +0x0004    } | .TotalSize
        _m02 uint32_t query_sequence;  //{ +0x0008    +0x0008    +0x0008    } | .QuerySequence
        _m03 uint32_t options_offset;  //{ +0x000c    +0x000c    +0x000c    } | .OptionsOffset
        _m04 uint32_t options_size;    //{ +0x0010    +0x0010    +0x0010    } | .OptionsSize
        _m05 uint32_t stats_offset;    //{ +0x0014    +0x0014    +0x0014    } | .StatsOffset
        _m06 uint32_t stats_size;      //{ +0x0018    +0x0018    +0x0018    } | .StatsSize
        _m07 uint32_t samples_offset;  //{ +0x001c    +0x001c    +0x001c    } | .SamplesOffset
        _m08 uint32_t sample_count;    //{ +0x0020    +0x0020    +0x0020    } | .SampleCount
        _m09 uint32_t modules_offset;  //{ +0x0024    +0x0024    +0x0024    } | .ModulesOffset
        _m10 uint32_t module_count;    //{ +0x0028    +0x0028    +0x0028    } | .ModuleCount
                                     
        SDK_MAGIC_PROPERTIES( "_ETW_COVERAGE_SAMPLER_DATA.$", 0x2c, true, 0x6b2c1e420289299f );               
        SDK_FIXED_SIZE( coverage_sampler_data_t, 0x2c );               
    };                               
};
#include "magic/coverage_sampler_data_t.end.hpp"
SDK_VERIFY( struct etw::coverage_sampler_data_t, 0x2c );
