#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ums_event_park_t.start.hpp"
namespace etw
{
    // [struct _ETW_UMS_EVENT_PARK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ums_event_park_t               
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t process_id;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProcessId
        _m01 uint32_t scheduled_thread_id;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ScheduledThreadId
        _m02 uint32_t park_flags;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ParkFlags
                                          
        SDK_MAGIC_PROPERTIES( "_ETW_UMS_EVENT_PARK.$", 0xc, true, 0x14b3761f5f8a032f );                    
        SDK_FIXED_SIZE( ums_event_park_t, 0xc );                    
    };                                    
};
#include "magic/ums_event_park_t.end.hpp"
SDK_VERIFY( struct etw::ums_event_park_t, 0xc );
