#pragma once
#include <sdkgen/support_library.hpp>
#include "critical_section_t.hpp"

#include "magic/resource_t.start.hpp"
namespace rtl
{
    struct critical_section_debug_t;

    // [struct _RTL_RESOURCE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct resource_t                                                          
    {                                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                     
        _m00 struct rtl::critical_section_t        critical_section;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CriticalSection
        _m01 void*                                 shared_semaphore;             //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .SharedSemaphore
        _m02 volatile uint32_t                     number_of_waiting_shared;     //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .NumberOfWaitingShared
        _m03 void*                                 exclusive_semaphore;          //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .ExclusiveSemaphore
        _m04 volatile uint32_t                     number_of_waiting_exclusive;  //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .NumberOfWaitingExclusive
        _m05 volatile int32_t                      number_of_active;             //{ +0x0044    +0x0044    +0x0044    +0x0044    +0x0044    } | .NumberOfActive
        _m06 void*                                 exclusive_owner_thread;       //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .ExclusiveOwnerThread
        _m07 uint32_t                              flags;                        //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .Flags
        _m08 struct rtl::critical_section_debug_t* debug_info;                   //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .DebugInfo
                                                                               
        SDK_NONVOL_PROPERTIES( "_RTL_RESOURCE.$", 0x60, true, 0x9ed6f80631790013 );                            
        SDK_FIXED_SIZE( resource_t, 0x60 );                                    
    };                                                                         
};
#include "magic/resource_t.end.hpp"
SDK_VERIFY( struct rtl::resource_t, 0x60 );
