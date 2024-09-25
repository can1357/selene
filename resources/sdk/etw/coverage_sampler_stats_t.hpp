#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/coverage_sampler_stats_t.start.hpp"
namespace etw
{
    // [struct _ETW_COVERAGE_SAMPLER_STATS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct coverage_sampler_stats_t               
    {                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                        
        _m00 int32_t samples_added;                 //{ +0x0000    +0x0000    +0x0000    } | .SamplesAdded
        _m01 int32_t samples_found;                 //{ +0x0004    +0x0004    +0x0004    } | .SamplesFound
        _m02 int32_t samples_dropped;               //{ +0x0008    +0x0008    +0x0008    } | .SamplesDropped
        _m03 int32_t samples_raised_um;             //{ +0x000c    +0x000c    +0x000c    } | .SamplesRaisedUM
        _m04 int32_t samples_mapped_um;             //{ +0x0010    +0x0010    +0x0010    } | .SamplesMappedUM
        _m05 int32_t samples_raised_km;             //{ +0x0014    +0x0014    +0x0014    } | .SamplesRaisedKM
        _m06 int32_t samples_mapped_km;             //{ +0x0018    +0x0018    +0x0018    } | .SamplesMappedKM
        _m07 int32_t sampling_paused;               //{ +0x001c    +0x001c    +0x001c    } | .SamplingPaused
        _m08 int32_t apc_not_available;             //{ +0x0020    +0x0020    +0x0020    } | .ApcNotAvailable
        _m09 int32_t capture_buffer_not_available;  //{ +0x0024    +0x0024    +0x0024    } | .CaptureBufferNotAvailable
        _m10 int32_t sample_buffer_not_available;   //{ +0x0028    +0x0028    +0x0028    } | .SampleBufferNotAvailable
        _m11 int32_t profile_sample_count;          //{ +0x002c    +0x002c    +0x002c    } | .ProfileSampleCount
        _m12 int32_t c_switch_sample_count;         //{ +0x0030    +0x0030    +0x0030    } | .CSwitchSampleCount
        _m13 int32_t r_thread_sample_count;         //{ +0x0034    +0x0034    +0x0034    } | .RThreadSampleCount
        _m14 int32_t pg_fault_sample_count;         //{ +0x0038    +0x0038    +0x0038    } | .PGFaultSampleCount
                                                  
        SDK_MAGIC_PROPERTIES( "_ETW_COVERAGE_SAMPLER_STATS.$", 0x3c, true, 0x211a0c7f1aff6782 );                             
        SDK_FIXED_SIZE( coverage_sampler_stats_t, 0x3c );                             
    };                                            
};
#include "magic/coverage_sampler_stats_t.end.hpp"
SDK_VERIFY( struct etw::coverage_sampler_stats_t, 0x3c );
