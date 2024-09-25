#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_log_entry_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_EVENT_LOG_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_log_entry_t          
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint16_t event_id;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EventId
        _m01 uint15_t timestamp;        //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .Timestamp
        _m02 uint1_t  timestamp_scale;  //{ +0x0002@15 +0x0002@15 +0x0002@15 +0x0002@15 } | .TimestampScale
        _m03 uint16_t timestamp_value;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .TimestampValue
        _m04 uint32_t stack_trace;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .StackTrace
        _m05 void*    context;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_EVENT_LOG_ENTRY.$", 0x10, true, 0x71c51e6fde65b6df );                
        SDK_FIXED_SIZE( event_log_entry_t, 0x10 );                
    };                                
};
#include "magic/event_log_entry_t.end.hpp"
SDK_VERIFY( struct ndis::event_log_entry_t, 0x10 );
