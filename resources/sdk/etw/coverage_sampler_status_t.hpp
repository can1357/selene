#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/coverage_sampler_status_t.start.hpp"
namespace etw
{
    // [struct _ETW_COVERAGE_SAMPLER_STATUS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct coverage_sampler_status_t
    {                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                  
        _m00 uint8_t active;          //{ +0x0000    +0x0000    +0x0000    } | .Active
                                    
        SDK_MAGIC_PROPERTIES( "_ETW_COVERAGE_SAMPLER_STATUS.$", 0x1, true, 0x1bcb5524f154c8e7 );       
        SDK_FIXED_SIZE( coverage_sampler_status_t, 0x1 );       
    };                              
};
#include "magic/coverage_sampler_status_t.end.hpp"
SDK_VERIFY( struct etw::coverage_sampler_status_t, 0x1 );
