#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/notification_busy_status_t.start.hpp"
namespace nt
{
    // [struct _NOTIFICATION_BUSY_STATUS]
    // => WDK 10 (NV)
    //
    struct notification_busy_status_t                  
    {                                                  
        // WDK 10                                      
        //                                             
        _m00 uint4_t                device_busy_event;   //{ +0x0000@0  } | .DeviceBusyEvent
        _m01 uint8_t                device_busy_status;  //{ +0x0001    } | .DeviceBusyStatus
        _m02 sdk::array<uint8_t, 2> time;                //{ +0x0002    } | .Time
                                                       
        SDK_NONVOL_PROPERTIES( "_NOTIFICATION_BUSY_STATUS.$", 0x0, false, 0xa95096793144603c );                   
        SDK_FIXED_SIZE( notification_busy_status_t, 0x4 );                   
    };                                                 
};
#include "magic/notification_busy_status_t.end.hpp"
SDK_VERIFY( struct nt::notification_busy_status_t, 0x4 );
