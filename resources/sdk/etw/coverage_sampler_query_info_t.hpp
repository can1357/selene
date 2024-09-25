#pragma once
#include <sdkgen/support_library.hpp>
#include "coverage_sampler_data_t.hpp"
#include "../etwi/coverage_sampler_information_t.hpp"

#include "magic/coverage_sampler_query_info_t.start.hpp"
namespace etw
{
    // [struct _ETW_COVERAGE_SAMPLER_QUERY_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct coverage_sampler_query_info_t                                   
    {                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                 
        _m00 struct etwi::coverage_sampler_information_t common;             //{ +0x0000    +0x0000    +0x0000    } | .Common
        _m01 uint1_t                                     empty_stack_cache;  //{ +0x0010@0  +0x0010@0  +0x0010@0  } | .EmptyStackCache
        _m02 struct etw::coverage_sampler_data_t         header;             //{ +0x0014    +0x0014    +0x0014    } | .Header
                                                                           
        SDK_MAGIC_PROPERTIES( "_ETW_COVERAGE_SAMPLER_QUERY_INFO.$", 0x40, true, 0x4f846ff349a45388 );                  
        SDK_FIXED_SIZE( coverage_sampler_query_info_t, 0x40 );                  
    };                                                                     
};
#include "magic/coverage_sampler_query_info_t.end.hpp"
SDK_VERIFY( struct etw::coverage_sampler_query_info_t, 0x40 );
