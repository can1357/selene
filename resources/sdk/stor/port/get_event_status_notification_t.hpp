#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/get_event_status_notification_t.start.hpp"
namespace stor::port
{
    // [struct _GET_EVENT_STATUS_NOTIFICATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct get_event_status_notification_t                     
    {                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                     
        _m00 uint8_t                operation_code;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                immediate;                   //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .Immediate
        _m02 uint3_t                lun;                         //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .Lun
        _m03 uint8_t                notification_class_request;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .NotificationClassRequest
        _m04 sdk::array<uint8_t, 2> event_list_length;           //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .EventListLength
        _m05 uint8_t                control;                     //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                               
        SDK_NONVOL_PROPERTIES( "_GET_EVENT_STATUS_NOTIFICATION.$", 0xa, true, 0x34851a4be8828b0e );                           
        SDK_FIXED_SIZE( get_event_status_notification_t, 0xa );                           
    };                                                         
};
#include "magic/get_event_status_notification_t.end.hpp"
SDK_VERIFY( struct stor::port::get_event_status_notification_t, 0xa );
