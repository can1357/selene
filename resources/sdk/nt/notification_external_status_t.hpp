#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/notification_external_status_t.start.hpp"
namespace nt
{
    // [struct _NOTIFICATION_EXTERNAL_STATUS]
    // => WDK 10 (NV)
    //
    struct notification_external_status_t                
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 uint4_t                external_event;        //{ +0x0000@0  } | .ExternalEvent
        _m01 uint4_t                external_status;       //{ +0x0001@0  } | .ExternalStatus
        _m02 uint1_t                persistent_prevented;  //{ +0x0001@7  } | .PersistentPrevented
        _m03 sdk::array<uint8_t, 2> request;               //{ +0x0002    } | .Request
                                                         
        SDK_NONVOL_PROPERTIES( "_NOTIFICATION_EXTERNAL_STATUS.$", 0x0, false, 0x634cfacb47c6e4e );                     
        SDK_FIXED_SIZE( notification_external_status_t, 0x4 );                     
    };                                                   
};
#include "magic/notification_external_status_t.end.hpp"
SDK_VERIFY( struct nt::notification_external_status_t, 0x4 );
