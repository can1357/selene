#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/notification_media_status_t.start.hpp"
namespace nt
{
    // [struct _NOTIFICATION_MEDIA_STATUS]
    // => WDK 10 (NV)
    //
    struct notification_media_status_t
    {                                 
        // WDK 10                   
        //                          
        _m00 uint4_t media_event;       //{ +0x0000@0  } | .MediaEvent
        _m01 uint8_t power_status;      //{ +0x0001    } | .PowerStatus
        _m02 uint8_t media_status;      //{ +0x0001    } | .MediaStatus
        _m03 uint1_t door_tray_open;    //{ +0x0001@0  } | .DoorTrayOpen
        _m04 uint1_t media_present;     //{ +0x0001@1  } | .MediaPresent
        _m05 uint6_t reserved_x;        //{ +0x0001@2  } | .ReservedX
        _m06 uint8_t start_slot;        //{ +0x0002    } | .StartSlot
        _m07 uint8_t end_slot;          //{ +0x0003    } | .EndSlot
                                      
        SDK_NONVOL_PROPERTIES( "_NOTIFICATION_MEDIA_STATUS.$", 0x0, false, 0x483afc63403c3736 );               
        SDK_FIXED_SIZE( notification_media_status_t, 0x4 );               
    };                                
};
#include "magic/notification_media_status_t.end.hpp"
SDK_VERIFY( struct nt::notification_media_status_t, 0x4 );
