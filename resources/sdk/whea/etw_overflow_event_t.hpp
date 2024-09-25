#pragma once
#include <sdkgen/support_library.hpp>
#include "event_log_entry_t.hpp"

#include "magic/etw_overflow_event_t.start.hpp"
namespace whea
{
    // [struct _WHEA_ETW_OVERFLOW_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct etw_overflow_event_t                                  
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 uint64_t                       record_id;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RecordId
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEA_ETW_OVERFLOW_EVENT.$", 0x28, true, 0xd6ef8ab96fce99c3 );                     
        SDK_FIXED_SIZE( etw_overflow_event_t, 0x28 );                     
    };                                                           
};
#include "magic/etw_overflow_event_t.end.hpp"
SDK_VERIFY( struct whea::etw_overflow_event_t, 0x28 );
