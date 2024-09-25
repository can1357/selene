#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/coverage_sampler_option_flags_t.start.hpp"
namespace etw
{
    // [union _ETW_COVERAGE_SAMPLER_OPTION_FLAGS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union coverage_sampler_option_flags_t                 
    {                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                
        _m00 uint32_t all_flags;                            //{ +0x0000    +0x0000    +0x0000    } | .AllFlags
        _m01 uint1_t  require_profile_total_issues_source;  //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .RequireProfileTotalIssuesSource
        _m02 uint1_t  force_profile_time_source;            //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .ForceProfileTimeSource
        _m03 uint1_t  no_profile_sampling;                  //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .NoProfileSampling
        _m04 uint1_t  no_c_switch_sampling;                 //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .NoCSwitchSampling
        _m05 uint1_t  no_ready_thread_sampling;             //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .NoReadyThreadSampling
        _m06 uint1_t  no_fault_sampling;                    //{ +0x0000@5  +0x0000@5  +0x0000@5  } | .NoFaultSampling
        _m07 uint1_t  no_stack_cache;                       //{ +0x0000@6  +0x0000@6  +0x0000@6  } | .NoStackCache
        _m08 uint1_t  no_sample_buffers;                    //{ +0x0000@7  +0x0000@7  +0x0000@7  } | .NoSampleBuffers
        _m09 uint1_t  no_pause_when_full;                   //{ +0x0000@8  +0x0000@8  +0x0000@8  } | .NoPauseWhenFull
        _m10 uint1_t  no_low_priority;                      //{ +0x0000@9  +0x0000@9  +0x0000@9  } | .NoLowPriority
        _m11 uint1_t  with_app_id;                          //{ +0x0000@10 +0x0000@10 +0x0000@10 } | .WithAppId
        _m12 uint1_t  filter_kernel;                        //{ +0x0000@11 +0x0000@11 +0x0000@11 } | .FilterKernel
                                                          
        SDK_MAGIC_PROPERTIES( "_ETW_COVERAGE_SAMPLER_OPTION_FLAGS.$", 0x4, true, 0x84049d69b720a35f );                                    
        SDK_FIXED_SIZE( coverage_sampler_option_flags_t, 0x4 );                                    
    };                                                    
};
#include "magic/coverage_sampler_option_flags_t.end.hpp"
SDK_VERIFY( union etw::coverage_sampler_option_flags_t, 0x4 );
