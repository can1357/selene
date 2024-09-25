#pragma once
#include <sdkgen/support_library.hpp>
#include "event_log_entry_t.hpp"

#include "magic/pshed_plugin_platform_support_event_t.start.hpp"
namespace whea
{
    // [struct _WHEA_PSHED_PLUGIN_PLATFORM_SUPPORT_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pshed_plugin_platform_support_event_t                 
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 sdk::array<wchar_t, 32>        plugin_name;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PluginName
        _m02 uint8_t                        supported;             //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .Supported
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEA_PSHED_PLUGIN_PLATFORM_SUPPORT_EVENT.$", 0x61, true, 0xb9ca3623ae54b975 );                     
        SDK_FIXED_SIZE( pshed_plugin_platform_support_event_t, 0x61 );                     
    };                                                           
};
#include "magic/pshed_plugin_platform_support_event_t.end.hpp"
SDK_VERIFY( struct whea::pshed_plugin_platform_support_event_t, 0x61 );
