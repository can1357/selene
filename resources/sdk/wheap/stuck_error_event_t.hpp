#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

#include "magic/stuck_error_event_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_STUCK_ERROR_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct stuck_error_event_t                                   
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 uint32_t                       ep_index;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .EpIndex
        _m02 uint32_t                       bank;                  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Bank
        _m03 uint64_t                       mci_status;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MciStatus
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEAP_STUCK_ERROR_EVENT.$", 0x30, true, 0x90d655dd7b1dd167 );                     
        SDK_FIXED_SIZE( stuck_error_event_t, 0x30 );                     
    };                                                           
};
#include "magic/stuck_error_event_t.end.hpp"
SDK_VERIFY( struct wheap::stuck_error_event_t, 0x30 );
