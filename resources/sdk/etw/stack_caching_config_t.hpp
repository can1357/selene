#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stack_caching_config_t.start.hpp"
namespace etw
{
    // [struct _ETW_STACK_CACHING_CONFIG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stack_caching_config_t  
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t cache_size;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CacheSize
        _m01 uint32_t bucket_count;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BucketCount
                                   
        SDK_MAGIC_PROPERTIES( "_ETW_STACK_CACHING_CONFIG.$", 0x8, true, 0x818dfcf9d72a7c9d );             
        SDK_FIXED_SIZE( stack_caching_config_t, 0x8 );             
    };                             
};
#include "magic/stack_caching_config_t.end.hpp"
SDK_VERIFY( struct etw::stack_caching_config_t, 0x8 );
