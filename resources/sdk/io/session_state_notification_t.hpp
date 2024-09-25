#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/session_state_notification_t.start.hpp"
namespace io
{
    // [struct _IO_SESSION_STATE_NOTIFICATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct session_state_notification_t
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t size;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t flags;             //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 void*    io_object;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .IoObject
        _m03 uint32_t event_mask;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .EventMask
        _m04 void*    context;           //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Context
                                       
        SDK_NONVOL_PROPERTIES( "_IO_SESSION_STATE_NOTIFICATION.$", 0x20, true, 0xfd764c702bc2aa6f );           
        SDK_FIXED_SIZE( session_state_notification_t, 0x20 );           
    };                                 
};
#include "magic/session_state_notification_t.end.hpp"
SDK_VERIFY( struct io::session_state_notification_t, 0x20 );
