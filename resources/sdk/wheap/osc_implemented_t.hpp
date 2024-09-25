#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

#include "magic/osc_implemented_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_OSC_IMPLEMENTED]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct osc_implemented_t                                     
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 uint8_t                        osc_implemented;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .OscImplemented
        _m02 uint8_t                        debug_checked;         //{ +0x0021    +0x0021    +0x0021    +0x0021    } | .DebugChecked
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEAP_OSC_IMPLEMENTED.$", 0x22, true, 0xa125675701397a69 );                     
        SDK_FIXED_SIZE( osc_implemented_t, 0x22 );                     
    };                                                           
};
#include "magic/osc_implemented_t.end.hpp"
SDK_VERIFY( struct wheap::osc_implemented_t, 0x22 );
