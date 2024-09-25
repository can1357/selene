#pragma once
#include <sdkgen/support_library.hpp>
#include "kdpc_t.hpp"

#include "magic/ksingle_dpc_soft_timeout_event_info_t.start.hpp"
namespace nt
{
    // [struct _KSINGLE_DPC_SOFT_TIMEOUT_EVENT_INFO]
    // => Windows 11
    //
    struct ksingle_dpc_soft_timeout_event_info_t
    {                                           
        // Windows 11                           
        //                                      
        _m00 struct nt::kdpc_t event_dpc;         //{ +0x0000    } | .EventDpc
        _m01 void*             deferred_routine;  //{ +0x0040    } | .DeferredRoutine
        _m02 volatile uint32_t tick_count;        //{ +0x0048    } | .TickCount
                                                
        SDK_MAGIC_PROPERTIES( "_KSINGLE_DPC_SOFT_TIMEOUT_EVENT_INFO.$", 0x0, false, 0xfe9dc22062fae3a6 );                 
        SDK_FIXED_SIZE( ksingle_dpc_soft_timeout_event_info_t, 0x50 );                 
    };                                          
};
#include "magic/ksingle_dpc_soft_timeout_event_info_t.end.hpp"
SDK_VERIFY( struct nt::ksingle_dpc_soft_timeout_event_info_t, 0x50 );
