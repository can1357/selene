#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/critical_section64_t.start.hpp"
namespace rtl
{
    // [struct _RTL_CRITICAL_SECTION64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct critical_section64_t       
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint64_t debug_info;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DebugInfo
        _m01 int32_t  lock_count;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LockCount
        _m02 int32_t  recursion_count;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .RecursionCount
        _m03 uint64_t owning_thread;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OwningThread
        _m04 uint64_t lock_semaphore;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LockSemaphore
        _m05 uint64_t spin_count;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SpinCount
                                      
        SDK_MAGIC_PROPERTIES( "_RTL_CRITICAL_SECTION64.$", 0x28, true, 0x46538311c52c6dba );                
        SDK_FIXED_SIZE( critical_section64_t, 0x28 );                
    };                                
};
#include "magic/critical_section64_t.end.hpp"
SDK_VERIFY( struct rtl::critical_section64_t, 0x28 );
