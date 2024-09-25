#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

#include "magic/plugin_pfa_event_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_PLUGIN_PFA_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct plugin_pfa_event_t                                    
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 uint8_t                        no_further_pfa;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NoFurtherPfa
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEAP_PLUGIN_PFA_EVENT.$", 0x21, true, 0x9c571e468b0bece2 );                     
        SDK_FIXED_SIZE( plugin_pfa_event_t, 0x21 );                     
    };                                                           
};
#include "magic/plugin_pfa_event_t.end.hpp"
SDK_VERIFY( struct wheap::plugin_pfa_event_t, 0x21 );
