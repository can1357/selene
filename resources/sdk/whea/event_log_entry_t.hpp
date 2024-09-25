#pragma once
#include <sdkgen/support_library.hpp>
#include "event_log_entry_header_t.hpp"

#include "magic/event_log_entry_t.start.hpp"
namespace whea
{
    // [struct _WHEA_EVENT_LOG_ENTRY]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct event_log_entry_t                              
    {                                                     
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                
        _m00 struct whea::event_log_entry_header_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
                                                          
        SDK_NONVOL_PROPERTIES( "_WHEA_EVENT_LOG_ENTRY.$", 0x20, true, 0xfeec7240a23f6ff );       
        SDK_FIXED_SIZE( event_log_entry_t, 0x20 );        
    };                                                    
};
#include "magic/event_log_entry_t.end.hpp"
SDK_VERIFY( struct whea::event_log_entry_t, 0x20 );
