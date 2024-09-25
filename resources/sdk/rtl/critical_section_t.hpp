#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/critical_section_t.start.hpp"
namespace rtl
{
    struct critical_section_debug_t;

    // [struct _RTL_CRITICAL_SECTION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct critical_section_t                                      
    {                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                         
        _m00 struct rtl::critical_section_debug_t* debug_info;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DebugInfo
        _m01 int32_t                               lock_count;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .LockCount
        _m02 int32_t                               recursion_count;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .RecursionCount
        _m03 void*                                 owning_thread;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .OwningThread
        _m04 void*                                 lock_semaphore;   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .LockSemaphore
        _m05 uint64_t                              spin_count;       //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .SpinCount
                                                                   
        SDK_NONVOL_PROPERTIES( "_RTL_CRITICAL_SECTION.$", 0x28, true, 0xee38387dec61ce83 );                
        SDK_FIXED_SIZE( critical_section_t, 0x28 );                
    };                                                             
};
#include "magic/critical_section_t.end.hpp"
SDK_VERIFY( struct rtl::critical_section_t, 0x28 );
