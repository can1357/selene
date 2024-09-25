#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

#include "magic/cmci_restart_event_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_CMCI_RESTART_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct cmci_restart_event_t                                        
    {                                                                  
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                             
        _m00 struct whea::event_log_entry_t whea_event_log_entry;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 uint32_t                       cmci_restore_attempts;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CmciRestoreAttempts
        _m02 uint32_t                       max_cmci_restore_limit;      //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .MaxCmciRestoreLimit
        _m03 uint32_t                       max_corrected_errors_found;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MaxCorrectedErrorsFound
        _m04 uint32_t                       max_corrected_error_limit;   //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .MaxCorrectedErrorLimit
                                                                       
        SDK_NONVOL_PROPERTIES( "_WHEAP_CMCI_RESTART_EVENT.$", 0x30, true, 0x77889c6ece6cd0ba );                           
        SDK_FIXED_SIZE( cmci_restart_event_t, 0x30 );                           
    };                                                                 
};
#include "magic/cmci_restart_event_t.end.hpp"
SDK_VERIFY( struct wheap::cmci_restart_event_t, 0x30 );
