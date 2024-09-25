#pragma once
#include <sdkgen/support_library.hpp>
#include "event_log_entry_t.hpp"

#include "magic/pshed_plugin_load_event_t.start.hpp"
namespace whea
{
    // [struct _WHEA_PSHED_PLUGIN_LOAD_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pshed_plugin_load_event_t                             
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 sdk::array<wchar_t, 32>        plugin_name;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PluginName
        _m02 uint32_t                       major_version;         //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .MajorVersion
        _m03 uint32_t                       minor_version;         //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .MinorVersion
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEA_PSHED_PLUGIN_LOAD_EVENT.$", 0x68, true, 0x738d3108fde9773b );                     
        SDK_FIXED_SIZE( pshed_plugin_load_event_t, 0x68 );                     
    };                                                           
};
#include "magic/pshed_plugin_load_event_t.end.hpp"
SDK_VERIFY( struct whea::pshed_plugin_load_event_t, 0x68 );
