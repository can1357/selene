#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/notification_operational_status_t.start.hpp"
namespace nt
{
    // [struct _NOTIFICATION_OPERATIONAL_STATUS]
    // => WDK 10 (NV)
    //
    struct notification_operational_status_t             
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 uint4_t                operational_event;     //{ +0x0000@0  } | .OperationalEvent
        _m01 uint4_t                operational_status;    //{ +0x0001@0  } | .OperationalStatus
        _m02 uint1_t                persistent_prevented;  //{ +0x0001@7  } | .PersistentPrevented
        _m03 sdk::array<uint8_t, 2> operation;             //{ +0x0002    } | .Operation
                                                         
        SDK_NONVOL_PROPERTIES( "_NOTIFICATION_OPERATIONAL_STATUS.$", 0x0, false, 0x64553fe812e6ed0d );                     
        SDK_FIXED_SIZE( notification_operational_status_t, 0x4 );                     
    };                                                   
};
#include "magic/notification_operational_status_t.end.hpp"
SDK_VERIFY( struct nt::notification_operational_status_t, 0x4 );
