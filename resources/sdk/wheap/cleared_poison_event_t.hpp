#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

#include "magic/cleared_poison_event_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_CLEARED_POISON_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct cleared_poison_event_t                                
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 uint64_t                       physical_address;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PhysicalAddress
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEAP_CLEARED_POISON_EVENT.$", 0x28, true, 0xcb57b5cfff16c671 );                     
        SDK_FIXED_SIZE( cleared_poison_event_t, 0x28 );                     
    };                                                           
};
#include "magic/cleared_poison_event_t.end.hpp"
SDK_VERIFY( struct wheap::cleared_poison_event_t, 0x28 );
