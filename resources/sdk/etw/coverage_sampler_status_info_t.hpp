#pragma once
#include <sdkgen/support_library.hpp>
#include "coverage_sampler_status_t.hpp"
#include "../etwi/coverage_sampler_information_t.hpp"

#include "magic/coverage_sampler_status_info_t.start.hpp"
namespace etw
{
    // [struct _ETW_COVERAGE_SAMPLER_STATUS_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct coverage_sampler_status_info_t                       
    {                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                      
        _m00 struct etwi::coverage_sampler_information_t common;  //{ +0x0000    +0x0000    +0x0000    } | .Common
        _m01 struct etw::coverage_sampler_status_t       status;  //{ +0x0010    +0x0010    +0x0010    } | .Status
                                                                
        SDK_MAGIC_PROPERTIES( "_ETW_COVERAGE_SAMPLER_STATUS_INFO.$", 0x18, true, 0xcdb2c23cda6c3b3c );       
        SDK_FIXED_SIZE( coverage_sampler_status_info_t, 0x18 );       
    };                                                          
};
#include "magic/coverage_sampler_status_info_t.end.hpp"
SDK_VERIFY( struct etw::coverage_sampler_status_info_t, 0x18 );
