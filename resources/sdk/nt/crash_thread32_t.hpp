#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crash_thread32_t.start.hpp"
namespace nt
{
    // [struct _CRASH_THREAD32]
    // => WDK 10 (NV)
    //
    struct crash_thread32_t          
    {                                
        // WDK 10                    
        //                           
        _m00 uint32_t thread_id;       //{ +0x0000    } | .ThreadId
        _m01 uint32_t suspend_count;   //{ +0x0004    } | .SuspendCount
        _m02 uint32_t priority_class;  //{ +0x0008    } | .PriorityClass
        _m03 uint32_t priority;        //{ +0x000c    } | .Priority
        _m04 uint32_t teb;             //{ +0x0010    } | .Teb
                                     
        SDK_NONVOL_PROPERTIES( "_CRASH_THREAD32.$", 0x0, false, 0xbde0621050b988de );               
        SDK_FIXED_SIZE( crash_thread32_t, 0x30 );               
    };                               
};
#include "magic/crash_thread32_t.end.hpp"
SDK_VERIFY( struct nt::crash_thread32_t, 0x30 );
