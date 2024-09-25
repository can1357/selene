#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/notification_power_status_t.start.hpp"
namespace nt
{
    // [struct _NOTIFICATION_POWER_STATUS]
    // => WDK 10 (NV)
    //
    struct notification_power_status_t
    {                                 
        // WDK 10                 
        //                        
        _m00 uint4_t power_event;       //{ +0x0000@0  } | .PowerEvent
        _m01 uint8_t power_status;      //{ +0x0001    } | .PowerStatus
                                      
        SDK_NONVOL_PROPERTIES( "_NOTIFICATION_POWER_STATUS.$", 0x0, false, 0x50d7468f0ea69fdc );             
        SDK_FIXED_SIZE( notification_power_status_t, 0x4 );             
    };                                
};
#include "magic/notification_power_status_t.end.hpp"
SDK_VERIFY( struct nt::notification_power_status_t, 0x4 );
