#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stack_caching_info_t.start.hpp"
namespace trace
{
    // [struct _TRACE_STACK_CACHING_INFO]
    // => Windows 11
    //
    struct stack_caching_info_t    
    {                              
        // Windows 11              
        //                         
        _m00 uint8_t  enabled;       //{ +0x0000    } | .Enabled
        _m01 uint32_t cache_size;    //{ +0x0004    } | .CacheSize
        _m02 uint32_t bucket_count;  //{ +0x0008    } | .BucketCount
                                   
        SDK_MAGIC_PROPERTIES( "_TRACE_STACK_CACHING_INFO.$", 0x0, false, 0x2bf9d6cf9964c7b );             
        SDK_FIXED_SIZE( stack_caching_info_t, 0xc );             
    };                             
};
#include "magic/stack_caching_info_t.end.hpp"
SDK_VERIFY( struct trace::stack_caching_info_t, 0xc );
