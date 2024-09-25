#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/critical_section32_t.start.hpp"
namespace rtl
{
    // [struct _RTL_CRITICAL_SECTION32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct critical_section32_t       
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t debug_info;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DebugInfo
        _m01 int32_t  lock_count;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .LockCount
        _m02 int32_t  recursion_count;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RecursionCount
        _m03 uint32_t owning_thread;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .OwningThread
        _m04 uint32_t lock_semaphore;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .LockSemaphore
        _m05 uint32_t spin_count;       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .SpinCount
                                      
        SDK_MAGIC_PROPERTIES( "_RTL_CRITICAL_SECTION32.$", 0x18, true, 0x547bf952f47e33cb );                
        SDK_FIXED_SIZE( critical_section32_t, 0x18 );                
    };                                
};
#include "magic/critical_section32_t.end.hpp"
SDK_VERIFY( struct rtl::critical_section32_t, 0x18 );
