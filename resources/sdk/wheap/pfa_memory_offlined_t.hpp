#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"
#include "pfa_offline_decision_type_t.hpp"

#include "magic/pfa_memory_offlined_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_PFA_MEMORY_OFFLINED]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pfa_memory_offlined_t                                          
    {                                                                     
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                
        _m00 struct whea::event_log_entry_t          whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 enum wheap::pfa_offline_decision_type_t decision_type;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DecisionType
        _m02 uint8_t                                 immediate_success;     //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .ImmediateSuccess
        _m03 uint32_t                                page;                  //{ +0x0025    +0x0025    +0x0025    +0x0025    } | .Page
                                                                          
        SDK_NONVOL_PROPERTIES( "_WHEAP_PFA_MEMORY_OFFLINED.$", 0x29, true, 0xeb75342cc7a35475 );                     
        SDK_FIXED_SIZE( pfa_memory_offlined_t, 0x29 );                     
    };                                                                    
};
#include "magic/pfa_memory_offlined_t.end.hpp"
SDK_VERIFY( struct wheap::pfa_memory_offlined_t, 0x29 );
