#pragma once
#include <sdkgen/support_library.hpp>
#include "event_log_entry_t.hpp"

#include "magic/pshed_plugin_heartbeat_t.start.hpp"
namespace whea
{
    // [struct _WHEA_PSHED_PLUGIN_HEARTBEAT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pshed_plugin_heartbeat_t                              
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEA_PSHED_PLUGIN_HEARTBEAT.$", 0x20, true, 0xad5f77266a96da12 );                     
        SDK_FIXED_SIZE( pshed_plugin_heartbeat_t, 0x20 );                     
    };                                                           
};
#include "magic/pshed_plugin_heartbeat_t.end.hpp"
SDK_VERIFY( struct whea::pshed_plugin_heartbeat_t, 0x20 );
