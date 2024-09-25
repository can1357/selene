#pragma once
#include <sdkgen/support_library.hpp>
#include "coverage_sampler_option_flags_t.hpp"

#include "magic/coverage_sampler_options_t.start.hpp"
namespace etw
{
    // [struct _ETW_COVERAGE_SAMPLER_OPTIONS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct coverage_sampler_options_t                                                     
    {                                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                                
        _m00 union etw::coverage_sampler_option_flags_t flags;                              //{ +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t                                   hash_seed;                          //{ +0x0004    +0x0004    +0x0004    } | .HashSeed
        _m02 uint32_t                                   image_lru_size;                     //{ +0x0008    +0x0008    +0x0008    } | .ImageLruSize
        _m03 uint32_t                                   sample_table_min_entries;           //{ +0x000c    +0x000c    +0x000c    } | .SampleTableMinEntries
        _m04 uint32_t                                   sample_table_max_entries;           //{ +0x0010    +0x0010    +0x0010    } | .SampleTableMaxEntries
        _m05 uint32_t                                   sample_table_max_queued;            //{ +0x0014    +0x0014    +0x0014    } | .SampleTableMaxQueued
        _m06 uint32_t                                   sample_buffer_size;                 //{ +0x0018    +0x0018    +0x0018    } | .SampleBufferSize
        _m07 uint32_t                                   sample_buffer_max_count_per_proc;   //{ +0x001c    +0x001c    +0x001c    } | .SampleBufferMaxCountPerProc
        _m08 uint32_t                                   capture_buffer_max_count_per_proc;  //{ +0x0020    +0x0020    +0x0020    } | .CaptureBufferMaxCountPerProc
        _m09 uint32_t                                   apc_max_count_per_proc;             //{ +0x0024    +0x0024    +0x0024    } | .ApcMaxCountPerProc
        _m10 uint32_t                                   profile_sample_period_us;           //{ +0x0028    +0x0028    +0x0028    } | .ProfileSamplePeriodUS
        _m11 uint32_t                                   profile_sample_count_per_period;    //{ +0x002c    +0x002c    +0x002c    } | .ProfileSampleCountPerPeriod
        _m12 uint32_t                                   c_switch_sample_period_us;          //{ +0x0030    +0x0030    +0x0030    } | .CSwitchSamplePeriodUS
        _m13 uint32_t                                   c_switch_sample_count_per_period;   //{ +0x0034    +0x0034    +0x0034    } | .CSwitchSampleCountPerPeriod
        _m14 uint32_t                                   r_thread_sample_period_us;          //{ +0x0038    +0x0038    +0x0038    } | .RThreadSamplePeriodUS
        _m15 uint32_t                                   r_thread_sample_count_per_period;   //{ +0x003c    +0x003c    +0x003c    } | .RThreadSampleCountPerPeriod
        _m16 uint32_t                                   pg_fault_sample_period_us;          //{ +0x0040    +0x0040    +0x0040    } | .PGFaultSamplePeriodUS
        _m17 uint32_t                                   pg_fault_sample_count_per_period;   //{ +0x0044    +0x0044    +0x0044    } | .PGFaultSampleCountPerPeriod
        _m18 uint32_t                                   stack_depth;                        //{ +0x0048    +0x0048    +0x0048    } | .StackDepth
        _m19 uint32_t                                   stack_cache_entries;                //{ +0x004c    +0x004c    +0x004c    } | .StackCacheEntries
        _m20 sdk::array<wchar_t, 128>                   path_inclusion_list;                //{ +0x0050    +0x0050    +0x0050    } | .PathInclusionList
        _m21 sdk::array<wchar_t, 128>                   path_exclusion_list;                //{ +0x0150    +0x0150    +0x0150    } | .PathExclusionList
                                                                                          
        SDK_MAGIC_PROPERTIES( "_ETW_COVERAGE_SAMPLER_OPTIONS.$", 0x250, true, 0xd90c401dde155ee6 );                                  
        SDK_FIXED_SIZE( coverage_sampler_options_t, 0x250 );                                  
    };                                                                                    
};
#include "magic/coverage_sampler_options_t.end.hpp"
SDK_VERIFY( struct etw::coverage_sampler_options_t, 0x250 );
