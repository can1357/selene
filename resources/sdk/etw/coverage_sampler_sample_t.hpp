#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/coverage_sampler_sample_t.start.hpp"
namespace etw
{
    // [struct _ETW_COVERAGE_SAMPLER_SAMPLE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct coverage_sampler_sample_t
    {                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t module_id;      //{ +0x0000    +0x0000    +0x0000    } | .ModuleId
        _m01 uint32_t offset;         //{ +0x0004    +0x0004    +0x0004    } | .Offset
                                    
        SDK_MAGIC_PROPERTIES( "_ETW_COVERAGE_SAMPLER_SAMPLE.$", 0x8, true, 0x1cd25c11bc3bba5f );          
        SDK_FIXED_SIZE( coverage_sampler_sample_t, 0x8 );          
    };                              
};
#include "magic/coverage_sampler_sample_t.end.hpp"
SDK_VERIFY( struct etw::coverage_sampler_sample_t, 0x8 );
