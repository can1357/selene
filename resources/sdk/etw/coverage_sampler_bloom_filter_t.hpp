#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/coverage_sampler_bloom_filter_t.start.hpp"
namespace etw
{
    // [struct _ETW_COVERAGE_SAMPLER_BLOOM_FILTER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct coverage_sampler_bloom_filter_t
    {                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint64_t file_mapping;         //{ +0x0000    +0x0000    +0x0000    } | .FileMapping
        _m01 uint32_t size;                 //{ +0x0008    +0x0008    +0x0008    } | .Size
        _m02 uint32_t hash_seed;            //{ +0x000c    +0x000c    +0x000c    } | .HashSeed
        _m03 uint32_t hash_count;           //{ +0x0010    +0x0010    +0x0010    } | .HashCount
                                          
        SDK_MAGIC_PROPERTIES( "_ETW_COVERAGE_SAMPLER_BLOOM_FILTER.$", 0x18, true, 0x6e7a182205bc79e0 );             
        SDK_FIXED_SIZE( coverage_sampler_bloom_filter_t, 0x18 );             
    };                                    
};
#include "magic/coverage_sampler_bloom_filter_t.end.hpp"
SDK_VERIFY( struct etw::coverage_sampler_bloom_filter_t, 0x18 );
