#pragma once
#include <sdkgen/support_library.hpp>
#include "event_log_entry_t.hpp"

#include "magic/pshed_plugin_unload_event_t.start.hpp"
namespace whea
{
    // [struct _WHEA_PSHED_PLUGIN_UNLOAD_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pshed_plugin_unload_event_t                           
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 sdk::array<wchar_t, 32>        plugin_name;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PluginName
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEA_PSHED_PLUGIN_UNLOAD_EVENT.$", 0x60, true, 0xa0e5697b3901b5aa );                     
        SDK_FIXED_SIZE( pshed_plugin_unload_event_t, 0x60 );                     
    };                                                           
};
#include "magic/pshed_plugin_unload_event_t.end.hpp"
SDK_VERIFY( struct whea::pshed_plugin_unload_event_t, 0x60 );
