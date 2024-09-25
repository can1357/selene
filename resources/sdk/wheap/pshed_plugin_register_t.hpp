#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

#include "magic/pshed_plugin_register_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_PSHED_PLUGIN_REGISTER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pshed_plugin_register_t                               
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 uint32_t                       version;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Version
        _m02 uint32_t                       length;                //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Length
        _m03 uint32_t                       functional_area_mask;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FunctionalAreaMask
        _m04 int32_t                        status;                //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .Status
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEAP_PSHED_PLUGIN_REGISTER.$", 0x30, true, 0xa886354c6dca9bac );                     
        SDK_FIXED_SIZE( pshed_plugin_register_t, 0x30 );                     
    };                                                           
};
#include "magic/pshed_plugin_register_t.end.hpp"
SDK_VERIFY( struct wheap::pshed_plugin_register_t, 0x30 );
