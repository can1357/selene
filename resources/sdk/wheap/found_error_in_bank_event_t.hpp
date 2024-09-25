#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

#include "magic/found_error_in_bank_event_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_FOUND_ERROR_IN_BANK_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct found_error_in_bank_event_t                           
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 uint32_t                       ep_index;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .EpIndex
        _m02 uint32_t                       bank;                  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Bank
        _m03 uint64_t                       mci_status;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MciStatus
        _m04 uint32_t                       error_type;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ErrorType
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEAP_FOUND_ERROR_IN_BANK_EVENT.$", 0x34, true, 0x6aac2a30173e2cc9 );                     
        SDK_FIXED_SIZE( found_error_in_bank_event_t, 0x34 );                     
    };                                                           
};
#include "magic/found_error_in_bank_event_t.end.hpp"
SDK_VERIFY( struct wheap::found_error_in_bank_event_t, 0x34 );
