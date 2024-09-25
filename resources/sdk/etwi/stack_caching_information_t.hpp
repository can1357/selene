#pragma once
#include <sdkgen/support_library.hpp>
#include "information_class_t.hpp"

#include "magic/stack_caching_information_t.start.hpp"
namespace etwi
{
    // [struct _EVENT_TRACE_STACK_CACHING_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stack_caching_information_t                                    
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                
        _m00 enum etwi::information_class_t event_trace_information_class;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EventTraceInformationClass
        _m01 uint64_t                       trace_handle;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TraceHandle
        _m02 uint8_t                        enabled;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Enabled
        _m03 uint32_t                       cache_size;                     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .CacheSize
        _m04 uint32_t                       bucket_count;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .BucketCount
                                                                          
        SDK_MAGIC_PROPERTIES( "_EVENT_TRACE_STACK_CACHING_INFORMATION.$", 0x20, true, 0xa405a4b25381d56e );                              
        SDK_FIXED_SIZE( stack_caching_information_t, 0x20 );                              
    };                                                                    
};
#include "magic/stack_caching_information_t.end.hpp"
SDK_VERIFY( struct etwi::stack_caching_information_t, 0x20 );
