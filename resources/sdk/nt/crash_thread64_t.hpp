#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crash_thread64_t.start.hpp"
namespace nt
{
    // [struct _CRASH_THREAD64]
    // => WDK 10 (NV)
    //
    struct crash_thread64_t          
    {                                
        // WDK 10                    
        //                           
        _m00 uint32_t thread_id;       //{ +0x0000    } | .ThreadId
        _m01 uint32_t suspend_count;   //{ +0x0004    } | .SuspendCount
        _m02 uint32_t priority_class;  //{ +0x0008    } | .PriorityClass
        _m03 uint32_t priority;        //{ +0x000c    } | .Priority
        _m04 uint64_t teb;             //{ +0x0010    } | .Teb
                                     
        SDK_NONVOL_PROPERTIES( "_CRASH_THREAD64.$", 0x0, false, 0x8520c1d61cecfbcb );               
        SDK_FIXED_SIZE( crash_thread64_t, 0x50 );               
    };                               
};
#include "magic/crash_thread64_t.end.hpp"
SDK_VERIFY( struct nt::crash_thread64_t, 0x50 );
