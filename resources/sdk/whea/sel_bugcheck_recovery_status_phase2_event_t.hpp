#pragma once
#include <sdkgen/support_library.hpp>
#include "event_log_entry_t.hpp"

#include "magic/sel_bugcheck_recovery_status_phase2_event_t.start.hpp"
namespace whea
{
    // [struct _WHEA_SEL_BUGCHECK_RECOVERY_STATUS_PHASE2_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct sel_bugcheck_recovery_status_phase2_event_t           
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 uint32_t                       boot_id;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BootId
        _m02 uint8_t                        success;               //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Success
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEA_SEL_BUGCHECK_RECOVERY_STATUS_PHASE2_EVENT.$", 0x25, true, 0x53b31460894dcb7b );                     
        SDK_FIXED_SIZE( sel_bugcheck_recovery_status_phase2_event_t, 0x25 );                     
    };                                                           
};
#include "magic/sel_bugcheck_recovery_status_phase2_event_t.end.hpp"
SDK_VERIFY( struct whea::sel_bugcheck_recovery_status_phase2_event_t, 0x25 );
