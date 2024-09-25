#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/trace_routine_notification_t.start.hpp"
namespace wmi
{
    // [struct _WMI_TRACE_ROUTINE_NOTIFICATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct trace_routine_notification_t
    {                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t version;           //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 void*    routine_group;     //{ +0x0008    +0x0008    +0x0008    } | .RoutineGroup
                                       
        SDK_MAGIC_PROPERTIES( "_WMI_TRACE_ROUTINE_NOTIFICATION.$", 0x10, true, 0xde2d87f78a28ea68 );              
        SDK_FIXED_SIZE( trace_routine_notification_t, 0x10 );              
    };                                 
};
#include "magic/trace_routine_notification_t.end.hpp"
SDK_VERIFY( struct wmi::trace_routine_notification_t, 0x10 );
