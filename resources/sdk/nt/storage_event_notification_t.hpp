#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_event_notification_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_EVENT_NOTIFICATION]
    // => WDK 10 (NV)
    //
    struct storage_event_notification_t
    {                                  
        // WDK 10             
        //                    
        _m00 uint32_t version;           //{ +0x0000    } | .Version
        _m01 uint32_t size;              //{ +0x0004    } | .Size
        _m02 uint64_t events;            //{ +0x0008    } | .Events
                                       
        SDK_NONVOL_PROPERTIES( "_STORAGE_EVENT_NOTIFICATION.$", 0x0, false, 0x81696269f41dde61 );        
        SDK_FIXED_SIZE( storage_event_notification_t, 0x10 );        
    };                                 
};
#include "magic/storage_event_notification_t.end.hpp"
SDK_VERIFY( struct nt::storage_event_notification_t, 0x10 );
