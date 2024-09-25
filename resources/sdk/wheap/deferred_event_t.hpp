#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

#include "magic/deferred_event_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_DEFERRED_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct deferred_event_t                                      
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 nt::list_entry_t               list_entry;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .WheaEventLogEntry
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEAP_DEFERRED_EVENT.$", 0x30, true, 0x4b3464bcf28e8be6 );                     
        SDK_FIXED_SIZE( deferred_event_t, 0x30 );                     
    };                                                           
};
#include "magic/deferred_event_t.end.hpp"
SDK_VERIFY( struct wheap::deferred_event_t, 0x30 );
