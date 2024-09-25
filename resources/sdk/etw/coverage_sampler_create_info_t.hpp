#pragma once
#include <sdkgen/support_library.hpp>
#include "coverage_sampler_options_t.hpp"
#include "coverage_sampler_bloom_filter_t.hpp"
#include "../etwi/coverage_sampler_information_t.hpp"

#include "magic/coverage_sampler_create_info_t.start.hpp"
namespace etw
{
    // [struct _ETW_COVERAGE_SAMPLER_CREATE_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct coverage_sampler_create_info_t                                    
    {                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                   
        _m00 struct etwi::coverage_sampler_information_t common;               //{ +0x0000    +0x0000    +0x0000    } | .Common
        _m01 struct etw::coverage_sampler_options_t      options;              //{ +0x0010    +0x0010    +0x0010    } | .Options
        _m02 struct etw::coverage_sampler_bloom_filter_t bloom;                //{ +0x0260    +0x0260    +0x0260    } | .Bloom
        _m03 uint64_t                                    samples_ready_event;  //{ +0x0278    +0x0278    +0x0278    } | .SamplesReadyEvent
                                                                             
        SDK_MAGIC_PROPERTIES( "_ETW_COVERAGE_SAMPLER_CREATE_INFO.$", 0x280, true, 0xf24381cfca07b627 );                    
        SDK_FIXED_SIZE( coverage_sampler_create_info_t, 0x280 );                    
    };                                                                       
};
#include "magic/coverage_sampler_create_info_t.end.hpp"
SDK_VERIFY( struct etw::coverage_sampler_create_info_t, 0x280 );
