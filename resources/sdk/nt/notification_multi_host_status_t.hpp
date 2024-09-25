#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/notification_multi_host_status_t.start.hpp"
namespace nt
{
    // [struct _NOTIFICATION_MULTI_HOST_STATUS]
    // => WDK 10 (NV)
    //
    struct notification_multi_host_status_t              
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 uint4_t                multi_host_event;      //{ +0x0000@0  } | .MultiHostEvent
        _m01 uint4_t                multi_host_status;     //{ +0x0001@0  } | .MultiHostStatus
        _m02 uint1_t                persistent_prevented;  //{ +0x0001@7  } | .PersistentPrevented
        _m03 sdk::array<uint8_t, 2> priority;              //{ +0x0002    } | .Priority
                                                         
        SDK_NONVOL_PROPERTIES( "_NOTIFICATION_MULTI_HOST_STATUS.$", 0x0, false, 0x792dfd251403ea93 );                     
        SDK_FIXED_SIZE( notification_multi_host_status_t, 0x4 );                     
    };                                                   
};
#include "magic/notification_multi_host_status_t.end.hpp"
SDK_VERIFY( struct nt::notification_multi_host_status_t, 0x4 );
