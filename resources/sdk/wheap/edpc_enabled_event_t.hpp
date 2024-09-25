#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

#include "magic/edpc_enabled_event_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_EDPC_ENABLED_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct edpc_enabled_event_t                                  
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 uint8_t                        e_dpc_enabled;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .eDPCEnabled
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEAP_EDPC_ENABLED_EVENT.$", 0x21, true, 0x63e9778e487131f1 );                     
        SDK_FIXED_SIZE( edpc_enabled_event_t, 0x21 );                     
    };                                                           
};
#include "magic/edpc_enabled_event_t.end.hpp"
SDK_VERIFY( struct wheap::edpc_enabled_event_t, 0x21 );
