#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/resource_t.start.hpp"
namespace wmi
{
    // [struct _WMI_RESOURCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct resource_t                     
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint64_t acquire_time;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AcquireTime
        _m01 uint64_t hold_time;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HoldTime
        _m02 uint64_t wait_time;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .WaitTime
        _m03 uint32_t max_recursion_depth;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MaxRecursionDepth
        _m04 uint32_t thread_id;            //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ThreadId
        _m05 void*    resource;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Resource
        _m06 uint32_t action;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Action
        _m07 uint32_t contention_delta;     //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .ContentionDelta
                                          
        SDK_MAGIC_PROPERTIES( "_WMI_RESOURCE.$", 0x30, true, 0x9e18857297a835a3 );                    
        SDK_FIXED_SIZE( resource_t, 0x30 );                    
    };                                    
};
#include "magic/resource_t.end.hpp"
SDK_VERIFY( struct wmi::resource_t, 0x30 );
