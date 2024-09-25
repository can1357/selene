#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ums_event_disassociate_t.start.hpp"
namespace etw
{
    // [struct _ETW_UMS_EVENT_DISASSOCIATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ums_event_disassociate_t         
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint32_t process_id;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProcessId
        _m01 uint32_t scheduled_thread_id;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ScheduledThreadId
        _m02 uint32_t primary_thread_id;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PrimaryThreadId
        _m03 uint32_t ums_apc_control_flags;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .UmsApcControlFlags
        _m04 int32_t  status;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Status
                                            
        SDK_MAGIC_PROPERTIES( "_ETW_UMS_EVENT_DISASSOCIATE.$", 0x14, true, 0x33aae1e51f7c622e );                      
        SDK_FIXED_SIZE( ums_event_disassociate_t, 0x14 );                      
    };                                      
};
#include "magic/ums_event_disassociate_t.end.hpp"
SDK_VERIFY( struct etw::ums_event_disassociate_t, 0x14 );
