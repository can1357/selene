#pragma once
#include <sdkgen/support_library.hpp>
#include "notification_header_t.hpp"
#include "session_notification_type_t.hpp"

#include "magic/session_notification_packet_t.start.hpp"
namespace etw
{
    // [struct _ETW_SESSION_NOTIFICATION_PACKET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct session_notification_packet_t                               
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                             
        _m00 struct etw::notification_header_t     notification_header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NotificationHeader
        _m01 enum etw::session_notification_type_t type;                 //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Type
        _m02 int32_t                               status;               //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .Status
        _m03 uint64_t                              trace_handle;         //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .TraceHandle
                                                                       
        SDK_MAGIC_PROPERTIES( "_ETW_SESSION_NOTIFICATION_PACKET.$", 0x60, true, 0x3ff305d78ac8b70a );                    
        SDK_FIXED_SIZE( session_notification_packet_t, 0x60 );                    
    };                                                                 
};
#include "magic/session_notification_packet_t.end.hpp"
SDK_VERIFY( struct etw::session_notification_packet_t, 0x60 );
