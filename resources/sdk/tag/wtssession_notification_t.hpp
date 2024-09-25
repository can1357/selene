#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wtssession_notification_t.start.hpp"
namespace tag
{
    // [struct tagWTSSESSION_NOTIFICATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wtssession_notification_t
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t cb_size;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_session_id;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwSessionId
                                    
        SDK_MAGIC_PROPERTIES( "tagWTSSESSION_NOTIFICATION.$", 0x8, true, 0xb22e7edc369ba6eb );              
        SDK_FIXED_SIZE( wtssession_notification_t, 0x8 );              
    };                              
};
#include "magic/wtssession_notification_t.end.hpp"
SDK_VERIFY( struct tag::wtssession_notification_t, 0x8 );
