#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/notification_event_status_header_t.start.hpp"
namespace nt
{
    // [struct _NOTIFICATION_EVENT_STATUS_HEADER]
    // => WDK 10 (NV)
    //
    struct notification_event_status_header_t               
    {                                                       
        // WDK 10                                           
        //                                                  
        _m00 sdk::array<uint8_t, 2> event_data_length;        //{ +0x0000    } | .EventDataLength
        _m01 uint3_t                notification_class;       //{ +0x0002@0  } | .NotificationClass
        _m02 uint1_t                nea;                      //{ +0x0002@7  } | .NEA
        _m03 uint8_t                supported_event_classes;  //{ +0x0003    } | .SupportedEventClasses
        _m04 sdk::array<uint8_t>    class_event_data;         //{ +0x0004    } | .ClassEventData
                                                            
        SDK_NONVOL_PROPERTIES( "_NOTIFICATION_EVENT_STATUS_HEADER.$", 0x0, false, 0x5fc4272f26ff1e68 );                        
        SDK_FIXED_SIZE( notification_event_status_header_t, 0x4 );                        
    };                                                      
};
#include "magic/notification_event_status_header_t.end.hpp"
SDK_VERIFY( struct nt::notification_event_status_header_t, 0x4 );
